// C++ for the Windows Runtime v1.29
// Copyright (c) 2016 Microsoft Corporation

#pragma once

#include "base.h"
#include "Windows.Services.Store.0.h"
#include "Windows.ApplicationModel.0.h"
#include "Windows.Foundation.0.h"
#include "Windows.System.0.h"
#include "Windows.Foundation.Collections.1.h"
#include "Windows.Foundation.1.h"

WINRT_EXPORT namespace winrt {

namespace ABI::Windows::Services::Store {

struct StorePackageUpdateStatus
{
    hstring PackageFamilyName;
    uint64_t PackageDownloadSizeInBytes;
    uint64_t PackageBytesDownloaded;
    double PackageDownloadProgress;
    double TotalDownloadProgress;
    winrt::Windows::Services::Store::StorePackageUpdateState PackageUpdateState;
};

}

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

}

namespace impl {

template <> struct traits<Windows::Services::Store::StorePackageUpdateStatus>
{
    using abi = ABI::Windows::Services::Store::StorePackageUpdateStatus;
};

}

namespace ABI::Windows::Services::Store {

struct __declspec(uuid("fbd7946d-f040-4cb3-9a39-29bcecdbe22d")) __declspec(novtable) IStoreAcquireLicenseResult : Windows::IInspectable
{
    virtual HRESULT __stdcall get_StorePackageLicense(Windows::Services::Store::IStorePackageLicense ** value) = 0;
    virtual HRESULT __stdcall get_ExtendedError(HRESULT * value) = 0;
};

struct __declspec(uuid("f389f9de-73c0-45ce-9bab-b2fe3e5eafd3")) __declspec(novtable) IStoreAppLicense : Windows::IInspectable
{
    virtual HRESULT __stdcall get_SkuStoreId(hstring * value) = 0;
    virtual HRESULT __stdcall get_IsActive(bool * value) = 0;
    virtual HRESULT __stdcall get_IsTrial(bool * value) = 0;
    virtual HRESULT __stdcall get_ExpirationDate(Windows::Foundation::DateTime * value) = 0;
    virtual HRESULT __stdcall get_ExtendedJsonData(hstring * value) = 0;
    virtual HRESULT __stdcall get_AddOnLicenses(Windows::Foundation::Collections::IMapView<hstring, Windows::Services::Store::StoreLicense> ** value) = 0;
    virtual HRESULT __stdcall get_TrialTimeRemaining(Windows::Foundation::TimeSpan * value) = 0;
    virtual HRESULT __stdcall get_IsTrialOwnedByThisUser(bool * value) = 0;
    virtual HRESULT __stdcall get_TrialUniqueId(hstring * value) = 0;
};

struct __declspec(uuid("fa060325-0ffd-4493-ad43-f1f9918f69fa")) __declspec(novtable) IStoreAvailability : Windows::IInspectable
{
    virtual HRESULT __stdcall get_StoreId(hstring * value) = 0;
    virtual HRESULT __stdcall get_EndDate(Windows::Foundation::DateTime * value) = 0;
    virtual HRESULT __stdcall get_Price(Windows::Services::Store::IStorePrice ** value) = 0;
    virtual HRESULT __stdcall get_ExtendedJsonData(hstring * value) = 0;
    virtual HRESULT __stdcall abi_RequestPurchaseAsync(Windows::Foundation::IAsyncOperation<Windows::Services::Store::StorePurchaseResult> ** operation) = 0;
    virtual HRESULT __stdcall abi_RequestPurchaseWithPurchasePropertiesAsync(Windows::Services::Store::IStorePurchaseProperties * storePurchaseProperties, Windows::Foundation::IAsyncOperation<Windows::Services::Store::StorePurchaseResult> ** operation) = 0;
};

struct __declspec(uuid("8aa4c3b3-5bb3-441a-2ab4-4dab73d5ce67")) __declspec(novtable) IStoreCollectionData : Windows::IInspectable
{
    virtual HRESULT __stdcall get_IsTrial(bool * value) = 0;
    virtual HRESULT __stdcall get_CampaignId(hstring * value) = 0;
    virtual HRESULT __stdcall get_DeveloperOfferId(hstring * value) = 0;
    virtual HRESULT __stdcall get_AcquiredDate(Windows::Foundation::DateTime * value) = 0;
    virtual HRESULT __stdcall get_StartDate(Windows::Foundation::DateTime * value) = 0;
    virtual HRESULT __stdcall get_EndDate(Windows::Foundation::DateTime * value) = 0;
    virtual HRESULT __stdcall get_TrialTimeRemaining(Windows::Foundation::TimeSpan * value) = 0;
    virtual HRESULT __stdcall get_ExtendedJsonData(hstring * value) = 0;
};

struct __declspec(uuid("ea5dab72-6a00-4052-be5b-bfdab4433352")) __declspec(novtable) IStoreConsumableResult : Windows::IInspectable
{
    virtual HRESULT __stdcall get_Status(winrt::Windows::Services::Store::StoreConsumableStatus * value) = 0;
    virtual HRESULT __stdcall get_TrackingId(GUID * value) = 0;
    virtual HRESULT __stdcall get_BalanceRemaining(uint32_t * value) = 0;
    virtual HRESULT __stdcall get_ExtendedError(HRESULT * value) = 0;
};

struct __declspec(uuid("ac98b6be-f4fd-4912-babd-5035e5e8bcab")) __declspec(novtable) IStoreContext : Windows::IInspectable
{
    virtual HRESULT __stdcall get_User(Windows::System::IUser ** value) = 0;
    virtual HRESULT __stdcall add_OfflineLicensesChanged(Windows::Foundation::TypedEventHandler<Windows::Services::Store::StoreContext, Windows::IInspectable> * handler, event_token * token) = 0;
    virtual HRESULT __stdcall remove_OfflineLicensesChanged(event_token token) = 0;
    virtual HRESULT __stdcall abi_GetCustomerPurchaseIdAsync(hstring serviceTicket, hstring publisherUserId, Windows::Foundation::IAsyncOperation<hstring> ** operation) = 0;
    virtual HRESULT __stdcall abi_GetCustomerCollectionsIdAsync(hstring serviceTicket, hstring publisherUserId, Windows::Foundation::IAsyncOperation<hstring> ** operation) = 0;
    virtual HRESULT __stdcall abi_GetAppLicenseAsync(Windows::Foundation::IAsyncOperation<Windows::Services::Store::StoreAppLicense> ** operation) = 0;
    virtual HRESULT __stdcall abi_GetStoreProductForCurrentAppAsync(Windows::Foundation::IAsyncOperation<Windows::Services::Store::StoreProductResult> ** operation) = 0;
    virtual HRESULT __stdcall abi_GetStoreProductsAsync(Windows::Foundation::Collections::IIterable<hstring> * productKinds, Windows::Foundation::Collections::IIterable<hstring> * storeIds, Windows::Foundation::IAsyncOperation<Windows::Services::Store::StoreProductQueryResult> ** operation) = 0;
    virtual HRESULT __stdcall abi_GetAssociatedStoreProductsAsync(Windows::Foundation::Collections::IIterable<hstring> * productKinds, Windows::Foundation::IAsyncOperation<Windows::Services::Store::StoreProductQueryResult> ** operation) = 0;
    virtual HRESULT __stdcall abi_GetAssociatedStoreProductsWithPagingAsync(Windows::Foundation::Collections::IIterable<hstring> * productKinds, uint32_t maxItemsToRetrievePerPage, Windows::Foundation::IAsyncOperation<Windows::Services::Store::StoreProductPagedQueryResult> ** operation) = 0;
    virtual HRESULT __stdcall abi_GetUserCollectionAsync(Windows::Foundation::Collections::IIterable<hstring> * productKinds, Windows::Foundation::IAsyncOperation<Windows::Services::Store::StoreProductQueryResult> ** operation) = 0;
    virtual HRESULT __stdcall abi_GetUserCollectionWithPagingAsync(Windows::Foundation::Collections::IIterable<hstring> * productKinds, uint32_t maxItemsToRetrievePerPage, Windows::Foundation::IAsyncOperation<Windows::Services::Store::StoreProductPagedQueryResult> ** operation) = 0;
    virtual HRESULT __stdcall abi_ReportConsumableFulfillmentAsync(hstring productStoreId, uint32_t quantity, GUID trackingId, Windows::Foundation::IAsyncOperation<Windows::Services::Store::StoreConsumableResult> ** operation) = 0;
    virtual HRESULT __stdcall abi_GetConsumableBalanceRemainingAsync(hstring productStoreId, Windows::Foundation::IAsyncOperation<Windows::Services::Store::StoreConsumableResult> ** operation) = 0;
    virtual HRESULT __stdcall abi_AcquireStoreLicenseForOptionalPackageAsync(Windows::ApplicationModel::IPackage * optionalPackage, Windows::Foundation::IAsyncOperation<Windows::Services::Store::StoreAcquireLicenseResult> ** operation) = 0;
    virtual HRESULT __stdcall abi_RequestPurchaseAsync(hstring storeId, Windows::Foundation::IAsyncOperation<Windows::Services::Store::StorePurchaseResult> ** operation) = 0;
    virtual HRESULT __stdcall abi_RequestPurchaseWithPurchasePropertiesAsync(hstring storeId, Windows::Services::Store::IStorePurchaseProperties * storePurchaseProperties, Windows::Foundation::IAsyncOperation<Windows::Services::Store::StorePurchaseResult> ** operation) = 0;
    virtual HRESULT __stdcall abi_GetAppAndOptionalStorePackageUpdatesAsync(Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Services::Store::StorePackageUpdate>> ** operation) = 0;
    virtual HRESULT __stdcall abi_RequestDownloadStorePackageUpdatesAsync(Windows::Foundation::Collections::IIterable<Windows::Services::Store::StorePackageUpdate> * storePackageUpdates, Windows::Foundation::IAsyncOperationWithProgress<Windows::Services::Store::StorePackageUpdateResult, Windows::Services::Store::StorePackageUpdateStatus> ** operation) = 0;
    virtual HRESULT __stdcall abi_RequestDownloadAndInstallStorePackageUpdatesAsync(Windows::Foundation::Collections::IIterable<Windows::Services::Store::StorePackageUpdate> * storePackageUpdates, Windows::Foundation::IAsyncOperationWithProgress<Windows::Services::Store::StorePackageUpdateResult, Windows::Services::Store::StorePackageUpdateStatus> ** operation) = 0;
    virtual HRESULT __stdcall abi_RequestDownloadAndInstallStorePackagesAsync(Windows::Foundation::Collections::IIterable<hstring> * storeIds, Windows::Foundation::IAsyncOperationWithProgress<Windows::Services::Store::StorePackageUpdateResult, Windows::Services::Store::StorePackageUpdateStatus> ** operation) = 0;
};

struct __declspec(uuid("9c06ee5f-15c0-4e72-9330-d6191cebd19c")) __declspec(novtable) IStoreContextStatics : Windows::IInspectable
{
    virtual HRESULT __stdcall abi_GetDefault(Windows::Services::Store::IStoreContext ** value) = 0;
    virtual HRESULT __stdcall abi_GetForUser(Windows::System::IUser * user, Windows::Services::Store::IStoreContext ** value) = 0;
};

struct __declspec(uuid("081fd248-adb4-4b64-a993-784789926ed5")) __declspec(novtable) IStoreImage : Windows::IInspectable
{
    virtual HRESULT __stdcall get_Uri(Windows::Foundation::IUriRuntimeClass ** value) = 0;
    virtual HRESULT __stdcall get_ImagePurposeTag(hstring * value) = 0;
    virtual HRESULT __stdcall get_Width(uint32_t * value) = 0;
    virtual HRESULT __stdcall get_Height(uint32_t * value) = 0;
    virtual HRESULT __stdcall get_Caption(hstring * value) = 0;
};

struct __declspec(uuid("26dc9579-4c4f-4f30-bc89-649f60e36055")) __declspec(novtable) IStoreLicense : Windows::IInspectable
{
    virtual HRESULT __stdcall get_SkuStoreId(hstring * value) = 0;
    virtual HRESULT __stdcall get_IsActive(bool * value) = 0;
    virtual HRESULT __stdcall get_ExpirationDate(Windows::Foundation::DateTime * value) = 0;
    virtual HRESULT __stdcall get_ExtendedJsonData(hstring * value) = 0;
    virtual HRESULT __stdcall get_InAppOfferToken(hstring * value) = 0;
};

struct __declspec(uuid("0c465714-14e1-4973-bd14-f77724271e99")) __declspec(novtable) IStorePackageLicense : Windows::IInspectable
{
    virtual HRESULT __stdcall add_LicenseLost(Windows::Foundation::TypedEventHandler<Windows::Services::Store::StorePackageLicense, Windows::IInspectable> * handler, event_token * token) = 0;
    virtual HRESULT __stdcall remove_LicenseLost(event_token token) = 0;
    virtual HRESULT __stdcall get_Package(Windows::ApplicationModel::IPackage ** value) = 0;
    virtual HRESULT __stdcall get_IsValid(bool * value) = 0;
    virtual HRESULT __stdcall abi_ReleaseLicense() = 0;
};

struct __declspec(uuid("140fa150-3cbf-4a35-b91f-48271c31b072")) __declspec(novtable) IStorePackageUpdate : Windows::IInspectable
{
    virtual HRESULT __stdcall get_Package(Windows::ApplicationModel::IPackage ** value) = 0;
    virtual HRESULT __stdcall get_Mandatory(bool * value) = 0;
};

struct __declspec(uuid("e79142ed-61f9-4893-b4fe-cf191603af7b")) __declspec(novtable) IStorePackageUpdateResult : Windows::IInspectable
{
    virtual HRESULT __stdcall get_OverallState(winrt::Windows::Services::Store::StorePackageUpdateState * value) = 0;
    virtual HRESULT __stdcall get_StorePackageUpdateStatuses(Windows::Foundation::Collections::IVectorView<Windows::Services::Store::StorePackageUpdateStatus> ** value) = 0;
};

struct __declspec(uuid("55ba94c4-15f1-407c-8f06-006380f4df0b")) __declspec(novtable) IStorePrice : Windows::IInspectable
{
    virtual HRESULT __stdcall get_FormattedBasePrice(hstring * value) = 0;
    virtual HRESULT __stdcall get_FormattedPrice(hstring * value) = 0;
    virtual HRESULT __stdcall get_IsOnSale(bool * value) = 0;
    virtual HRESULT __stdcall get_SaleEndDate(Windows::Foundation::DateTime * value) = 0;
    virtual HRESULT __stdcall get_CurrencyCode(hstring * value) = 0;
    virtual HRESULT __stdcall get_FormattedRecurrencePrice(hstring * value) = 0;
};

struct __declspec(uuid("320e2c52-d760-450a-a42b-67d1e901ac90")) __declspec(novtable) IStoreProduct : Windows::IInspectable
{
    virtual HRESULT __stdcall get_StoreId(hstring * value) = 0;
    virtual HRESULT __stdcall get_Language(hstring * value) = 0;
    virtual HRESULT __stdcall get_Title(hstring * value) = 0;
    virtual HRESULT __stdcall get_Description(hstring * value) = 0;
    virtual HRESULT __stdcall get_ProductKind(hstring * value) = 0;
    virtual HRESULT __stdcall get_HasDigitalDownload(bool * value) = 0;
    virtual HRESULT __stdcall get_Keywords(Windows::Foundation::Collections::IVectorView<hstring> ** value) = 0;
    virtual HRESULT __stdcall get_Images(Windows::Foundation::Collections::IVectorView<Windows::Services::Store::StoreImage> ** value) = 0;
    virtual HRESULT __stdcall get_Videos(Windows::Foundation::Collections::IVectorView<Windows::Services::Store::StoreVideo> ** value) = 0;
    virtual HRESULT __stdcall get_Skus(Windows::Foundation::Collections::IVectorView<Windows::Services::Store::StoreSku> ** value) = 0;
    virtual HRESULT __stdcall get_IsInUserCollection(bool * value) = 0;
    virtual HRESULT __stdcall get_Price(Windows::Services::Store::IStorePrice ** value) = 0;
    virtual HRESULT __stdcall get_ExtendedJsonData(hstring * value) = 0;
    virtual HRESULT __stdcall get_LinkUri(Windows::Foundation::IUriRuntimeClass ** value) = 0;
    virtual HRESULT __stdcall abi_GetIsAnySkuInstalledAsync(Windows::Foundation::IAsyncOperation<bool> ** operation) = 0;
    virtual HRESULT __stdcall abi_RequestPurchaseAsync(Windows::Foundation::IAsyncOperation<Windows::Services::Store::StorePurchaseResult> ** operation) = 0;
    virtual HRESULT __stdcall abi_RequestPurchaseWithPurchasePropertiesAsync(Windows::Services::Store::IStorePurchaseProperties * storePurchaseProperties, Windows::Foundation::IAsyncOperation<Windows::Services::Store::StorePurchaseResult> ** operation) = 0;
    virtual HRESULT __stdcall get_InAppOfferToken(hstring * value) = 0;
};

struct __declspec(uuid("c92718c5-4dd5-4869-a462-ecc6872e43c5")) __declspec(novtable) IStoreProductPagedQueryResult : Windows::IInspectable
{
    virtual HRESULT __stdcall get_Products(Windows::Foundation::Collections::IMapView<hstring, Windows::Services::Store::StoreProduct> ** value) = 0;
    virtual HRESULT __stdcall get_HasMoreResults(bool * value) = 0;
    virtual HRESULT __stdcall get_ExtendedError(HRESULT * value) = 0;
    virtual HRESULT __stdcall abi_GetNextAsync(Windows::Foundation::IAsyncOperation<Windows::Services::Store::StoreProductPagedQueryResult> ** operation) = 0;
};

struct __declspec(uuid("d805e6c5-d456-4ff6-8049-9076d5165f73")) __declspec(novtable) IStoreProductQueryResult : Windows::IInspectable
{
    virtual HRESULT __stdcall get_Products(Windows::Foundation::Collections::IMapView<hstring, Windows::Services::Store::StoreProduct> ** value) = 0;
    virtual HRESULT __stdcall get_ExtendedError(HRESULT * value) = 0;
};

struct __declspec(uuid("b7674f73-3c87-4ee1-8201-f428359bd3af")) __declspec(novtable) IStoreProductResult : Windows::IInspectable
{
    virtual HRESULT __stdcall get_Product(Windows::Services::Store::IStoreProduct ** value) = 0;
    virtual HRESULT __stdcall get_ExtendedError(HRESULT * value) = 0;
};

struct __declspec(uuid("836278f3-ff87-4364-a5b4-fd2153ebe43b")) __declspec(novtable) IStorePurchaseProperties : Windows::IInspectable
{
    virtual HRESULT __stdcall get_Name(hstring * value) = 0;
    virtual HRESULT __stdcall put_Name(hstring value) = 0;
    virtual HRESULT __stdcall get_ExtendedJsonData(hstring * value) = 0;
    virtual HRESULT __stdcall put_ExtendedJsonData(hstring value) = 0;
};

struct __declspec(uuid("a768f59e-fefd-489f-9a17-22a593e68b9d")) __declspec(novtable) IStorePurchasePropertiesFactory : Windows::IInspectable
{
    virtual HRESULT __stdcall abi_Create(hstring name, Windows::Services::Store::IStorePurchaseProperties ** storePurchaseProperties) = 0;
};

struct __declspec(uuid("add28552-f96a-463d-a7bb-c20b4fca6952")) __declspec(novtable) IStorePurchaseResult : Windows::IInspectable
{
    virtual HRESULT __stdcall get_Status(winrt::Windows::Services::Store::StorePurchaseStatus * value) = 0;
    virtual HRESULT __stdcall get_ExtendedError(HRESULT * value) = 0;
};

struct __declspec(uuid("6ce5e5f9-a0c9-4b2c-96a6-a171c630038d")) __declspec(novtable) IStoreRequestHelperStatics : Windows::IInspectable
{
    virtual HRESULT __stdcall abi_SendRequestAsync(Windows::Services::Store::IStoreContext * context, uint32_t requestKind, hstring parametersAsJson, Windows::Foundation::IAsyncOperation<Windows::Services::Store::StoreSendRequestResult> ** operation) = 0;
};

struct __declspec(uuid("c73abe60-8272-4502-8a69-6e75153a4299")) __declspec(novtable) IStoreSendRequestResult : Windows::IInspectable
{
    virtual HRESULT __stdcall get_Response(hstring * value) = 0;
    virtual HRESULT __stdcall get_ExtendedError(HRESULT * value) = 0;
};

struct __declspec(uuid("397e6f55-4440-4f03-863c-91f3fec83d79")) __declspec(novtable) IStoreSku : Windows::IInspectable
{
    virtual HRESULT __stdcall get_StoreId(hstring * value) = 0;
    virtual HRESULT __stdcall get_Language(hstring * value) = 0;
    virtual HRESULT __stdcall get_Title(hstring * value) = 0;
    virtual HRESULT __stdcall get_Description(hstring * value) = 0;
    virtual HRESULT __stdcall get_IsTrial(bool * value) = 0;
    virtual HRESULT __stdcall get_CustomDeveloperData(hstring * value) = 0;
    virtual HRESULT __stdcall get_Images(Windows::Foundation::Collections::IVectorView<Windows::Services::Store::StoreImage> ** value) = 0;
    virtual HRESULT __stdcall get_Videos(Windows::Foundation::Collections::IVectorView<Windows::Services::Store::StoreVideo> ** value) = 0;
    virtual HRESULT __stdcall get_Availabilities(Windows::Foundation::Collections::IVectorView<Windows::Services::Store::StoreAvailability> ** value) = 0;
    virtual HRESULT __stdcall get_Price(Windows::Services::Store::IStorePrice ** value) = 0;
    virtual HRESULT __stdcall get_ExtendedJsonData(hstring * value) = 0;
    virtual HRESULT __stdcall get_IsInUserCollection(bool * value) = 0;
    virtual HRESULT __stdcall get_BundledSkus(Windows::Foundation::Collections::IVectorView<hstring> ** value) = 0;
    virtual HRESULT __stdcall get_CollectionData(Windows::Services::Store::IStoreCollectionData ** value) = 0;
    virtual HRESULT __stdcall abi_GetIsInstalledAsync(Windows::Foundation::IAsyncOperation<bool> ** operation) = 0;
    virtual HRESULT __stdcall abi_RequestPurchaseAsync(Windows::Foundation::IAsyncOperation<Windows::Services::Store::StorePurchaseResult> ** operation) = 0;
    virtual HRESULT __stdcall abi_RequestPurchaseWithPurchasePropertiesAsync(Windows::Services::Store::IStorePurchaseProperties * storePurchaseProperties, Windows::Foundation::IAsyncOperation<Windows::Services::Store::StorePurchaseResult> ** operation) = 0;
    virtual HRESULT __stdcall get_IsSubscription(bool * value) = 0;
    virtual HRESULT __stdcall get_SubscriptionInfo(Windows::Services::Store::IStoreSubscriptionInfo ** value) = 0;
};

struct __declspec(uuid("4189776a-0559-43ac-a9c6-3ab0011fb8eb")) __declspec(novtable) IStoreSubscriptionInfo : Windows::IInspectable
{
    virtual HRESULT __stdcall get_BillingPeriod(uint32_t * value) = 0;
    virtual HRESULT __stdcall get_BillingPeriodUnit(winrt::Windows::Services::Store::StoreDurationUnit * value) = 0;
    virtual HRESULT __stdcall get_HasTrialPeriod(bool * value) = 0;
    virtual HRESULT __stdcall get_TrialPeriod(uint32_t * value) = 0;
    virtual HRESULT __stdcall get_TrialPeriodUnit(winrt::Windows::Services::Store::StoreDurationUnit * value) = 0;
};

struct __declspec(uuid("f26cb184-6f5e-4dc2-886c-3c63083c2f94")) __declspec(novtable) IStoreVideo : Windows::IInspectable
{
    virtual HRESULT __stdcall get_Uri(Windows::Foundation::IUriRuntimeClass ** value) = 0;
    virtual HRESULT __stdcall get_VideoPurposeTag(hstring * value) = 0;
    virtual HRESULT __stdcall get_Width(uint32_t * value) = 0;
    virtual HRESULT __stdcall get_Height(uint32_t * value) = 0;
    virtual HRESULT __stdcall get_Caption(hstring * value) = 0;
    virtual HRESULT __stdcall get_PreviewImage(Windows::Services::Store::IStoreImage ** value) = 0;
};

}

