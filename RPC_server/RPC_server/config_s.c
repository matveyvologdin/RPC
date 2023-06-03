

/* this ALWAYS GENERATED file contains the RPC server stubs */


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

#if !defined(_M_IA64) && !defined(_M_AMD64) && !defined(_ARM_)


#if _MSC_VER >= 1200
#pragma warning(push)
#endif

#pragma warning( disable: 4211 )  /* redefine extern to static */
#pragma warning( disable: 4232 )  /* dllimport identity*/
#pragma warning( disable: 4024 )  /* array to pointer mapping*/
#pragma warning( disable: 4100 ) /* unreferenced arguments in x86 call */

#pragma optimize("", off ) 

#include <string.h>
#include "config_h.h"

#define TYPE_FORMAT_STRING_SIZE   35                                
#define PROC_FORMAT_STRING_SIZE   265                               
#define EXPR_FORMAT_STRING_SIZE   1                                 
#define TRANSMIT_AS_TABLE_SIZE    0            
#define WIRE_MARSHAL_TABLE_SIZE   0            

typedef struct _config_MIDL_TYPE_FORMAT_STRING
    {
    short          Pad;
    unsigned char  Format[ TYPE_FORMAT_STRING_SIZE ];
    } config_MIDL_TYPE_FORMAT_STRING;

typedef struct _config_MIDL_PROC_FORMAT_STRING
    {
    short          Pad;
    unsigned char  Format[ PROC_FORMAT_STRING_SIZE ];
    } config_MIDL_PROC_FORMAT_STRING;

typedef struct _config_MIDL_EXPR_FORMAT_STRING
    {
    long          Pad;
    unsigned char  Format[ EXPR_FORMAT_STRING_SIZE ];
    } config_MIDL_EXPR_FORMAT_STRING;


static const RPC_SYNTAX_IDENTIFIER  _RpcTransferSyntax = 
{{0x8A885D04,0x1CEB,0x11C9,{0x9F,0xE8,0x08,0x00,0x2B,0x10,0x48,0x60}},{2,0}};

extern const config_MIDL_TYPE_FORMAT_STRING config__MIDL_TypeFormatString;
extern const config_MIDL_PROC_FORMAT_STRING config__MIDL_ProcFormatString;
extern const config_MIDL_EXPR_FORMAT_STRING config__MIDL_ExprFormatString;

/* Standard interface: InterfaceRPC, ver. 1.0,
   GUID={0xda405304,0x8b4b,0x4291,{0x8c,0x76,0x70,0x45,0xa2,0x73,0x4d,0xb6}} */


extern const MIDL_SERVER_INFO InterfaceRPC_ServerInfo;

extern const RPC_DISPATCH_TABLE InterfaceRPC_v1_0_DispatchTable;

static const RPC_SERVER_INTERFACE InterfaceRPC___RpcServerInterface =
    {
    sizeof(RPC_SERVER_INTERFACE),
    {{0xda405304,0x8b4b,0x4291,{0x8c,0x76,0x70,0x45,0xa2,0x73,0x4d,0xb6}},{1,0}},
    {{0x8A885D04,0x1CEB,0x11C9,{0x9F,0xE8,0x08,0x00,0x2B,0x10,0x48,0x60}},{2,0}},
    (RPC_DISPATCH_TABLE*)&InterfaceRPC_v1_0_DispatchTable,
    0,
    0,
    0,
    &InterfaceRPC_ServerInfo,
    0x04000000
    };
RPC_IF_HANDLE InterfaceRPC_v1_0_s_ifspec = (RPC_IF_HANDLE)& InterfaceRPC___RpcServerInterface;

extern const MIDL_STUB_DESC InterfaceRPC_StubDesc;


#if !defined(__RPC_WIN32__)
#error  Invalid build platform for this stub.
#endif
#if !(TARGET_IS_NT60_OR_LATER)
#error You need Windows Vista or later to run this stub because it uses these features:
#error   compiled for Windows Vista.
#error However, your C/C++ compilation flags indicate you intend to run this app on earlier systems.
#error This app will fail with the RPC_X_WRONG_STUB_VERSION error.
#endif


