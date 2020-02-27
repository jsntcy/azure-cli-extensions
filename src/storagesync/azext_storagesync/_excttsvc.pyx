
# cython: language_level=3, language=c++, binding=True, embedsignature=True

__author__ = "Microsoft Corporation <azpycli@microsoft.com>"

cdef extern from "windows.h":
    ctypedef unsigned int DWORD
    ctypedef unsigned int UINT
    ctypedef unsigned int ULONG
    ctypedef void* LPVOID

    UINT UINT_MAX

    ctypedef int HRESULT
    cdef bint SUCCEEDED(HRESULT hr) nogil
    cdef bint FAILED(HRESULT hr) nogil

    ctypedef struct GUID:
        pass
    ctypedef GUID IID
    ctypedef GUID CLSID
    ctypedef GUID& REFGUID
    ctypedef IID& REFIID
    ctypedef CLSID& REFCLSID

    cdef cppclass IUnknown:
        ULONG AddRef() nogil
        ULONG Release() nogil
        HRESULT QueryInterface(REFIID riid, LPVOID *ppvObject) nogil

    ctypedef IUnknown *LPUNKNOWN

    cdef HRESULT CoInitializeEx(LPVOID pReserved, DWORD dwCoInit) nogil
    cdef void CoUninitialize() nogil
    DWORD COINIT_APARTMENTTHREADED
    DWORD COINIT_MULTITHREADED

    cdef HRESULT CoCreateInstance(
        REFCLSID  rclsid,
        LPUNKNOWN pUnkOuter,
        DWORD     dwClsContext,
        REFIID    riid,
        LPVOID    *ppv
    ) nogil

    DWORD CLSCTX_INPROC_SERVER
    DWORD CLSCTX_INPROC_HANDLER
    DWORD CLSCTX_LOCAL_SERVER
    DWORD CLSCTX_REMOTE_SERVER
    DWORD CLSCTX_ALL

    cdef LPVOID CoTaskMemAlloc(size_t cb) nogil
    cdef void CoTaskMemFree(LPVOID ppv) nogil

    ctypedef Py_UNICODE OLECHAR
    ctypedef OLECHAR* BSTR

    cdef BSTR SysAllocStringLen(const OLECHAR *strIn, UINT ui) nogil
    cdef void SysFreeString(BSTR bstrString) nogil

cdef extern from "EcsTtSvc.h":
    cdef cppclass IEcsManagement(IUnknown):
        HRESULT RegisterSyncServer( 
            BSTR serviceUri,
            BSTR subscriptionId,
            BSTR fileStoreName,
            BSTR resourceGroupName,
            BSTR pwszCertificateProviderName,
            BSTR pwszCertificateHashAlgorithm,
            DWORD dwCertificateKeyLength,
            BSTR monitoringDataPath
        ) nogil

    CLSID CLSID_EcsManagement
    IID IID_IEcsManagement

def coinitialize(bint sta=True):
    cdef HRESULT hr = CoInitializeEx(
        NULL,
        COINIT_APARTMENTTHREADED if sta else COINIT_MULTITHREADED
    )
    if FAILED(hr):
        raise OSError(0, None, None, <int>hr, None)

def couninitialize():
    CoUninitialize()

cdef class BStr:
    cdef BSTR bstr

    def __init__(self, str s):
        self.bstr = NULL
        if s:
            if len(s) >= UINT_MAX / 4:
                raise OverflowError("string too long")
            self.bstr = SysAllocStringLen(s, <UINT>len(s))
            if not self.bstr:
                raise MemoryError("failed to allocate string")

    def __del__(self):
        SysFreeString(self.bstr)

def register_sync_server(
    str service_uri,
    str subscription_id,
    str file_store_name,
    str resource_group_name,
    str certificate_provider_name,
    str certificate_hash_algorithm,
    int certificate_key_length,
    str monitoring_data_path,
):
    cdef BStr bstr_service_uri = BStr(service_uri)
    cdef BStr bstr_subscription_id = BStr(subscription_id)
    cdef BStr bstr_file_store_name = BStr(file_store_name)
    cdef BStr bstr_resource_group_name = BStr(resource_group_name)
    cdef BStr bstr_certificate_provider_name = BStr(certificate_provider_name)
    cdef BStr bstr_certificate_hash_algorithm = BStr(certificate_hash_algorithm)
    cdef BStr bstr_monitoring_data_path = BStr(monitoring_data_path)

    cdef IEcsManagement *mgmt_object
    cdef HRESULT hr = CoCreateInstance(
        CLSID_EcsManagement,
        NULL,
        CLSCTX_LOCAL_SERVER,
        IID_IEcsManagement,
        <LPVOID*>(&mgmt_object),
    )
    if FAILED(hr):
        raise OSError(0, None, None, <int>hr, None)

    hr = mgmt_object.RegisterSyncServer(
        bstr_service_uri.bstr,
        bstr_subscription_id.bstr,
        bstr_file_store_name.bstr,
        bstr_resource_group_name.bstr,
        bstr_certificate_provider_name.bstr,
        bstr_certificate_hash_algorithm.bstr,
        <DWORD>certificate_key_length,
        bstr_monitoring_data_path.bstr,
    )

    mgmt_object.Release()