namespace ABI {

template <> struct traits<Windows::Services::Store::StoreAcquireLicenseResult> { using default_interface = Windows::Services::Store::IStoreAcquireLicenseResult; };
template <> struct traits<Windows::Services::Store::StoreAppLicense> { using default_interface = Windows::Services::Store::IStoreAppLicense; };
template <> struct traits<Windows::Services::Store::StoreAvailability> { using default_interface = Windows::Services::Store::IStoreAvailability; };
template <> struct traits<Windows::Services::Store::StoreCollectionData> { using default_interface = Windows::Services::Store::IStoreCollectionData; };
template <> struct traits<Windows::Services::Store::StoreConsumableResult> { using default_interface = Windows::Services::Store::IStoreConsumableResult; };
template <> struct traits<Windows::Services::Store::StoreContext> { using default_interface = Windows::Services::Store::IStoreContext; };
template <> struct traits<Windows::Services::Store::StoreImage> { using default_interface = Windows::Services::Store::IStoreImage; };
template <> struct traits<Windows::Services::Store::StoreLicense> { using default_interface = Windows::Services::Store::IStoreLicense; };
template <> struct traits<Windows::Services::Store::StorePackageLicense> { using default_interface = Windows::Services::Store::IStorePackageLicense; };
template <> struct traits<Windows::Services::Store::StorePackageUpdate> { using default_interface = Windows::Services::Store::IStorePackageUpdate; };
template <> struct traits<Windows::Services::Store::StorePackageUpdateResult> { using default_interface = Windows::Services::Store::IStorePackageUpdateResult; };
template <> struct traits<Windows::Services::Store::StorePrice> { using default_interface = Windows::Services::Store::IStorePrice; };
template <> struct traits<Windows::Services::Store::StoreProduct> { using default_interface = Windows::Services::Store::IStoreProduct; };
template <> struct traits<Windows::Services::Store::StoreProductPagedQueryResult> { using default_interface = Windows::Services::Store::IStoreProductPagedQueryResult; };
template <> struct traits<Windows::Services::Store::StoreProductQueryResult> { using default_interface = Windows::Services::Store::IStoreProductQueryResult; };
template <> struct traits<Windows::Services::Store::StoreProductResult> { using default_interface = Windows::Services::Store::IStoreProductResult; };
template <> struct traits<Windows::Services::Store::StorePurchaseProperties> { using default_interface = Windows::Services::Store::IStorePurchaseProperties; };
template <> struct traits<Windows::Services::Store::StorePurchaseResult> { using default_interface = Windows::Services::Store::IStorePurchaseResult; };
template <> struct traits<Windows::Services::Store::StoreSendRequestResult> { using default_interface = Windows::Services::Store::IStoreSendRequestResult; };
template <> struct traits<Windows::Services::Store::StoreSku> { using default_interface = Windows::Services::Store::IStoreSku; };
template <> struct traits<Windows::Services::Store::StoreSubscriptionInfo> { using default_interface = Windows::Services::Store::IStoreSubscriptionInfo; };
template <> struct traits<Windows::Services::Store::StoreVideo> { using default_interface = Windows::Services::Store::IStoreVideo; };

}

