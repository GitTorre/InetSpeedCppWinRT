// C++/WinRT v1.0.170717.1
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "Windows.ApplicationModel.Appointments.AppointmentsProvider.1.h"
#include "Windows.ApplicationModel.Background.1.h"
#include "Windows.ApplicationModel.Calls.1.h"
#include "Windows.ApplicationModel.Contacts.1.h"
#include "Windows.ApplicationModel.Contacts.Provider.1.h"
#include "Windows.ApplicationModel.DataTransfer.ShareTarget.1.h"
#include "Windows.ApplicationModel.Search.1.h"
#include "Windows.ApplicationModel.UserDataAccounts.Provider.1.h"
#include "Windows.ApplicationModel.Wallet.1.h"
#include "Windows.Devices.Enumeration.1.h"
#include "Windows.Devices.Printers.Extensions.1.h"
#include "Windows.Foundation.1.h"
#include "Windows.Foundation.Collections.1.h"
#include "Windows.Media.SpeechRecognition.1.h"
#include "Windows.Security.Authentication.Web.1.h"
#include "Windows.Security.Authentication.Web.Provider.1.h"
#include "Windows.Storage.1.h"
#include "Windows.Storage.Pickers.Provider.1.h"
#include "Windows.Storage.Provider.1.h"
#include "Windows.Storage.Search.1.h"
#include "Windows.System.1.h"
#include "Windows.UI.Notifications.1.h"
#include "Windows.UI.ViewManagement.1.h"
#include "Windows.ApplicationModel.Activation.1.h"