static const config_MIDL_PROC_FORMAT_STRING config__MIDL_ProcFormatString =
    {
        0,
        {

	/* Procedure deleteFile */

			0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/*  2 */	NdrFcLong( 0x0 ),	/* 0 */
/*  6 */	NdrFcShort( 0x0 ),	/* 0 */
/*  8 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 10 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 12 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 14 */	NdrFcShort( 0x0 ),	/* 0 */
/* 16 */	NdrFcShort( 0x8 ),	/* 8 */
/* 18 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 20 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 22 */	NdrFcShort( 0x0 ),	/* 0 */
/* 24 */	NdrFcShort( 0x0 ),	/* 0 */
/* 26 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter path */

/* 28 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 30 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 32 */	NdrFcShort( 0x4 ),	/* Type Offset=4 */

	/* Return value */

/* 34 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 36 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 38 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure copyFile */

/* 40 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 42 */	NdrFcLong( 0x0 ),	/* 0 */
/* 46 */	NdrFcShort( 0x1 ),	/* 1 */
/* 48 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 50 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 52 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 54 */	NdrFcShort( 0x18 ),	/* 24 */
/* 56 */	NdrFcShort( 0x8 ),	/* 8 */
/* 58 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x6,		/* 6 */
/* 60 */	0x8,		/* 8 */
			0x7,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, */
/* 62 */	NdrFcShort( 0x1 ),	/* 1 */
/* 64 */	NdrFcShort( 0x1 ),	/* 1 */
/* 66 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter path */

/* 68 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 70 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 72 */	NdrFcShort( 0x4 ),	/* Type Offset=4 */

	/* Parameter data */

/* 74 */	NdrFcShort( 0x11b ),	/* Flags:  must size, must free, in, out, simple ref, */
/* 76 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 78 */	NdrFcShort( 0xa ),	/* Type Offset=10 */

	/* Parameter size */

/* 80 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 82 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 84 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter offset */

/* 86 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 88 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 90 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter mode */

/* 92 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 94 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 96 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 98 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 100 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 102 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure downloadFile */

/* 104 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 106 */	NdrFcLong( 0x0 ),	/* 0 */
/* 110 */	NdrFcShort( 0x2 ),	/* 2 */
/* 112 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 114 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 116 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 118 */	NdrFcShort( 0x8 ),	/* 8 */
/* 120 */	NdrFcShort( 0x24 ),	/* 36 */
/* 122 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x5,		/* 5 */
/* 124 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 126 */	NdrFcShort( 0x0 ),	/* 0 */
/* 128 */	NdrFcShort( 0x0 ),	/* 0 */
/* 130 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter path */

/* 132 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 134 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 136 */	NdrFcShort( 0x4 ),	/* Type Offset=4 */

	/* Parameter data */

/* 138 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 140 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 142 */	NdrFcShort( 0x16 ),	/* Type Offset=22 */

	/* Parameter size */

/* 144 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 146 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 148 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter offset */

/* 150 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 152 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 154 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 156 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 158 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 160 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure authentication */

/* 162 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 164 */	NdrFcLong( 0x0 ),	/* 0 */
/* 168 */	NdrFcShort( 0x3 ),	/* 3 */
/* 170 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 172 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 174 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 176 */	NdrFcShort( 0x0 ),	/* 0 */
/* 178 */	NdrFcShort( 0x8 ),	/* 8 */
/* 180 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 182 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 184 */	NdrFcShort( 0x0 ),	/* 0 */
/* 186 */	NdrFcShort( 0x0 ),	/* 0 */
/* 188 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter login */

/* 190 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 192 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 194 */	NdrFcShort( 0x4 ),	/* Type Offset=4 */

	/* Parameter password */

/* 196 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 198 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 200 */	NdrFcShort( 0x4 ),	/* Type Offset=4 */

	/* Return value */

/* 202 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 204 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 206 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure logout */

/* 208 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 210 */	NdrFcLong( 0x0 ),	/* 0 */
/* 214 */	NdrFcShort( 0x4 ),	/* 4 */
/* 216 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 218 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 220 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 222 */	NdrFcShort( 0x0 ),	/* 0 */
/* 224 */	NdrFcShort( 0x0 ),	/* 0 */
/* 226 */	0x40,		/* Oi2 Flags:  has ext, */
			0x0,		/* 0 */
/* 228 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 230 */	NdrFcShort( 0x0 ),	/* 0 */
/* 232 */	NdrFcShort( 0x0 ),	/* 0 */
/* 234 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Procedure Shutdown */

/* 236 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 238 */	NdrFcLong( 0x0 ),	/* 0 */
/* 242 */	NdrFcShort( 0x5 ),	/* 5 */
/* 244 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 246 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 248 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 250 */	NdrFcShort( 0x0 ),	/* 0 */
/* 252 */	NdrFcShort( 0x0 ),	/* 0 */
/* 254 */	0x40,		/* Oi2 Flags:  has ext, */
			0x0,		/* 0 */
/* 256 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 258 */	NdrFcShort( 0x0 ),	/* 0 */
/* 260 */	NdrFcShort( 0x0 ),	/* 0 */
/* 262 */	NdrFcShort( 0x0 ),	/* 0 */

			0x0
        }
    };