namespace Windows::Services::Store {

template <typename T> class impl_IStoreAcquireLicenseResult;
template <typename T> class impl_IStoreAppLicense;
template <typename T> class impl_IStoreAvailability;
template <typename T> class impl_IStoreCollectionData;
template <typename T> class impl_IStoreConsumableResult;
template <typename T> class impl_IStoreContext;
template <typename T> class impl_IStoreContextStatics;
template <typename T> class impl_IStoreImage;
template <typename T> class impl_IStoreLicense;
template <typename T> class impl_IStorePackageLicense;
template <typename T> class impl_IStorePackageUpdate;
template <typename T> class impl_IStorePackageUpdateResult;
template <typename T> class impl_IStorePrice;
template <typename T> class impl_IStoreProduct;
template <typename T> class impl_IStoreProductPagedQueryResult;
template <typename T> class impl_IStoreProductQueryResult;
template <typename T> class impl_IStoreProductResult;
template <typename T> class impl_IStorePurchaseProperties;
template <typename T> class impl_IStorePurchasePropertiesFactory;
template <typename T> class impl_IStorePurchaseResult;
template <typename T> class impl_IStoreRequestHelperStatics;
template <typename T> class impl_IStoreSendRequestResult;
template <typename T> class impl_IStoreSku;
template <typename T> class impl_IStoreSubscriptionInfo;
template <typename T> class impl_IStoreVideo;

}

