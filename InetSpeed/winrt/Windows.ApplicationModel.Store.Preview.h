// C++ for the Windows Runtime v1.29
// Copyright (c) 2016 Microsoft Corporation

#pragma once

#include "internal\Windows.Foundation.Collections.3.h"
#include "internal\Windows.Foundation.3.h"
#include "internal\Windows.System.3.h"
#include "internal\Windows.ApplicationModel.Store.Preview.3.h"
#include "Windows.ApplicationModel.Store.h"

WINRT_EXPORT namespace winrt {

namespace impl {

template <typename D>
struct produce<D, Windows::ApplicationModel::Store::Preview::IStoreConfigurationStatics> : produce_base<D, Windows::ApplicationModel::Store::Preview::IStoreConfigurationStatics>
{
    HRESULT __stdcall abi_SetSystemConfiguration(abi_arg_in<hstring> catalogHardwareManufacturerId, abi_arg_in<hstring> catalogStoreContentModifierId, abi_arg_in<Windows::Foundation::DateTime> systemConfigurationExpiration, abi_arg_in<hstring> catalogHardwareDescriptor) noexcept override
    {
        try
        {
            shim().SetSystemConfiguration(*reinterpret_cast<const hstring *>(&catalogHardwareManufacturerId), *reinterpret_cast<const hstring *>(&catalogStoreContentModifierId), *reinterpret_cast<const Windows::Foundation::DateTime *>(&systemConfigurationExpiration), *reinterpret_cast<const hstring *>(&catalogHardwareDescriptor));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_SetMobileOperatorConfiguration(abi_arg_in<hstring> mobileOperatorId, uint32_t appDownloadLimitInMegabytes, uint32_t updateDownloadLimitInMegabytes) noexcept override
    {
        try
        {
            shim().SetMobileOperatorConfiguration(*reinterpret_cast<const hstring *>(&mobileOperatorId), appDownloadLimitInMegabytes, updateDownloadLimitInMegabytes);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_SetStoreWebAccountId(abi_arg_in<hstring> webAccountId) noexcept override
    {
        try
        {
            shim().SetStoreWebAccountId(*reinterpret_cast<const hstring *>(&webAccountId));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_IsStoreWebAccountId(abi_arg_in<hstring> webAccountId, bool * value) noexcept override
    {
        try
        {
            *value = detach(shim().IsStoreWebAccountId(*reinterpret_cast<const hstring *>(&webAccountId)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_HardwareManufacturerInfo(abi_arg_out<Windows::ApplicationModel::Store::Preview::IStoreHardwareManufacturerInfo> value) noexcept override
    {
        try
        {
            *value = detach(shim().HardwareManufacturerInfo());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_FilterUnsupportedSystemFeaturesAsync(abi_arg_in<Windows::Foundation::Collections::IIterable<winrt::Windows::ApplicationModel::Store::Preview::StoreSystemFeature>> systemFeatures, abi_arg_out<Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<winrt::Windows::ApplicationModel::Store::Preview::StoreSystemFeature>>> operation) noexcept override
    {
        try
        {
            *operation = detach(shim().FilterUnsupportedSystemFeaturesAsync(*reinterpret_cast<const Windows::Foundation::Collections::IIterable<winrt::Windows::ApplicationModel::Store::Preview::StoreSystemFeature> *>(&systemFeatures)));
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
struct produce<D, Windows::ApplicationModel::Store::Preview::IStoreConfigurationStatics2> : produce_base<D, Windows::ApplicationModel::Store::Preview::IStoreConfigurationStatics2>
{
    HRESULT __stdcall get_PurchasePromptingPolicy(abi_arg_out<Windows::Foundation::IReference<uint32_t>> value) noexcept override
    {
        try
        {
            *value = detach(shim().PurchasePromptingPolicy());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_PurchasePromptingPolicy(abi_arg_in<Windows::Foundation::IReference<uint32_t>> value) noexcept override
    {
        try
        {
            shim().PurchasePromptingPolicy(*reinterpret_cast<const Windows::Foundation::IReference<uint32_t> *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::Store::Preview::IStoreConfigurationStatics3> : produce_base<D, Windows::ApplicationModel::Store::Preview::IStoreConfigurationStatics3>
{
    HRESULT __stdcall abi_HasStoreWebAccount(bool * value) noexcept override
    {
        try
        {
            *value = detach(shim().HasStoreWebAccount());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_HasStoreWebAccountForUser(abi_arg_in<Windows::System::IUser> user, bool * value) noexcept override
    {
        try
        {
            *value = detach(shim().HasStoreWebAccountForUser(*reinterpret_cast<const Windows::System::User *>(&user)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_GetStoreLogDataAsync(Windows::ApplicationModel::Store::Preview::StoreLogOptions options, abi_arg_out<Windows::Foundation::IAsyncOperation<Windows::Storage::Streams::IRandomAccessStreamReference>> operation) noexcept override
    {
        try
        {
            *operation = detach(shim().GetStoreLogDataAsync(options));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_SetStoreWebAccountIdForUser(abi_arg_in<Windows::System::IUser> user, abi_arg_in<hstring> webAccountId) noexcept override
    {
        try
        {
            shim().SetStoreWebAccountIdForUser(*reinterpret_cast<const Windows::System::User *>(&user), *reinterpret_cast<const hstring *>(&webAccountId));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_IsStoreWebAccountIdForUser(abi_arg_in<Windows::System::IUser> user, abi_arg_in<hstring> webAccountId, bool * value) noexcept override
    {
        try
        {
            *value = detach(shim().IsStoreWebAccountIdForUser(*reinterpret_cast<const Windows::System::User *>(&user), *reinterpret_cast<const hstring *>(&webAccountId)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_GetPurchasePromptingPolicyForUser(abi_arg_in<Windows::System::IUser> user, abi_arg_out<Windows::Foundation::IReference<uint32_t>> value) noexcept override
    {
        try
        {
            *value = detach(shim().GetPurchasePromptingPolicyForUser(*reinterpret_cast<const Windows::System::User *>(&user)));
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_SetPurchasePromptingPolicyForUser(abi_arg_in<Windows::System::IUser> user, abi_arg_in<Windows::Foundation::IReference<uint32_t>> value) noexcept override
    {
        try
        {
            shim().SetPurchasePromptingPolicyForUser(*reinterpret_cast<const Windows::System::User *>(&user), *reinterpret_cast<const Windows::Foundation::IReference<uint32_t> *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::Store::Preview::IStoreHardwareManufacturerInfo> : produce_base<D, Windows::ApplicationModel::Store::Preview::IStoreHardwareManufacturerInfo>
{
    HRESULT __stdcall get_HardwareManufacturerId(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(shim().HardwareManufacturerId());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_StoreContentModifierId(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(shim().StoreContentModifierId());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ModelName(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(shim().ModelName());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ManufacturerName(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(shim().ManufacturerName());
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
struct produce<D, Windows::ApplicationModel::Store::Preview::IStorePreview> : produce_base<D, Windows::ApplicationModel::Store::Preview::IStorePreview>
{
    HRESULT __stdcall abi_RequestProductPurchaseByProductIdAndSkuIdAsync(abi_arg_in<hstring> productId, abi_arg_in<hstring> skuId, abi_arg_out<Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Store::Preview::StorePreviewPurchaseResults>> requestPurchaseBySkuIdOperation) noexcept override
    {
        try
        {
            *requestPurchaseBySkuIdOperation = detach(shim().RequestProductPurchaseByProductIdAndSkuIdAsync(*reinterpret_cast<const hstring *>(&productId), *reinterpret_cast<const hstring *>(&skuId)));
            return S_OK;
        }
        catch (...)
        {
            *requestPurchaseBySkuIdOperation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_LoadAddOnProductInfosAsync(abi_arg_out<Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Store::Preview::StorePreviewProductInfo>>> loadAddOnProductInfosOperation) noexcept override
    {
        try
        {
            *loadAddOnProductInfosOperation = detach(shim().LoadAddOnProductInfosAsync());
            return S_OK;
        }
        catch (...)
        {
            *loadAddOnProductInfosOperation = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::Store::Preview::IStorePreviewProductInfo> : produce_base<D, Windows::ApplicationModel::Store::Preview::IStorePreviewProductInfo>
{
    HRESULT __stdcall get_ProductId(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(shim().ProductId());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ProductType(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(shim().ProductType());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Title(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(shim().Title());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Description(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(shim().Description());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_SkuInfoList(abi_arg_out<Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Store::Preview::StorePreviewSkuInfo>> value) noexcept override
    {
        try
        {
            *value = detach(shim().SkuInfoList());
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
struct produce<D, Windows::ApplicationModel::Store::Preview::IStorePreviewPurchaseResults> : produce_base<D, Windows::ApplicationModel::Store::Preview::IStorePreviewPurchaseResults>
{
    HRESULT __stdcall get_ProductPurchaseStatus(Windows::ApplicationModel::Store::Preview::StorePreviewProductPurchaseStatus * value) noexcept override
    {
        try
        {
            *value = detach(shim().ProductPurchaseStatus());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::Store::Preview::IStorePreviewSkuInfo> : produce_base<D, Windows::ApplicationModel::Store::Preview::IStorePreviewSkuInfo>
{
    HRESULT __stdcall get_ProductId(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(shim().ProductId());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_SkuId(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(shim().SkuId());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_SkuType(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(shim().SkuType());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Title(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(shim().Title());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Description(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(shim().Description());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_CustomDeveloperData(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(shim().CustomDeveloperData());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_CurrencyCode(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(shim().CurrencyCode());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_FormattedListPrice(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(shim().FormattedListPrice());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ExtendedData(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(shim().ExtendedData());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }
};

}

namespace Windows::ApplicationModel::Store::Preview {

template <typename D> hstring impl_IStorePreviewProductInfo<D>::ProductId() const
{
    hstring value;
    check_hresult(shim()->get_ProductId(put(value)));
    return value;
}

template <typename D> hstring impl_IStorePreviewProductInfo<D>::ProductType() const
{
    hstring value;
    check_hresult(shim()->get_ProductType(put(value)));
    return value;
}

template <typename D> hstring impl_IStorePreviewProductInfo<D>::Title() const
{
    hstring value;
    check_hresult(shim()->get_Title(put(value)));
    return value;
}

template <typename D> hstring impl_IStorePreviewProductInfo<D>::Description() const
{
    hstring value;
    check_hresult(shim()->get_Description(put(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Store::Preview::StorePreviewSkuInfo> impl_IStorePreviewProductInfo<D>::SkuInfoList() const
{
    Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Store::Preview::StorePreviewSkuInfo> value;
    check_hresult(shim()->get_SkuInfoList(put(value)));
    return value;
}

template <typename D> hstring impl_IStorePreviewSkuInfo<D>::ProductId() const
{
    hstring value;
    check_hresult(shim()->get_ProductId(put(value)));
    return value;
}

template <typename D> hstring impl_IStorePreviewSkuInfo<D>::SkuId() const
{
    hstring value;
    check_hresult(shim()->get_SkuId(put(value)));
    return value;
}

template <typename D> hstring impl_IStorePreviewSkuInfo<D>::SkuType() const
{
    hstring value;
    check_hresult(shim()->get_SkuType(put(value)));
    return value;
}

template <typename D> hstring impl_IStorePreviewSkuInfo<D>::Title() const
{
    hstring value;
    check_hresult(shim()->get_Title(put(value)));
    return value;
}

template <typename D> hstring impl_IStorePreviewSkuInfo<D>::Description() const
{
    hstring value;
    check_hresult(shim()->get_Description(put(value)));
    return value;
}

template <typename D> hstring impl_IStorePreviewSkuInfo<D>::CustomDeveloperData() const
{
    hstring value;
    check_hresult(shim()->get_CustomDeveloperData(put(value)));
    return value;
}

template <typename D> hstring impl_IStorePreviewSkuInfo<D>::CurrencyCode() const
{
    hstring value;
    check_hresult(shim()->get_CurrencyCode(put(value)));
    return value;
}

template <typename D> hstring impl_IStorePreviewSkuInfo<D>::FormattedListPrice() const
{
    hstring value;
    check_hresult(shim()->get_FormattedListPrice(put(value)));
    return value;
}

template <typename D> hstring impl_IStorePreviewSkuInfo<D>::ExtendedData() const
{
    hstring value;
    check_hresult(shim()->get_ExtendedData(put(value)));
    return value;
}

template <typename D> Windows::ApplicationModel::Store::Preview::StorePreviewProductPurchaseStatus impl_IStorePreviewPurchaseResults<D>::ProductPurchaseStatus() const
{
    Windows::ApplicationModel::Store::Preview::StorePreviewProductPurchaseStatus value {};
    check_hresult(shim()->get_ProductPurchaseStatus(&value));
    return value;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Store::Preview::StorePreviewPurchaseResults> impl_IStorePreview<D>::RequestProductPurchaseByProductIdAndSkuIdAsync(hstring_ref productId, hstring_ref skuId) const
{
    Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Store::Preview::StorePreviewPurchaseResults> requestPurchaseBySkuIdOperation;
    check_hresult(shim()->abi_RequestProductPurchaseByProductIdAndSkuIdAsync(get(productId), get(skuId), put(requestPurchaseBySkuIdOperation)));
    return requestPurchaseBySkuIdOperation;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Store::Preview::StorePreviewProductInfo>> impl_IStorePreview<D>::LoadAddOnProductInfosAsync() const
{
    Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Store::Preview::StorePreviewProductInfo>> loadAddOnProductInfosOperation;
    check_hresult(shim()->abi_LoadAddOnProductInfosAsync(put(loadAddOnProductInfosOperation)));
    return loadAddOnProductInfosOperation;
}

template <typename D> hstring impl_IStoreHardwareManufacturerInfo<D>::HardwareManufacturerId() const
{
    hstring value;
    check_hresult(shim()->get_HardwareManufacturerId(put(value)));
    return value;
}

template <typename D> hstring impl_IStoreHardwareManufacturerInfo<D>::StoreContentModifierId() const
{
    hstring value;
    check_hresult(shim()->get_StoreContentModifierId(put(value)));
    return value;
}

template <typename D> hstring impl_IStoreHardwareManufacturerInfo<D>::ModelName() const
{
    hstring value;
    check_hresult(shim()->get_ModelName(put(value)));
    return value;
}

template <typename D> hstring impl_IStoreHardwareManufacturerInfo<D>::ManufacturerName() const
{
    hstring value;
    check_hresult(shim()->get_ManufacturerName(put(value)));
    return value;
}

template <typename D> void impl_IStoreConfigurationStatics<D>::SetSystemConfiguration(hstring_ref catalogHardwareManufacturerId, hstring_ref catalogStoreContentModifierId, const Windows::Foundation::DateTime & systemConfigurationExpiration, hstring_ref catalogHardwareDescriptor) const
{
    check_hresult(shim()->abi_SetSystemConfiguration(get(catalogHardwareManufacturerId), get(catalogStoreContentModifierId), get(systemConfigurationExpiration), get(catalogHardwareDescriptor)));
}

template <typename D> void impl_IStoreConfigurationStatics<D>::SetMobileOperatorConfiguration(hstring_ref mobileOperatorId, uint32_t appDownloadLimitInMegabytes, uint32_t updateDownloadLimitInMegabytes) const
{
    check_hresult(shim()->abi_SetMobileOperatorConfiguration(get(mobileOperatorId), appDownloadLimitInMegabytes, updateDownloadLimitInMegabytes));
}

template <typename D> void impl_IStoreConfigurationStatics<D>::SetStoreWebAccountId(hstring_ref webAccountId) const
{
    check_hresult(shim()->abi_SetStoreWebAccountId(get(webAccountId)));
}

template <typename D> bool impl_IStoreConfigurationStatics<D>::IsStoreWebAccountId(hstring_ref webAccountId) const
{
    bool value {};
    check_hresult(shim()->abi_IsStoreWebAccountId(get(webAccountId), &value));
    return value;
}

template <typename D> Windows::ApplicationModel::Store::Preview::StoreHardwareManufacturerInfo impl_IStoreConfigurationStatics<D>::HardwareManufacturerInfo() const
{
    Windows::ApplicationModel::Store::Preview::StoreHardwareManufacturerInfo value { nullptr };
    check_hresult(shim()->get_HardwareManufacturerInfo(put(value)));
    return value;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<winrt::Windows::ApplicationModel::Store::Preview::StoreSystemFeature>> impl_IStoreConfigurationStatics<D>::FilterUnsupportedSystemFeaturesAsync(const Windows::Foundation::Collections::IIterable<winrt::Windows::ApplicationModel::Store::Preview::StoreSystemFeature> & systemFeatures) const
{
    Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<winrt::Windows::ApplicationModel::Store::Preview::StoreSystemFeature>> operation;
    check_hresult(shim()->abi_FilterUnsupportedSystemFeaturesAsync(get(systemFeatures), put(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IReference<uint32_t> impl_IStoreConfigurationStatics2<D>::PurchasePromptingPolicy() const
{
    Windows::Foundation::IReference<uint32_t> value;
    check_hresult(shim()->get_PurchasePromptingPolicy(put(value)));
    return value;
}

template <typename D> void impl_IStoreConfigurationStatics2<D>::PurchasePromptingPolicy(const Windows::Foundation::IReference<uint32_t> & value) const
{
    check_hresult(shim()->put_PurchasePromptingPolicy(get(value)));
}

template <typename D> bool impl_IStoreConfigurationStatics3<D>::HasStoreWebAccount() const
{
    bool value {};
    check_hresult(shim()->abi_HasStoreWebAccount(&value));
    return value;
}

template <typename D> bool impl_IStoreConfigurationStatics3<D>::HasStoreWebAccountForUser(const Windows::System::User & user) const
{
    bool value {};
    check_hresult(shim()->abi_HasStoreWebAccountForUser(get(user), &value));
    return value;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Storage::Streams::IRandomAccessStreamReference> impl_IStoreConfigurationStatics3<D>::GetStoreLogDataAsync(Windows::ApplicationModel::Store::Preview::StoreLogOptions options) const
{
    Windows::Foundation::IAsyncOperation<Windows::Storage::Streams::IRandomAccessStreamReference> operation;
    check_hresult(shim()->abi_GetStoreLogDataAsync(options, put(operation)));
    return operation;
}

template <typename D> void impl_IStoreConfigurationStatics3<D>::SetStoreWebAccountIdForUser(const Windows::System::User & user, hstring_ref webAccountId) const
{
    check_hresult(shim()->abi_SetStoreWebAccountIdForUser(get(user), get(webAccountId)));
}

template <typename D> bool impl_IStoreConfigurationStatics3<D>::IsStoreWebAccountIdForUser(const Windows::System::User & user, hstring_ref webAccountId) const
{
    bool value {};
    check_hresult(shim()->abi_IsStoreWebAccountIdForUser(get(user), get(webAccountId), &value));
    return value;
}

template <typename D> Windows::Foundation::IReference<uint32_t> impl_IStoreConfigurationStatics3<D>::GetPurchasePromptingPolicyForUser(const Windows::System::User & user) const
{
    Windows::Foundation::IReference<uint32_t> value;
    check_hresult(shim()->abi_GetPurchasePromptingPolicyForUser(get(user), put(value)));
    return value;
}

template <typename D> void impl_IStoreConfigurationStatics3<D>::SetPurchasePromptingPolicyForUser(const Windows::System::User & user, const Windows::Foundation::IReference<uint32_t> & value) const
{
    check_hresult(shim()->abi_SetPurchasePromptingPolicyForUser(get(user), get(value)));
}

inline void StoreConfiguration::SetSystemConfiguration(hstring_ref catalogHardwareManufacturerId, hstring_ref catalogStoreContentModifierId, const Windows::Foundation::DateTime & systemConfigurationExpiration, hstring_ref catalogHardwareDescriptor)
{
    get_activation_factory<StoreConfiguration, IStoreConfigurationStatics>().SetSystemConfiguration(catalogHardwareManufacturerId, catalogStoreContentModifierId, systemConfigurationExpiration, catalogHardwareDescriptor);
}

inline void StoreConfiguration::SetMobileOperatorConfiguration(hstring_ref mobileOperatorId, uint32_t appDownloadLimitInMegabytes, uint32_t updateDownloadLimitInMegabytes)
{
    get_activation_factory<StoreConfiguration, IStoreConfigurationStatics>().SetMobileOperatorConfiguration(mobileOperatorId, appDownloadLimitInMegabytes, updateDownloadLimitInMegabytes);
}

inline void StoreConfiguration::SetStoreWebAccountId(hstring_ref webAccountId)
{
    get_activation_factory<StoreConfiguration, IStoreConfigurationStatics>().SetStoreWebAccountId(webAccountId);
}

inline bool StoreConfiguration::IsStoreWebAccountId(hstring_ref webAccountId)
{
    return get_activation_factory<StoreConfiguration, IStoreConfigurationStatics>().IsStoreWebAccountId(webAccountId);
}

inline Windows::ApplicationModel::Store::Preview::StoreHardwareManufacturerInfo StoreConfiguration::HardwareManufacturerInfo()
{
    return get_activation_factory<StoreConfiguration, IStoreConfigurationStatics>().HardwareManufacturerInfo();
}

inline Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<winrt::Windows::ApplicationModel::Store::Preview::StoreSystemFeature>> StoreConfiguration::FilterUnsupportedSystemFeaturesAsync(const Windows::Foundation::Collections::IIterable<winrt::Windows::ApplicationModel::Store::Preview::StoreSystemFeature> & systemFeatures)
{
    return get_activation_factory<StoreConfiguration, IStoreConfigurationStatics>().FilterUnsupportedSystemFeaturesAsync(systemFeatures);
}

inline Windows::Foundation::IReference<uint32_t> StoreConfiguration::PurchasePromptingPolicy()
{
    return get_activation_factory<StoreConfiguration, IStoreConfigurationStatics2>().PurchasePromptingPolicy();
}

inline void StoreConfiguration::PurchasePromptingPolicy(const Windows::Foundation::IReference<uint32_t> & value)
{
    get_activation_factory<StoreConfiguration, IStoreConfigurationStatics2>().PurchasePromptingPolicy(value);
}

inline bool StoreConfiguration::HasStoreWebAccount()
{
    return get_activation_factory<StoreConfiguration, IStoreConfigurationStatics3>().HasStoreWebAccount();
}

inline bool StoreConfiguration::HasStoreWebAccountForUser(const Windows::System::User & user)
{
    return get_activation_factory<StoreConfiguration, IStoreConfigurationStatics3>().HasStoreWebAccountForUser(user);
}

inline Windows::Foundation::IAsyncOperation<Windows::Storage::Streams::IRandomAccessStreamReference> StoreConfiguration::GetStoreLogDataAsync(Windows::ApplicationModel::Store::Preview::StoreLogOptions options)
{
    return get_activation_factory<StoreConfiguration, IStoreConfigurationStatics3>().GetStoreLogDataAsync(options);
}

inline void StoreConfiguration::SetStoreWebAccountIdForUser(const Windows::System::User & user, hstring_ref webAccountId)
{
    get_activation_factory<StoreConfiguration, IStoreConfigurationStatics3>().SetStoreWebAccountIdForUser(user, webAccountId);
}

inline bool StoreConfiguration::IsStoreWebAccountIdForUser(const Windows::System::User & user, hstring_ref webAccountId)
{
    return get_activation_factory<StoreConfiguration, IStoreConfigurationStatics3>().IsStoreWebAccountIdForUser(user, webAccountId);
}

inline Windows::Foundation::IReference<uint32_t> StoreConfiguration::GetPurchasePromptingPolicyForUser(const Windows::System::User & user)
{
    return get_activation_factory<StoreConfiguration, IStoreConfigurationStatics3>().GetPurchasePromptingPolicyForUser(user);
}

inline void StoreConfiguration::SetPurchasePromptingPolicyForUser(const Windows::System::User & user, const Windows::Foundation::IReference<uint32_t> & value)
{
    get_activation_factory<StoreConfiguration, IStoreConfigurationStatics3>().SetPurchasePromptingPolicyForUser(user, value);
}

inline Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Store::Preview::StorePreviewPurchaseResults> StorePreview::RequestProductPurchaseByProductIdAndSkuIdAsync(hstring_ref productId, hstring_ref skuId)
{
    return get_activation_factory<StorePreview, IStorePreview>().RequestProductPurchaseByProductIdAndSkuIdAsync(productId, skuId);
}

inline Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Store::Preview::StorePreviewProductInfo>> StorePreview::LoadAddOnProductInfosAsync()
{
    return get_activation_factory<StorePreview, IStorePreview>().LoadAddOnProductInfosAsync();
}

}

}
