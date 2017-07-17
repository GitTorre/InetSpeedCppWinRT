// C++/WinRT v1.0.170717.1
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "Windows.ApplicationModel.0.h"
#include "Windows.Foundation.Collections.0.h"
#include "Windows.Storage.0.h"
#include "Windows.ApplicationModel.AppExtensions.0.h"

namespace winrt {

namespace Windows::ApplicationModel::AppExtensions {

struct IAppExtension :
    Windows::Foundation::IInspectable,
    impl::consume_t<IAppExtension>
{
    IAppExtension(std::nullptr_t = nullptr) noexcept {}
};

struct IAppExtensionCatalog :
    Windows::Foundation::IInspectable,
    impl::consume_t<IAppExtensionCatalog>
{
    IAppExtensionCatalog(std::nullptr_t = nullptr) noexcept {}
};

struct IAppExtensionCatalogStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IAppExtensionCatalogStatics>
{
    IAppExtensionCatalogStatics(std::nullptr_t = nullptr) noexcept {}
};

struct IAppExtensionPackageInstalledEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<IAppExtensionPackageInstalledEventArgs>
{
    IAppExtensionPackageInstalledEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct IAppExtensionPackageStatusChangedEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<IAppExtensionPackageStatusChangedEventArgs>
{
    IAppExtensionPackageStatusChangedEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct IAppExtensionPackageUninstallingEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<IAppExtensionPackageUninstallingEventArgs>
{
    IAppExtensionPackageUninstallingEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct IAppExtensionPackageUpdatedEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<IAppExtensionPackageUpdatedEventArgs>
{
    IAppExtensionPackageUpdatedEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct IAppExtensionPackageUpdatingEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<IAppExtensionPackageUpdatingEventArgs>
{
    IAppExtensionPackageUpdatingEventArgs(std::nullptr_t = nullptr) noexcept {}
};

}

}
