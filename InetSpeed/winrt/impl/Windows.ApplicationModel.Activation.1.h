// C++/WinRT v1.0.170717.1
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "Windows.ApplicationModel.Appointments.AppointmentsProvider.0.h"
#include "Windows.ApplicationModel.Background.0.h"
#include "Windows.ApplicationModel.Calls.0.h"
#include "Windows.ApplicationModel.Contacts.0.h"
#include "Windows.ApplicationModel.Contacts.Provider.0.h"
#include "Windows.ApplicationModel.DataTransfer.ShareTarget.0.h"
#include "Windows.ApplicationModel.Search.0.h"
#include "Windows.ApplicationModel.UserDataAccounts.Provider.0.h"
#include "Windows.ApplicationModel.Wallet.0.h"
#include "Windows.Devices.Enumeration.0.h"
#include "Windows.Devices.Printers.Extensions.0.h"
#include "Windows.Foundation.0.h"
#include "Windows.Foundation.Collections.0.h"
#include "Windows.Media.SpeechRecognition.0.h"
#include "Windows.Security.Authentication.Web.0.h"
#include "Windows.Security.Authentication.Web.Provider.0.h"
#include "Windows.Storage.0.h"
#include "Windows.Storage.Pickers.Provider.0.h"
#include "Windows.Storage.Provider.0.h"
#include "Windows.Storage.Search.0.h"
#include "Windows.System.0.h"
#include "Windows.UI.Notifications.0.h"
#include "Windows.UI.ViewManagement.0.h"
#include "Windows.ApplicationModel.Activation.0.h"