static const config_MIDL_TYPE_FORMAT_STRING config__MIDL_TypeFormatString =
    {
        0,
        {
			NdrFcShort( 0x0 ),	/* 0 */
/*  2 */	
			0x11, 0x8,	/* FC_RP [simple_pointer] */
/*  4 */	
			0x22,		/* FC_C_CSTRING */
			0x5c,		/* FC_PAD */
/*  6 */	
			0x11, 0x0,	/* FC_RP */
/*  8 */	NdrFcShort( 0x2 ),	/* Offset= 2 (10) */
/* 10 */	
			0x1b,		/* FC_CARRAY */
			0x0,		/* 0 */
/* 12 */	NdrFcShort( 0x1 ),	/* 1 */
/* 14 */	0x28,		/* Corr desc:  parameter, FC_LONG */
			0x0,		/*  */
/* 16 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 18 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 20 */	0x2,		/* FC_CHAR */
			0x5b,		/* FC_END */
/* 22 */	
			0x1e,		/* FC_LGFARRAY */
			0x0,		/* 0 */
/* 24 */	NdrFcLong( 0x10000 ),	/* 65536 */
/* 28 */	0x2,		/* FC_CHAR */
			0x5b,		/* FC_END */
/* 30 */	
			0x11, 0xc,	/* FC_RP [alloced_on_stack] [simple_pointer] */
/* 32 */	0x8,		/* FC_LONG */
			0x5c,		/* FC_PAD */

			0x0
        }
    };

static const unsigned short InterfaceRPC_FormatStringOffsetTable[] =
    {
    0,
    40,
    104,
    162,
    208,
    236
    };


static const MIDL_STUB_DESC InterfaceRPC_StubDesc = 
    {
    (void *)& InterfaceRPC___RpcServerInterface,
    MIDL_user_allocate,
    MIDL_user_free,
    0,
    0,
    0,
    0,
    0,
    config__MIDL_TypeFormatString.Format,
    1, /* -error bounds_check flag */
    0x60001, /* Ndr library version */
    0,
    0x801026e, /* MIDL Version 8.1.622 */
    0,
    0,
    0,  /* notify & notify_flag routine table */
    0x1, /* MIDL flag */
    0, /* cs routines */
    0,   /* proxy/server info */
    0
    };

static const RPC_DISPATCH_FUNCTION InterfaceRPC_table[] =
    {
    NdrServerCall2,
    NdrServerCall2,
    NdrServerCall2,
    NdrServerCall2,
    NdrServerCall2,
    NdrServerCall2,
    0
    };
static const RPC_DISPATCH_TABLE InterfaceRPC_v1_0_DispatchTable = 
    {
    6,
    (RPC_DISPATCH_FUNCTION*)InterfaceRPC_table
    };

static const SERVER_ROUTINE InterfaceRPC_ServerRoutineTable[] = 
    {
    (SERVER_ROUTINE)deleteFile,
    (SERVER_ROUTINE)copyFile,
    (SERVER_ROUTINE)downloadFile,
    (SERVER_ROUTINE)authentication,
    (SERVER_ROUTINE)logout,
    (SERVER_ROUTINE)Shutdown
    };

static const MIDL_SERVER_INFO InterfaceRPC_ServerInfo = 
    {
    &InterfaceRPC_StubDesc,
    InterfaceRPC_ServerRoutineTable,
    config__MIDL_ProcFormatString.Format,
    InterfaceRPC_FormatStringOffsetTable,
    0,
    0,
    0,
    0};
#pragma optimize("", on )
#if _MSC_VER >= 1200
#pragma warning(pop)
#endif


#endif /* !defined(_M_IA64) && !defined(_M_AMD64) && !defined(_ARM_) */

