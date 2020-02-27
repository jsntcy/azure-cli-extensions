

/* this ALWAYS GENERATED file contains the IIDs and CLSIDs */

/* link this file in with the server and any clients */


 /* File created by MIDL compiler version 8.01.0622 */
/* at Tue Jan 19 03:14:07 2038
 */
/* Compiler settings for .\EcsTtSvc.idl:
    Oicf, W1, Zp8, env=Win32 (32b run), target_arch=X86 8.01.0622 
    protocol : dce , ms_ext, c_ext, robust
    error checks: allocation ref bounds_check enum stub_data 
    VC __declspec() decoration level: 
         __declspec(uuid()), __declspec(selectany), __declspec(novtable)
         DECLSPEC_UUID(), MIDL_INTERFACE()
*/
/* @@MIDL_FILE_HEADING(  ) */

#pragma warning( disable: 4049 )  /* more than 64k source lines */


#ifdef __cplusplus
extern "C"{
#endif 


#include <rpc.h>
#include <rpcndr.h>

#ifdef _MIDL_USE_GUIDDEF_

#ifndef INITGUID
#define INITGUID
#include <guiddef.h>
#undef INITGUID
#else
#include <guiddef.h>
#endif

#define MIDL_DEFINE_GUID(type,name,l,w1,w2,b1,b2,b3,b4,b5,b6,b7,b8) \
        DEFINE_GUID(name,l,w1,w2,b1,b2,b3,b4,b5,b6,b7,b8)

#else // !_MIDL_USE_GUIDDEF_

#ifndef __IID_DEFINED__
#define __IID_DEFINED__

typedef struct _IID
{
    unsigned long x;
    unsigned short s1;
    unsigned short s2;
    unsigned char  c[8];
} IID;

#endif // __IID_DEFINED__

#ifndef CLSID_DEFINED
#define CLSID_DEFINED
typedef IID CLSID;
#endif // CLSID_DEFINED

#define MIDL_DEFINE_GUID(type,name,l,w1,w2,b1,b2,b3,b4,b5,b6,b7,b8) \
        EXTERN_C __declspec(selectany) const type name = {l,w1,w2,{b1,b2,b3,b4,b5,b6,b7,b8}}

#endif // !_MIDL_USE_GUIDDEF_

MIDL_DEFINE_GUID(IID, IID_IEcsTokenTranslator,0x0D11798E,0x1A15,0x51C8,0x90,0x55,0x08,0xD3,0xB3,0x41,0xCC,0xAF);


MIDL_DEFINE_GUID(IID, IID_IEcsTokenParser,0xB447C678,0x0BFA,0x4E11,0x9B,0x9D,0x70,0xFC,0x83,0x28,0x7E,0x54);


MIDL_DEFINE_GUID(IID, IID_ISyncStateUpdatedCallback,0x417FEBAC,0xE560,0x536B,0xA5,0xF5,0xCF,0xCB,0x60,0x8F,0xBE,0x6A);


MIDL_DEFINE_GUID(IID, IID_IEcsADHelper,0xCFBBEC3D,0x9DB8,0x5FBA,0xCA,0x7C,0x51,0x01,0x5A,0xC9,0x54,0x6F);


MIDL_DEFINE_GUID(IID, IID_ISyncVmGenerationId,0xD8A42B2C,0x4976,0x5E1F,0x6C,0x58,0x2B,0x8B,0x4B,0x85,0xDF,0xC3);


MIDL_DEFINE_GUID(IID, IID_INetworkLimitConfigEntry,0xD8875569,0x2376,0x42B6,0xB2,0xBA,0x37,0x22,0xF8,0x8F,0x77,0xF7);


MIDL_DEFINE_GUID(IID, IID_INetworkLimitConfigEntryEnumerator,0xB72C2D6B,0x1A05,0x4B96,0x90,0x12,0x91,0xB0,0x6C,0x79,0x3B,0xCC);


MIDL_DEFINE_GUID(IID, IID_IFileAccessPatternStatsEnumerator,0xCAA2700B,0x5AC3,0x4295,0xA0,0xEE,0xF8,0x0E,0xA1,0xF0,0x5A,0x60);


MIDL_DEFINE_GUID(IID, IID_IEcsManagement,0xF29EAB44,0x2C63,0x4ACE,0x8C,0x05,0x67,0xC2,0x20,0x3C,0xBE,0xD2);


MIDL_DEFINE_GUID(IID, LIBID_EcsTtSvcLib,0xAAAA089F,0xE169,0x4DAF,0x9D,0x48,0xF5,0xB7,0x44,0xBF,0xB4,0x25);


MIDL_DEFINE_GUID(CLSID, CLSID_EcsTokenTranslator,0x1B018338,0xB81C,0x54B1,0x64,0x23,0x7D,0x78,0x30,0x80,0x25,0x69);


MIDL_DEFINE_GUID(CLSID, CLSID_EcsTokenParser,0xE4139964,0x3C29,0x533B,0xA8,0xF5,0x4E,0xDA,0x83,0x83,0x3E,0x93);


MIDL_DEFINE_GUID(CLSID, CLSID_EcsADHelper,0x6BBA9814,0x8110,0x5C85,0x9B,0xB2,0xE6,0x68,0x82,0x06,0x5D,0xD0);


MIDL_DEFINE_GUID(CLSID, CLSID_SyncVmGenerationId,0x16833019,0x1069,0x54CD,0x3D,0x9B,0x7A,0x8C,0x9E,0x8E,0x72,0xDD);


MIDL_DEFINE_GUID(CLSID, CLSID_EcsManagement,0x3EC1199D,0x20EB,0x40C0,0x82,0x94,0xEB,0x68,0x4E,0x89,0xAB,0x2B);

#undef MIDL_DEFINE_GUID

#ifdef __cplusplus
}
#endif



