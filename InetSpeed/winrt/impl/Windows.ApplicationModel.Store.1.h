// C++/WinRT v1.0.170717.1
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "Windows.Foundation.0.h"
#include "Windows.Storage.0.h"
#include "Windows.ApplicationModel.Store.0.h"

namespace winrt {

namespace Windows::ApplicationModel::Store {

struct ICurrentApp :
    Windows::Foundation::IInspectable,
    impl::consume_t<ICurrentApp>
{
    ICurrentApp(std::nullptr_t = nullptr) noexcept {}
};

struct ICurrentApp2Statics :
    Windows::Foundation::IInspectable,
    impl::consume_t<ICurrentApp2Statics>
{
    ICurrentApp2Statics(std::nullptr_t = nullptr) noexcept {}
};

struct ICurrentAppSimulator :
    Windows::Foundation::IInspectable,
    impl::consume_t<ICurrentAppSimulator>
{
    ICurrentAppSimulator(std::nullptr_t = nullptr) noexcept {}
};

struct ICurrentAppSimulatorStaticsWithFiltering :
    Windows::Foundation::IInspectable,
    impl::consume_t<ICurrentAppSimulatorStaticsWithFiltering>
{
    ICurrentAppSimulatorStaticsWithFiltering(std::nullptr_t = nullptr) noexcept {}
};

struct ICurrentAppSimulatorWithCampaignId :
    Windows::Foundation::IInspectable,
    impl::consume_t<ICurrentAppSimulatorWithCampaignId>
{
    ICurrentAppSimulatorWithCampaignId(std::nullptr_t = nullptr) noexcept {}
};

struct ICurrentAppSimulatorWithConsumables :
    Windows::Foundation::IInspectable,
    impl::consume_t<ICurrentAppSimulatorWithConsumables>
{
    ICurrentAppSimulatorWithConsumables(std::nullptr_t = nullptr) noexcept {}
};

struct ICurrentAppStaticsWithFiltering :
    Windows::Foundation::IInspectable,
    impl::consume_t<ICurrentAppStaticsWithFiltering>
{
    ICurrentAppStaticsWithFiltering(std::nullptr_t = nullptr) noexcept {}
};

struct ICurrentAppWithCampaignId :
    Windows::Foundation::IInspectable,
    impl::consume_t<ICurrentAppWithCampaignId>
{
    ICurrentAppWithCampaignId(std::nullptr_t = nullptr) noexcept {}
};

struct ICurrentAppWithConsumables :
    Windows::Foundation::IInspectable,
    impl::consume_t<ICurrentAppWithConsumables>
{
    ICurrentAppWithConsumables(std::nullptr_t = nullptr) noexcept {}
};

struct ILicenseInformation :
    Windows::Foundation::IInspectable,
    impl::consume_t<ILicenseInformation>
{
    ILicenseInformation(std::nullptr_t = nullptr) noexcept {}
};

struct IListingInformation :
    Windows::Foundation::IInspectable,
    impl::consume_t<IListingInformation>
{
    IListingInformation(std::nullptr_t = nullptr) noexcept {}
};

struct IListingInformation2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IListingInformation2>
{
    IListingInformation2(std::nullptr_t = nullptr) noexcept {}
};

struct IProductLicense :
    Windows::Foundation::IInspectable,
    impl::consume_t<IProductLicense>
{
    IProductLicense(std::nullptr_t = nullptr) noexcept {}
};

struct IProductLicenseWithFulfillment :
    Windows::Foundation::IInspectable,
    impl::consume_t<IProductLicenseWithFulfillment>,
    impl::require<IProductLicenseWithFulfillment, Windows::ApplicationModel::Store::IProductLicense>
{
    IProductLicenseWithFulfillment(std::nullptr_t = nullptr) noexcept {}
};

struct IProductListing :
    Windows::Foundation::IInspectable,
    impl::consume_t<IProductListing>
{
    IProductListing(std::nullptr_t = nullptr) noexcept {}
};

struct IProductListing2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IProductListing2>
{
    IProductListing2(std::nullptr_t = nullptr) noexcept {}
};

struct IProductListingWithConsumables :
    Windows::Foundation::IInspectable,
    impl::consume_t<IProductListingWithConsumables>
{
    IProductListingWithConsumables(std::nullptr_t = nullptr) noexcept {}
};

struct IProductListingWithMetadata :
    Windows::Foundation::IInspectable,
    impl::consume_t<IProductListingWithMetadata>,
    impl::require<IProductListingWithMetadata, Windows::ApplicationModel::Store::IProductListing>
{
    IProductListingWithMetadata(std::nullptr_t = nullptr) noexcept {}
};

struct IProductPurchaseDisplayProperties :
    Windows::Foundation::IInspectable,
    impl::consume_t<IProductPurchaseDisplayProperties>
{
    IProductPurchaseDisplayProperties(std::nullptr_t = nullptr) noexcept {}
};

struct IProductPurchaseDisplayPropertiesFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<IProductPurchaseDisplayPropertiesFactory>
{
    IProductPurchaseDisplayPropertiesFactory(std::nullptr_t = nullptr) noexcept {}
};

struct IPurchaseResults :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPurchaseResults>
{
    IPurchaseResults(std::nullptr_t = nullptr) noexcept {}
};

struct IUnfulfilledConsumable :
    Windows::Foundation::IInspectable,
    impl::consume_t<IUnfulfilledConsumable>
{
    IUnfulfilledConsumable(std::nullptr_t = nullptr) noexcept {}
};

}

}
