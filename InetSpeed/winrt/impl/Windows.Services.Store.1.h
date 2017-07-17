// C++/WinRT v1.0.170717.1
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "Windows.ApplicationModel.0.h"
#include "Windows.Foundation.0.h"
#include "Windows.System.0.h"
#include "Windows.Web.Http.0.h"
#include "Windows.Services.Store.0.h"

namespace winrt {

namespace Windows::Services::Store {

struct IStoreAcquireLicenseResult :
    Windows::Foundation::IInspectable,
    impl::consume_t<IStoreAcquireLicenseResult>
{
    IStoreAcquireLicenseResult(std::nullptr_t = nullptr) noexcept {}
};

struct IStoreAppLicense :
    Windows::Foundation::IInspectable,
    impl::consume_t<IStoreAppLicense>
{
    IStoreAppLicense(std::nullptr_t = nullptr) noexcept {}
};

struct IStoreAvailability :
    Windows::Foundation::IInspectable,
    impl::consume_t<IStoreAvailability>
{
    IStoreAvailability(std::nullptr_t = nullptr) noexcept {}
};

struct IStoreCollectionData :
    Windows::Foundation::IInspectable,
    impl::consume_t<IStoreCollectionData>
{
    IStoreCollectionData(std::nullptr_t = nullptr) noexcept {}
};

struct IStoreConsumableResult :
    Windows::Foundation::IInspectable,
    impl::consume_t<IStoreConsumableResult>
{
    IStoreConsumableResult(std::nullptr_t = nullptr) noexcept {}
};

struct IStoreContext :
    Windows::Foundation::IInspectable,
    impl::consume_t<IStoreContext>
{
    IStoreContext(std::nullptr_t = nullptr) noexcept {}
};

struct IStoreContext2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IStoreContext2>
{
    IStoreContext2(std::nullptr_t = nullptr) noexcept {}
};

struct IStoreContextStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IStoreContextStatics>
{
    IStoreContextStatics(std::nullptr_t = nullptr) noexcept {}
};

struct IStoreImage :
    Windows::Foundation::IInspectable,
    impl::consume_t<IStoreImage>
{
    IStoreImage(std::nullptr_t = nullptr) noexcept {}
};

struct IStoreLicense :
    Windows::Foundation::IInspectable,
    impl::consume_t<IStoreLicense>
{
    IStoreLicense(std::nullptr_t = nullptr) noexcept {}
};

struct IStorePackageLicense :
    Windows::Foundation::IInspectable,
    impl::consume_t<IStorePackageLicense>,
    impl::require<IStorePackageLicense, Windows::Foundation::IClosable>
{
    IStorePackageLicense(std::nullptr_t = nullptr) noexcept {}
};

struct IStorePackageUpdate :
    Windows::Foundation::IInspectable,
    impl::consume_t<IStorePackageUpdate>
{
    IStorePackageUpdate(std::nullptr_t = nullptr) noexcept {}
};

struct IStorePackageUpdateResult :
    Windows::Foundation::IInspectable,
    impl::consume_t<IStorePackageUpdateResult>
{
    IStorePackageUpdateResult(std::nullptr_t = nullptr) noexcept {}
};

struct IStorePrice :
    Windows::Foundation::IInspectable,
    impl::consume_t<IStorePrice>
{
    IStorePrice(std::nullptr_t = nullptr) noexcept {}
};

struct IStoreProduct :
    Windows::Foundation::IInspectable,
    impl::consume_t<IStoreProduct>
{
    IStoreProduct(std::nullptr_t = nullptr) noexcept {}
};

struct IStoreProductPagedQueryResult :
    Windows::Foundation::IInspectable,
    impl::consume_t<IStoreProductPagedQueryResult>
{
    IStoreProductPagedQueryResult(std::nullptr_t = nullptr) noexcept {}
};

struct IStoreProductQueryResult :
    Windows::Foundation::IInspectable,
    impl::consume_t<IStoreProductQueryResult>
{
    IStoreProductQueryResult(std::nullptr_t = nullptr) noexcept {}
};

struct IStoreProductResult :
    Windows::Foundation::IInspectable,
    impl::consume_t<IStoreProductResult>
{
    IStoreProductResult(std::nullptr_t = nullptr) noexcept {}
};

struct IStorePurchaseProperties :
    Windows::Foundation::IInspectable,
    impl::consume_t<IStorePurchaseProperties>
{
    IStorePurchaseProperties(std::nullptr_t = nullptr) noexcept {}
};

struct IStorePurchasePropertiesFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<IStorePurchasePropertiesFactory>
{
    IStorePurchasePropertiesFactory(std::nullptr_t = nullptr) noexcept {}
};

struct IStorePurchaseResult :
    Windows::Foundation::IInspectable,
    impl::consume_t<IStorePurchaseResult>
{
    IStorePurchaseResult(std::nullptr_t = nullptr) noexcept {}
};

struct IStoreRequestHelperStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IStoreRequestHelperStatics>
{
    IStoreRequestHelperStatics(std::nullptr_t = nullptr) noexcept {}
};

struct IStoreSendRequestResult :
    Windows::Foundation::IInspectable,
    impl::consume_t<IStoreSendRequestResult>
{
    IStoreSendRequestResult(std::nullptr_t = nullptr) noexcept {}
};

struct IStoreSendRequestResult2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IStoreSendRequestResult2>
{
    IStoreSendRequestResult2(std::nullptr_t = nullptr) noexcept {}
};

struct IStoreSku :
    Windows::Foundation::IInspectable,
    impl::consume_t<IStoreSku>
{
    IStoreSku(std::nullptr_t = nullptr) noexcept {}
};

struct IStoreSubscriptionInfo :
    Windows::Foundation::IInspectable,
    impl::consume_t<IStoreSubscriptionInfo>
{
    IStoreSubscriptionInfo(std::nullptr_t = nullptr) noexcept {}
};

struct IStoreVideo :
    Windows::Foundation::IInspectable,
    impl::consume_t<IStoreVideo>
{
    IStoreVideo(std::nullptr_t = nullptr) noexcept {}
};

}

}