namespace winrt {

namespace Windows::ApplicationModel::Activation {

struct IActivatedEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<IActivatedEventArgs>
{
    IActivatedEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct IActivatedEventArgsWithUser :
    Windows::Foundation::IInspectable,
    impl::consume_t<IActivatedEventArgsWithUser>,
    impl::require<IActivatedEventArgsWithUser, Windows::ApplicationModel::Activation::IActivatedEventArgs>
{
    IActivatedEventArgsWithUser(std::nullptr_t = nullptr) noexcept {}
};

struct IApplicationViewActivatedEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<IApplicationViewActivatedEventArgs>,
    impl::require<IApplicationViewActivatedEventArgs, Windows::ApplicationModel::Activation::IActivatedEventArgs>
{
    IApplicationViewActivatedEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct IAppointmentsProviderActivatedEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<IAppointmentsProviderActivatedEventArgs>,
    impl::require<IAppointmentsProviderActivatedEventArgs, Windows::ApplicationModel::Activation::IActivatedEventArgs>
{
    IAppointmentsProviderActivatedEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct IAppointmentsProviderAddAppointmentActivatedEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<IAppointmentsProviderAddAppointmentActivatedEventArgs>,
    impl::require<IAppointmentsProviderAddAppointmentActivatedEventArgs, Windows::ApplicationModel::Activation::IActivatedEventArgs, Windows::ApplicationModel::Activation::IAppointmentsProviderActivatedEventArgs>
{
    IAppointmentsProviderAddAppointmentActivatedEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct IAppointmentsProviderRemoveAppointmentActivatedEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<IAppointmentsProviderRemoveAppointmentActivatedEventArgs>,
    impl::require<IAppointmentsProviderRemoveAppointmentActivatedEventArgs, Windows::ApplicationModel::Activation::IActivatedEventArgs, Windows::ApplicationModel::Activation::IAppointmentsProviderActivatedEventArgs>
{
    IAppointmentsProviderRemoveAppointmentActivatedEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct IAppointmentsProviderReplaceAppointmentActivatedEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<IAppointmentsProviderReplaceAppointmentActivatedEventArgs>,
    impl::require<IAppointmentsProviderReplaceAppointmentActivatedEventArgs, Windows::ApplicationModel::Activation::IActivatedEventArgs, Windows::ApplicationModel::Activation::IAppointmentsProviderActivatedEventArgs>
{
    IAppointmentsProviderReplaceAppointmentActivatedEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct IAppointmentsProviderShowAppointmentDetailsActivatedEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<IAppointmentsProviderShowAppointmentDetailsActivatedEventArgs>,
    impl::require<IAppointmentsProviderShowAppointmentDetailsActivatedEventArgs, Windows::ApplicationModel::Activation::IActivatedEventArgs, Windows::ApplicationModel::Activation::IAppointmentsProviderActivatedEventArgs>
{
    IAppointmentsProviderShowAppointmentDetailsActivatedEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct IAppointmentsProviderShowTimeFrameActivatedEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<IAppointmentsProviderShowTimeFrameActivatedEventArgs>,
    impl::require<IAppointmentsProviderShowTimeFrameActivatedEventArgs, Windows::ApplicationModel::Activation::IActivatedEventArgs, Windows::ApplicationModel::Activation::IAppointmentsProviderActivatedEventArgs>
{
    IAppointmentsProviderShowTimeFrameActivatedEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct IBackgroundActivatedEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<IBackgroundActivatedEventArgs>
{
    IBackgroundActivatedEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct ICachedFileUpdaterActivatedEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<ICachedFileUpdaterActivatedEventArgs>,
    impl::require<ICachedFileUpdaterActivatedEventArgs, Windows::ApplicationModel::Activation::IActivatedEventArgs>
{
    ICachedFileUpdaterActivatedEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct ICameraSettingsActivatedEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<ICameraSettingsActivatedEventArgs>,
    impl::require<ICameraSettingsActivatedEventArgs, Windows::ApplicationModel::Activation::IActivatedEventArgs>
{
    ICameraSettingsActivatedEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct IContactActivatedEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<IContactActivatedEventArgs>,
    impl::require<IContactActivatedEventArgs, Windows::ApplicationModel::Activation::IActivatedEventArgs>
{
    IContactActivatedEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct IContactCallActivatedEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<IContactCallActivatedEventArgs>,
    impl::require<IContactCallActivatedEventArgs, Windows::ApplicationModel::Activation::IActivatedEventArgs, Windows::ApplicationModel::Activation::IContactActivatedEventArgs>
{
    IContactCallActivatedEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct IContactMapActivatedEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<IContactMapActivatedEventArgs>,
    impl::require<IContactMapActivatedEventArgs, Windows::ApplicationModel::Activation::IActivatedEventArgs, Windows::ApplicationModel::Activation::IContactActivatedEventArgs>
{
    IContactMapActivatedEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct IContactMessageActivatedEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<IContactMessageActivatedEventArgs>,
    impl::require<IContactMessageActivatedEventArgs, Windows::ApplicationModel::Activation::IActivatedEventArgs, Windows::ApplicationModel::Activation::IContactActivatedEventArgs>
{
    IContactMessageActivatedEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct IContactPanelActivatedEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<IContactPanelActivatedEventArgs>
{
    IContactPanelActivatedEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct IContactPickerActivatedEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<IContactPickerActivatedEventArgs>,
    impl::require<IContactPickerActivatedEventArgs, Windows::ApplicationModel::Activation::IActivatedEventArgs>
{
    IContactPickerActivatedEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct IContactPostActivatedEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<IContactPostActivatedEventArgs>,
    impl::require<IContactPostActivatedEventArgs, Windows::ApplicationModel::Activation::IActivatedEventArgs, Windows::ApplicationModel::Activation::IContactActivatedEventArgs>
{
    IContactPostActivatedEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct IContactVideoCallActivatedEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<IContactVideoCallActivatedEventArgs>,
    impl::require<IContactVideoCallActivatedEventArgs, Windows::ApplicationModel::Activation::IActivatedEventArgs, Windows::ApplicationModel::Activation::IContactActivatedEventArgs>
{
    IContactVideoCallActivatedEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct IContactsProviderActivatedEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<IContactsProviderActivatedEventArgs>,
    impl::require<IContactsProviderActivatedEventArgs, Windows::ApplicationModel::Activation::IActivatedEventArgs>
{
    IContactsProviderActivatedEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct IContinuationActivatedEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<IContinuationActivatedEventArgs>,
    impl::require<IContinuationActivatedEventArgs, Windows::ApplicationModel::Activation::IActivatedEventArgs>
{
    IContinuationActivatedEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct IDeviceActivatedEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<IDeviceActivatedEventArgs>,
    impl::require<IDeviceActivatedEventArgs, Windows::ApplicationModel::Activation::IActivatedEventArgs>
{
    IDeviceActivatedEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct IDevicePairingActivatedEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<IDevicePairingActivatedEventArgs>,
    impl::require<IDevicePairingActivatedEventArgs, Windows::ApplicationModel::Activation::IActivatedEventArgs>
{
    IDevicePairingActivatedEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct IDialReceiverActivatedEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<IDialReceiverActivatedEventArgs>,
    impl::require<IDialReceiverActivatedEventArgs, Windows::ApplicationModel::Activation::IActivatedEventArgs, Windows::ApplicationModel::Activation::ILaunchActivatedEventArgs>
{
    IDialReceiverActivatedEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct IFileActivatedEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<IFileActivatedEventArgs>,
    impl::require<IFileActivatedEventArgs, Windows::ApplicationModel::Activation::IActivatedEventArgs>
{
    IFileActivatedEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct IFileActivatedEventArgsWithCallerPackageFamilyName :
    Windows::Foundation::IInspectable,
    impl::consume_t<IFileActivatedEventArgsWithCallerPackageFamilyName>,
    impl::require<IFileActivatedEventArgsWithCallerPackageFamilyName, Windows::ApplicationModel::Activation::IActivatedEventArgs>
{
    IFileActivatedEventArgsWithCallerPackageFamilyName(std::nullptr_t = nullptr) noexcept {}
};

struct IFileActivatedEventArgsWithNeighboringFiles :
    Windows::Foundation::IInspectable,
    impl::consume_t<IFileActivatedEventArgsWithNeighboringFiles>,
    impl::require<IFileActivatedEventArgsWithNeighboringFiles, Windows::ApplicationModel::Activation::IActivatedEventArgs, Windows::ApplicationModel::Activation::IFileActivatedEventArgs>
{
    IFileActivatedEventArgsWithNeighboringFiles(std::nullptr_t = nullptr) noexcept {}
};

struct IFileOpenPickerActivatedEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<IFileOpenPickerActivatedEventArgs>,
    impl::require<IFileOpenPickerActivatedEventArgs, Windows::ApplicationModel::Activation::IActivatedEventArgs>
{
    IFileOpenPickerActivatedEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct IFileOpenPickerActivatedEventArgs2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IFileOpenPickerActivatedEventArgs2>
{
    IFileOpenPickerActivatedEventArgs2(std::nullptr_t = nullptr) noexcept {}
};

struct IFileOpenPickerContinuationEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<IFileOpenPickerContinuationEventArgs>,
    impl::require<IFileOpenPickerContinuationEventArgs, Windows::ApplicationModel::Activation::IActivatedEventArgs, Windows::ApplicationModel::Activation::IContinuationActivatedEventArgs>
{
    IFileOpenPickerContinuationEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct IFileSavePickerActivatedEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<IFileSavePickerActivatedEventArgs>,
    impl::require<IFileSavePickerActivatedEventArgs, Windows::ApplicationModel::Activation::IActivatedEventArgs>
{
    IFileSavePickerActivatedEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct IFileSavePickerActivatedEventArgs2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IFileSavePickerActivatedEventArgs2>
{
    IFileSavePickerActivatedEventArgs2(std::nullptr_t = nullptr) noexcept {}
};

struct IFileSavePickerContinuationEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<IFileSavePickerContinuationEventArgs>,
    impl::require<IFileSavePickerContinuationEventArgs, Windows::ApplicationModel::Activation::IActivatedEventArgs, Windows::ApplicationModel::Activation::IContinuationActivatedEventArgs>
{
    IFileSavePickerContinuationEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct IFolderPickerContinuationEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<IFolderPickerContinuationEventArgs>,
    impl::require<IFolderPickerContinuationEventArgs, Windows::ApplicationModel::Activation::IActivatedEventArgs, Windows::ApplicationModel::Activation::IContinuationActivatedEventArgs>
{
    IFolderPickerContinuationEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct ILaunchActivatedEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<ILaunchActivatedEventArgs>,
    impl::require<ILaunchActivatedEventArgs, Windows::ApplicationModel::Activation::IActivatedEventArgs>
{
    ILaunchActivatedEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct ILaunchActivatedEventArgs2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<ILaunchActivatedEventArgs2>,
    impl::require<ILaunchActivatedEventArgs2, Windows::ApplicationModel::Activation::IActivatedEventArgs, Windows::ApplicationModel::Activation::ILaunchActivatedEventArgs>
{
    ILaunchActivatedEventArgs2(std::nullptr_t = nullptr) noexcept {}
};

struct ILockScreenActivatedEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<ILockScreenActivatedEventArgs>,
    impl::require<ILockScreenActivatedEventArgs, Windows::ApplicationModel::Activation::IActivatedEventArgs>
{
    ILockScreenActivatedEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct ILockScreenCallActivatedEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<ILockScreenCallActivatedEventArgs>,
    impl::require<ILockScreenCallActivatedEventArgs, Windows::ApplicationModel::Activation::IActivatedEventArgs, Windows::ApplicationModel::Activation::ILaunchActivatedEventArgs>
{
    ILockScreenCallActivatedEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct IPickerReturnedActivatedEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPickerReturnedActivatedEventArgs>,
    impl::require<IPickerReturnedActivatedEventArgs, Windows::ApplicationModel::Activation::IActivatedEventArgs>
{
    IPickerReturnedActivatedEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct IPrelaunchActivatedEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPrelaunchActivatedEventArgs>,
    impl::require<IPrelaunchActivatedEventArgs, Windows::ApplicationModel::Activation::IActivatedEventArgs>
{
    IPrelaunchActivatedEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct IPrint3DWorkflowActivatedEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPrint3DWorkflowActivatedEventArgs>,
    impl::require<IPrint3DWorkflowActivatedEventArgs, Windows::ApplicationModel::Activation::IActivatedEventArgs>
{
    IPrint3DWorkflowActivatedEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct IPrintTaskSettingsActivatedEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPrintTaskSettingsActivatedEventArgs>,
    impl::require<IPrintTaskSettingsActivatedEventArgs, Windows::ApplicationModel::Activation::IActivatedEventArgs>
{
    IPrintTaskSettingsActivatedEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct IProtocolActivatedEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<IProtocolActivatedEventArgs>,
    impl::require<IProtocolActivatedEventArgs, Windows::ApplicationModel::Activation::IActivatedEventArgs>
{
    IProtocolActivatedEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct IProtocolActivatedEventArgsWithCallerPackageFamilyNameAndData :
    Windows::Foundation::IInspectable,
    impl::consume_t<IProtocolActivatedEventArgsWithCallerPackageFamilyNameAndData>,
    impl::require<IProtocolActivatedEventArgsWithCallerPackageFamilyNameAndData, Windows::ApplicationModel::Activation::IActivatedEventArgs>
{
    IProtocolActivatedEventArgsWithCallerPackageFamilyNameAndData(std::nullptr_t = nullptr) noexcept {}
};

struct IProtocolForResultsActivatedEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<IProtocolForResultsActivatedEventArgs>,
    impl::require<IProtocolForResultsActivatedEventArgs, Windows::ApplicationModel::Activation::IActivatedEventArgs>
{
    IProtocolForResultsActivatedEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct IRestrictedLaunchActivatedEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<IRestrictedLaunchActivatedEventArgs>,
    impl::require<IRestrictedLaunchActivatedEventArgs, Windows::ApplicationModel::Activation::IActivatedEventArgs>
{
    IRestrictedLaunchActivatedEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct ISearchActivatedEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<ISearchActivatedEventArgs>,
    impl::require<ISearchActivatedEventArgs, Windows::ApplicationModel::Activation::IActivatedEventArgs>
{
    ISearchActivatedEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct ISearchActivatedEventArgsWithLinguisticDetails :
    Windows::Foundation::IInspectable,
    impl::consume_t<ISearchActivatedEventArgsWithLinguisticDetails>
{
    ISearchActivatedEventArgsWithLinguisticDetails(std::nullptr_t = nullptr) noexcept {}
};

struct IShareTargetActivatedEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<IShareTargetActivatedEventArgs>,
    impl::require<IShareTargetActivatedEventArgs, Windows::ApplicationModel::Activation::IActivatedEventArgs>
{
    IShareTargetActivatedEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct ISplashScreen :
    Windows::Foundation::IInspectable,
    impl::consume_t<ISplashScreen>
{
    ISplashScreen(std::nullptr_t = nullptr) noexcept {}
};

struct ITileActivatedInfo :
    Windows::Foundation::IInspectable,
    impl::consume_t<ITileActivatedInfo>
{
    ITileActivatedInfo(std::nullptr_t = nullptr) noexcept {}
};

struct IToastNotificationActivatedEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<IToastNotificationActivatedEventArgs>,
    impl::require<IToastNotificationActivatedEventArgs, Windows::ApplicationModel::Activation::IActivatedEventArgs>
{
    IToastNotificationActivatedEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct IUserDataAccountProviderActivatedEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<IUserDataAccountProviderActivatedEventArgs>,
    impl::require<IUserDataAccountProviderActivatedEventArgs, Windows::ApplicationModel::Activation::IActivatedEventArgs>
{
    IUserDataAccountProviderActivatedEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct IViewSwitcherProvider :
    Windows::Foundation::IInspectable,
    impl::consume_t<IViewSwitcherProvider>,
    impl::require<IViewSwitcherProvider, Windows::ApplicationModel::Activation::IActivatedEventArgs>
{
    IViewSwitcherProvider(std::nullptr_t = nullptr) noexcept {}
};

struct IVoiceCommandActivatedEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<IVoiceCommandActivatedEventArgs>,
    impl::require<IVoiceCommandActivatedEventArgs, Windows::ApplicationModel::Activation::IActivatedEventArgs>
{
    IVoiceCommandActivatedEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct IWalletActionActivatedEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<IWalletActionActivatedEventArgs>,
    impl::require<IWalletActionActivatedEventArgs, Windows::ApplicationModel::Activation::IActivatedEventArgs>
{
    IWalletActionActivatedEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct IWebAccountProviderActivatedEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<IWebAccountProviderActivatedEventArgs>,
    impl::require<IWebAccountProviderActivatedEventArgs, Windows::ApplicationModel::Activation::IActivatedEventArgs>
{
    IWebAccountProviderActivatedEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct IWebAuthenticationBrokerContinuationEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<IWebAuthenticationBrokerContinuationEventArgs>,
    impl::require<IWebAuthenticationBrokerContinuationEventArgs, Windows::ApplicationModel::Activation::IActivatedEventArgs, Windows::ApplicationModel::Activation::IContinuationActivatedEventArgs>
{
    IWebAuthenticationBrokerContinuationEventArgs(std::nullptr_t = nullptr) noexcept {}
};

}

}