namespace winrt {

namespace Windows::ApplicationModel::Activation {

struct AppointmentsProviderAddAppointmentActivatedEventArgs :
    Windows::ApplicationModel::Activation::IAppointmentsProviderAddAppointmentActivatedEventArgs,
    impl::require<AppointmentsProviderAddAppointmentActivatedEventArgs, Windows::ApplicationModel::Activation::IActivatedEventArgsWithUser>
{
    AppointmentsProviderAddAppointmentActivatedEventArgs(std::nullptr_t) noexcept {}
};

struct AppointmentsProviderRemoveAppointmentActivatedEventArgs :
    Windows::ApplicationModel::Activation::IAppointmentsProviderRemoveAppointmentActivatedEventArgs,
    impl::require<AppointmentsProviderRemoveAppointmentActivatedEventArgs, Windows::ApplicationModel::Activation::IActivatedEventArgsWithUser>
{
    AppointmentsProviderRemoveAppointmentActivatedEventArgs(std::nullptr_t) noexcept {}
};

struct AppointmentsProviderReplaceAppointmentActivatedEventArgs :
    Windows::ApplicationModel::Activation::IAppointmentsProviderReplaceAppointmentActivatedEventArgs,
    impl::require<AppointmentsProviderReplaceAppointmentActivatedEventArgs, Windows::ApplicationModel::Activation::IActivatedEventArgsWithUser>
{
    AppointmentsProviderReplaceAppointmentActivatedEventArgs(std::nullptr_t) noexcept {}
};

struct AppointmentsProviderShowAppointmentDetailsActivatedEventArgs :
    Windows::ApplicationModel::Activation::IAppointmentsProviderShowAppointmentDetailsActivatedEventArgs,
    impl::require<AppointmentsProviderShowAppointmentDetailsActivatedEventArgs, Windows::ApplicationModel::Activation::IActivatedEventArgsWithUser>
{
    AppointmentsProviderShowAppointmentDetailsActivatedEventArgs(std::nullptr_t) noexcept {}
};

struct AppointmentsProviderShowTimeFrameActivatedEventArgs :
    Windows::ApplicationModel::Activation::IAppointmentsProviderShowTimeFrameActivatedEventArgs,
    impl::require<AppointmentsProviderShowTimeFrameActivatedEventArgs, Windows::ApplicationModel::Activation::IActivatedEventArgsWithUser>
{
    AppointmentsProviderShowTimeFrameActivatedEventArgs(std::nullptr_t) noexcept {}
};

struct BackgroundActivatedEventArgs :
    Windows::ApplicationModel::Activation::IBackgroundActivatedEventArgs
{
    BackgroundActivatedEventArgs(std::nullptr_t) noexcept {}
};

struct CachedFileUpdaterActivatedEventArgs :
    Windows::ApplicationModel::Activation::ICachedFileUpdaterActivatedEventArgs,
    impl::require<CachedFileUpdaterActivatedEventArgs, Windows::ApplicationModel::Activation::IActivatedEventArgsWithUser>
{
    CachedFileUpdaterActivatedEventArgs(std::nullptr_t) noexcept {}
};

struct CameraSettingsActivatedEventArgs :
    Windows::ApplicationModel::Activation::ICameraSettingsActivatedEventArgs
{
    CameraSettingsActivatedEventArgs(std::nullptr_t) noexcept {}
};

struct ContactCallActivatedEventArgs :
    Windows::ApplicationModel::Activation::IContactCallActivatedEventArgs
{
    ContactCallActivatedEventArgs(std::nullptr_t) noexcept {}
};

struct ContactMapActivatedEventArgs :
    Windows::ApplicationModel::Activation::IContactMapActivatedEventArgs
{
    ContactMapActivatedEventArgs(std::nullptr_t) noexcept {}
};

struct ContactMessageActivatedEventArgs :
    Windows::ApplicationModel::Activation::IContactMessageActivatedEventArgs
{
    ContactMessageActivatedEventArgs(std::nullptr_t) noexcept {}
};

struct ContactPanelActivatedEventArgs :
    Windows::ApplicationModel::Activation::IContactPanelActivatedEventArgs,
    impl::require<ContactPanelActivatedEventArgs, Windows::ApplicationModel::Activation::IActivatedEventArgs, Windows::ApplicationModel::Activation::IActivatedEventArgsWithUser>
{
    ContactPanelActivatedEventArgs(std::nullptr_t) noexcept {}
};

struct ContactPickerActivatedEventArgs :
    Windows::ApplicationModel::Activation::IContactPickerActivatedEventArgs
{
    ContactPickerActivatedEventArgs(std::nullptr_t) noexcept {}
};

struct ContactPostActivatedEventArgs :
    Windows::ApplicationModel::Activation::IContactPostActivatedEventArgs
{
    ContactPostActivatedEventArgs(std::nullptr_t) noexcept {}
};

struct ContactVideoCallActivatedEventArgs :
    Windows::ApplicationModel::Activation::IContactVideoCallActivatedEventArgs
{
    ContactVideoCallActivatedEventArgs(std::nullptr_t) noexcept {}
};

struct DeviceActivatedEventArgs :
    Windows::ApplicationModel::Activation::IDeviceActivatedEventArgs,
    impl::require<DeviceActivatedEventArgs, Windows::ApplicationModel::Activation::IActivatedEventArgsWithUser, Windows::ApplicationModel::Activation::IApplicationViewActivatedEventArgs, Windows::ApplicationModel::Activation::IViewSwitcherProvider>
{
    DeviceActivatedEventArgs(std::nullptr_t) noexcept {}
};

struct DevicePairingActivatedEventArgs :
    Windows::ApplicationModel::Activation::IDevicePairingActivatedEventArgs,
    impl::require<DevicePairingActivatedEventArgs, Windows::ApplicationModel::Activation::IActivatedEventArgsWithUser>
{
    DevicePairingActivatedEventArgs(std::nullptr_t) noexcept {}
};

struct DialReceiverActivatedEventArgs :
    Windows::ApplicationModel::Activation::IDialReceiverActivatedEventArgs,
    impl::require<DialReceiverActivatedEventArgs, Windows::ApplicationModel::Activation::IActivatedEventArgsWithUser, Windows::ApplicationModel::Activation::IApplicationViewActivatedEventArgs, Windows::ApplicationModel::Activation::IViewSwitcherProvider>
{
    DialReceiverActivatedEventArgs(std::nullptr_t) noexcept {}
};

struct FileActivatedEventArgs :
    Windows::ApplicationModel::Activation::IFileActivatedEventArgs,
    impl::require<FileActivatedEventArgs, Windows::ApplicationModel::Activation::IActivatedEventArgsWithUser, Windows::ApplicationModel::Activation::IApplicationViewActivatedEventArgs, Windows::ApplicationModel::Activation::IFileActivatedEventArgsWithCallerPackageFamilyName, Windows::ApplicationModel::Activation::IFileActivatedEventArgsWithNeighboringFiles, Windows::ApplicationModel::Activation::IViewSwitcherProvider>
{
    FileActivatedEventArgs(std::nullptr_t) noexcept {}
};

struct FileOpenPickerActivatedEventArgs :
    Windows::ApplicationModel::Activation::IFileOpenPickerActivatedEventArgs,
    impl::require<FileOpenPickerActivatedEventArgs, Windows::ApplicationModel::Activation::IActivatedEventArgsWithUser, Windows::ApplicationModel::Activation::IFileOpenPickerActivatedEventArgs2>
{
    FileOpenPickerActivatedEventArgs(std::nullptr_t) noexcept {}
};

struct FileOpenPickerContinuationEventArgs :
    Windows::ApplicationModel::Activation::IFileOpenPickerContinuationEventArgs,
    impl::require<FileOpenPickerContinuationEventArgs, Windows::ApplicationModel::Activation::IActivatedEventArgsWithUser>
{
    FileOpenPickerContinuationEventArgs(std::nullptr_t) noexcept {}
};

struct FileSavePickerActivatedEventArgs :
    Windows::ApplicationModel::Activation::IFileSavePickerActivatedEventArgs,
    impl::require<FileSavePickerActivatedEventArgs, Windows::ApplicationModel::Activation::IActivatedEventArgsWithUser, Windows::ApplicationModel::Activation::IFileSavePickerActivatedEventArgs2>
{
    FileSavePickerActivatedEventArgs(std::nullptr_t) noexcept {}
};

struct FileSavePickerContinuationEventArgs :
    Windows::ApplicationModel::Activation::IFileSavePickerContinuationEventArgs,
    impl::require<FileSavePickerContinuationEventArgs, Windows::ApplicationModel::Activation::IActivatedEventArgsWithUser>
{
    FileSavePickerContinuationEventArgs(std::nullptr_t) noexcept {}
};

struct FolderPickerContinuationEventArgs :
    Windows::ApplicationModel::Activation::IFolderPickerContinuationEventArgs,
    impl::require<FolderPickerContinuationEventArgs, Windows::ApplicationModel::Activation::IActivatedEventArgsWithUser>
{
    FolderPickerContinuationEventArgs(std::nullptr_t) noexcept {}
};

struct LaunchActivatedEventArgs :
    Windows::ApplicationModel::Activation::ILaunchActivatedEventArgs,
    impl::require<LaunchActivatedEventArgs, Windows::ApplicationModel::Activation::IActivatedEventArgsWithUser, Windows::ApplicationModel::Activation::IApplicationViewActivatedEventArgs, Windows::ApplicationModel::Activation::ILaunchActivatedEventArgs2, Windows::ApplicationModel::Activation::IPrelaunchActivatedEventArgs, Windows::ApplicationModel::Activation::IViewSwitcherProvider>
{
    LaunchActivatedEventArgs(std::nullptr_t) noexcept {}
};

struct LockScreenActivatedEventArgs :
    Windows::ApplicationModel::Activation::ILockScreenActivatedEventArgs,
    impl::require<LockScreenActivatedEventArgs, Windows::ApplicationModel::Activation::IActivatedEventArgsWithUser>
{
    LockScreenActivatedEventArgs(std::nullptr_t) noexcept {}
};

struct LockScreenCallActivatedEventArgs :
    Windows::ApplicationModel::Activation::ILockScreenCallActivatedEventArgs,
    impl::require<LockScreenCallActivatedEventArgs, Windows::ApplicationModel::Activation::IApplicationViewActivatedEventArgs, Windows::ApplicationModel::Activation::IViewSwitcherProvider>
{
    LockScreenCallActivatedEventArgs(std::nullptr_t) noexcept {}
};

struct LockScreenComponentActivatedEventArgs :
    Windows::ApplicationModel::Activation::IActivatedEventArgs
{
    LockScreenComponentActivatedEventArgs(std::nullptr_t) noexcept {}
};

struct PickerReturnedActivatedEventArgs :
    Windows::ApplicationModel::Activation::IPickerReturnedActivatedEventArgs
{
    PickerReturnedActivatedEventArgs(std::nullptr_t) noexcept {}
};

struct Print3DWorkflowActivatedEventArgs :
    Windows::ApplicationModel::Activation::IPrint3DWorkflowActivatedEventArgs
{
    Print3DWorkflowActivatedEventArgs(std::nullptr_t) noexcept {}
};

struct PrintTaskSettingsActivatedEventArgs :
    Windows::ApplicationModel::Activation::IPrintTaskSettingsActivatedEventArgs
{
    PrintTaskSettingsActivatedEventArgs(std::nullptr_t) noexcept {}
};

struct ProtocolActivatedEventArgs :
    Windows::ApplicationModel::Activation::IProtocolActivatedEventArgs,
    impl::require<ProtocolActivatedEventArgs, Windows::ApplicationModel::Activation::IActivatedEventArgsWithUser, Windows::ApplicationModel::Activation::IApplicationViewActivatedEventArgs, Windows::ApplicationModel::Activation::IProtocolActivatedEventArgsWithCallerPackageFamilyNameAndData, Windows::ApplicationModel::Activation::IViewSwitcherProvider>
{
    ProtocolActivatedEventArgs(std::nullptr_t) noexcept {}
};

struct ProtocolForResultsActivatedEventArgs :
    Windows::ApplicationModel::Activation::IProtocolForResultsActivatedEventArgs,
    impl::require<ProtocolForResultsActivatedEventArgs, Windows::ApplicationModel::Activation::IActivatedEventArgsWithUser, Windows::ApplicationModel::Activation::IApplicationViewActivatedEventArgs, Windows::ApplicationModel::Activation::IProtocolActivatedEventArgs, Windows::ApplicationModel::Activation::IProtocolActivatedEventArgsWithCallerPackageFamilyNameAndData, Windows::ApplicationModel::Activation::IViewSwitcherProvider>
{
    ProtocolForResultsActivatedEventArgs(std::nullptr_t) noexcept {}
};

struct RestrictedLaunchActivatedEventArgs :
    Windows::ApplicationModel::Activation::IRestrictedLaunchActivatedEventArgs,
    impl::require<RestrictedLaunchActivatedEventArgs, Windows::ApplicationModel::Activation::IActivatedEventArgsWithUser>
{
    RestrictedLaunchActivatedEventArgs(std::nullptr_t) noexcept {}
};

struct SearchActivatedEventArgs :
    Windows::ApplicationModel::Activation::ISearchActivatedEventArgs,
    impl::require<SearchActivatedEventArgs, Windows::ApplicationModel::Activation::IActivatedEventArgsWithUser, Windows::ApplicationModel::Activation::IApplicationViewActivatedEventArgs, Windows::ApplicationModel::Activation::ISearchActivatedEventArgsWithLinguisticDetails, Windows::ApplicationModel::Activation::IViewSwitcherProvider>
{
    SearchActivatedEventArgs(std::nullptr_t) noexcept {}
};

struct ShareTargetActivatedEventArgs :
    Windows::ApplicationModel::Activation::IShareTargetActivatedEventArgs,
    impl::require<ShareTargetActivatedEventArgs, Windows::ApplicationModel::Activation::IActivatedEventArgsWithUser>
{
    ShareTargetActivatedEventArgs(std::nullptr_t) noexcept {}
};

struct SplashScreen :
    Windows::ApplicationModel::Activation::ISplashScreen
{
    SplashScreen(std::nullptr_t) noexcept {}
};

struct TileActivatedInfo :
    Windows::ApplicationModel::Activation::ITileActivatedInfo
{
    TileActivatedInfo(std::nullptr_t) noexcept {}
};

struct ToastNotificationActivatedEventArgs :
    Windows::ApplicationModel::Activation::IToastNotificationActivatedEventArgs,
    impl::require<ToastNotificationActivatedEventArgs, Windows::ApplicationModel::Activation::IActivatedEventArgsWithUser, Windows::ApplicationModel::Activation::IApplicationViewActivatedEventArgs>
{
    ToastNotificationActivatedEventArgs(std::nullptr_t) noexcept {}
};

struct UserDataAccountProviderActivatedEventArgs :
    Windows::ApplicationModel::Activation::IUserDataAccountProviderActivatedEventArgs
{
    UserDataAccountProviderActivatedEventArgs(std::nullptr_t) noexcept {}
};

struct VoiceCommandActivatedEventArgs :
    Windows::ApplicationModel::Activation::IVoiceCommandActivatedEventArgs,
    impl::require<VoiceCommandActivatedEventArgs, Windows::ApplicationModel::Activation::IActivatedEventArgsWithUser>
{
    VoiceCommandActivatedEventArgs(std::nullptr_t) noexcept {}
};

struct WalletActionActivatedEventArgs :
    Windows::ApplicationModel::Activation::IWalletActionActivatedEventArgs
{
    WalletActionActivatedEventArgs(std::nullptr_t) noexcept {}
};

struct WebAccountProviderActivatedEventArgs :
    Windows::ApplicationModel::Activation::IWebAccountProviderActivatedEventArgs,
    impl::require<WebAccountProviderActivatedEventArgs, Windows::ApplicationModel::Activation::IActivatedEventArgsWithUser>
{
    WebAccountProviderActivatedEventArgs(std::nullptr_t) noexcept {}
};

struct WebAuthenticationBrokerContinuationEventArgs :
    Windows::ApplicationModel::Activation::IWebAuthenticationBrokerContinuationEventArgs
{
    WebAuthenticationBrokerContinuationEventArgs(std::nullptr_t) noexcept {}
};

}

namespace impl {

}

}