namespace impl {

template <> struct traits<Windows::Services::Store::IStoreAcquireLicenseResult>
{
    using abi = ABI::Windows::Services::Store::IStoreAcquireLicenseResult;
    template <typename D> using consume = Windows::Services::Store::impl_IStoreAcquireLicenseResult<D>;
};

template <> struct traits<Windows::Services::Store::IStoreAppLicense>
{
    using abi = ABI::Windows::Services::Store::IStoreAppLicense;
    template <typename D> using consume = Windows::Services::Store::impl_IStoreAppLicense<D>;
};

template <> struct traits<Windows::Services::Store::IStoreAvailability>
{
    using abi = ABI::Windows::Services::Store::IStoreAvailability;
    template <typename D> using consume = Windows::Services::Store::impl_IStoreAvailability<D>;
};

template <> struct traits<Windows::Services::Store::IStoreCollectionData>
{
    using abi = ABI::Windows::Services::Store::IStoreCollectionData;
    template <typename D> using consume = Windows::Services::Store::impl_IStoreCollectionData<D>;
};

template <> struct traits<Windows::Services::Store::IStoreConsumableResult>
{
    using abi = ABI::Windows::Services::Store::IStoreConsumableResult;
    template <typename D> using consume = Windows::Services::Store::impl_IStoreConsumableResult<D>;
};

template <> struct traits<Windows::Services::Store::IStoreContext>
{
    using abi = ABI::Windows::Services::Store::IStoreContext;
    template <typename D> using consume = Windows::Services::Store::impl_IStoreContext<D>;
};

template <> struct traits<Windows::Services::Store::IStoreContextStatics>
{
    using abi = ABI::Windows::Services::Store::IStoreContextStatics;
    template <typename D> using consume = Windows::Services::Store::impl_IStoreContextStatics<D>;
};

template <> struct traits<Windows::Services::Store::IStoreImage>
{
    using abi = ABI::Windows::Services::Store::IStoreImage;
    template <typename D> using consume = Windows::Services::Store::impl_IStoreImage<D>;
};

template <> struct traits<Windows::Services::Store::IStoreLicense>
{
    using abi = ABI::Windows::Services::Store::IStoreLicense;
    template <typename D> using consume = Windows::Services::Store::impl_IStoreLicense<D>;
};

template <> struct traits<Windows::Services::Store::IStorePackageLicense>
{
    using abi = ABI::Windows::Services::Store::IStorePackageLicense;
    template <typename D> using consume = Windows::Services::Store::impl_IStorePackageLicense<D>;
};

template <> struct traits<Windows::Services::Store::IStorePackageUpdate>
{
    using abi = ABI::Windows::Services::Store::IStorePackageUpdate;
    template <typename D> using consume = Windows::Services::Store::impl_IStorePackageUpdate<D>;
};

template <> struct traits<Windows::Services::Store::IStorePackageUpdateResult>
{
    using abi = ABI::Windows::Services::Store::IStorePackageUpdateResult;
    template <typename D> using consume = Windows::Services::Store::impl_IStorePackageUpdateResult<D>;
};

template <> struct traits<Windows::Services::Store::IStorePrice>
{
    using abi = ABI::Windows::Services::Store::IStorePrice;
    template <typename D> using consume = Windows::Services::Store::impl_IStorePrice<D>;
};

template <> struct traits<Windows::Services::Store::IStoreProduct>
{
    using abi = ABI::Windows::Services::Store::IStoreProduct;
    template <typename D> using consume = Windows::Services::Store::impl_IStoreProduct<D>;
};

template <> struct traits<Windows::Services::Store::IStoreProductPagedQueryResult>
{
    using abi = ABI::Windows::Services::Store::IStoreProductPagedQueryResult;
    template <typename D> using consume = Windows::Services::Store::impl_IStoreProductPagedQueryResult<D>;
};

template <> struct traits<Windows::Services::Store::IStoreProductQueryResult>
{
    using abi = ABI::Windows::Services::Store::IStoreProductQueryResult;
    template <typename D> using consume = Windows::Services::Store::impl_IStoreProductQueryResult<D>;
};

template <> struct traits<Windows::Services::Store::IStoreProductResult>
{
    using abi = ABI::Windows::Services::Store::IStoreProductResult;
    template <typename D> using consume = Windows::Services::Store::impl_IStoreProductResult<D>;
};

template <> struct traits<Windows::Services::Store::IStorePurchaseProperties>
{
    using abi = ABI::Windows::Services::Store::IStorePurchaseProperties;
    template <typename D> using consume = Windows::Services::Store::impl_IStorePurchaseProperties<D>;
};

template <> struct traits<Windows::Services::Store::IStorePurchasePropertiesFactory>
{
    using abi = ABI::Windows::Services::Store::IStorePurchasePropertiesFactory;
    template <typename D> using consume = Windows::Services::Store::impl_IStorePurchasePropertiesFactory<D>;
};

template <> struct traits<Windows::Services::Store::IStorePurchaseResult>
{
    using abi = ABI::Windows::Services::Store::IStorePurchaseResult;
    template <typename D> using consume = Windows::Services::Store::impl_IStorePurchaseResult<D>;
};

template <> struct traits<Windows::Services::Store::IStoreRequestHelperStatics>
{
    using abi = ABI::Windows::Services::Store::IStoreRequestHelperStatics;
    template <typename D> using consume = Windows::Services::Store::impl_IStoreRequestHelperStatics<D>;
};

template <> struct traits<Windows::Services::Store::IStoreSendRequestResult>
{
    using abi = ABI::Windows::Services::Store::IStoreSendRequestResult;
    template <typename D> using consume = Windows::Services::Store::impl_IStoreSendRequestResult<D>;
};

template <> struct traits<Windows::Services::Store::IStoreSku>
{
    using abi = ABI::Windows::Services::Store::IStoreSku;
    template <typename D> using consume = Windows::Services::Store::impl_IStoreSku<D>;
};

template <> struct traits<Windows::Services::Store::IStoreSubscriptionInfo>
{
    using abi = ABI::Windows::Services::Store::IStoreSubscriptionInfo;
    template <typename D> using consume = Windows::Services::Store::impl_IStoreSubscriptionInfo<D>;
};

template <> struct traits<Windows::Services::Store::IStoreVideo>
{
    using abi = ABI::Windows::Services::Store::IStoreVideo;
    template <typename D> using consume = Windows::Services::Store::impl_IStoreVideo<D>;
};

template <> struct traits<Windows::Services::Store::StoreAcquireLicenseResult>
{
    using abi = ABI::Windows::Services::Store::StoreAcquireLicenseResult;
    using default_interface = Windows::Services::Store::IStoreAcquireLicenseResult;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Services.Store.StoreAcquireLicenseResult"; }
};

template <> struct traits<Windows::Services::Store::StoreAppLicense>
{
    using abi = ABI::Windows::Services::Store::StoreAppLicense;
    using default_interface = Windows::Services::Store::IStoreAppLicense;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Services.Store.StoreAppLicense"; }
};

template <> struct traits<Windows::Services::Store::StoreAvailability>
{
    using abi = ABI::Windows::Services::Store::StoreAvailability;
    using default_interface = Windows::Services::Store::IStoreAvailability;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Services.Store.StoreAvailability"; }
};

template <> struct traits<Windows::Services::Store::StoreCollectionData>
{
    using abi = ABI::Windows::Services::Store::StoreCollectionData;
    using default_interface = Windows::Services::Store::IStoreCollectionData;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Services.Store.StoreCollectionData"; }
};

template <> struct traits<Windows::Services::Store::StoreConsumableResult>
{
    using abi = ABI::Windows::Services::Store::StoreConsumableResult;
    using default_interface = Windows::Services::Store::IStoreConsumableResult;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Services.Store.StoreConsumableResult"; }
};

template <> struct traits<Windows::Services::Store::StoreContext>
{
    using abi = ABI::Windows::Services::Store::StoreContext;
    using default_interface = Windows::Services::Store::IStoreContext;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Services.Store.StoreContext"; }
};

template <> struct traits<Windows::Services::Store::StoreImage>
{
    using abi = ABI::Windows::Services::Store::StoreImage;
    using default_interface = Windows::Services::Store::IStoreImage;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Services.Store.StoreImage"; }
};

template <> struct traits<Windows::Services::Store::StoreLicense>
{
    using abi = ABI::Windows::Services::Store::StoreLicense;
    using default_interface = Windows::Services::Store::IStoreLicense;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Services.Store.StoreLicense"; }
};

template <> struct traits<Windows::Services::Store::StorePackageLicense>
{
    using abi = ABI::Windows::Services::Store::StorePackageLicense;
    using default_interface = Windows::Services::Store::IStorePackageLicense;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Services.Store.StorePackageLicense"; }
};

template <> struct traits<Windows::Services::Store::StorePackageUpdate>
{
    using abi = ABI::Windows::Services::Store::StorePackageUpdate;
    using default_interface = Windows::Services::Store::IStorePackageUpdate;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Services.Store.StorePackageUpdate"; }
};

template <> struct traits<Windows::Services::Store::StorePackageUpdateResult>
{
    using abi = ABI::Windows::Services::Store::StorePackageUpdateResult;
    using default_interface = Windows::Services::Store::IStorePackageUpdateResult;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Services.Store.StorePackageUpdateResult"; }
};

template <> struct traits<Windows::Services::Store::StorePrice>
{
    using abi = ABI::Windows::Services::Store::StorePrice;
    using default_interface = Windows::Services::Store::IStorePrice;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Services.Store.StorePrice"; }
};

template <> struct traits<Windows::Services::Store::StoreProduct>
{
    using abi = ABI::Windows::Services::Store::StoreProduct;
    using default_interface = Windows::Services::Store::IStoreProduct;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Services.Store.StoreProduct"; }
};

template <> struct traits<Windows::Services::Store::StoreProductPagedQueryResult>
{
    using abi = ABI::Windows::Services::Store::StoreProductPagedQueryResult;
    using default_interface = Windows::Services::Store::IStoreProductPagedQueryResult;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Services.Store.StoreProductPagedQueryResult"; }
};

template <> struct traits<Windows::Services::Store::StoreProductQueryResult>
{
    using abi = ABI::Windows::Services::Store::StoreProductQueryResult;
    using default_interface = Windows::Services::Store::IStoreProductQueryResult;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Services.Store.StoreProductQueryResult"; }
};

template <> struct traits<Windows::Services::Store::StoreProductResult>
{
    using abi = ABI::Windows::Services::Store::StoreProductResult;
    using default_interface = Windows::Services::Store::IStoreProductResult;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Services.Store.StoreProductResult"; }
};

template <> struct traits<Windows::Services::Store::StorePurchaseProperties>
{
    using abi = ABI::Windows::Services::Store::StorePurchaseProperties;
    using default_interface = Windows::Services::Store::IStorePurchaseProperties;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Services.Store.StorePurchaseProperties"; }
};

template <> struct traits<Windows::Services::Store::StorePurchaseResult>
{
    using abi = ABI::Windows::Services::Store::StorePurchaseResult;
    using default_interface = Windows::Services::Store::IStorePurchaseResult;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Services.Store.StorePurchaseResult"; }
};

template <> struct traits<Windows::Services::Store::StoreRequestHelper>
{
    static constexpr const wchar_t * name() noexcept { return L"Windows.Services.Store.StoreRequestHelper"; }
};

template <> struct traits<Windows::Services::Store::StoreSendRequestResult>
{
    using abi = ABI::Windows::Services::Store::StoreSendRequestResult;
    using default_interface = Windows::Services::Store::IStoreSendRequestResult;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Services.Store.StoreSendRequestResult"; }
};

template <> struct traits<Windows::Services::Store::StoreSku>
{
    using abi = ABI::Windows::Services::Store::StoreSku;
    using default_interface = Windows::Services::Store::IStoreSku;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Services.Store.StoreSku"; }
};

template <> struct traits<Windows::Services::Store::StoreSubscriptionInfo>
{
    using abi = ABI::Windows::Services::Store::StoreSubscriptionInfo;
    using default_interface = Windows::Services::Store::IStoreSubscriptionInfo;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Services.Store.StoreSubscriptionInfo"; }
};

template <> struct traits<Windows::Services::Store::StoreVideo>
{
    using abi = ABI::Windows::Services::Store::StoreVideo;
    using default_interface = Windows::Services::Store::IStoreVideo;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Services.Store.StoreVideo"; }
};

}

}