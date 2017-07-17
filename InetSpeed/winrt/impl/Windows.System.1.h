// C++/WinRT v1.0.170717.1
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "Windows.ApplicationModel.0.h"
#include "Windows.Foundation.0.h"
#include "Windows.Foundation.Collections.0.h"
#include "Windows.Storage.0.h"
#include "Windows.Storage.Search.0.h"
#include "Windows.Storage.Streams.0.h"
#include "Windows.System.RemoteSystems.0.h"
#include "Windows.UI.Popups.0.h"
#include "Windows.UI.ViewManagement.0.h"
#include "Windows.System.0.h"

namespace winrt {

namespace Windows::System {

struct IAppDiagnosticInfo :
    Windows::Foundation::IInspectable,
    impl::consume_t<IAppDiagnosticInfo>
{
    IAppDiagnosticInfo(std::nullptr_t = nullptr) noexcept {}
};

struct IAppDiagnosticInfoStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IAppDiagnosticInfoStatics>
{
    IAppDiagnosticInfoStatics(std::nullptr_t = nullptr) noexcept {}
};

struct IAppMemoryReport :
    Windows::Foundation::IInspectable,
    impl::consume_t<IAppMemoryReport>
{
    IAppMemoryReport(std::nullptr_t = nullptr) noexcept {}
};

struct IAppMemoryUsageLimitChangingEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<IAppMemoryUsageLimitChangingEventArgs>
{
    IAppMemoryUsageLimitChangingEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct IFolderLauncherOptions :
    Windows::Foundation::IInspectable,
    impl::consume_t<IFolderLauncherOptions>
{
    IFolderLauncherOptions(std::nullptr_t = nullptr) noexcept {}
};

struct IKnownUserPropertiesStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IKnownUserPropertiesStatics>
{
    IKnownUserPropertiesStatics(std::nullptr_t = nullptr) noexcept {}
};

struct ILaunchUriResult :
    Windows::Foundation::IInspectable,
    impl::consume_t<ILaunchUriResult>
{
    ILaunchUriResult(std::nullptr_t = nullptr) noexcept {}
};

struct ILauncherOptions :
    Windows::Foundation::IInspectable,
    impl::consume_t<ILauncherOptions>
{
    ILauncherOptions(std::nullptr_t = nullptr) noexcept {}
};

struct ILauncherOptions2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<ILauncherOptions2>
{
    ILauncherOptions2(std::nullptr_t = nullptr) noexcept {}
};

struct ILauncherOptions3 :
    Windows::Foundation::IInspectable,
    impl::consume_t<ILauncherOptions3>
{
    ILauncherOptions3(std::nullptr_t = nullptr) noexcept {}
};

struct ILauncherOptions4 :
    Windows::Foundation::IInspectable,
    impl::consume_t<ILauncherOptions4>
{
    ILauncherOptions4(std::nullptr_t = nullptr) noexcept {}
};

struct ILauncherStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<ILauncherStatics>
{
    ILauncherStatics(std::nullptr_t = nullptr) noexcept {}
};

struct ILauncherStatics2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<ILauncherStatics2>
{
    ILauncherStatics2(std::nullptr_t = nullptr) noexcept {}
};

struct ILauncherStatics3 :
    Windows::Foundation::IInspectable,
    impl::consume_t<ILauncherStatics3>
{
    ILauncherStatics3(std::nullptr_t = nullptr) noexcept {}
};

struct ILauncherStatics4 :
    Windows::Foundation::IInspectable,
    impl::consume_t<ILauncherStatics4>
{
    ILauncherStatics4(std::nullptr_t = nullptr) noexcept {}
};

struct ILauncherUIOptions :
    Windows::Foundation::IInspectable,
    impl::consume_t<ILauncherUIOptions>
{
    ILauncherUIOptions(std::nullptr_t = nullptr) noexcept {}
};

struct ILauncherViewOptions :
    Windows::Foundation::IInspectable,
    impl::consume_t<ILauncherViewOptions>
{
    ILauncherViewOptions(std::nullptr_t = nullptr) noexcept {}
};

struct IMemoryManagerStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IMemoryManagerStatics>
{
    IMemoryManagerStatics(std::nullptr_t = nullptr) noexcept {}
};

struct IMemoryManagerStatics2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IMemoryManagerStatics2>
{
    IMemoryManagerStatics2(std::nullptr_t = nullptr) noexcept {}
};

struct IMemoryManagerStatics3 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IMemoryManagerStatics3>
{
    IMemoryManagerStatics3(std::nullptr_t = nullptr) noexcept {}
};

struct IProcessLauncherOptions :
    Windows::Foundation::IInspectable,
    impl::consume_t<IProcessLauncherOptions>
{
    IProcessLauncherOptions(std::nullptr_t = nullptr) noexcept {}
};

struct IProcessLauncherResult :
    Windows::Foundation::IInspectable,
    impl::consume_t<IProcessLauncherResult>
{
    IProcessLauncherResult(std::nullptr_t = nullptr) noexcept {}
};

struct IProcessLauncherStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IProcessLauncherStatics>
{
    IProcessLauncherStatics(std::nullptr_t = nullptr) noexcept {}
};

struct IProcessMemoryReport :
    Windows::Foundation::IInspectable,
    impl::consume_t<IProcessMemoryReport>
{
    IProcessMemoryReport(std::nullptr_t = nullptr) noexcept {}
};

struct IProtocolForResultsOperation :
    Windows::Foundation::IInspectable,
    impl::consume_t<IProtocolForResultsOperation>
{
    IProtocolForResultsOperation(std::nullptr_t = nullptr) noexcept {}
};

struct IRemoteLauncherOptions :
    Windows::Foundation::IInspectable,
    impl::consume_t<IRemoteLauncherOptions>
{
    IRemoteLauncherOptions(std::nullptr_t = nullptr) noexcept {}
};

struct IRemoteLauncherStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IRemoteLauncherStatics>
{
    IRemoteLauncherStatics(std::nullptr_t = nullptr) noexcept {}
};

struct IShutdownManagerStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IShutdownManagerStatics>
{
    IShutdownManagerStatics(std::nullptr_t = nullptr) noexcept {}
};

struct IShutdownManagerStatics2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IShutdownManagerStatics2>,
    impl::require<IShutdownManagerStatics2, Windows::System::IShutdownManagerStatics>
{
    IShutdownManagerStatics2(std::nullptr_t = nullptr) noexcept {}
};

struct ITimeZoneSettingsStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<ITimeZoneSettingsStatics>
{
    ITimeZoneSettingsStatics(std::nullptr_t = nullptr) noexcept {}
};

struct IUser :
    Windows::Foundation::IInspectable,
    impl::consume_t<IUser>
{
    IUser(std::nullptr_t = nullptr) noexcept {}
};

struct IUserAuthenticationStatusChangeDeferral :
    Windows::Foundation::IInspectable,
    impl::consume_t<IUserAuthenticationStatusChangeDeferral>
{
    IUserAuthenticationStatusChangeDeferral(std::nullptr_t = nullptr) noexcept {}
};

struct IUserAuthenticationStatusChangingEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<IUserAuthenticationStatusChangingEventArgs>
{
    IUserAuthenticationStatusChangingEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct IUserChangedEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<IUserChangedEventArgs>
{
    IUserChangedEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct IUserDeviceAssociationChangedEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<IUserDeviceAssociationChangedEventArgs>
{
    IUserDeviceAssociationChangedEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct IUserDeviceAssociationStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IUserDeviceAssociationStatics>
{
    IUserDeviceAssociationStatics(std::nullptr_t = nullptr) noexcept {}
};

struct IUserPicker :
    Windows::Foundation::IInspectable,
    impl::consume_t<IUserPicker>
{
    IUserPicker(std::nullptr_t = nullptr) noexcept {}
};

struct IUserPickerStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IUserPickerStatics>
{
    IUserPickerStatics(std::nullptr_t = nullptr) noexcept {}
};

struct IUserStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IUserStatics>
{
    IUserStatics(std::nullptr_t = nullptr) noexcept {}
};

struct IUserWatcher :
    Windows::Foundation::IInspectable,
    impl::consume_t<IUserWatcher>
{
    IUserWatcher(std::nullptr_t = nullptr) noexcept {}
};

}

}
