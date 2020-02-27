

/* this ALWAYS GENERATED file contains the definitions for the interfaces */


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


/* verify that the <rpcndr.h> version is high enough to compile this file*/
#ifndef __REQUIRED_RPCNDR_H_VERSION__
#define __REQUIRED_RPCNDR_H_VERSION__ 475
#endif

#include "rpc.h"
#include "rpcndr.h"

#ifndef __RPCNDR_H_VERSION__
#error this stub requires an updated version of <rpcndr.h>
#endif /* __RPCNDR_H_VERSION__ */

#ifndef COM_NO_WINDOWS_H
#include "windows.h"
#include "ole2.h"
#endif /*COM_NO_WINDOWS_H*/

#ifndef __EcsTtSvc_h__
#define __EcsTtSvc_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

/* Forward Declarations */ 

#ifndef __IEcsTokenTranslator_FWD_DEFINED__
#define __IEcsTokenTranslator_FWD_DEFINED__
typedef interface IEcsTokenTranslator IEcsTokenTranslator;

#endif 	/* __IEcsTokenTranslator_FWD_DEFINED__ */


#ifndef __IEcsTokenParser_FWD_DEFINED__
#define __IEcsTokenParser_FWD_DEFINED__
typedef interface IEcsTokenParser IEcsTokenParser;

#endif 	/* __IEcsTokenParser_FWD_DEFINED__ */


#ifndef __ISyncStateUpdatedCallback_FWD_DEFINED__
#define __ISyncStateUpdatedCallback_FWD_DEFINED__
typedef interface ISyncStateUpdatedCallback ISyncStateUpdatedCallback;

#endif 	/* __ISyncStateUpdatedCallback_FWD_DEFINED__ */


#ifndef __IEcsADHelper_FWD_DEFINED__
#define __IEcsADHelper_FWD_DEFINED__
typedef interface IEcsADHelper IEcsADHelper;

#endif 	/* __IEcsADHelper_FWD_DEFINED__ */


#ifndef __ISyncVmGenerationId_FWD_DEFINED__
#define __ISyncVmGenerationId_FWD_DEFINED__
typedef interface ISyncVmGenerationId ISyncVmGenerationId;

#endif 	/* __ISyncVmGenerationId_FWD_DEFINED__ */


#ifndef __INetworkLimitConfigEntry_FWD_DEFINED__
#define __INetworkLimitConfigEntry_FWD_DEFINED__
typedef interface INetworkLimitConfigEntry INetworkLimitConfigEntry;

#endif 	/* __INetworkLimitConfigEntry_FWD_DEFINED__ */


#ifndef __INetworkLimitConfigEntryEnumerator_FWD_DEFINED__
#define __INetworkLimitConfigEntryEnumerator_FWD_DEFINED__
typedef interface INetworkLimitConfigEntryEnumerator INetworkLimitConfigEntryEnumerator;

#endif 	/* __INetworkLimitConfigEntryEnumerator_FWD_DEFINED__ */


#ifndef __IFileAccessPatternStatsEnumerator_FWD_DEFINED__
#define __IFileAccessPatternStatsEnumerator_FWD_DEFINED__
typedef interface IFileAccessPatternStatsEnumerator IFileAccessPatternStatsEnumerator;

#endif 	/* __IFileAccessPatternStatsEnumerator_FWD_DEFINED__ */


#ifndef __IEcsManagement_FWD_DEFINED__
#define __IEcsManagement_FWD_DEFINED__
typedef interface IEcsManagement IEcsManagement;

#endif 	/* __IEcsManagement_FWD_DEFINED__ */


#ifndef __EcsTokenTranslator_FWD_DEFINED__
#define __EcsTokenTranslator_FWD_DEFINED__

#ifdef __cplusplus
typedef class EcsTokenTranslator EcsTokenTranslator;
#else
typedef struct EcsTokenTranslator EcsTokenTranslator;
#endif /* __cplusplus */

#endif 	/* __EcsTokenTranslator_FWD_DEFINED__ */


#ifndef __EcsTokenParser_FWD_DEFINED__
#define __EcsTokenParser_FWD_DEFINED__

#ifdef __cplusplus
typedef class EcsTokenParser EcsTokenParser;
#else
typedef struct EcsTokenParser EcsTokenParser;
#endif /* __cplusplus */

#endif 	/* __EcsTokenParser_FWD_DEFINED__ */


#ifndef __EcsADHelper_FWD_DEFINED__
#define __EcsADHelper_FWD_DEFINED__

#ifdef __cplusplus
typedef class EcsADHelper EcsADHelper;
#else
typedef struct EcsADHelper EcsADHelper;
#endif /* __cplusplus */

#endif 	/* __EcsADHelper_FWD_DEFINED__ */


#ifndef __SyncVmGenerationId_FWD_DEFINED__
#define __SyncVmGenerationId_FWD_DEFINED__

#ifdef __cplusplus
typedef class SyncVmGenerationId SyncVmGenerationId;
#else
typedef struct SyncVmGenerationId SyncVmGenerationId;
#endif /* __cplusplus */

#endif 	/* __SyncVmGenerationId_FWD_DEFINED__ */


#ifndef __EcsManagement_FWD_DEFINED__
#define __EcsManagement_FWD_DEFINED__

#ifdef __cplusplus
typedef class EcsManagement EcsManagement;
#else
typedef struct EcsManagement EcsManagement;
#endif /* __cplusplus */

#endif 	/* __EcsManagement_FWD_DEFINED__ */


/* header files for imported files */
#include "oaidl.h"
#include "ocidl.h"

