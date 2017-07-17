// C++/WinRT v1.0.170717.1
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "Windows.ApplicationModel.Core.0.h"
#include "Windows.Foundation.0.h"
#include "Windows.Storage.0.h"
#include "Windows.Storage.Streams.0.h"
#include "Windows.System.0.h"
#include "Windows.ApplicationModel.0.h"

namespace winrt {

namespace Windows::ApplicationModel {

struct IAppDisplayInfo :
    Windows::Foundation::IInspectable,
    impl::consume_t<IAppDisplayInfo>
{
    IAppDisplayInfo(std::nullptr_t = nullptr) noexcept {}
};

struct IAppInfo :
    Windows::Foundation::IInspectable,
    impl::consume_t<IAppInfo>
{
    IAppInfo(std::nullptr_t = nullptr) noexcept {}
};

struct ICameraApplicationManagerStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<ICameraApplicationManagerStatics>
{
    ICameraApplicationManagerStatics(std::nullptr_t = nullptr) noexcept {}
};

struct IDesignModeStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IDesignModeStatics>
{
    IDesignModeStatics(std::nullptr_t = nullptr) noexcept {}
};

struct IEnteredBackgroundEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<IEnteredBackgroundEventArgs>
{
    IEnteredBackgroundEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct IFullTrustProcessLauncherStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IFullTrustProcessLauncherStatics>
{
    IFullTrustProcessLauncherStatics(std::nullptr_t = nullptr) noexcept {}
};

struct ILeavingBackgroundEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<ILeavingBackgroundEventArgs>
{
    ILeavingBackgroundEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct IPackage :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPackage>
{
    IPackage(std::nullptr_t = nullptr) noexcept {}
};

struct IPackage2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPackage2>
{
    IPackage2(std::nullptr_t = nullptr) noexcept {}
};

struct IPackage3 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPackage3>
{
    IPackage3(std::nullptr_t = nullptr) noexcept {}
};

struct IPackage4 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPackage4>
{
    IPackage4(std::nullptr_t = nullptr) noexcept {}
};

struct IPackage5 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPackage5>
{
    IPackage5(std::nullptr_t = nullptr) noexcept {}
};

struct IPackageCatalog :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPackageCatalog>
{
    IPackageCatalog(std::nullptr_t = nullptr) noexcept {}
};

struct IPackageCatalog2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPackageCatalog2>
{
    IPackageCatalog2(std::nullptr_t = nullptr) noexcept {}
};

struct IPackageCatalogAddOptionalPackageResult :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPackageCatalogAddOptionalPackageResult>
{
    IPackageCatalogAddOptionalPackageResult(std::nullptr_t = nullptr) noexcept {}
};

struct IPackageCatalogStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPackageCatalogStatics>
{
    IPackageCatalogStatics(std::nullptr_t = nullptr) noexcept {}
};

struct IPackageContentGroup :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPackageContentGroup>
{
    IPackageContentGroup(std::nullptr_t = nullptr) noexcept {}
};

struct IPackageContentGroupStagingEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPackageContentGroupStagingEventArgs>
{
    IPackageContentGroupStagingEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct IPackageContentGroupStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPackageContentGroupStatics>
{
    IPackageContentGroupStatics(std::nullptr_t = nullptr) noexcept {}
};

struct IPackageId :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPackageId>
{
    IPackageId(std::nullptr_t = nullptr) noexcept {}
};

struct IPackageIdWithMetadata :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPackageIdWithMetadata>
{
    IPackageIdWithMetadata(std::nullptr_t = nullptr) noexcept {}
};

struct IPackageInstallingEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPackageInstallingEventArgs>
{
    IPackageInstallingEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct IPackageStagingEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPackageStagingEventArgs>
{
    IPackageStagingEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct IPackageStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPackageStatics>
{
    IPackageStatics(std::nullptr_t = nullptr) noexcept {}
};

struct IPackageStatus :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPackageStatus>
{
    IPackageStatus(std::nullptr_t = nullptr) noexcept {}
};

struct IPackageStatus2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPackageStatus2>
{
    IPackageStatus2(std::nullptr_t = nullptr) noexcept {}
};

struct IPackageStatusChangedEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPackageStatusChangedEventArgs>
{
    IPackageStatusChangedEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct IPackageUninstallingEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPackageUninstallingEventArgs>
{
    IPackageUninstallingEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct IPackageUpdatingEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPackageUpdatingEventArgs>
{
    IPackageUpdatingEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct IPackageWithMetadata :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPackageWithMetadata>
{
    IPackageWithMetadata(std::nullptr_t = nullptr) noexcept {}
};

struct IStartupTask :
    Windows::Foundation::IInspectable,
    impl::consume_t<IStartupTask>
{
    IStartupTask(std::nullptr_t = nullptr) noexcept {}
};

struct IStartupTaskStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IStartupTaskStatics>
{
    IStartupTaskStatics(std::nullptr_t = nullptr) noexcept {}
};

struct ISuspendingDeferral :
    Windows::Foundation::IInspectable,
    impl::consume_t<ISuspendingDeferral>
{
    ISuspendingDeferral(std::nullptr_t = nullptr) noexcept {}
};

struct ISuspendingEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<ISuspendingEventArgs>
{
    ISuspendingEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct ISuspendingOperation :
    Windows::Foundation::IInspectable,
    impl::consume_t<ISuspendingOperation>
{
    ISuspendingOperation(std::nullptr_t = nullptr) noexcept {}
};

}

}
