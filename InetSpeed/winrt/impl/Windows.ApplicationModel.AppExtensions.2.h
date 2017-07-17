// C++/WinRT v1.0.170717.1
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "Windows.ApplicationModel.1.h"
#include "Windows.Foundation.Collections.1.h"
#include "Windows.Storage.1.h"
#include "Windows.ApplicationModel.AppExtensions.1.h"

namespace winrt {

namespace Windows::ApplicationModel::AppExtensions {

struct AppExtension :
    Windows::ApplicationModel::AppExtensions::IAppExtension
{
    AppExtension(std::nullptr_t) noexcept {}
};

struct AppExtensionCatalog :
    Windows::ApplicationModel::AppExtensions::IAppExtensionCatalog
{
    AppExtensionCatalog(std::nullptr_t) noexcept {}
    static Windows::ApplicationModel::AppExtensions::AppExtensionCatalog Open(param::hstring const& appExtensionName);
};

struct AppExtensionPackageInstalledEventArgs :
    Windows::ApplicationModel::AppExtensions::IAppExtensionPackageInstalledEventArgs
{
    AppExtensionPackageInstalledEventArgs(std::nullptr_t) noexcept {}
};

struct AppExtensionPackageStatusChangedEventArgs :
    Windows::ApplicationModel::AppExtensions::IAppExtensionPackageStatusChangedEventArgs
{
    AppExtensionPackageStatusChangedEventArgs(std::nullptr_t) noexcept {}
};

struct AppExtensionPackageUninstallingEventArgs :
    Windows::ApplicationModel::AppExtensions::IAppExtensionPackageUninstallingEventArgs
{
    AppExtensionPackageUninstallingEventArgs(std::nullptr_t) noexcept {}
};

struct AppExtensionPackageUpdatedEventArgs :
    Windows::ApplicationModel::AppExtensions::IAppExtensionPackageUpdatedEventArgs
{
    AppExtensionPackageUpdatedEventArgs(std::nullptr_t) noexcept {}
};

struct AppExtensionPackageUpdatingEventArgs :
    Windows::ApplicationModel::AppExtensions::IAppExtensionPackageUpdatingEventArgs
{
    AppExtensionPackageUpdatingEventArgs(std::nullptr_t) noexcept {}
};

}

namespace impl {

}

}
