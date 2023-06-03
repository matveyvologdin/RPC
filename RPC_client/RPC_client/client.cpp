#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <iostream>
#include <string>
#include <fstream>
#include "config_h.h"
using namespace std;
#pragma  comment(lib,"rpcrt4.lib")

#define BUF_LEN 128
char username[BUF_LEN];
char password[BUF_LEN];
RPC_BINDING_HANDLE binding;
bool is_logged = false;
int printError(const char* func, int code)
{
	printf("%s - Error code: %d\n", func, code);
	exit(code);
}	

void usage()
{
	printf(
		"choose operation and enter a number:\n"
		"1)Upload file on server\n"
		"2)Download file from server\n"
		"3)Delete file on server\n"
		"4)Logout\n"
		"5)Shutdown\n");
}

void login()
{
	
	printf("Enter your username:\n");
	if (!scanf("%100s", username))
		exit(-1);
	username[strlen(username)] = '\0';

	printf("\nEnter your password:\n");
	if (!scanf("%100s", password))
		exit(-1);
	password[strlen(password)] = '\0';

	if (authentication(binding, (const unsigned char*)username, (const unsigned char*)password))
	{
		puts("Wrong login or password");
		exit(0);
	}
	printf("You successfully authenticated\n\n");
	is_logged = 1;
	usage();
}

void do_upload(handle_t binding)
{
	printf("Enter path of SRC file(UNC format): ");
	char uploadPath[101];
	char n = getchar();
	fgets(uploadPath, 100, stdin);
	printf("Enter path of DST file(UNC format): ");
	char savePath[101];
	fgets(savePath, 100, stdin);
	uploadPath[strlen(uploadPath) - 1] = '\0';
	savePath[strlen(savePath) - 1] = '\0';
	printf("\n");

	FILE* inFile = NULL;
	inFile = fopen(uploadPath, "rb");
	if (inFile == NULL)
		return;
	int read = 0,tmp = 0, offset = 0;
	int ret = 0, mode = 0;
	char buf[65536];
	memset(buf, 0, sizeof(buf));
	do
	{
		tmp = fread(buf, 1, 65536, inFile);
		ret = copyFile(binding, (const unsigned char*)savePath, (unsigned char*)buf, tmp, offset, mode);
		offset += tmp;
		mode = 1;
		Sleep(5);
	} while (!feof(inFile) && ret == 0);
	fclose(inFile);
	
	if (!ret)
		printf("File %s fully uploaded on servers\n", uploadPath);
	else if (ret == EACCES)
		printf("Error: Access denied\n");
	else if (ret == ENOENT)
		printf("Error: Incorrect path\n");
}

void do_download(handle_t binding)
{
	printf("Enter path of DST file(UNC format): ");
	char n = getchar();
	char savePath[101];
	fgets(savePath, 100, stdin);
	printf("Enter path of SRC file(UNC format): ");
	char downloadPath[101];
	fgets(downloadPath, 100, stdin);
	downloadPath[strlen(downloadPath) - 1] = '\0';
	savePath[strlen(savePath) - 1] = '\0';

	unsigned char inputBuffer[65536];
	memset(inputBuffer, 0, sizeof(inputBuffer));
	int size = 0;
	int ret, offset = 0;
	FILE* inFile = NULL;
	inFile = fopen(savePath, "wb");
	if (inFile == NULL)
		return;
	do 
	{
		ret = downloadFile(binding, (const unsigned char*)downloadPath, inputBuffer, &size, offset);
		int wrote = 0, tmp = 0;
		fseek(inFile, offset, SEEK_SET);
		offset += size;
		while (wrote < size)
		{
			tmp = fwrite(inputBuffer + wrote, 1, size - wrote, inFile);
			wrote += tmp;
		}
	} while (size > 0 && !ret);
	
	fclose(inFile);

	if (!ret)
		printf("File %s fully downloaded from server\n", downloadPath);
	else if (ret == EACCES)
	{
		printf("Error: Access denied\n");
		remove(savePath);
	}
	else if (ret == ENOENT)
	{
		printf("Error: Incorrect path\n");
		remove(savePath);
	}
		
}

void do_delete(handle_t binding)
{
	printf("Enter path of file to delete(UNC format): ");
	char n = getchar();
	char deletePath[101];
	fgets(deletePath, 100, stdin);
	deletePath[strlen(deletePath) - 1] = '\0';
	int ret = deleteFile(binding, (const unsigned char*)deletePath);
	if (!ret)
		printf("File %s fully deleted from server\n", deletePath);
	else if (ret == EACCES)
		printf("Error: Access denied\n");
	else if (ret == ENOENT)
		printf("Error: Incorrect path\n");
}

void do_logout(handle_t binding)
{
	is_logged = false;
	logout(binding);
}

void do_shutdown(handle_t binding)
{
	Shutdown(binding);
}

int main()
{
	RPC_STATUS status;
	RPC_CSTR szStringBinding = NULL;

	/*char addr[20];
	printf("Enter IP-address: ");
	scanf("%s", addr);
	char port[5] = "0";
	printf("Enter Port: ");
	scanf("%s", port);*/

	status = RpcStringBindingComposeA(
		NULL, // UUID для привязки
		(RPC_CSTR)("ncacn_ip_tcp"),//используем TCP/IP протокол
		(RPC_CSTR)("127.0.0.1"),//TCP/IP адрес
		(RPC_CSTR)("9000"),//TCP/IP порт
		NULL,//параметры сети
		&szStringBinding);//указатель на строковое представление дескриптора привязки

	if (status)
		printError("RpcStringBindingComposeA", status);

	

	status = RpcBindingFromStringBindingA(
		szStringBinding,
		&binding);

	if (status)
		printError("RpcBindingFromStringBindingA", status);

	RpcTryExcept
	{
		int input = -1;
		while (input != 5)
		{
			if (is_logged)
				usage();
			else
				login();
			scanf("%d", &input);
			switch (input)
			{
			case 1:
				if (is_logged)
					do_upload(binding);
				break;
			case 2:
				if (is_logged)
					do_download(binding);
				break;
			case 3:
				if (is_logged)
					do_delete(binding);
				break;
			case 4:
				if (is_logged)
					do_logout(binding);
				break;
			case 5:
				do_shutdown(binding);
				break;
			}
		}
		
	}
	RpcExcept(1)
	{
		printf("Runtime reported exception %ld\n", RpcExceptionCode());
	}
	RpcEndExcept

	status = RpcStringFreeA(&szStringBinding);
	if (status)
		printError("RpcStringFreeA", status);

	status = RpcBindingFree(&binding);
	if (status)
		printError("RpcBindingFree", status);
	printf("Session successfully ended\n");
	return 0;
}

void __RPC_FAR* __RPC_API midl_user_allocate(size_t len)
{
	return(malloc(len));
}

void __RPC_API midl_user_free(void __RPC_FAR* ptr)
{
	free(ptr);
}