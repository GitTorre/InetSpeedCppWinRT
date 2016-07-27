// C++ for the Windows Runtime v1.29
// Copyright (c) 2016 Microsoft Corporation

#pragma once

#include "internal\Windows.System.3.h"
#include "internal\Windows.Foundation.3.h"
#include "internal\Windows.Foundation.Collections.3.h"
#include "internal\Windows.Gaming.XboxLive.Storage.3.h"

WINRT_EXPORT namespace winrt {

namespace impl {

template <typename D>
struct produce<D, Windows::Gaming::XboxLive::Storage::IGameSaveBlobGetResult> : produce_base<D, Windows::Gaming::XboxLive::Storage::IGameSaveBlobGetResult>
{
    HRESULT __stdcall get_Status(Windows::Gaming::XboxLive::Storage::GameSaveErrorStatus * value) noexcept override
    {
        try
        {
            *value = detach(shim().Status());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Value(abi_arg_out<Windows::Foundation::Collections::IMapView<hstring, Windows::Storage::Streams::IBuffer>> value) noexcept override
    {
        try
        {
            *value = detach(shim().Value());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Gaming::XboxLive::Storage::IGameSaveBlobInfo> : produce_base<D, Windows::Gaming::XboxLive::Storage::IGameSaveBlobInfo>
{
    HRESULT __stdcall get_Name(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(shim().Name());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Size(uint32_t * value) noexcept override
    {
        try
        {
            *value = detach(shim().Size());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Gaming::XboxLive::Storage::IGameSaveBlobInfoGetResult> : produce_base<D, Windows::Gaming::XboxLive::Storage::IGameSaveBlobInfoGetResult>
{
    HRESULT __stdcall get_Status(Windows::Gaming::XboxLive::Storage::GameSaveErrorStatus * value) noexcept override
    {
        try
        {
            *value = detach(shim().Status());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Value(abi_arg_out<Windows::Foundation::Collections::IVectorView<Windows::Gaming::XboxLive::Storage::GameSaveBlobInfo>> value) noexcept override
    {
        try
        {
            *value = detach(shim().Value());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Gaming::XboxLive::Storage::IGameSaveBlobInfoQuery> : produce_base<D, Windows::Gaming::XboxLive::Storage::IGameSaveBlobInfoQuery>
{
    HRESULT __stdcall abi_GetBlobInfoAsync(abi_arg_out<Windows::Foundation::IAsyncOperation<Windows::Gaming::XboxLive::Storage::GameSaveBlobInfoGetResult>> operation) noexcept override
    {
        try
        {
            *operation = detach(shim().GetBlobInfoAsync());
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_GetBlobInfoWithIndexAndMaxAsync(uint32_t startIndex, uint32_t maxNumberOfItems, abi_arg_out<Windows::Foundation::IAsyncOperation<Windows::Gaming::XboxLive::Storage::GameSaveBlobInfoGetResult>> operation) noexcept override
    {
        try
        {
            *operation = detach(shim().GetBlobInfoAsync(startIndex, maxNumberOfItems));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_GetItemCountAsync(abi_arg_out<Windows::Foundation::IAsyncOperation<uint32_t>> operation) noexcept override
    {
        try
        {
            *operation = detach(shim().GetItemCountAsync());
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Gaming::XboxLive::Storage::IGameSaveContainer> : produce_base<D, Windows::Gaming::XboxLive::Storage::IGameSaveContainer>
{
    HRESULT __stdcall get_Name(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(shim().Name());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Provider(abi_arg_out<Windows::Gaming::XboxLive::Storage::IGameSaveProvider> value) noexcept override
    {
        try
        {
            *value = detach(shim().Provider());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_SubmitUpdatesAsync(abi_arg_in<Windows::Foundation::Collections::IMapView<hstring, Windows::Storage::Streams::IBuffer>> blobsToWrite, abi_arg_in<Windows::Foundation::Collections::IIterable<hstring>> blobsToDelete, abi_arg_in<hstring> displayName, abi_arg_out<Windows::Foundation::IAsyncOperation<Windows::Gaming::XboxLive::Storage::GameSaveOperationResult>> operation) noexcept override
    {
        try
        {
            *operation = detach(shim().SubmitUpdatesAsync(*reinterpret_cast<const Windows::Foundation::Collections::IMapView<hstring, Windows::Storage::Streams::IBuffer> *>(&blobsToWrite), *reinterpret_cast<const Windows::Foundation::Collections::IIterable<hstring> *>(&blobsToDelete), *reinterpret_cast<const hstring *>(&displayName)));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_ReadAsync(abi_arg_in<Windows::Foundation::Collections::IMapView<hstring, Windows::Storage::Streams::IBuffer>> blobsToRead, abi_arg_out<Windows::Foundation::IAsyncOperation<Windows::Gaming::XboxLive::Storage::GameSaveOperationResult>> action) noexcept override
    {
        try
        {
            *action = detach(shim().ReadAsync(*reinterpret_cast<const Windows::Foundation::Collections::IMapView<hstring, Windows::Storage::Streams::IBuffer> *>(&blobsToRead)));
            return S_OK;
        }
        catch (...)
        {
            *action = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_GetAsync(abi_arg_in<Windows::Foundation::Collections::IIterable<hstring>> blobsToRead, abi_arg_out<Windows::Foundation::IAsyncOperation<Windows::Gaming::XboxLive::Storage::GameSaveBlobGetResult>> operation) noexcept override
    {
        try
        {
            *operation = detach(shim().GetAsync(*reinterpret_cast<const Windows::Foundation::Collections::IIterable<hstring> *>(&blobsToRead)));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_SubmitPropertySetUpdatesAsync(abi_arg_in<Windows::Foundation::Collections::IPropertySet> blobsToWrite, abi_arg_in<Windows::Foundation::Collections::IIterable<hstring>> blobsToDelete, abi_arg_in<hstring> displayName, abi_arg_out<Windows::Foundation::IAsyncOperation<Windows::Gaming::XboxLive::Storage::GameSaveOperationResult>> operation) noexcept override
    {
        try
        {
            *operation = detach(shim().SubmitPropertySetUpdatesAsync(*reinterpret_cast<const Windows::Foundation::Collections::IPropertySet *>(&blobsToWrite), *reinterpret_cast<const Windows::Foundation::Collections::IIterable<hstring> *>(&blobsToDelete), *reinterpret_cast<const hstring *>(&displayName)));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_CreateBlobInfoQuery(abi_arg_in<hstring> blobNamePrefix, abi_arg_out<Windows::Gaming::XboxLive::Storage::IGameSaveBlobInfoQuery> query) noexcept override
    {
        try
        {
            *query = detach(shim().CreateBlobInfoQuery(*reinterpret_cast<const hstring *>(&blobNamePrefix)));
            return S_OK;
        }
        catch (...)
        {
            *query = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Gaming::XboxLive::Storage::IGameSaveContainerInfo> : produce_base<D, Windows::Gaming::XboxLive::Storage::IGameSaveContainerInfo>
{
    HRESULT __stdcall get_Name(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(shim().Name());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_TotalSize(uint64_t * value) noexcept override
    {
        try
        {
            *value = detach(shim().TotalSize());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_DisplayName(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(shim().DisplayName());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_LastModifiedTime(abi_arg_out<Windows::Foundation::DateTime> value) noexcept override
    {
        try
        {
            *value = detach(shim().LastModifiedTime());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_NeedsSync(bool * value) noexcept override
    {
        try
        {
            *value = detach(shim().NeedsSync());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Gaming::XboxLive::Storage::IGameSaveContainerInfoGetResult> : produce_base<D, Windows::Gaming::XboxLive::Storage::IGameSaveContainerInfoGetResult>
{
    HRESULT __stdcall get_Status(Windows::Gaming::XboxLive::Storage::GameSaveErrorStatus * value) noexcept override
    {
        try
        {
            *value = detach(shim().Status());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Value(abi_arg_out<Windows::Foundation::Collections::IVectorView<Windows::Gaming::XboxLive::Storage::GameSaveContainerInfo>> value) noexcept override
    {
        try
        {
            *value = detach(shim().Value());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Gaming::XboxLive::Storage::IGameSaveContainerInfoQuery> : produce_base<D, Windows::Gaming::XboxLive::Storage::IGameSaveContainerInfoQuery>
{
    HRESULT __stdcall abi_GetContainerInfoAsync(abi_arg_out<Windows::Foundation::IAsyncOperation<Windows::Gaming::XboxLive::Storage::GameSaveContainerInfoGetResult>> operation) noexcept override
    {
        try
        {
            *operation = detach(shim().GetContainerInfoAsync());
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_GetContainerInfoWithIndexAndMaxAsync(uint32_t startIndex, uint32_t maxNumberOfItems, abi_arg_out<Windows::Foundation::IAsyncOperation<Windows::Gaming::XboxLive::Storage::GameSaveContainerInfoGetResult>> operation) noexcept override
    {
        try
        {
            *operation = detach(shim().GetContainerInfoAsync(startIndex, maxNumberOfItems));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_GetItemCountAsync(abi_arg_out<Windows::Foundation::IAsyncOperation<uint32_t>> operation) noexcept override
    {
        try
        {
            *operation = detach(shim().GetItemCountAsync());
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Gaming::XboxLive::Storage::IGameSaveOperationResult> : produce_base<D, Windows::Gaming::XboxLive::Storage::IGameSaveOperationResult>
{
    HRESULT __stdcall get_Status(Windows::Gaming::XboxLive::Storage::GameSaveErrorStatus * value) noexcept override
    {
        try
        {
            *value = detach(shim().Status());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Gaming::XboxLive::Storage::IGameSaveProvider> : produce_base<D, Windows::Gaming::XboxLive::Storage::IGameSaveProvider>
{
    HRESULT __stdcall get_User(abi_arg_out<Windows::System::IUser> value) noexcept override
    {
        try
        {
            *value = detach(shim().User());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_CreateContainer(abi_arg_in<hstring> name, abi_arg_out<Windows::Gaming::XboxLive::Storage::IGameSaveContainer> result) noexcept override
    {
        try
        {
            *result = detach(shim().CreateContainer(*reinterpret_cast<const hstring *>(&name)));
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_DeleteContainerAsync(abi_arg_in<hstring> name, abi_arg_out<Windows::Foundation::IAsyncOperation<Windows::Gaming::XboxLive::Storage::GameSaveOperationResult>> action) noexcept override
    {
        try
        {
            *action = detach(shim().DeleteContainerAsync(*reinterpret_cast<const hstring *>(&name)));
            return S_OK;
        }
        catch (...)
        {
            *action = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_CreateContainerInfoQuery(abi_arg_out<Windows::Gaming::XboxLive::Storage::IGameSaveContainerInfoQuery> query) noexcept override
    {
        try
        {
            *query = detach(shim().CreateContainerInfoQuery());
            return S_OK;
        }
        catch (...)
        {
            *query = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_CreateContainerInfoQueryWithName(abi_arg_in<hstring> containerNamePrefix, abi_arg_out<Windows::Gaming::XboxLive::Storage::IGameSaveContainerInfoQuery> query) noexcept override
    {
        try
        {
            *query = detach(shim().CreateContainerInfoQuery(*reinterpret_cast<const hstring *>(&containerNamePrefix)));
            return S_OK;
        }
        catch (...)
        {
            *query = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_GetRemainingBytesInQuotaAsync(abi_arg_out<Windows::Foundation::IAsyncOperation<int64_t>> operation) noexcept override
    {
        try
        {
            *operation = detach(shim().GetRemainingBytesInQuotaAsync());
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ContainersChangedSinceLastSync(abi_arg_out<Windows::Foundation::Collections::IVectorView<hstring>> value) noexcept override
    {
        try
        {
            *value = detach(shim().ContainersChangedSinceLastSync());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Gaming::XboxLive::Storage::IGameSaveProviderGetResult> : produce_base<D, Windows::Gaming::XboxLive::Storage::IGameSaveProviderGetResult>
{
    HRESULT __stdcall get_Status(Windows::Gaming::XboxLive::Storage::GameSaveErrorStatus * value) noexcept override
    {
        try
        {
            *value = detach(shim().Status());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Value(abi_arg_out<Windows::Gaming::XboxLive::Storage::IGameSaveProvider> value) noexcept override
    {
        try
        {
            *value = detach(shim().Value());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Gaming::XboxLive::Storage::IGameSaveProviderStatics> : produce_base<D, Windows::Gaming::XboxLive::Storage::IGameSaveProviderStatics>
{
    HRESULT __stdcall abi_GetForUserAsync(abi_arg_in<Windows::System::IUser> user, abi_arg_in<hstring> serviceConfigId, abi_arg_out<Windows::Foundation::IAsyncOperation<Windows::Gaming::XboxLive::Storage::GameSaveProviderGetResult>> operation) noexcept override
    {
        try
        {
            *operation = detach(shim().GetForUserAsync(*reinterpret_cast<const Windows::System::User *>(&user), *reinterpret_cast<const hstring *>(&serviceConfigId)));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_GetSyncOnDemandForUserAsync(abi_arg_in<Windows::System::IUser> user, abi_arg_in<hstring> serviceConfigId, abi_arg_out<Windows::Foundation::IAsyncOperation<Windows::Gaming::XboxLive::Storage::GameSaveProviderGetResult>> operation) noexcept override
    {
        try
        {
            *operation = detach(shim().GetSyncOnDemandForUserAsync(*reinterpret_cast<const Windows::System::User *>(&user), *reinterpret_cast<const hstring *>(&serviceConfigId)));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }
};

}

namespace Windows::Gaming::XboxLive::Storage {

template <typename D> Windows::System::User impl_IGameSaveProvider<D>::User() const
{
    Windows::System::User value { nullptr };
    check_hresult(shim()->get_User(put(value)));
    return value;
}

template <typename D> Windows::Gaming::XboxLive::Storage::GameSaveContainer impl_IGameSaveProvider<D>::CreateContainer(hstring_ref name) const
{
    Windows::Gaming::XboxLive::Storage::GameSaveContainer result { nullptr };
    check_hresult(shim()->abi_CreateContainer(get(name), put(result)));
    return result;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Gaming::XboxLive::Storage::GameSaveOperationResult> impl_IGameSaveProvider<D>::DeleteContainerAsync(hstring_ref name) const
{
    Windows::Foundation::IAsyncOperation<Windows::Gaming::XboxLive::Storage::GameSaveOperationResult> action;
    check_hresult(shim()->abi_DeleteContainerAsync(get(name), put(action)));
    return action;
}

template <typename D> Windows::Gaming::XboxLive::Storage::GameSaveContainerInfoQuery impl_IGameSaveProvider<D>::CreateContainerInfoQuery() const
{
    Windows::Gaming::XboxLive::Storage::GameSaveContainerInfoQuery query { nullptr };
    check_hresult(shim()->abi_CreateContainerInfoQuery(put(query)));
    return query;
}

template <typename D> Windows::Gaming::XboxLive::Storage::GameSaveContainerInfoQuery impl_IGameSaveProvider<D>::CreateContainerInfoQuery(hstring_ref containerNamePrefix) const
{
    Windows::Gaming::XboxLive::Storage::GameSaveContainerInfoQuery query { nullptr };
    check_hresult(shim()->abi_CreateContainerInfoQueryWithName(get(containerNamePrefix), put(query)));
    return query;
}

template <typename D> Windows::Foundation::IAsyncOperation<int64_t> impl_IGameSaveProvider<D>::GetRemainingBytesInQuotaAsync() const
{
    Windows::Foundation::IAsyncOperation<int64_t> operation;
    check_hresult(shim()->abi_GetRemainingBytesInQuotaAsync(put(operation)));
    return operation;
}

template <typename D> Windows::Foundation::Collections::IVectorView<hstring> impl_IGameSaveProvider<D>::ContainersChangedSinceLastSync() const
{
    Windows::Foundation::Collections::IVectorView<hstring> value;
    check_hresult(shim()->get_ContainersChangedSinceLastSync(put(value)));
    return value;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Gaming::XboxLive::Storage::GameSaveProviderGetResult> impl_IGameSaveProviderStatics<D>::GetForUserAsync(const Windows::System::User & user, hstring_ref serviceConfigId) const
{
    Windows::Foundation::IAsyncOperation<Windows::Gaming::XboxLive::Storage::GameSaveProviderGetResult> operation;
    check_hresult(shim()->abi_GetForUserAsync(get(user), get(serviceConfigId), put(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Gaming::XboxLive::Storage::GameSaveProviderGetResult> impl_IGameSaveProviderStatics<D>::GetSyncOnDemandForUserAsync(const Windows::System::User & user, hstring_ref serviceConfigId) const
{
    Windows::Foundation::IAsyncOperation<Windows::Gaming::XboxLive::Storage::GameSaveProviderGetResult> operation;
    check_hresult(shim()->abi_GetSyncOnDemandForUserAsync(get(user), get(serviceConfigId), put(operation)));
    return operation;
}

template <typename D> Windows::Gaming::XboxLive::Storage::GameSaveErrorStatus impl_IGameSaveProviderGetResult<D>::Status() const
{
    Windows::Gaming::XboxLive::Storage::GameSaveErrorStatus value {};
    check_hresult(shim()->get_Status(&value));
    return value;
}

template <typename D> Windows::Gaming::XboxLive::Storage::GameSaveProvider impl_IGameSaveProviderGetResult<D>::Value() const
{
    Windows::Gaming::XboxLive::Storage::GameSaveProvider value { nullptr };
    check_hresult(shim()->get_Value(put(value)));
    return value;
}

template <typename D> hstring impl_IGameSaveContainer<D>::Name() const
{
    hstring value;
    check_hresult(shim()->get_Name(put(value)));
    return value;
}

template <typename D> Windows::Gaming::XboxLive::Storage::GameSaveProvider impl_IGameSaveContainer<D>::Provider() const
{
    Windows::Gaming::XboxLive::Storage::GameSaveProvider value { nullptr };
    check_hresult(shim()->get_Provider(put(value)));
    return value;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Gaming::XboxLive::Storage::GameSaveOperationResult> impl_IGameSaveContainer<D>::SubmitUpdatesAsync(const Windows::Foundation::Collections::IMapView<hstring, Windows::Storage::Streams::IBuffer> & blobsToWrite, const Windows::Foundation::Collections::IIterable<hstring> & blobsToDelete, hstring_ref displayName) const
{
    Windows::Foundation::IAsyncOperation<Windows::Gaming::XboxLive::Storage::GameSaveOperationResult> operation;
    check_hresult(shim()->abi_SubmitUpdatesAsync(get(blobsToWrite), get(blobsToDelete), get(displayName), put(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Gaming::XboxLive::Storage::GameSaveOperationResult> impl_IGameSaveContainer<D>::ReadAsync(const Windows::Foundation::Collections::IMapView<hstring, Windows::Storage::Streams::IBuffer> & blobsToRead) const
{
    Windows::Foundation::IAsyncOperation<Windows::Gaming::XboxLive::Storage::GameSaveOperationResult> action;
    check_hresult(shim()->abi_ReadAsync(get(blobsToRead), put(action)));
    return action;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Gaming::XboxLive::Storage::GameSaveBlobGetResult> impl_IGameSaveContainer<D>::GetAsync(const Windows::Foundation::Collections::IIterable<hstring> & blobsToRead) const
{
    Windows::Foundation::IAsyncOperation<Windows::Gaming::XboxLive::Storage::GameSaveBlobGetResult> operation;
    check_hresult(shim()->abi_GetAsync(get(blobsToRead), put(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Gaming::XboxLive::Storage::GameSaveOperationResult> impl_IGameSaveContainer<D>::SubmitPropertySetUpdatesAsync(const Windows::Foundation::Collections::IPropertySet & blobsToWrite, const Windows::Foundation::Collections::IIterable<hstring> & blobsToDelete, hstring_ref displayName) const
{
    Windows::Foundation::IAsyncOperation<Windows::Gaming::XboxLive::Storage::GameSaveOperationResult> operation;
    check_hresult(shim()->abi_SubmitPropertySetUpdatesAsync(get(blobsToWrite), get(blobsToDelete), get(displayName), put(operation)));
    return operation;
}

template <typename D> Windows::Gaming::XboxLive::Storage::GameSaveBlobInfoQuery impl_IGameSaveContainer<D>::CreateBlobInfoQuery(hstring_ref blobNamePrefix) const
{
    Windows::Gaming::XboxLive::Storage::GameSaveBlobInfoQuery query { nullptr };
    check_hresult(shim()->abi_CreateBlobInfoQuery(get(blobNamePrefix), put(query)));
    return query;
}

template <typename D> Windows::Gaming::XboxLive::Storage::GameSaveErrorStatus impl_IGameSaveBlobGetResult<D>::Status() const
{
    Windows::Gaming::XboxLive::Storage::GameSaveErrorStatus value {};
    check_hresult(shim()->get_Status(&value));
    return value;
}

template <typename D> Windows::Foundation::Collections::IMapView<hstring, Windows::Storage::Streams::IBuffer> impl_IGameSaveBlobGetResult<D>::Value() const
{
    Windows::Foundation::Collections::IMapView<hstring, Windows::Storage::Streams::IBuffer> value;
    check_hresult(shim()->get_Value(put(value)));
    return value;
}

template <typename D> hstring impl_IGameSaveContainerInfo<D>::Name() const
{
    hstring value;
    check_hresult(shim()->get_Name(put(value)));
    return value;
}

template <typename D> uint64_t impl_IGameSaveContainerInfo<D>::TotalSize() const
{
    uint64_t value {};
    check_hresult(shim()->get_TotalSize(&value));
    return value;
}

template <typename D> hstring impl_IGameSaveContainerInfo<D>::DisplayName() const
{
    hstring value;
    check_hresult(shim()->get_DisplayName(put(value)));
    return value;
}

template <typename D> Windows::Foundation::DateTime impl_IGameSaveContainerInfo<D>::LastModifiedTime() const
{
    Windows::Foundation::DateTime value {};
    check_hresult(shim()->get_LastModifiedTime(put(value)));
    return value;
}

template <typename D> bool impl_IGameSaveContainerInfo<D>::NeedsSync() const
{
    bool value {};
    check_hresult(shim()->get_NeedsSync(&value));
    return value;
}

template <typename D> hstring impl_IGameSaveBlobInfo<D>::Name() const
{
    hstring value;
    check_hresult(shim()->get_Name(put(value)));
    return value;
}

template <typename D> uint32_t impl_IGameSaveBlobInfo<D>::Size() const
{
    uint32_t value {};
    check_hresult(shim()->get_Size(&value));
    return value;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Gaming::XboxLive::Storage::GameSaveContainerInfoGetResult> impl_IGameSaveContainerInfoQuery<D>::GetContainerInfoAsync() const
{
    Windows::Foundation::IAsyncOperation<Windows::Gaming::XboxLive::Storage::GameSaveContainerInfoGetResult> operation;
    check_hresult(shim()->abi_GetContainerInfoAsync(put(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Gaming::XboxLive::Storage::GameSaveContainerInfoGetResult> impl_IGameSaveContainerInfoQuery<D>::GetContainerInfoAsync(uint32_t startIndex, uint32_t maxNumberOfItems) const
{
    Windows::Foundation::IAsyncOperation<Windows::Gaming::XboxLive::Storage::GameSaveContainerInfoGetResult> operation;
    check_hresult(shim()->abi_GetContainerInfoWithIndexAndMaxAsync(startIndex, maxNumberOfItems, put(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperation<uint32_t> impl_IGameSaveContainerInfoQuery<D>::GetItemCountAsync() const
{
    Windows::Foundation::IAsyncOperation<uint32_t> operation;
    check_hresult(shim()->abi_GetItemCountAsync(put(operation)));
    return operation;
}

template <typename D> Windows::Gaming::XboxLive::Storage::GameSaveErrorStatus impl_IGameSaveContainerInfoGetResult<D>::Status() const
{
    Windows::Gaming::XboxLive::Storage::GameSaveErrorStatus value {};
    check_hresult(shim()->get_Status(&value));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVectorView<Windows::Gaming::XboxLive::Storage::GameSaveContainerInfo> impl_IGameSaveContainerInfoGetResult<D>::Value() const
{
    Windows::Foundation::Collections::IVectorView<Windows::Gaming::XboxLive::Storage::GameSaveContainerInfo> value;
    check_hresult(shim()->get_Value(put(value)));
    return value;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Gaming::XboxLive::Storage::GameSaveBlobInfoGetResult> impl_IGameSaveBlobInfoQuery<D>::GetBlobInfoAsync() const
{
    Windows::Foundation::IAsyncOperation<Windows::Gaming::XboxLive::Storage::GameSaveBlobInfoGetResult> operation;
    check_hresult(shim()->abi_GetBlobInfoAsync(put(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Gaming::XboxLive::Storage::GameSaveBlobInfoGetResult> impl_IGameSaveBlobInfoQuery<D>::GetBlobInfoAsync(uint32_t startIndex, uint32_t maxNumberOfItems) const
{
    Windows::Foundation::IAsyncOperation<Windows::Gaming::XboxLive::Storage::GameSaveBlobInfoGetResult> operation;
    check_hresult(shim()->abi_GetBlobInfoWithIndexAndMaxAsync(startIndex, maxNumberOfItems, put(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperation<uint32_t> impl_IGameSaveBlobInfoQuery<D>::GetItemCountAsync() const
{
    Windows::Foundation::IAsyncOperation<uint32_t> operation;
    check_hresult(shim()->abi_GetItemCountAsync(put(operation)));
    return operation;
}

template <typename D> Windows::Gaming::XboxLive::Storage::GameSaveErrorStatus impl_IGameSaveBlobInfoGetResult<D>::Status() const
{
    Windows::Gaming::XboxLive::Storage::GameSaveErrorStatus value {};
    check_hresult(shim()->get_Status(&value));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVectorView<Windows::Gaming::XboxLive::Storage::GameSaveBlobInfo> impl_IGameSaveBlobInfoGetResult<D>::Value() const
{
    Windows::Foundation::Collections::IVectorView<Windows::Gaming::XboxLive::Storage::GameSaveBlobInfo> value;
    check_hresult(shim()->get_Value(put(value)));
    return value;
}

template <typename D> Windows::Gaming::XboxLive::Storage::GameSaveErrorStatus impl_IGameSaveOperationResult<D>::Status() const
{
    Windows::Gaming::XboxLive::Storage::GameSaveErrorStatus value {};
    check_hresult(shim()->get_Status(&value));
    return value;
}

inline Windows::Foundation::IAsyncOperation<Windows::Gaming::XboxLive::Storage::GameSaveProviderGetResult> GameSaveProvider::GetForUserAsync(const Windows::System::User & user, hstring_ref serviceConfigId)
{
    return get_activation_factory<GameSaveProvider, IGameSaveProviderStatics>().GetForUserAsync(user, serviceConfigId);
}

inline Windows::Foundation::IAsyncOperation<Windows::Gaming::XboxLive::Storage::GameSaveProviderGetResult> GameSaveProvider::GetSyncOnDemandForUserAsync(const Windows::System::User & user, hstring_ref serviceConfigId)
{
    return get_activation_factory<GameSaveProvider, IGameSaveProviderStatics>().GetSyncOnDemandForUserAsync(user, serviceConfigId);
}

}

}
