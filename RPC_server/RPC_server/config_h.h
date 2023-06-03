

/* this ALWAYS GENERATED file contains the definitions for the interfaces */


 /* File created by MIDL compiler version 8.01.0622 */
/* at Tue Jan 19 06:14:07 2038
 */
/* Compiler settings for config.idl:
    Oicf, W1, Zp8, env=Win32 (32b run), target_arch=X86 8.01.0622 
    protocol : dce , ms_ext, c_ext, robust
    error checks: allocation ref bounds_check enum stub_data 
    VC __declspec() decoration level: 
         __declspec(uuid()), __declspec(selectany), __declspec(novtable)
         DECLSPEC_UUID(), MIDL_INTERFACE()
*/
/* @@MIDL_FILE_HEADING(  ) */



/* verify that the <rpcndr.h> version is high enough to compile this file*/
#ifndef __REQUIRED_RPCNDR_H_VERSION__
#define __REQUIRED_RPCNDR_H_VERSION__ 500
#endif

#include "rpc.h"
#include "rpcndr.h"

#ifndef __RPCNDR_H_VERSION__
#error this stub requires an updated version of <rpcndr.h>
#endif /* __RPCNDR_H_VERSION__ */


#ifndef __config_h_h__
#define __config_h_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

/* Forward Declarations */ 

#ifdef __cplusplus
extern "C"{
#endif 


#ifndef __InterfaceRPC_INTERFACE_DEFINED__
#define __InterfaceRPC_INTERFACE_DEFINED__

/* interface InterfaceRPC */
/* [version][uuid] */ 

#define	bufSize	( 65536 )

int deleteFile( 
    /* [in] */ handle_t IDL_handle,
    /* [string][in] */ const unsigned char *path);

int copyFile( 
    /* [in] */ handle_t IDL_handle,
    /* [string][in] */ const unsigned char *path,
    /* [size_is][out][in] */ unsigned char *data,
    /* [in] */ int size,
    /* [in] */ int offset,
    /* [in] */ int mode);

int downloadFile( 
    /* [in] */ handle_t IDL_handle,
    /* [string][in] */ const unsigned char *path,
    /* [out] */ unsigned char data[ 65536 ],
    /* [out] */ int *size,
    /* [in] */ int offset);

int authentication( 
    /* [in] */ handle_t IDL_handle,
    /* [string][in] */ const unsigned char *login,
    /* [string][in] */ const unsigned char *password);

void logout( 
    /* [in] */ handle_t IDL_handle);

void Shutdown( 
    /* [in] */ handle_t IDL_handle);



extern RPC_IF_HANDLE InterfaceRPC_v1_0_c_ifspec;
extern RPC_IF_HANDLE InterfaceRPC_v1_0_s_ifspec;
#endif /* __InterfaceRPC_INTERFACE_DEFINED__ */

/* Additional Prototypes for ALL interfaces */

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif


