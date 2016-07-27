// C++ for the Windows Runtime v1.29
// Copyright (c) 2016 Microsoft Corporation

#pragma once

#include "base.h"
#include "Windows.Gaming.XboxLive.Storage.0.h"
#include "Windows.Foundation.0.h"
#include "Windows.Foundation.Collections.0.h"
#include "Windows.System.0.h"
#include "Windows.Foundation.1.h"
#include "Windows.Foundation.Collections.1.h"
#include "Windows.Storage.Streams.1.h"

WINRT_EXPORT namespace winrt {

namespace ABI::Windows::Gaming::XboxLive::Storage {

struct __declspec(uuid("917281e0-7201-4953-aa2c-4008f03aef45")) __declspec(novtable) IGameSaveBlobGetResult : Windows::IInspectable
{
    virtual HRESULT __stdcall get_Status(winrt::Windows::Gaming::XboxLive::Storage::GameSaveErrorStatus * value) = 0;
    virtual HRESULT __stdcall get_Value(Windows::Foundation::Collections::IMapView<hstring, Windows::Storage::Streams::IBuffer> ** value) = 0;
};

struct __declspec(uuid("add38034-baf0-4645-b6d0-46edaffb3c2b")) __declspec(novtable) IGameSaveBlobInfo : Windows::IInspectable
{
    virtual HRESULT __stdcall get_Name(hstring * value) = 0;
    virtual HRESULT __stdcall get_Size(uint32_t * value) = 0;
};

struct __declspec(uuid("c7578582-3697-42bf-989c-665d923b5231")) __declspec(novtable) IGameSaveBlobInfoGetResult : Windows::IInspectable
{
    virtual HRESULT __stdcall get_Status(winrt::Windows::Gaming::XboxLive::Storage::GameSaveErrorStatus * value) = 0;
    virtual HRESULT __stdcall get_Value(Windows::Foundation::Collections::IVectorView<Windows::Gaming::XboxLive::Storage::GameSaveBlobInfo> ** value) = 0;
};

struct __declspec(uuid("9fdd74b2-eeee-447b-a9d2-7f96c0f83208")) __declspec(novtable) IGameSaveBlobInfoQuery : Windows::IInspectable
{
    virtual HRESULT __stdcall abi_GetBlobInfoAsync(Windows::Foundation::IAsyncOperation<Windows::Gaming::XboxLive::Storage::GameSaveBlobInfoGetResult> ** operation) = 0;
    virtual HRESULT __stdcall abi_GetBlobInfoWithIndexAndMaxAsync(uint32_t startIndex, uint32_t maxNumberOfItems, Windows::Foundation::IAsyncOperation<Windows::Gaming::XboxLive::Storage::GameSaveBlobInfoGetResult> ** operation) = 0;
    virtual HRESULT __stdcall abi_GetItemCountAsync(Windows::Foundation::IAsyncOperation<uint32_t> ** operation) = 0;
};

struct __declspec(uuid("c3c08f89-563f-4ecd-9c6f-33fd0e323d10")) __declspec(novtable) IGameSaveContainer : Windows::IInspectable
{
    virtual HRESULT __stdcall get_Name(hstring * value) = 0;
    virtual HRESULT __stdcall get_Provider(Windows::Gaming::XboxLive::Storage::IGameSaveProvider ** value) = 0;
    virtual HRESULT __stdcall abi_SubmitUpdatesAsync(Windows::Foundation::Collections::IMapView<hstring, Windows::Storage::Streams::IBuffer> * blobsToWrite, Windows::Foundation::Collections::IIterable<hstring> * blobsToDelete, hstring displayName, Windows::Foundation::IAsyncOperation<Windows::Gaming::XboxLive::Storage::GameSaveOperationResult> ** operation) = 0;
    virtual HRESULT __stdcall abi_ReadAsync(Windows::Foundation::Collections::IMapView<hstring, Windows::Storage::Streams::IBuffer> * blobsToRead, Windows::Foundation::IAsyncOperation<Windows::Gaming::XboxLive::Storage::GameSaveOperationResult> ** action) = 0;
    virtual HRESULT __stdcall abi_GetAsync(Windows::Foundation::Collections::IIterable<hstring> * blobsToRead, Windows::Foundation::IAsyncOperation<Windows::Gaming::XboxLive::Storage::GameSaveBlobGetResult> ** operation) = 0;
    virtual HRESULT __stdcall abi_SubmitPropertySetUpdatesAsync(Windows::Foundation::Collections::IPropertySet * blobsToWrite, Windows::Foundation::Collections::IIterable<hstring> * blobsToDelete, hstring displayName, Windows::Foundation::IAsyncOperation<Windows::Gaming::XboxLive::Storage::GameSaveOperationResult> ** operation) = 0;
    virtual HRESULT __stdcall abi_CreateBlobInfoQuery(hstring blobNamePrefix, Windows::Gaming::XboxLive::Storage::IGameSaveBlobInfoQuery ** query) = 0;
};

struct __declspec(uuid("b7e27300-155d-4bb4-b2ba-930306f391b5")) __declspec(novtable) IGameSaveContainerInfo : Windows::IInspectable
{
    virtual HRESULT __stdcall get_Name(hstring * value) = 0;
    virtual HRESULT __stdcall get_TotalSize(uint64_t * value) = 0;
    virtual HRESULT __stdcall get_DisplayName(hstring * value) = 0;
    virtual HRESULT __stdcall get_LastModifiedTime(Windows::Foundation::DateTime * value) = 0;
    virtual HRESULT __stdcall get_NeedsSync(bool * value) = 0;
};

struct __declspec(uuid("ffc50d74-c581-4f9d-9e39-30a10c1e4c50")) __declspec(novtable) IGameSaveContainerInfoGetResult : Windows::IInspectable
{
    virtual HRESULT __stdcall get_Status(winrt::Windows::Gaming::XboxLive::Storage::GameSaveErrorStatus * value) = 0;
    virtual HRESULT __stdcall get_Value(Windows::Foundation::Collections::IVectorView<Windows::Gaming::XboxLive::Storage::GameSaveContainerInfo> ** value) = 0;
};

struct __declspec(uuid("3c94e863-6f80-4327-9327-ffc11afd42b3")) __declspec(novtable) IGameSaveContainerInfoQuery : Windows::IInspectable
{
    virtual HRESULT __stdcall abi_GetContainerInfoAsync(Windows::Foundation::IAsyncOperation<Windows::Gaming::XboxLive::Storage::GameSaveContainerInfoGetResult> ** operation) = 0;
    virtual HRESULT __stdcall abi_GetContainerInfoWithIndexAndMaxAsync(uint32_t startIndex, uint32_t maxNumberOfItems, Windows::Foundation::IAsyncOperation<Windows::Gaming::XboxLive::Storage::GameSaveContainerInfoGetResult> ** operation) = 0;
    virtual HRESULT __stdcall abi_GetItemCountAsync(Windows::Foundation::IAsyncOperation<uint32_t> ** operation) = 0;
};

struct __declspec(uuid("cf0f1a05-24a0-4582-9a55-b1bbbb9388d8")) __declspec(novtable) IGameSaveOperationResult : Windows::IInspectable
{
    virtual HRESULT __stdcall get_Status(winrt::Windows::Gaming::XboxLive::Storage::GameSaveErrorStatus * value) = 0;
};

struct __declspec(uuid("90a60394-80fe-4211-97f8-a5de14dd95d2")) __declspec(novtable) IGameSaveProvider : Windows::IInspectable
{
    virtual HRESULT __stdcall get_User(Windows::System::IUser ** value) = 0;
    virtual HRESULT __stdcall abi_CreateContainer(hstring name, Windows::Gaming::XboxLive::Storage::IGameSaveContainer ** result) = 0;
    virtual HRESULT __stdcall abi_DeleteContainerAsync(hstring name, Windows::Foundation::IAsyncOperation<Windows::Gaming::XboxLive::Storage::GameSaveOperationResult> ** action) = 0;
    virtual HRESULT __stdcall abi_CreateContainerInfoQuery(Windows::Gaming::XboxLive::Storage::IGameSaveContainerInfoQuery ** query) = 0;
    virtual HRESULT __stdcall abi_CreateContainerInfoQueryWithName(hstring containerNamePrefix, Windows::Gaming::XboxLive::Storage::IGameSaveContainerInfoQuery ** query) = 0;
    virtual HRESULT __stdcall abi_GetRemainingBytesInQuotaAsync(Windows::Foundation::IAsyncOperation<int64_t> ** operation) = 0;
    virtual HRESULT __stdcall get_ContainersChangedSinceLastSync(Windows::Foundation::Collections::IVectorView<hstring> ** value) = 0;
};

struct __declspec(uuid("3ab90816-d393-4d65-ac16-41c3e67ab945")) __declspec(novtable) IGameSaveProviderGetResult : Windows::IInspectable
{
    virtual HRESULT __stdcall get_Status(winrt::Windows::Gaming::XboxLive::Storage::GameSaveErrorStatus * value) = 0;
    virtual HRESULT __stdcall get_Value(Windows::Gaming::XboxLive::Storage::IGameSaveProvider ** value) = 0;
};

struct __declspec(uuid("d01d3ed0-7b03-449d-8cbd-3402842a1048")) __declspec(novtable) IGameSaveProviderStatics : Windows::IInspectable
{
    virtual HRESULT __stdcall abi_GetForUserAsync(Windows::System::IUser * user, hstring serviceConfigId, Windows::Foundation::IAsyncOperation<Windows::Gaming::XboxLive::Storage::GameSaveProviderGetResult> ** operation) = 0;
    virtual HRESULT __stdcall abi_GetSyncOnDemandForUserAsync(Windows::System::IUser * user, hstring serviceConfigId, Windows::Foundation::IAsyncOperation<Windows::Gaming::XboxLive::Storage::GameSaveProviderGetResult> ** operation) = 0;
};

}

namespace ABI {

template <> struct traits<Windows::Gaming::XboxLive::Storage::GameSaveBlobGetResult> { using default_interface = Windows::Gaming::XboxLive::Storage::IGameSaveBlobGetResult; };
template <> struct traits<Windows::Gaming::XboxLive::Storage::GameSaveBlobInfo> { using default_interface = Windows::Gaming::XboxLive::Storage::IGameSaveBlobInfo; };
template <> struct traits<Windows::Gaming::XboxLive::Storage::GameSaveBlobInfoGetResult> { using default_interface = Windows::Gaming::XboxLive::Storage::IGameSaveBlobInfoGetResult; };
template <> struct traits<Windows::Gaming::XboxLive::Storage::GameSaveBlobInfoQuery> { using default_interface = Windows::Gaming::XboxLive::Storage::IGameSaveBlobInfoQuery; };
template <> struct traits<Windows::Gaming::XboxLive::Storage::GameSaveContainer> { using default_interface = Windows::Gaming::XboxLive::Storage::IGameSaveContainer; };
template <> struct traits<Windows::Gaming::XboxLive::Storage::GameSaveContainerInfo> { using default_interface = Windows::Gaming::XboxLive::Storage::IGameSaveContainerInfo; };
template <> struct traits<Windows::Gaming::XboxLive::Storage::GameSaveContainerInfoGetResult> { using default_interface = Windows::Gaming::XboxLive::Storage::IGameSaveContainerInfoGetResult; };
template <> struct traits<Windows::Gaming::XboxLive::Storage::GameSaveContainerInfoQuery> { using default_interface = Windows::Gaming::XboxLive::Storage::IGameSaveContainerInfoQuery; };
template <> struct traits<Windows::Gaming::XboxLive::Storage::GameSaveOperationResult> { using default_interface = Windows::Gaming::XboxLive::Storage::IGameSaveOperationResult; };
template <> struct traits<Windows::Gaming::XboxLive::Storage::GameSaveProvider> { using default_interface = Windows::Gaming::XboxLive::Storage::IGameSaveProvider; };
template <> struct traits<Windows::Gaming::XboxLive::Storage::GameSaveProviderGetResult> { using default_interface = Windows::Gaming::XboxLive::Storage::IGameSaveProviderGetResult; };

}

namespace Windows::Gaming::XboxLive::Storage {

template <typename T> class impl_IGameSaveBlobGetResult;
template <typename T> class impl_IGameSaveBlobInfo;
template <typename T> class impl_IGameSaveBlobInfoGetResult;
template <typename T> class impl_IGameSaveBlobInfoQuery;
template <typename T> class impl_IGameSaveContainer;
template <typename T> class impl_IGameSaveContainerInfo;
template <typename T> class impl_IGameSaveContainerInfoGetResult;
template <typename T> class impl_IGameSaveContainerInfoQuery;
template <typename T> class impl_IGameSaveOperationResult;
template <typename T> class impl_IGameSaveProvider;
template <typename T> class impl_IGameSaveProviderGetResult;
template <typename T> class impl_IGameSaveProviderStatics;

}

namespace impl {

template <> struct traits<Windows::Gaming::XboxLive::Storage::IGameSaveBlobGetResult>
{
    using abi = ABI::Windows::Gaming::XboxLive::Storage::IGameSaveBlobGetResult;
    template <typename D> using consume = Windows::Gaming::XboxLive::Storage::impl_IGameSaveBlobGetResult<D>;
};

template <> struct traits<Windows::Gaming::XboxLive::Storage::IGameSaveBlobInfo>
{
    using abi = ABI::Windows::Gaming::XboxLive::Storage::IGameSaveBlobInfo;
    template <typename D> using consume = Windows::Gaming::XboxLive::Storage::impl_IGameSaveBlobInfo<D>;
};

template <> struct traits<Windows::Gaming::XboxLive::Storage::IGameSaveBlobInfoGetResult>
{
    using abi = ABI::Windows::Gaming::XboxLive::Storage::IGameSaveBlobInfoGetResult;
    template <typename D> using consume = Windows::Gaming::XboxLive::Storage::impl_IGameSaveBlobInfoGetResult<D>;
};

template <> struct traits<Windows::Gaming::XboxLive::Storage::IGameSaveBlobInfoQuery>
{
    using abi = ABI::Windows::Gaming::XboxLive::Storage::IGameSaveBlobInfoQuery;
    template <typename D> using consume = Windows::Gaming::XboxLive::Storage::impl_IGameSaveBlobInfoQuery<D>;
};

template <> struct traits<Windows::Gaming::XboxLive::Storage::IGameSaveContainer>
{
    using abi = ABI::Windows::Gaming::XboxLive::Storage::IGameSaveContainer;
    template <typename D> using consume = Windows::Gaming::XboxLive::Storage::impl_IGameSaveContainer<D>;
};

template <> struct traits<Windows::Gaming::XboxLive::Storage::IGameSaveContainerInfo>
{
    using abi = ABI::Windows::Gaming::XboxLive::Storage::IGameSaveContainerInfo;
    template <typename D> using consume = Windows::Gaming::XboxLive::Storage::impl_IGameSaveContainerInfo<D>;
};

template <> struct traits<Windows::Gaming::XboxLive::Storage::IGameSaveContainerInfoGetResult>
{
    using abi = ABI::Windows::Gaming::XboxLive::Storage::IGameSaveContainerInfoGetResult;
    template <typename D> using consume = Windows::Gaming::XboxLive::Storage::impl_IGameSaveContainerInfoGetResult<D>;
};

template <> struct traits<Windows::Gaming::XboxLive::Storage::IGameSaveContainerInfoQuery>
{
    using abi = ABI::Windows::Gaming::XboxLive::Storage::IGameSaveContainerInfoQuery;
    template <typename D> using consume = Windows::Gaming::XboxLive::Storage::impl_IGameSaveContainerInfoQuery<D>;
};

template <> struct traits<Windows::Gaming::XboxLive::Storage::IGameSaveOperationResult>
{
    using abi = ABI::Windows::Gaming::XboxLive::Storage::IGameSaveOperationResult;
    template <typename D> using consume = Windows::Gaming::XboxLive::Storage::impl_IGameSaveOperationResult<D>;
};

template <> struct traits<Windows::Gaming::XboxLive::Storage::IGameSaveProvider>
{
    using abi = ABI::Windows::Gaming::XboxLive::Storage::IGameSaveProvider;
    template <typename D> using consume = Windows::Gaming::XboxLive::Storage::impl_IGameSaveProvider<D>;
};

template <> struct traits<Windows::Gaming::XboxLive::Storage::IGameSaveProviderGetResult>
{
    using abi = ABI::Windows::Gaming::XboxLive::Storage::IGameSaveProviderGetResult;
    template <typename D> using consume = Windows::Gaming::XboxLive::Storage::impl_IGameSaveProviderGetResult<D>;
};

template <> struct traits<Windows::Gaming::XboxLive::Storage::IGameSaveProviderStatics>
{
    using abi = ABI::Windows::Gaming::XboxLive::Storage::IGameSaveProviderStatics;
    template <typename D> using consume = Windows::Gaming::XboxLive::Storage::impl_IGameSaveProviderStatics<D>;
};

template <> struct traits<Windows::Gaming::XboxLive::Storage::GameSaveBlobGetResult>
{
    using abi = ABI::Windows::Gaming::XboxLive::Storage::GameSaveBlobGetResult;
    using default_interface = Windows::Gaming::XboxLive::Storage::IGameSaveBlobGetResult;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Gaming.XboxLive.Storage.GameSaveBlobGetResult"; }
};

template <> struct traits<Windows::Gaming::XboxLive::Storage::GameSaveBlobInfo>
{
    using abi = ABI::Windows::Gaming::XboxLive::Storage::GameSaveBlobInfo;
    using default_interface = Windows::Gaming::XboxLive::Storage::IGameSaveBlobInfo;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Gaming.XboxLive.Storage.GameSaveBlobInfo"; }
};

template <> struct traits<Windows::Gaming::XboxLive::Storage::GameSaveBlobInfoGetResult>
{
    using abi = ABI::Windows::Gaming::XboxLive::Storage::GameSaveBlobInfoGetResult;
    using default_interface = Windows::Gaming::XboxLive::Storage::IGameSaveBlobInfoGetResult;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Gaming.XboxLive.Storage.GameSaveBlobInfoGetResult"; }
};

template <> struct traits<Windows::Gaming::XboxLive::Storage::GameSaveBlobInfoQuery>
{
    using abi = ABI::Windows::Gaming::XboxLive::Storage::GameSaveBlobInfoQuery;
    using default_interface = Windows::Gaming::XboxLive::Storage::IGameSaveBlobInfoQuery;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Gaming.XboxLive.Storage.GameSaveBlobInfoQuery"; }
};

template <> struct traits<Windows::Gaming::XboxLive::Storage::GameSaveContainer>
{
    using abi = ABI::Windows::Gaming::XboxLive::Storage::GameSaveContainer;
    using default_interface = Windows::Gaming::XboxLive::Storage::IGameSaveContainer;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Gaming.XboxLive.Storage.GameSaveContainer"; }
};

template <> struct traits<Windows::Gaming::XboxLive::Storage::GameSaveContainerInfo>
{
    using abi = ABI::Windows::Gaming::XboxLive::Storage::GameSaveContainerInfo;
    using default_interface = Windows::Gaming::XboxLive::Storage::IGameSaveContainerInfo;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Gaming.XboxLive.Storage.GameSaveContainerInfo"; }
};

template <> struct traits<Windows::Gaming::XboxLive::Storage::GameSaveContainerInfoGetResult>
{
    using abi = ABI::Windows::Gaming::XboxLive::Storage::GameSaveContainerInfoGetResult;
    using default_interface = Windows::Gaming::XboxLive::Storage::IGameSaveContainerInfoGetResult;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Gaming.XboxLive.Storage.GameSaveContainerInfoGetResult"; }
};

template <> struct traits<Windows::Gaming::XboxLive::Storage::GameSaveContainerInfoQuery>
{
    using abi = ABI::Windows::Gaming::XboxLive::Storage::GameSaveContainerInfoQuery;
    using default_interface = Windows::Gaming::XboxLive::Storage::IGameSaveContainerInfoQuery;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Gaming.XboxLive.Storage.GameSaveContainerInfoQuery"; }
};

template <> struct traits<Windows::Gaming::XboxLive::Storage::GameSaveOperationResult>
{
    using abi = ABI::Windows::Gaming::XboxLive::Storage::GameSaveOperationResult;
    using default_interface = Windows::Gaming::XboxLive::Storage::IGameSaveOperationResult;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Gaming.XboxLive.Storage.GameSaveOperationResult"; }
};

template <> struct traits<Windows::Gaming::XboxLive::Storage::GameSaveProvider>
{
    using abi = ABI::Windows::Gaming::XboxLive::Storage::GameSaveProvider;
    using default_interface = Windows::Gaming::XboxLive::Storage::IGameSaveProvider;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Gaming.XboxLive.Storage.GameSaveProvider"; }
};

template <> struct traits<Windows::Gaming::XboxLive::Storage::GameSaveProviderGetResult>
{
    using abi = ABI::Windows::Gaming::XboxLive::Storage::GameSaveProviderGetResult;
    using default_interface = Windows::Gaming::XboxLive::Storage::IGameSaveProviderGetResult;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Gaming.XboxLive.Storage.GameSaveProviderGetResult"; }
};

}

}
