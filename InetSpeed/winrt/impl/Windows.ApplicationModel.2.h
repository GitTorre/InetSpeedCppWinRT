// C++/WinRT v1.0.170717.1
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "Windows.ApplicationModel.Core.1.h"
#include "Windows.Foundation.1.h"
#include "Windows.Storage.1.h"
#include "Windows.Storage.Streams.1.h"
#include "Windows.System.1.h"
#include "Windows.ApplicationModel.1.h"

namespace winrt {

namespace Windows::ApplicationModel {

struct PackageVersion
{
    uint16_t Major;
    uint16_t Minor;
    uint16_t Build;
    uint16_t Revision;
};

struct AppDisplayInfo :
    Windows::ApplicationModel::IAppDisplayInfo
{
    AppDisplayInfo(std::nullptr_t) noexcept {}
};

struct AppInfo :
    Windows::ApplicationModel::IAppInfo
{
    AppInfo(std::nullptr_t) noexcept {}
};

struct CameraApplicationManager
{
    CameraApplicationManager() = delete;
    static void ShowInstalledApplicationsUI();
};

struct DesignMode
{
    DesignMode() = delete;
    static bool DesignModeEnabled();
};

struct EnteredBackgroundEventArgs :
    Windows::ApplicationModel::IEnteredBackgroundEventArgs
{
    EnteredBackgroundEventArgs(std::nullptr_t) noexcept {}
};

struct FullTrustProcessLauncher
{
    FullTrustProcessLauncher() = delete;
    static Windows::Foundation::IAsyncAction LaunchFullTrustProcessForCurrentAppAsync();
    static Windows::Foundation::IAsyncAction LaunchFullTrustProcessForCurrentAppAsync(param::hstring const& parameterGroupId);
    static Windows::Foundation::IAsyncAction LaunchFullTrustProcessForAppAsync(param::hstring const& fullTrustPackageRelativeAppId);
    static Windows::Foundation::IAsyncAction LaunchFullTrustProcessForAppAsync(param::hstring const& fullTrustPackageRelativeAppId, param::hstring const& parameterGroupId);
};

struct LeavingBackgroundEventArgs :
    Windows::ApplicationModel::ILeavingBackgroundEventArgs
{
    LeavingBackgroundEventArgs(std::nullptr_t) noexcept {}
};

struct Package :
    Windows::ApplicationModel::IPackage,
    impl::require<Package, Windows::ApplicationModel::IPackage2, Windows::ApplicationModel::IPackage3, Windows::ApplicationModel::IPackage4, Windows::ApplicationModel::IPackage5, Windows::ApplicationModel::IPackageWithMetadata>
{
    Package(std::nullptr_t) noexcept {}
    static Windows::ApplicationModel::Package Current();
};

struct PackageCatalog :
    Windows::ApplicationModel::IPackageCatalog,
    impl::require<PackageCatalog, Windows::ApplicationModel::IPackageCatalog2>
{
    PackageCatalog(std::nullptr_t) noexcept {}
    static Windows::ApplicationModel::PackageCatalog OpenForCurrentPackage();
    static Windows::ApplicationModel::PackageCatalog OpenForCurrentUser();
};

struct PackageCatalogAddOptionalPackageResult :
    Windows::ApplicationModel::IPackageCatalogAddOptionalPackageResult
{
    PackageCatalogAddOptionalPackageResult(std::nullptr_t) noexcept {}
};

struct PackageContentGroup :
    Windows::ApplicationModel::IPackageContentGroup
{
    PackageContentGroup(std::nullptr_t) noexcept {}
    static hstring RequiredGroupName();
};

struct PackageContentGroupStagingEventArgs :
    Windows::ApplicationModel::IPackageContentGroupStagingEventArgs
{
    PackageContentGroupStagingEventArgs(std::nullptr_t) noexcept {}
};

struct PackageId :
    Windows::ApplicationModel::IPackageId,
    impl::require<PackageId, Windows::ApplicationModel::IPackageIdWithMetadata>
{
    PackageId(std::nullptr_t) noexcept {}
};

struct PackageInstallingEventArgs :
    Windows::ApplicationModel::IPackageInstallingEventArgs
{
    PackageInstallingEventArgs(std::nullptr_t) noexcept {}
};

struct PackageStagingEventArgs :
    Windows::ApplicationModel::IPackageStagingEventArgs
{
    PackageStagingEventArgs(std::nullptr_t) noexcept {}
};

struct PackageStatus :
    Windows::ApplicationModel::IPackageStatus,
    impl::require<PackageStatus, Windows::ApplicationModel::IPackageStatus2>
{
    PackageStatus(std::nullptr_t) noexcept {}
};

struct PackageStatusChangedEventArgs :
    Windows::ApplicationModel::IPackageStatusChangedEventArgs
{
    PackageStatusChangedEventArgs(std::nullptr_t) noexcept {}
};

struct PackageUninstallingEventArgs :
    Windows::ApplicationModel::IPackageUninstallingEventArgs
{
    PackageUninstallingEventArgs(std::nullptr_t) noexcept {}
};

struct PackageUpdatingEventArgs :
    Windows::ApplicationModel::IPackageUpdatingEventArgs
{
    PackageUpdatingEventArgs(std::nullptr_t) noexcept {}
};

struct StartupTask :
    Windows::ApplicationModel::IStartupTask
{
    StartupTask(std::nullptr_t) noexcept {}
    static Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::StartupTask>> GetForCurrentPackageAsync();
    static Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::StartupTask> GetAsync(param::hstring const& taskId);
};

struct SuspendingDeferral :
    Windows::ApplicationModel::ISuspendingDeferral
{
    SuspendingDeferral(std::nullptr_t) noexcept {}
};

struct SuspendingEventArgs :
    Windows::ApplicationModel::ISuspendingEventArgs
{
    SuspendingEventArgs(std::nullptr_t) noexcept {}
};

struct SuspendingOperation :
    Windows::ApplicationModel::ISuspendingOperation
{
    SuspendingOperation(std::nullptr_t) noexcept {}
};

}

namespace impl {

}

}