#ifdef __cplusplus
extern "C"{
#endif 


/* interface __MIDL_itf_EcsTtSvc_0000_0000 */
/* [local] */ 

typedef struct _SYNC_VM_GENCOUNTER
    {
    ULONGLONG GenerationCount;
    ULONGLONG GenerationCountHigh;
    } 	SYNC_VM_GENCOUNTER;

typedef 
enum _IPAddressType
    {
        IPAddress_V4	= 0,
        IPAddress_V6	= 1,
        IPAddress_None	= 2
    } 	IPAddressType;



extern RPC_IF_HANDLE __MIDL_itf_EcsTtSvc_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_EcsTtSvc_0000_0000_v0_0_s_ifspec;

#ifndef __IEcsTokenTranslator_INTERFACE_DEFINED__
#define __IEcsTokenTranslator_INTERFACE_DEFINED__

/* interface IEcsTokenTranslator */
/* [unique][oleautomation][uuid][object] */ 


EXTERN_C const IID IID_IEcsTokenTranslator;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("0D11798E-1A15-51C8-9055-08D3B341CCAF")
    IEcsTokenTranslator : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE Refresh( 
            /* [in] */ BSTR stsUri) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE TranslateToken( 
            /* [in] */ BSTR stsToken,
            /* [retval][out] */ ULONGLONG *pAccessToken) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IEcsTokenTranslatorVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IEcsTokenTranslator * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IEcsTokenTranslator * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IEcsTokenTranslator * This);
        
        HRESULT ( STDMETHODCALLTYPE *Refresh )( 
            IEcsTokenTranslator * This,
            /* [in] */ BSTR stsUri);
        
        HRESULT ( STDMETHODCALLTYPE *TranslateToken )( 
            IEcsTokenTranslator * This,
            /* [in] */ BSTR stsToken,
            /* [retval][out] */ ULONGLONG *pAccessToken);
        
        END_INTERFACE
    } IEcsTokenTranslatorVtbl;

    interface IEcsTokenTranslator
    {
        CONST_VTBL struct IEcsTokenTranslatorVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IEcsTokenTranslator_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IEcsTokenTranslator_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IEcsTokenTranslator_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IEcsTokenTranslator_Refresh(This,stsUri)	\
    ( (This)->lpVtbl -> Refresh(This,stsUri) ) 

#define IEcsTokenTranslator_TranslateToken(This,stsToken,pAccessToken)	\
    ( (This)->lpVtbl -> TranslateToken(This,stsToken,pAccessToken) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IEcsTokenTranslator_INTERFACE_DEFINED__ */


#ifndef __IEcsTokenParser_INTERFACE_DEFINED__
#define __IEcsTokenParser_INTERFACE_DEFINED__

/* interface IEcsTokenParser */
/* [unique][oleautomation][uuid][object] */ 


EXTERN_C const IID IID_IEcsTokenParser;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("B447C678-0BFA-4E11-9B9D-70FC83287E54")
    IEcsTokenParser : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE Refresh( 
            /* [in] */ BSTR stsUri) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE ParseToken( 
            /* [in] */ BSTR stsToken,
            /* [retval][out] */ BSTR *pUpn) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IEcsTokenParserVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IEcsTokenParser * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IEcsTokenParser * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IEcsTokenParser * This);
        
        HRESULT ( STDMETHODCALLTYPE *Refresh )( 
            IEcsTokenParser * This,
            /* [in] */ BSTR stsUri);
        
        HRESULT ( STDMETHODCALLTYPE *ParseToken )( 
            IEcsTokenParser * This,
            /* [in] */ BSTR stsToken,
            /* [retval][out] */ BSTR *pUpn);
        
        END_INTERFACE
    } IEcsTokenParserVtbl;

    interface IEcsTokenParser
    {
        CONST_VTBL struct IEcsTokenParserVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IEcsTokenParser_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IEcsTokenParser_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IEcsTokenParser_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IEcsTokenParser_Refresh(This,stsUri)	\
    ( (This)->lpVtbl -> Refresh(This,stsUri) ) 

#define IEcsTokenParser_ParseToken(This,stsToken,pUpn)	\
    ( (This)->lpVtbl -> ParseToken(This,stsToken,pUpn) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IEcsTokenParser_INTERFACE_DEFINED__ */


#ifndef __ISyncStateUpdatedCallback_INTERFACE_DEFINED__
#define __ISyncStateUpdatedCallback_INTERFACE_DEFINED__

/* interface ISyncStateUpdatedCallback */
/* [unique][helpstring][oleautomation][uuid][object] */ 


EXTERN_C const IID IID_ISyncStateUpdatedCallback;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("417FEBAC-E560-536B-A5F5-CFCB608FBE6A")
    ISyncStateUpdatedCallback : public IUnknown
    {
    public:
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE SyncStateUpdated( void) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct ISyncStateUpdatedCallbackVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ISyncStateUpdatedCallback * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ISyncStateUpdatedCallback * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ISyncStateUpdatedCallback * This);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *SyncStateUpdated )( 
            ISyncStateUpdatedCallback * This);
        
        END_INTERFACE
    } ISyncStateUpdatedCallbackVtbl;

    interface ISyncStateUpdatedCallback
    {
        CONST_VTBL struct ISyncStateUpdatedCallbackVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ISyncStateUpdatedCallback_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ISyncStateUpdatedCallback_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ISyncStateUpdatedCallback_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ISyncStateUpdatedCallback_SyncStateUpdated(This)	\
    ( (This)->lpVtbl -> SyncStateUpdated(This) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ISyncStateUpdatedCallback_INTERFACE_DEFINED__ */


#ifndef __IEcsADHelper_INTERFACE_DEFINED__
#define __IEcsADHelper_INTERFACE_DEFINED__

/* interface IEcsADHelper */
/* [unique][helpstring][oleautomation][uuid][object] */ 


EXTERN_C const IID IID_IEcsADHelper;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("CFBBEC3D-9DB8-5FBA-CA7C-51015AC9546F")
    IEcsADHelper : public IUnknown
    {
    public:
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetADUserPropertyValue( 
            /* [in] */ BSTR userName,
            /* [in] */ BSTR domainName,
            /* [in] */ BSTR propertyName,
            /* [retval][out] */ SAFEARRAY * *propertyValues) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IEcsADHelperVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IEcsADHelper * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IEcsADHelper * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IEcsADHelper * This);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetADUserPropertyValue )( 
            IEcsADHelper * This,
            /* [in] */ BSTR userName,
            /* [in] */ BSTR domainName,
            /* [in] */ BSTR propertyName,
            /* [retval][out] */ SAFEARRAY * *propertyValues);
        
        END_INTERFACE
    } IEcsADHelperVtbl;

    interface IEcsADHelper
    {
        CONST_VTBL struct IEcsADHelperVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IEcsADHelper_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IEcsADHelper_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IEcsADHelper_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IEcsADHelper_GetADUserPropertyValue(This,userName,domainName,propertyName,propertyValues)	\
    ( (This)->lpVtbl -> GetADUserPropertyValue(This,userName,domainName,propertyName,propertyValues) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IEcsADHelper_INTERFACE_DEFINED__ */


#ifndef __ISyncVmGenerationId_INTERFACE_DEFINED__
#define __ISyncVmGenerationId_INTERFACE_DEFINED__

/* interface ISyncVmGenerationId */
/* [unique][helpstring][oleautomation][uuid][object] */ 


EXTERN_C const IID IID_ISyncVmGenerationId;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("D8A42B2C-4976-5E1F-6C58-2B8B4B85DFC3")
    ISyncVmGenerationId : public IUnknown
    {
    public:
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetCurrentVmGenerationId( 
            /* [retval][out] */ SYNC_VM_GENCOUNTER *pVMGenId) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct ISyncVmGenerationIdVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ISyncVmGenerationId * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ISyncVmGenerationId * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ISyncVmGenerationId * This);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetCurrentVmGenerationId )( 
            ISyncVmGenerationId * This,
            /* [retval][out] */ SYNC_VM_GENCOUNTER *pVMGenId);
        
        END_INTERFACE
    } ISyncVmGenerationIdVtbl;

    interface ISyncVmGenerationId
    {
        CONST_VTBL struct ISyncVmGenerationIdVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ISyncVmGenerationId_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ISyncVmGenerationId_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ISyncVmGenerationId_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ISyncVmGenerationId_GetCurrentVmGenerationId(This,pVMGenId)	\
    ( (This)->lpVtbl -> GetCurrentVmGenerationId(This,pVMGenId) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ISyncVmGenerationId_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_EcsTtSvc_0000_0005 */
/* [local] */ 

typedef 
enum _RECALL_RESULT
    {
        RECALL_SUCCEEDED	= 1,
        RECALL_FAILED	= 2,
        RECALL_SKIPPED	= 3
    } 	RECALL_RESULT;

typedef struct _RECALL_OUTPUT
    {
    RECALL_RESULT result;
    ULONGLONG ullClaimedSpaceInBytes;
    } 	RECALL_OUTPUT;

typedef struct _GHOSTING_STATS
    {
    DWORD dwTieredCount;
    DWORD dwAlreadyTieredCount;
    DWORD dwSkippedForSizeCount;
    DWORD dwSkippedForAgeCount;
    DWORD dwSkippedForUnsupportedReparsePointCount;
    DWORD dwSkippedForPersistentErrorsCount;
    DWORD dwFailedToTierCount;
    ULONGLONG ullReclaimedSpaceBytes;
    DWORD dwSkippedForStableVersionFailure;
    DWORD dwSkippedForGhostingExclusionCount;
    } 	GHOSTING_STATS;

typedef struct _SCRUBBING_STATS
    {
    DWORD dwFileDataAccessFailures;
    DWORD dwFilesAutoRecovered;
    DWORD dwFilesRecovered;
    DWORD dwFilesFailedToRecover;
    DWORD dwErrorFilesCreated;
    DWORD dwFilesNeedingPromotion;
    DWORD dwFilesPromoted;
    } 	SCRUBBING_STATS;

typedef 
enum _SCRUBBING_MODE
    {
        REPORT	= 0,
        REPAIR	= ( REPORT + 1 ) ,
        OVERWRITE	= ( REPAIR + 1 ) 
    } 	SCRUBBING_MODE;

typedef struct _GC_STATS
    {
    DWORD dwStableVersionsDeleted;
    DWORD dwStableVersionsAlreadyDeleted;
    DWORD dwStableVersionsFailedToDelete;
    DWORD dwStableVersionsFailedToDeleteExceededMaxCnt;
    } 	GC_STATS;

typedef 
enum _GC_MODE
    {
        SHALLOW	= 0,
        FULL	= ( SHALLOW + 1 ) 
    } 	GC_MODE;

typedef struct _PROXY_SETTING
    {
    BSTR bstrAddress;
    DWORD dwPort;
    BSTR bstrUserName;
    BSTR bstrPassword;
    } 	PROXY_SETTING;

typedef struct _AUTOUPDATE_POLICY
    {
    BSTR bstrPolicyMode;
    BSTR bstrScheduledWeekDay;
    UINT uiScheduledHour;
    } 	AUTOUPDATE_POLICY;

typedef struct _ORPHANED_TIERED_FILES_TELEMETRY_REPORT
    {
    BSTR bstrCmdletName;
    BSTR bstrPath;
    ULONGLONG ullProcessedCount;
    ULONGLONG ullOrphanedCount;
    ULONGLONG ullFailedCount;
    ULONGLONG ullExecutionTime;
    INT iErrorCode;
    BSTR bstrDescription;
    } 	ORPHANED_TIERED_FILES_TELEMETRY_REPORT;

typedef struct _RECALL_FILES_TELEMETRY_REPORT
    {
    BSTR bstrCmdletName;
    BSTR bstrPath;
    UINT uiNumberOfFilesProcessed;
    UINT uiNumberOfFilesRecalled;
    UINT uiNumberOfFilesFailedToRecall;
    UINT uiNumberofFilesSkipped;
    ULONG ulSpaceClaimedInBytes;
    INT iErrorCode;
    BSTR bstrDescription;
    } 	RECALL_FILES_TELEMETRY_REPORT;



extern RPC_IF_HANDLE __MIDL_itf_EcsTtSvc_0000_0005_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_EcsTtSvc_0000_0005_v0_0_s_ifspec;

#ifndef __INetworkLimitConfigEntry_INTERFACE_DEFINED__
#define __INetworkLimitConfigEntry_INTERFACE_DEFINED__

/* interface INetworkLimitConfigEntry */
/* [unique][helpstring][oleautomation][uuid][object] */ 


EXTERN_C const IID IID_INetworkLimitConfigEntry;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("D8875569-2376-42B6-B2BA-3722F88F77F7")
    INetworkLimitConfigEntry : public IUnknown
    {
    public:
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Id( 
            /* [retval][out] */ BSTR *bstrId) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Day( 
            /* [retval][out] */ DWORD *dwDay) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_StartHour( 
            /* [retval][out] */ DWORD *pdwStartHour) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_StartMinute( 
            /* [retval][out] */ DWORD *pdwStartMinute) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_EndHour( 
            /* [retval][out] */ DWORD *pdwEndHour) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_EndMinute( 
            /* [retval][out] */ DWORD *pdwEndMinute) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_LimitKbps( 
            /* [retval][out] */ DWORD *pdwLimitKbps) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct INetworkLimitConfigEntryVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            INetworkLimitConfigEntry * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            INetworkLimitConfigEntry * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            INetworkLimitConfigEntry * This);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Id )( 
            INetworkLimitConfigEntry * This,
            /* [retval][out] */ BSTR *bstrId);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Day )( 
            INetworkLimitConfigEntry * This,
            /* [retval][out] */ DWORD *dwDay);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_StartHour )( 
            INetworkLimitConfigEntry * This,
            /* [retval][out] */ DWORD *pdwStartHour);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_StartMinute )( 
            INetworkLimitConfigEntry * This,
            /* [retval][out] */ DWORD *pdwStartMinute);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_EndHour )( 
            INetworkLimitConfigEntry * This,
            /* [retval][out] */ DWORD *pdwEndHour);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_EndMinute )( 
            INetworkLimitConfigEntry * This,
            /* [retval][out] */ DWORD *pdwEndMinute);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_LimitKbps )( 
            INetworkLimitConfigEntry * This,
            /* [retval][out] */ DWORD *pdwLimitKbps);
        
        END_INTERFACE
    } INetworkLimitConfigEntryVtbl;

    interface INetworkLimitConfigEntry
    {
        CONST_VTBL struct INetworkLimitConfigEntryVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define INetworkLimitConfigEntry_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define INetworkLimitConfigEntry_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define INetworkLimitConfigEntry_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define INetworkLimitConfigEntry_get_Id(This,bstrId)	\
    ( (This)->lpVtbl -> get_Id(This,bstrId) ) 

#define INetworkLimitConfigEntry_get_Day(This,dwDay)	\
    ( (This)->lpVtbl -> get_Day(This,dwDay) ) 

#define INetworkLimitConfigEntry_get_StartHour(This,pdwStartHour)	\
    ( (This)->lpVtbl -> get_StartHour(This,pdwStartHour) ) 

#define INetworkLimitConfigEntry_get_StartMinute(This,pdwStartMinute)	\
    ( (This)->lpVtbl -> get_StartMinute(This,pdwStartMinute) ) 

#define INetworkLimitConfigEntry_get_EndHour(This,pdwEndHour)	\
    ( (This)->lpVtbl -> get_EndHour(This,pdwEndHour) ) 

#define INetworkLimitConfigEntry_get_EndMinute(This,pdwEndMinute)	\
    ( (This)->lpVtbl -> get_EndMinute(This,pdwEndMinute) ) 

#define INetworkLimitConfigEntry_get_LimitKbps(This,pdwLimitKbps)	\
    ( (This)->lpVtbl -> get_LimitKbps(This,pdwLimitKbps) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __INetworkLimitConfigEntry_INTERFACE_DEFINED__ */


#ifndef __INetworkLimitConfigEntryEnumerator_INTERFACE_DEFINED__
#define __INetworkLimitConfigEntryEnumerator_INTERFACE_DEFINED__

/* interface INetworkLimitConfigEntryEnumerator */
/* [unique][helpstring][oleautomation][uuid][object] */ 


EXTERN_C const IID IID_INetworkLimitConfigEntryEnumerator;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("B72C2D6B-1A05-4B96-9012-91B06C793BCC")
    INetworkLimitConfigEntryEnumerator : public IUnknown
    {
    public:
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetNextValue( 
            /* [retval][out] */ INetworkLimitConfigEntry **ppNetworkLimit) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct INetworkLimitConfigEntryEnumeratorVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            INetworkLimitConfigEntryEnumerator * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            INetworkLimitConfigEntryEnumerator * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            INetworkLimitConfigEntryEnumerator * This);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetNextValue )( 
            INetworkLimitConfigEntryEnumerator * This,
            /* [retval][out] */ INetworkLimitConfigEntry **ppNetworkLimit);
        
        END_INTERFACE
    } INetworkLimitConfigEntryEnumeratorVtbl;

    interface INetworkLimitConfigEntryEnumerator
    {
        CONST_VTBL struct INetworkLimitConfigEntryEnumeratorVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define INetworkLimitConfigEntryEnumerator_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define INetworkLimitConfigEntryEnumerator_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define INetworkLimitConfigEntryEnumerator_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define INetworkLimitConfigEntryEnumerator_GetNextValue(This,ppNetworkLimit)	\
    ( (This)->lpVtbl -> GetNextValue(This,ppNetworkLimit) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __INetworkLimitConfigEntryEnumerator_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_EcsTtSvc_0000_0007 */
/* [local] */ 

typedef 
enum _HEAT_STORE_ENUMERATOR_TYPE
    {
        NoEnumerator	= 0,
        LastAccessTimeWithSyncAndTieringOrder	= ( NoEnumerator + 1 ) ,
        HeatHistory	= ( LastAccessTimeWithSyncAndTieringOrder + 1 ) ,
        Epoch	= ( HeatHistory + 1 ) ,
        FileId	= ( Epoch + 1 ) ,
        SyncGid	= ( FileId + 1 ) ,
        InverseHeatHistory	= ( SyncGid + 1 ) ,
        HeatHistoryWithSyncAndTieringOrder	= ( InverseHeatHistory + 1 ) ,
        AscendingEpoch	= ( HeatHistoryWithSyncAndTieringOrder + 1 ) ,
        LastAccessTimeWithSyncAndTieringOrderV2	= ( AscendingEpoch + 1 ) ,
        InverseHeatHistoryV2	= ( LastAccessTimeWithSyncAndTieringOrderV2 + 1 ) 
    } 	HeatStoreEnumeratorType;

typedef struct _HEAT_STORE_FILE_INFO
    {
    BSTR bstrFilePath;
    ULONGLONG ullFileId;
    ULONGLONG ullHeatHistory;
    ULONGLONG ullEpoch;
    BOOL bGhostingState;
    BOOL bSyncState;
    BSTR bstrLastAccessTime;
    BSTR bstrLastGhostingTime;
    ULONGLONG ullTotalGhostingCount;
    BSTR bstrGhostingReason;
    } 	HEAT_STORE_FILE_INFO;

typedef struct _HEAT_STORE_SUMMARY
    {
    BSTR bstrHeatStoreDBPath;
    ULONGLONG ullHeatStoreRecordCount;
    BSTR bstrHeatStoreReportPath;
    DWORD dwExecutionTimeInSeconds;
    DWORD dwErrorCode;
    BSTR bstrErrorString;
    } 	HEAT_STORE_SUMMARY;

typedef struct _SELF_SERVICE_RESTORE
    {
    BSTR bstrVolume;
    BSTR bstrVolumeGuid;
    BOOL bPolicyEnabled;
    DWORD dwCompatibleForDays;
    BSTR bstrOldestSupportedVssSnapshotLocalTime;
    } 	SELF_SERVICE_RESTORE;

typedef struct _FILE_ACCESS_PATTERN_STATS
    {
    ULONGLONG ullAccessDaysBucketStart;
    ULONGLONG ullAccessDaysBucketEnd;
    ULONGLONG ullAccessedFileCount;
    ULONGLONG ullAccessedNonTieredFileCount;
    ULONGLONG ullAccessedTieredFileCount;
    ULONGLONG ullTieringReasonDatePolicy;
    ULONGLONG ullTieringReasonVolumePolicy;
    ULONGLONG ullTieringReasonSync;
    ULONGLONG ullTieringReasonCloudTieringCmdlet;
    ULONGLONG ullTieringReasonOther;
    FLOAT fCacheHitPercent;
    ULONGLONG ullCacheHitBytes;
    ULONGLONG ullCacheMissBytes;
    BSTR bstrDataCollectionUtcTime;
    } 	FILE_ACCESS_PATTERN_STATS;



extern RPC_IF_HANDLE __MIDL_itf_EcsTtSvc_0000_0007_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_EcsTtSvc_0000_0007_v0_0_s_ifspec;

#ifndef __IFileAccessPatternStatsEnumerator_INTERFACE_DEFINED__
#define __IFileAccessPatternStatsEnumerator_INTERFACE_DEFINED__

/* interface IFileAccessPatternStatsEnumerator */
/* [unique][helpstring][oleautomation][uuid][object] */ 


EXTERN_C const IID IID_IFileAccessPatternStatsEnumerator;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("CAA2700B-5AC3-4295-A0EE-F80EA1F05A60")
    IFileAccessPatternStatsEnumerator : public IUnknown
    {
    public:
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetNextValue( 
            /* [retval][out] */ FILE_ACCESS_PATTERN_STATS *ppFileAccessPatternStats) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE HasNext( 
            /* [retval][out] */ BOOL *bHasNext) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IFileAccessPatternStatsEnumeratorVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IFileAccessPatternStatsEnumerator * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IFileAccessPatternStatsEnumerator * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IFileAccessPatternStatsEnumerator * This);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetNextValue )( 
            IFileAccessPatternStatsEnumerator * This,
            /* [retval][out] */ FILE_ACCESS_PATTERN_STATS *ppFileAccessPatternStats);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *HasNext )( 
            IFileAccessPatternStatsEnumerator * This,
            /* [retval][out] */ BOOL *bHasNext);
        
        END_INTERFACE
    } IFileAccessPatternStatsEnumeratorVtbl;

    interface IFileAccessPatternStatsEnumerator
    {
        CONST_VTBL struct IFileAccessPatternStatsEnumeratorVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IFileAccessPatternStatsEnumerator_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IFileAccessPatternStatsEnumerator_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IFileAccessPatternStatsEnumerator_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IFileAccessPatternStatsEnumerator_GetNextValue(This,ppFileAccessPatternStats)	\
    ( (This)->lpVtbl -> GetNextValue(This,ppFileAccessPatternStats) ) 

#define IFileAccessPatternStatsEnumerator_HasNext(This,bHasNext)	\
    ( (This)->lpVtbl -> HasNext(This,bHasNext) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IFileAccessPatternStatsEnumerator_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_EcsTtSvc_0000_0008 */
/* [local] */ 

typedef 
enum _TIERING_POLICY_ADVISOR_MODE
    {
        ADVISOR_MODE_RECALL_PERFORMANCE	= 0,
        ADVISOR_MODE_SPACE_SAVINGS	= ( ADVISOR_MODE_RECALL_PERFORMANCE + 1 ) 
    } 	TIERING_POLICY_ADVISOR_MODE;

typedef struct _TIERING_POLICY_RECOMMENDATIONS
    {
    BSTR bstrVolumeGuid;
    ULONGLONG ullVolumeSizeBytes;
    BSTR bstrServerEndpointPath;
    DWORD dwDatePolicyDays;
    DWORD dwEffectiveVolumePolicyFreeSpacePercent;
    ULONGLONG ullCacheSizeBytes;
    ULONGLONG ullSizeOutsideTieringScopeBytes;
    TIERING_POLICY_ADVISOR_MODE policyAdvisorMode;
    DWORD dwEvaluationDays;
    DWORD dwEvaluationTargetCacheHitPercent;
    FLOAT fObservedPercentFilesAccessed;
    FLOAT fObservedCacheHitPercent;
    ULONGLONG ullObservedCacheHitBytes;
    ULONGLONG ullObservedCacheMissBytes;
    DWORD dwRecommendedDatePolicyDays;
    ULONGLONG ullRequiredCacheSizeBytes;
    FLOAT fRecommendedVolumeFreeSpacePercent;
    ULONGLONG ullRecommendedVolumeSizeBytes;
    BSTR bstrDataCollectionUtcTime;
    } 	TIERING_POLICY_RECOMMENDATIONS;



extern RPC_IF_HANDLE __MIDL_itf_EcsTtSvc_0000_0008_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_EcsTtSvc_0000_0008_v0_0_s_ifspec;

#ifndef __IEcsManagement_INTERFACE_DEFINED__
#define __IEcsManagement_INTERFACE_DEFINED__

/* interface IEcsManagement */
/* [unique][helpstring][oleautomation][uuid][object] */ 


EXTERN_C const IID IID_IEcsManagement;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("F29EAB44-2C63-4ACE-8C05-67C2203CBED2")
    IEcsManagement : public IUnknown
    {
    public:
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE RegisterSyncServer( 
            /* [in] */ BSTR serviceUri,
            /* [in] */ BSTR subscriptionId,
            /* [in] */ BSTR fileStoreName,
            /* [in] */ BSTR resourceGroupName,
            /* [in] */ BSTR pwszCertificateProviderName,
            /* [in] */ BSTR pwszCertificateHashAlgorithm,
            /* [in] */ DWORD dwCertificateKeyLength,
            /* [in] */ BSTR monitoringDataPath) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ResetSyncServerConfiguration( 
            /* [in] */ BOOL bCleanClusterRegistration,
            /* [in] */ BOOL bCleanServerRegistration) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GhostPath( 
            /* [in] */ BSTR bstrPath,
            /* [in] */ UINT minimumFileAgeDays,
            /* [retval][out] */ GHOSTING_STATS *pGhostingStats) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE SetProxySetting( 
            /* [in] */ PROXY_SETTING proxySetting) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetProxySetting( 
            /* [retval][out] */ PROXY_SETTING *pProxySetting) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE RemoveProxySetting( void) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScrubFiles( 
            /* [in] */ BSTR bstrPath,
            /* [in] */ SCRUBBING_MODE scrubbingMode,
            /* [in] */ BOOL isDeepScan,
            /* [in] */ BSTR bstrReportDirPath,
            /* [retval][out] */ SCRUBBING_STATS *pScrubbingStats) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE RecallFile( 
            /* [in] */ BSTR bstrPath,
            /* [in] */ UINT retryCount,
            /* [in] */ UINT delaySeconds,
            /* [retval][out] */ RECALL_OUTPUT *pRecallOutput) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IsPathUnderSyncShare( 
            /* [in] */ BSTR bstrPath,
            /* [retval][out] */ BOOL *pbResult) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE PersistSyncServerRegistration( 
            /* [in] */ BSTR serviceUri,
            /* [in] */ BSTR subscriptionId,
            /* [in] */ BSTR fileStoreName,
            /* [in] */ BSTR resourceGroupName,
            /* [in] */ BSTR clusterId,
            /* [in] */ BSTR clusterName,
            /* [in] */ BSTR storageSyncServiceUid,
            /* [in] */ BSTR discoveryUri,
            /* [in] */ BSTR serviceLocation,
            /* [in] */ BSTR resourceLocation) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetSyncServerCertificate( 
            /* [in] */ BOOL bIsPrimary,
            /* [retval][out] */ BSTR *pbstrServiceCertificate) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetSyncServerId( 
            /* [retval][out] */ BSTR *pbstrServerId) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE RegisterMonitoringAgent( 
            /* [in] */ BSTR bstrServerRegistrationData,
            /* [in] */ BSTR bstrMonitoringDataPath) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE NewNetworkLimit( 
            /* [in] */ INetworkLimitConfigEntry *pNetworkLimit,
            /* [retval][out] */ BSTR *pbstrId) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetNetworkLimits( 
            /* [retval][out] */ INetworkLimitConfigEntryEnumerator **ppNetworkLimitArray) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetNetworkLimit( 
            /* [in] */ BSTR bstrId,
            /* [retval][out] */ INetworkLimitConfigEntry **ppNetworkLimit) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE RemoveNetworkLimit( 
            /* [in] */ BSTR bstrId) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetClusterInfo( 
            /* [out] */ BSTR *pbstrClusterId,
            /* [retval][out] */ BSTR *pbstrClusterName) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IsInCluster( 
            /* [retval][out] */ BOOL *pbResult) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ValidateSyncServer( 
            /* [in] */ BSTR serviceUri,
            /* [in] */ BSTR subscriptionId,
            /* [in] */ BSTR fileStoreName,
            /* [in] */ BSTR resourceGroupName) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE EnsureSyncServerCertificate( 
            /* [in] */ BSTR serviceUri,
            /* [in] */ BSTR subscriptionId,
            /* [in] */ BSTR fileStoreName,
            /* [in] */ BSTR resourceGroupName,
            /* [in] */ BSTR pwszCertificateProviderName,
            /* [in] */ BSTR pwszCertificateHashAlgorithm,
            /* [in] */ DWORD dwCertificateKeyLength) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GarbageCollectStableVersions( 
            /* [in] */ BSTR bstrPath,
            /* [in] */ GC_MODE gcMode,
            /* [retval][out] */ GC_STATS *pGCStats) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetStorageSyncServerEndpointStatus( 
            /* [in] */ BSTR bstrPath,
            /* [retval][out] */ BSTR *bstrServerStatusSerializedReportArray) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetStorageSyncRegisteredServerStatus( 
            /* [retval][out] */ BSTR *bstrRegisteredServerStats) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE RolloverSecondaryCertificate( 
            /* [in] */ BSTR bstrCertificateProviderName,
            /* [in] */ BSTR bstrCertificateHashAlgorithm,
            /* [in] */ DWORD dwCertificateKeyLength,
            /* [retval][out] */ BSTR *pbstrServiceCertificateThumbprint) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetServerCertificateThumbprints( 
            /* [out] */ BSTR *pbstrPrimaryCertificateThumbprint,
            /* [retval][out] */ BSTR *pbstrSecondaryCertificateThumbprint) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE DeleteServerCertificate( 
            /* [in] */ BSTR bstrCertificateThumbprint) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE SwitchToSecondaryCertificateAndUpdateMonitoring( void) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IsTieredFileOrphaned( 
            /* [in] */ BSTR bstrPath,
            /* [retval][out] */ BOOL *pbTieredFileOrphaned) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE DeleteOrphanedTieredFile( 
            /* [in] */ BSTR bstrPath,
            /* [retval][out] */ BOOL *pbDeletedOrphanedFile) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE SetAutoUpdatePolicy( 
            /* [in] */ AUTOUPDATE_POLICY autoUpdatePolicy) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetAutoUpdatePolicy( 
            /* [retval][out] */ AUTOUPDATE_POLICY *pAutoUpdatePolicy) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetFilePathUsingId( 
            /* [in] */ BSTR bstrVolumeGuid,
            /* [in] */ LONGLONG llFileId,
            /* [retval][out] */ BSTR *bstrFilePath) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE LogOrphanedTieredFilesTelemetry( 
            /* [in] */ ORPHANED_TIERED_FILES_TELEMETRY_REPORT orphanedTieredFilesTelemetryReport) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE PopulateFileInfoUsingHeatOrder( 
            /* [in] */ BSTR bstrPath,
            /* [in] */ BSTR bstrRecallCmdletLogPath,
            /* [out] */ BSTR *bstrMountPointPath,
            /* [out] */ BSTR *bstrVolumeGuid) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE LogRecallFilesTelemetry( 
            /* [in] */ RECALL_FILES_TELEMETRY_REPORT recallFilesTelemetryReport) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE PopulateHeatStoreInformation( 
            /* [in] */ BSTR volumePath,
            /* [in] */ BSTR reportDirectoryPath,
            /* [in] */ HeatStoreEnumeratorType heatStoreEnumeratorType,
            /* [in] */ ULONGLONG maxRecordsLimit,
            /* [retval][out] */ HEAT_STORE_SUMMARY *pHeatStoreSummary) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetFileLockIdUsingPath( 
            /* [in] */ BSTR bstrFilePath,
            /* [retval][out] */ BSTR *bstrLockId) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE SetLockBypassForSyncShare( 
            /* [in] */ BSTR bstrSyncShareRoot,
            /* [in] */ BOOL bBypassValue) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetHeatStoreFileInformation( 
            /* [in] */ BSTR filePath,
            /* [retval][out] */ HEAT_STORE_FILE_INFO *pHeatStoreFileInfo) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE EnableSelfServiceRestore( 
            /* [in] */ BSTR bstrVolume,
            /* [retval][out] */ SELF_SERVICE_RESTORE *pSelfServiceRestore) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetSelfServiceRestore( 
            /* [in] */ BSTR bstrVolume,
            /* [retval][out] */ SELF_SERVICE_RESTORE *pSelfServiceRestore) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE DisableSelfServiceRestore( 
            /* [in] */ BSTR bstrVolume) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE RunNetworkConnectivityCheck( 
            /* [out] */ BOOL *pbTestPassed,
            /* [out] */ BSTR *bstrReport) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE TriggerOrphanedTieredFilesCleanup( 
            /* [in] */ BSTR bstrDataPath,
            /* [in] */ BSTR bstrContext,
            /* [in] */ BSTR bstrClientCorrelationId) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE DoesOrphanedTieredFilesMarkerExist( 
            /* [in] */ BSTR bstrPath,
            /* [in] */ BSTR bstrContext,
            /* [in] */ BSTR bstrClientCorrelationId,
            /* [retval][out] */ BOOL *bExist) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE RemoveOrphanedTieredFilesMarker( 
            /* [in] */ BSTR bstrPath) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetReparseTag( 
            /* [in] */ BSTR bstrPath,
            /* [retval][out] */ ULONG *pulReparseTag) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IsPathUnderSVIOrRecycleBin( 
            /* [in] */ BSTR bstrPath,
            /* [retval][out] */ BOOL *pbResult) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetFileAccessPattern( 
            /* [in] */ BSTR bstrServerEndpointPath,
            /* [retval][out] */ IFileAccessPatternStatsEnumerator **ppFileAccessPatternStats) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetTieringPolicyRecommendations( 
            /* [in] */ BSTR bstrPath,
            /* [in] */ TIERING_POLICY_ADVISOR_MODE mode,
            /* [retval][out] */ TIERING_POLICY_RECOMMENDATIONS *pPolicyRecommendations) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IEcsManagementVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IEcsManagement * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IEcsManagement * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IEcsManagement * This);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *RegisterSyncServer )( 
            IEcsManagement * This,
            /* [in] */ BSTR serviceUri,
            /* [in] */ BSTR subscriptionId,
            /* [in] */ BSTR fileStoreName,
            /* [in] */ BSTR resourceGroupName,
            /* [in] */ BSTR pwszCertificateProviderName,
            /* [in] */ BSTR pwszCertificateHashAlgorithm,
            /* [in] */ DWORD dwCertificateKeyLength,
            /* [in] */ BSTR monitoringDataPath);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ResetSyncServerConfiguration )( 
            IEcsManagement * This,
            /* [in] */ BOOL bCleanClusterRegistration,
            /* [in] */ BOOL bCleanServerRegistration);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GhostPath )( 
            IEcsManagement * This,
            /* [in] */ BSTR bstrPath,
            /* [in] */ UINT minimumFileAgeDays,
            /* [retval][out] */ GHOSTING_STATS *pGhostingStats);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *SetProxySetting )( 
            IEcsManagement * This,
            /* [in] */ PROXY_SETTING proxySetting);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetProxySetting )( 
            IEcsManagement * This,
            /* [retval][out] */ PROXY_SETTING *pProxySetting);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *RemoveProxySetting )( 
            IEcsManagement * This);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScrubFiles )( 
            IEcsManagement * This,
            /* [in] */ BSTR bstrPath,
            /* [in] */ SCRUBBING_MODE scrubbingMode,
            /* [in] */ BOOL isDeepScan,
            /* [in] */ BSTR bstrReportDirPath,
            /* [retval][out] */ SCRUBBING_STATS *pScrubbingStats);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *RecallFile )( 
            IEcsManagement * This,
            /* [in] */ BSTR bstrPath,
            /* [in] */ UINT retryCount,
            /* [in] */ UINT delaySeconds,
            /* [retval][out] */ RECALL_OUTPUT *pRecallOutput);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *IsPathUnderSyncShare )( 
            IEcsManagement * This,
            /* [in] */ BSTR bstrPath,
            /* [retval][out] */ BOOL *pbResult);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *PersistSyncServerRegistration )( 
            IEcsManagement * This,
            /* [in] */ BSTR serviceUri,
            /* [in] */ BSTR subscriptionId,
            /* [in] */ BSTR fileStoreName,
            /* [in] */ BSTR resourceGroupName,
            /* [in] */ BSTR clusterId,
            /* [in] */ BSTR clusterName,
            /* [in] */ BSTR storageSyncServiceUid,
            /* [in] */ BSTR discoveryUri,
            /* [in] */ BSTR serviceLocation,
            /* [in] */ BSTR resourceLocation);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetSyncServerCertificate )( 
            IEcsManagement * This,
            /* [in] */ BOOL bIsPrimary,
            /* [retval][out] */ BSTR *pbstrServiceCertificate);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetSyncServerId )( 
            IEcsManagement * This,
            /* [retval][out] */ BSTR *pbstrServerId);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *RegisterMonitoringAgent )( 
            IEcsManagement * This,
            /* [in] */ BSTR bstrServerRegistrationData,
            /* [in] */ BSTR bstrMonitoringDataPath);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *NewNetworkLimit )( 
            IEcsManagement * This,
            /* [in] */ INetworkLimitConfigEntry *pNetworkLimit,
            /* [retval][out] */ BSTR *pbstrId);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetNetworkLimits )( 
            IEcsManagement * This,
            /* [retval][out] */ INetworkLimitConfigEntryEnumerator **ppNetworkLimitArray);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetNetworkLimit )( 
            IEcsManagement * This,
            /* [in] */ BSTR bstrId,
            /* [retval][out] */ INetworkLimitConfigEntry **ppNetworkLimit);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *RemoveNetworkLimit )( 
            IEcsManagement * This,
            /* [in] */ BSTR bstrId);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetClusterInfo )( 
            IEcsManagement * This,
            /* [out] */ BSTR *pbstrClusterId,
            /* [retval][out] */ BSTR *pbstrClusterName);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *IsInCluster )( 
            IEcsManagement * This,
            /* [retval][out] */ BOOL *pbResult);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ValidateSyncServer )( 
            IEcsManagement * This,
            /* [in] */ BSTR serviceUri,
            /* [in] */ BSTR subscriptionId,
            /* [in] */ BSTR fileStoreName,
            /* [in] */ BSTR resourceGroupName);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *EnsureSyncServerCertificate )( 
            IEcsManagement * This,
            /* [in] */ BSTR serviceUri,
            /* [in] */ BSTR subscriptionId,
            /* [in] */ BSTR fileStoreName,
            /* [in] */ BSTR resourceGroupName,
            /* [in] */ BSTR pwszCertificateProviderName,
            /* [in] */ BSTR pwszCertificateHashAlgorithm,
            /* [in] */ DWORD dwCertificateKeyLength);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GarbageCollectStableVersions )( 
            IEcsManagement * This,
            /* [in] */ BSTR bstrPath,
            /* [in] */ GC_MODE gcMode,
            /* [retval][out] */ GC_STATS *pGCStats);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetStorageSyncServerEndpointStatus )( 
            IEcsManagement * This,
            /* [in] */ BSTR bstrPath,
            /* [retval][out] */ BSTR *bstrServerStatusSerializedReportArray);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetStorageSyncRegisteredServerStatus )( 
            IEcsManagement * This,
            /* [retval][out] */ BSTR *bstrRegisteredServerStats);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *RolloverSecondaryCertificate )( 
            IEcsManagement * This,
            /* [in] */ BSTR bstrCertificateProviderName,
            /* [in] */ BSTR bstrCertificateHashAlgorithm,
            /* [in] */ DWORD dwCertificateKeyLength,
            /* [retval][out] */ BSTR *pbstrServiceCertificateThumbprint);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetServerCertificateThumbprints )( 
            IEcsManagement * This,
            /* [out] */ BSTR *pbstrPrimaryCertificateThumbprint,
            /* [retval][out] */ BSTR *pbstrSecondaryCertificateThumbprint);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *DeleteServerCertificate )( 
            IEcsManagement * This,
            /* [in] */ BSTR bstrCertificateThumbprint);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *SwitchToSecondaryCertificateAndUpdateMonitoring )( 
            IEcsManagement * This);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *IsTieredFileOrphaned )( 
            IEcsManagement * This,
            /* [in] */ BSTR bstrPath,
            /* [retval][out] */ BOOL *pbTieredFileOrphaned);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *DeleteOrphanedTieredFile )( 
            IEcsManagement * This,
            /* [in] */ BSTR bstrPath,
            /* [retval][out] */ BOOL *pbDeletedOrphanedFile);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *SetAutoUpdatePolicy )( 
            IEcsManagement * This,
            /* [in] */ AUTOUPDATE_POLICY autoUpdatePolicy);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetAutoUpdatePolicy )( 
            IEcsManagement * This,
            /* [retval][out] */ AUTOUPDATE_POLICY *pAutoUpdatePolicy);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetFilePathUsingId )( 
            IEcsManagement * This,
            /* [in] */ BSTR bstrVolumeGuid,
            /* [in] */ LONGLONG llFileId,
            /* [retval][out] */ BSTR *bstrFilePath);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *LogOrphanedTieredFilesTelemetry )( 
            IEcsManagement * This,
            /* [in] */ ORPHANED_TIERED_FILES_TELEMETRY_REPORT orphanedTieredFilesTelemetryReport);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *PopulateFileInfoUsingHeatOrder )( 
            IEcsManagement * This,
            /* [in] */ BSTR bstrPath,
            /* [in] */ BSTR bstrRecallCmdletLogPath,
            /* [out] */ BSTR *bstrMountPointPath,
            /* [out] */ BSTR *bstrVolumeGuid);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *LogRecallFilesTelemetry )( 
            IEcsManagement * This,
            /* [in] */ RECALL_FILES_TELEMETRY_REPORT recallFilesTelemetryReport);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *PopulateHeatStoreInformation )( 
            IEcsManagement * This,
            /* [in] */ BSTR volumePath,
            /* [in] */ BSTR reportDirectoryPath,
            /* [in] */ HeatStoreEnumeratorType heatStoreEnumeratorType,
            /* [in] */ ULONGLONG maxRecordsLimit,
            /* [retval][out] */ HEAT_STORE_SUMMARY *pHeatStoreSummary);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetFileLockIdUsingPath )( 
            IEcsManagement * This,
            /* [in] */ BSTR bstrFilePath,
            /* [retval][out] */ BSTR *bstrLockId);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *SetLockBypassForSyncShare )( 
            IEcsManagement * This,
            /* [in] */ BSTR bstrSyncShareRoot,
            /* [in] */ BOOL bBypassValue);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetHeatStoreFileInformation )( 
            IEcsManagement * This,
            /* [in] */ BSTR filePath,
            /* [retval][out] */ HEAT_STORE_FILE_INFO *pHeatStoreFileInfo);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *EnableSelfServiceRestore )( 
            IEcsManagement * This,
            /* [in] */ BSTR bstrVolume,
            /* [retval][out] */ SELF_SERVICE_RESTORE *pSelfServiceRestore);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetSelfServiceRestore )( 
            IEcsManagement * This,
            /* [in] */ BSTR bstrVolume,
            /* [retval][out] */ SELF_SERVICE_RESTORE *pSelfServiceRestore);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *DisableSelfServiceRestore )( 
            IEcsManagement * This,
            /* [in] */ BSTR bstrVolume);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *RunNetworkConnectivityCheck )( 
            IEcsManagement * This,
            /* [out] */ BOOL *pbTestPassed,
            /* [out] */ BSTR *bstrReport);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *TriggerOrphanedTieredFilesCleanup )( 
            IEcsManagement * This,
            /* [in] */ BSTR bstrDataPath,
            /* [in] */ BSTR bstrContext,
            /* [in] */ BSTR bstrClientCorrelationId);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *DoesOrphanedTieredFilesMarkerExist )( 
            IEcsManagement * This,
            /* [in] */ BSTR bstrPath,
            /* [in] */ BSTR bstrContext,
            /* [in] */ BSTR bstrClientCorrelationId,
            /* [retval][out] */ BOOL *bExist);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *RemoveOrphanedTieredFilesMarker )( 
            IEcsManagement * This,
            /* [in] */ BSTR bstrPath);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetReparseTag )( 
            IEcsManagement * This,
            /* [in] */ BSTR bstrPath,
            /* [retval][out] */ ULONG *pulReparseTag);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *IsPathUnderSVIOrRecycleBin )( 
            IEcsManagement * This,
            /* [in] */ BSTR bstrPath,
            /* [retval][out] */ BOOL *pbResult);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetFileAccessPattern )( 
            IEcsManagement * This,
            /* [in] */ BSTR bstrServerEndpointPath,
            /* [retval][out] */ IFileAccessPatternStatsEnumerator **ppFileAccessPatternStats);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetTieringPolicyRecommendations )( 
            IEcsManagement * This,
            /* [in] */ BSTR bstrPath,
            /* [in] */ TIERING_POLICY_ADVISOR_MODE mode,
            /* [retval][out] */ TIERING_POLICY_RECOMMENDATIONS *pPolicyRecommendations);
        
        END_INTERFACE
    } IEcsManagementVtbl;

    interface IEcsManagement
    {
        CONST_VTBL struct IEcsManagementVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IEcsManagement_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IEcsManagement_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IEcsManagement_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IEcsManagement_RegisterSyncServer(This,serviceUri,subscriptionId,fileStoreName,resourceGroupName,pwszCertificateProviderName,pwszCertificateHashAlgorithm,dwCertificateKeyLength,monitoringDataPath)	\
    ( (This)->lpVtbl -> RegisterSyncServer(This,serviceUri,subscriptionId,fileStoreName,resourceGroupName,pwszCertificateProviderName,pwszCertificateHashAlgorithm,dwCertificateKeyLength,monitoringDataPath) ) 

#define IEcsManagement_ResetSyncServerConfiguration(This,bCleanClusterRegistration,bCleanServerRegistration)	\
    ( (This)->lpVtbl -> ResetSyncServerConfiguration(This,bCleanClusterRegistration,bCleanServerRegistration) ) 

#define IEcsManagement_GhostPath(This,bstrPath,minimumFileAgeDays,pGhostingStats)	\
    ( (This)->lpVtbl -> GhostPath(This,bstrPath,minimumFileAgeDays,pGhostingStats) ) 

#define IEcsManagement_SetProxySetting(This,proxySetting)	\
    ( (This)->lpVtbl -> SetProxySetting(This,proxySetting) ) 

#define IEcsManagement_GetProxySetting(This,pProxySetting)	\
    ( (This)->lpVtbl -> GetProxySetting(This,pProxySetting) ) 

#define IEcsManagement_RemoveProxySetting(This)	\
    ( (This)->lpVtbl -> RemoveProxySetting(This) ) 

#define IEcsManagement_ScrubFiles(This,bstrPath,scrubbingMode,isDeepScan,bstrReportDirPath,pScrubbingStats)	\
    ( (This)->lpVtbl -> ScrubFiles(This,bstrPath,scrubbingMode,isDeepScan,bstrReportDirPath,pScrubbingStats) ) 

#define IEcsManagement_RecallFile(This,bstrPath,retryCount,delaySeconds,pRecallOutput)	\
    ( (This)->lpVtbl -> RecallFile(This,bstrPath,retryCount,delaySeconds,pRecallOutput) ) 

#define IEcsManagement_IsPathUnderSyncShare(This,bstrPath,pbResult)	\
    ( (This)->lpVtbl -> IsPathUnderSyncShare(This,bstrPath,pbResult) ) 

#define IEcsManagement_PersistSyncServerRegistration(This,serviceUri,subscriptionId,fileStoreName,resourceGroupName,clusterId,clusterName,storageSyncServiceUid,discoveryUri,serviceLocation,resourceLocation)	\
    ( (This)->lpVtbl -> PersistSyncServerRegistration(This,serviceUri,subscriptionId,fileStoreName,resourceGroupName,clusterId,clusterName,storageSyncServiceUid,discoveryUri,serviceLocation,resourceLocation) ) 

#define IEcsManagement_GetSyncServerCertificate(This,bIsPrimary,pbstrServiceCertificate)	\
    ( (This)->lpVtbl -> GetSyncServerCertificate(This,bIsPrimary,pbstrServiceCertificate) ) 

#define IEcsManagement_GetSyncServerId(This,pbstrServerId)	\
    ( (This)->lpVtbl -> GetSyncServerId(This,pbstrServerId) ) 

#define IEcsManagement_RegisterMonitoringAgent(This,bstrServerRegistrationData,bstrMonitoringDataPath)	\
    ( (This)->lpVtbl -> RegisterMonitoringAgent(This,bstrServerRegistrationData,bstrMonitoringDataPath) ) 

#define IEcsManagement_NewNetworkLimit(This,pNetworkLimit,pbstrId)	\
    ( (This)->lpVtbl -> NewNetworkLimit(This,pNetworkLimit,pbstrId) ) 

#define IEcsManagement_GetNetworkLimits(This,ppNetworkLimitArray)	\
    ( (This)->lpVtbl -> GetNetworkLimits(This,ppNetworkLimitArray) ) 

#define IEcsManagement_GetNetworkLimit(This,bstrId,ppNetworkLimit)	\
    ( (This)->lpVtbl -> GetNetworkLimit(This,bstrId,ppNetworkLimit) ) 

#define IEcsManagement_RemoveNetworkLimit(This,bstrId)	\
    ( (This)->lpVtbl -> RemoveNetworkLimit(This,bstrId) ) 

#define IEcsManagement_GetClusterInfo(This,pbstrClusterId,pbstrClusterName)	\
    ( (This)->lpVtbl -> GetClusterInfo(This,pbstrClusterId,pbstrClusterName) ) 

#define IEcsManagement_IsInCluster(This,pbResult)	\
    ( (This)->lpVtbl -> IsInCluster(This,pbResult) ) 

#define IEcsManagement_ValidateSyncServer(This,serviceUri,subscriptionId,fileStoreName,resourceGroupName)	\
    ( (This)->lpVtbl -> ValidateSyncServer(This,serviceUri,subscriptionId,fileStoreName,resourceGroupName) ) 

#define IEcsManagement_EnsureSyncServerCertificate(This,serviceUri,subscriptionId,fileStoreName,resourceGroupName,pwszCertificateProviderName,pwszCertificateHashAlgorithm,dwCertificateKeyLength)	\
    ( (This)->lpVtbl -> EnsureSyncServerCertificate(This,serviceUri,subscriptionId,fileStoreName,resourceGroupName,pwszCertificateProviderName,pwszCertificateHashAlgorithm,dwCertificateKeyLength) ) 

#define IEcsManagement_GarbageCollectStableVersions(This,bstrPath,gcMode,pGCStats)	\
    ( (This)->lpVtbl -> GarbageCollectStableVersions(This,bstrPath,gcMode,pGCStats) ) 

#define IEcsManagement_GetStorageSyncServerEndpointStatus(This,bstrPath,bstrServerStatusSerializedReportArray)	\
    ( (This)->lpVtbl -> GetStorageSyncServerEndpointStatus(This,bstrPath,bstrServerStatusSerializedReportArray) ) 

#define IEcsManagement_GetStorageSyncRegisteredServerStatus(This,bstrRegisteredServerStats)	\
    ( (This)->lpVtbl -> GetStorageSyncRegisteredServerStatus(This,bstrRegisteredServerStats) ) 

#define IEcsManagement_RolloverSecondaryCertificate(This,bstrCertificateProviderName,bstrCertificateHashAlgorithm,dwCertificateKeyLength,pbstrServiceCertificateThumbprint)	\
    ( (This)->lpVtbl -> RolloverSecondaryCertificate(This,bstrCertificateProviderName,bstrCertificateHashAlgorithm,dwCertificateKeyLength,pbstrServiceCertificateThumbprint) ) 

#define IEcsManagement_GetServerCertificateThumbprints(This,pbstrPrimaryCertificateThumbprint,pbstrSecondaryCertificateThumbprint)	\
    ( (This)->lpVtbl -> GetServerCertificateThumbprints(This,pbstrPrimaryCertificateThumbprint,pbstrSecondaryCertificateThumbprint) ) 

#define IEcsManagement_DeleteServerCertificate(This,bstrCertificateThumbprint)	\
    ( (This)->lpVtbl -> DeleteServerCertificate(This,bstrCertificateThumbprint) ) 

#define IEcsManagement_SwitchToSecondaryCertificateAndUpdateMonitoring(This)	\
    ( (This)->lpVtbl -> SwitchToSecondaryCertificateAndUpdateMonitoring(This) ) 

#define IEcsManagement_IsTieredFileOrphaned(This,bstrPath,pbTieredFileOrphaned)	\
    ( (This)->lpVtbl -> IsTieredFileOrphaned(This,bstrPath,pbTieredFileOrphaned) ) 

#define IEcsManagement_DeleteOrphanedTieredFile(This,bstrPath,pbDeletedOrphanedFile)	\
    ( (This)->lpVtbl -> DeleteOrphanedTieredFile(This,bstrPath,pbDeletedOrphanedFile) ) 

#define IEcsManagement_SetAutoUpdatePolicy(This,autoUpdatePolicy)	\
    ( (This)->lpVtbl -> SetAutoUpdatePolicy(This,autoUpdatePolicy) ) 

#define IEcsManagement_GetAutoUpdatePolicy(This,pAutoUpdatePolicy)	\
    ( (This)->lpVtbl -> GetAutoUpdatePolicy(This,pAutoUpdatePolicy) ) 

#define IEcsManagement_GetFilePathUsingId(This,bstrVolumeGuid,llFileId,bstrFilePath)	\
    ( (This)->lpVtbl -> GetFilePathUsingId(This,bstrVolumeGuid,llFileId,bstrFilePath) ) 

#define IEcsManagement_LogOrphanedTieredFilesTelemetry(This,orphanedTieredFilesTelemetryReport)	\
    ( (This)->lpVtbl -> LogOrphanedTieredFilesTelemetry(This,orphanedTieredFilesTelemetryReport) ) 

#define IEcsManagement_PopulateFileInfoUsingHeatOrder(This,bstrPath,bstrRecallCmdletLogPath,bstrMountPointPath,bstrVolumeGuid)	\
    ( (This)->lpVtbl -> PopulateFileInfoUsingHeatOrder(This,bstrPath,bstrRecallCmdletLogPath,bstrMountPointPath,bstrVolumeGuid) ) 

#define IEcsManagement_LogRecallFilesTelemetry(This,recallFilesTelemetryReport)	\
    ( (This)->lpVtbl -> LogRecallFilesTelemetry(This,recallFilesTelemetryReport) ) 

#define IEcsManagement_PopulateHeatStoreInformation(This,volumePath,reportDirectoryPath,heatStoreEnumeratorType,maxRecordsLimit,pHeatStoreSummary)	\
    ( (This)->lpVtbl -> PopulateHeatStoreInformation(This,volumePath,reportDirectoryPath,heatStoreEnumeratorType,maxRecordsLimit,pHeatStoreSummary) ) 

#define IEcsManagement_GetFileLockIdUsingPath(This,bstrFilePath,bstrLockId)	\
    ( (This)->lpVtbl -> GetFileLockIdUsingPath(This,bstrFilePath,bstrLockId) ) 

#define IEcsManagement_SetLockBypassForSyncShare(This,bstrSyncShareRoot,bBypassValue)	\
    ( (This)->lpVtbl -> SetLockBypassForSyncShare(This,bstrSyncShareRoot,bBypassValue) ) 

#define IEcsManagement_GetHeatStoreFileInformation(This,filePath,pHeatStoreFileInfo)	\
    ( (This)->lpVtbl -> GetHeatStoreFileInformation(This,filePath,pHeatStoreFileInfo) ) 

#define IEcsManagement_EnableSelfServiceRestore(This,bstrVolume,pSelfServiceRestore)	\
    ( (This)->lpVtbl -> EnableSelfServiceRestore(This,bstrVolume,pSelfServiceRestore) ) 

#define IEcsManagement_GetSelfServiceRestore(This,bstrVolume,pSelfServiceRestore)	\
    ( (This)->lpVtbl -> GetSelfServiceRestore(This,bstrVolume,pSelfServiceRestore) ) 

#define IEcsManagement_DisableSelfServiceRestore(This,bstrVolume)	\
    ( (This)->lpVtbl -> DisableSelfServiceRestore(This,bstrVolume) ) 

#define IEcsManagement_RunNetworkConnectivityCheck(This,pbTestPassed,bstrReport)	\
    ( (This)->lpVtbl -> RunNetworkConnectivityCheck(This,pbTestPassed,bstrReport) ) 

#define IEcsManagement_TriggerOrphanedTieredFilesCleanup(This,bstrDataPath,bstrContext,bstrClientCorrelationId)	\
    ( (This)->lpVtbl -> TriggerOrphanedTieredFilesCleanup(This,bstrDataPath,bstrContext,bstrClientCorrelationId) ) 

#define IEcsManagement_DoesOrphanedTieredFilesMarkerExist(This,bstrPath,bstrContext,bstrClientCorrelationId,bExist)	\
    ( (This)->lpVtbl -> DoesOrphanedTieredFilesMarkerExist(This,bstrPath,bstrContext,bstrClientCorrelationId,bExist) ) 

#define IEcsManagement_RemoveOrphanedTieredFilesMarker(This,bstrPath)	\
    ( (This)->lpVtbl -> RemoveOrphanedTieredFilesMarker(This,bstrPath) ) 

#define IEcsManagement_GetReparseTag(This,bstrPath,pulReparseTag)	\
    ( (This)->lpVtbl -> GetReparseTag(This,bstrPath,pulReparseTag) ) 

#define IEcsManagement_IsPathUnderSVIOrRecycleBin(This,bstrPath,pbResult)	\
    ( (This)->lpVtbl -> IsPathUnderSVIOrRecycleBin(This,bstrPath,pbResult) ) 

#define IEcsManagement_GetFileAccessPattern(This,bstrServerEndpointPath,ppFileAccessPatternStats)	\
    ( (This)->lpVtbl -> GetFileAccessPattern(This,bstrServerEndpointPath,ppFileAccessPatternStats) ) 

#define IEcsManagement_GetTieringPolicyRecommendations(This,bstrPath,mode,pPolicyRecommendations)	\
    ( (This)->lpVtbl -> GetTieringPolicyRecommendations(This,bstrPath,mode,pPolicyRecommendations) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IEcsManagement_INTERFACE_DEFINED__ */



#ifndef __EcsTtSvcLib_LIBRARY_DEFINED__
#define __EcsTtSvcLib_LIBRARY_DEFINED__

/* library EcsTtSvcLib */
/* [version][uuid] */ 


EXTERN_C const IID LIBID_EcsTtSvcLib;

EXTERN_C const CLSID CLSID_EcsTokenTranslator;

#ifdef __cplusplus

class DECLSPEC_UUID("1B018338-B81C-54B1-6423-7D7830802569")
EcsTokenTranslator;
#endif

EXTERN_C const CLSID CLSID_EcsTokenParser;

#ifdef __cplusplus

class DECLSPEC_UUID("E4139964-3C29-533B-A8F5-4EDA83833E93")
EcsTokenParser;
#endif

EXTERN_C const CLSID CLSID_EcsADHelper;

#ifdef __cplusplus

class DECLSPEC_UUID("6BBA9814-8110-5C85-9BB2-E66882065DD0")
EcsADHelper;
#endif

EXTERN_C const CLSID CLSID_SyncVmGenerationId;

#ifdef __cplusplus

class DECLSPEC_UUID("16833019-1069-54CD-3D9B-7A8C9E8E72DD")
SyncVmGenerationId;
#endif

EXTERN_C const CLSID CLSID_EcsManagement;

#ifdef __cplusplus

class DECLSPEC_UUID("3EC1199D-20EB-40C0-8294-EB684E89AB2B")
EcsManagement;
#endif
#endif /* __EcsTtSvcLib_LIBRARY_DEFINED__ */

/* Additional Prototypes for ALL interfaces */

unsigned long             __RPC_USER  BSTR_UserSize(     unsigned long *, unsigned long            , BSTR * ); 
unsigned char * __RPC_USER  BSTR_UserMarshal(  unsigned long *, unsigned char *, BSTR * ); 
unsigned char * __RPC_USER  BSTR_UserUnmarshal(unsigned long *, unsigned char *, BSTR * ); 
void                      __RPC_USER  BSTR_UserFree(     unsigned long *, BSTR * ); 

unsigned long             __RPC_USER  LPSAFEARRAY_UserSize(     unsigned long *, unsigned long            , LPSAFEARRAY * ); 
unsigned char * __RPC_USER  LPSAFEARRAY_UserMarshal(  unsigned long *, unsigned char *, LPSAFEARRAY * ); 
unsigned char * __RPC_USER  LPSAFEARRAY_UserUnmarshal(unsigned long *, unsigned char *, LPSAFEARRAY * ); 
void                      __RPC_USER  LPSAFEARRAY_UserFree(     unsigned long *, LPSAFEARRAY * ); 

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif


