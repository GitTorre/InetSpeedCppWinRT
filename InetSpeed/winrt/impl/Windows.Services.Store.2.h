// C++/WinRT v1.0.170717.1
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "Windows.ApplicationModel.1.h"
#include "Windows.Foundation.1.h"
#include "Windows.System.1.h"
#include "Windows.Web.Http.1.h"
#include "Windows.Services.Store.1.h"

namespace winrt {

namespace Windows::Services::Store {

struct StorePackageUpdateStatus
{
    hstring PackageFamilyName;
    uint64_t PackageDownloadSizeInBytes;
    uint64_t PackageBytesDownloaded;
    double PackageDownloadProgress;
    double TotalDownloadProgress;
    Windows::Services::Store::StorePackageUpdateState PackageUpdateState;
};

struct StoreAcquireLicenseResult :
    Windows::Services::Store::IStoreAcquireLicenseResult
{
    StoreAcquireLicenseResult(std::nullptr_t) noexcept {}
};

struct StoreAppLicense :
    Windows::Services::Store::IStoreAppLicense
{
    StoreAppLicense(std::nullptr_t) noexcept {}
};

struct StoreAvailability :
    Windows::Services::Store::IStoreAvailability
{
    StoreAvailability(std::nullptr_t) noexcept {}
};

struct StoreCollectionData :
    Windows::Services::Store::IStoreCollectionData
{
    StoreCollectionData(std::nullptr_t) noexcept {}
};

struct StoreConsumableResult :
    Windows::Services::Store::IStoreConsumableResult
{
    StoreConsumableResult(std::nullptr_t) noexcept {}
};

struct StoreContext :
    Windows::Services::Store::IStoreContext,
    impl::require<StoreContext, Windows::Services::Store::IStoreContext2>
{
    StoreContext(std::nullptr_t) noexcept {}
    static Windows::Services::Store::StoreContext GetDefault();
    static Windows::Services::Store::StoreContext GetForUser(Windows::System::User const& user);
};

struct StoreImage :
    Windows::Services::Store::IStoreImage
{
    StoreImage(std::nullptr_t) noexcept {}
};

struct StoreLicense :
    Windows::Services::Store::IStoreLicense
{
    StoreLicense(std::nullptr_t) noexcept {}
};

struct StorePackageLicense :
    Windows::Services::Store::IStorePackageLicense
{
    StorePackageLicense(std::nullptr_t) noexcept {}
};

struct StorePackageUpdate :
    Windows::Services::Store::IStorePackageUpdate
{
    StorePackageUpdate(std::nullptr_t) noexcept {}
};

struct StorePackageUpdateResult :
    Windows::Services::Store::IStorePackageUpdateResult
{
    StorePackageUpdateResult(std::nullptr_t) noexcept {}
};

struct StorePrice :
    Windows::Services::Store::IStorePrice
{
    StorePrice(std::nullptr_t) noexcept {}
};

struct StoreProduct :
    Windows::Services::Store::IStoreProduct
{
    StoreProduct(std::nullptr_t) noexcept {}
};

struct StoreProductPagedQueryResult :
    Windows::Services::Store::IStoreProductPagedQueryResult
{
    StoreProductPagedQueryResult(std::nullptr_t) noexcept {}
};

struct StoreProductQueryResult :
    Windows::Services::Store::IStoreProductQueryResult
{
    StoreProductQueryResult(std::nullptr_t) noexcept {}
};

struct StoreProductResult :
    Windows::Services::Store::IStoreProductResult
{
    StoreProductResult(std::nullptr_t) noexcept {}
};

struct StorePurchaseProperties :
    Windows::Services::Store::IStorePurchaseProperties
{
    StorePurchaseProperties(std::nullptr_t) noexcept {}
    StorePurchaseProperties();
    StorePurchaseProperties(param::hstring const& name);
};

struct StorePurchaseResult :
    Windows::Services::Store::IStorePurchaseResult
{
    StorePurchaseResult(std::nullptr_t) noexcept {}
};

struct StoreRequestHelper
{
    StoreRequestHelper() = delete;
    static Windows::Foundation::IAsyncOperation<Windows::Services::Store::StoreSendRequestResult> SendRequestAsync(Windows::Services::Store::StoreContext const& context, uint32_t requestKind, param::hstring const& parametersAsJson);
};

struct StoreSendRequestResult :
    Windows::Services::Store::IStoreSendRequestResult,
    impl::require<StoreSendRequestResult, Windows::Services::Store::IStoreSendRequestResult2>
{
    StoreSendRequestResult(std::nullptr_t) noexcept {}
};

struct StoreSku :
    Windows::Services::Store::IStoreSku
{
    StoreSku(std::nullptr_t) noexcept {}
};

struct StoreSubscriptionInfo :
    Windows::Services::Store::IStoreSubscriptionInfo
{
    StoreSubscriptionInfo(std::nullptr_t) noexcept {}
};

struct StoreVideo :
    Windows::Services::Store::IStoreVideo
{
    StoreVideo(std::nullptr_t) noexcept {}
};

}

namespace impl {

}

}
