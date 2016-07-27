// C++ for the Windows Runtime v1.29
// Copyright (c) 2016 Microsoft Corporation

#pragma once


WINRT_EXPORT namespace winrt {

namespace ABI::Windows::ApplicationModel {

struct PackageVersion;

}

namespace Windows::ApplicationModel {

using PackageVersion = ABI::Windows::ApplicationModel::PackageVersion;

}

namespace ABI::Windows::ApplicationModel {

struct IAppDisplayInfo;
struct IAppInfo;
struct IDesignModeStatics;
struct IEnteredBackgroundEventArgs;
struct IFullTrustProcessLauncherStatics;
struct ILeavingBackgroundEventArgs;
struct IPackage;
struct IPackage2;
struct IPackage3;
struct IPackage4;
struct IPackageCatalog;
struct IPackageCatalogStatics;
struct IPackageId;
struct IPackageIdWithMetadata;
struct IPackageInstallingEventArgs;
struct IPackageStagingEventArgs;
struct IPackageStatics;
struct IPackageStatus;
struct IPackageStatusChangedEventArgs;
struct IPackageUninstallingEventArgs;
struct IPackageUpdatingEventArgs;
struct IPackageWithMetadata;
struct IStartupTask;
struct IStartupTaskStatics;
struct ISuspendingDeferral;
struct ISuspendingEventArgs;
struct ISuspendingOperation;
struct AppDisplayInfo;
struct AppInfo;
struct EnteredBackgroundEventArgs;
struct LeavingBackgroundEventArgs;
struct Package;
struct PackageCatalog;
struct PackageId;
struct PackageInstallingEventArgs;
struct PackageStagingEventArgs;
struct PackageStatus;
struct PackageStatusChangedEventArgs;
struct PackageUninstallingEventArgs;
struct PackageUpdatingEventArgs;
struct StartupTask;
struct SuspendingDeferral;
struct SuspendingEventArgs;
struct SuspendingOperation;

}

namespace Windows::ApplicationModel {

struct IAppDisplayInfo;
struct IAppInfo;
struct IDesignModeStatics;
struct IEnteredBackgroundEventArgs;
struct IFullTrustProcessLauncherStatics;
struct ILeavingBackgroundEventArgs;
struct IPackage;
struct IPackage2;
struct IPackage3;
struct IPackage4;
struct IPackageCatalog;
struct IPackageCatalogStatics;
struct IPackageId;
struct IPackageIdWithMetadata;
struct IPackageInstallingEventArgs;
struct IPackageStagingEventArgs;
struct IPackageStatics;
struct IPackageStatus;
struct IPackageStatusChangedEventArgs;
struct IPackageUninstallingEventArgs;
struct IPackageUpdatingEventArgs;
struct IPackageWithMetadata;
struct IStartupTask;
struct IStartupTaskStatics;
struct ISuspendingDeferral;
struct ISuspendingEventArgs;
struct ISuspendingOperation;
struct AppDisplayInfo;
struct AppInfo;
struct DesignMode;
struct EnteredBackgroundEventArgs;
struct FullTrustProcessLauncher;
struct LeavingBackgroundEventArgs;
struct Package;
struct PackageCatalog;
struct PackageId;
struct PackageInstallingEventArgs;
struct PackageStagingEventArgs;
struct PackageStatus;
struct PackageStatusChangedEventArgs;
struct PackageUninstallingEventArgs;
struct PackageUpdatingEventArgs;
struct StartupTask;
struct SuspendingDeferral;
struct SuspendingEventArgs;
struct SuspendingOperation;

}

namespace Windows::ApplicationModel {

enum class PackageSignatureKind
{
    None = 0,
    Developer = 1,
    Enterprise = 2,
    Store = 3,
    System = 4,
};

enum class StartupTaskState
{
    Disabled = 0,
    DisabledByUser = 1,
    Enabled = 2,
};

}

}
