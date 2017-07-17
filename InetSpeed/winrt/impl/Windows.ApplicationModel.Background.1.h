// C++/WinRT v1.0.170717.1
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "Windows.ApplicationModel.Activation.0.h"
#include "Windows.ApplicationModel.Calls.Background.0.h"
#include "Windows.Devices.Bluetooth.0.h"
#include "Windows.Devices.Bluetooth.Advertisement.0.h"
#include "Windows.Devices.Bluetooth.Background.0.h"
#include "Windows.Devices.Bluetooth.GenericAttributeProfile.0.h"
#include "Windows.Devices.Sensors.0.h"
#include "Windows.Devices.SmartCards.0.h"
#include "Windows.Devices.Sms.0.h"
#include "Windows.Foundation.Collections.0.h"
#include "Windows.Networking.0.h"
#include "Windows.Networking.Sockets.0.h"
#include "Windows.Storage.0.h"
#include "Windows.Storage.Provider.0.h"
#include "Windows.System.0.h"
#include "Windows.UI.Notifications.0.h"
#include "Windows.ApplicationModel.Background.0.h"

namespace winrt {

namespace Windows::ApplicationModel::Background {

struct IActivitySensorTrigger :
    Windows::Foundation::IInspectable,
    impl::consume_t<IActivitySensorTrigger>,
    impl::require<IActivitySensorTrigger, Windows::ApplicationModel::Background::IBackgroundTrigger>
{
    IActivitySensorTrigger(std::nullptr_t = nullptr) noexcept {}
};

struct IActivitySensorTriggerFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<IActivitySensorTriggerFactory>
{
    IActivitySensorTriggerFactory(std::nullptr_t = nullptr) noexcept {}
};

struct IAlarmApplicationManagerStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IAlarmApplicationManagerStatics>
{
    IAlarmApplicationManagerStatics(std::nullptr_t = nullptr) noexcept {}
};

struct IAppBroadcastTrigger :
    Windows::Foundation::IInspectable,
    impl::consume_t<IAppBroadcastTrigger>,
    impl::require<IAppBroadcastTrigger, Windows::ApplicationModel::Background::IBackgroundTrigger>
{
    IAppBroadcastTrigger(std::nullptr_t = nullptr) noexcept {}
};

struct IAppBroadcastTriggerFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<IAppBroadcastTriggerFactory>
{
    IAppBroadcastTriggerFactory(std::nullptr_t = nullptr) noexcept {}
};

struct IAppBroadcastTriggerProviderInfo :
    Windows::Foundation::IInspectable,
    impl::consume_t<IAppBroadcastTriggerProviderInfo>
{
    IAppBroadcastTriggerProviderInfo(std::nullptr_t = nullptr) noexcept {}
};

struct IApplicationTrigger :
    Windows::Foundation::IInspectable,
    impl::consume_t<IApplicationTrigger>,
    impl::require<IApplicationTrigger, Windows::ApplicationModel::Background::IBackgroundTrigger>
{
    IApplicationTrigger(std::nullptr_t = nullptr) noexcept {}
};

struct IApplicationTriggerDetails :
    Windows::Foundation::IInspectable,
    impl::consume_t<IApplicationTriggerDetails>
{
    IApplicationTriggerDetails(std::nullptr_t = nullptr) noexcept {}
};

struct IAppointmentStoreNotificationTrigger :
    Windows::Foundation::IInspectable,
    impl::consume_t<IAppointmentStoreNotificationTrigger>,
    impl::require<IAppointmentStoreNotificationTrigger, Windows::ApplicationModel::Background::IBackgroundTrigger>
{
    IAppointmentStoreNotificationTrigger(std::nullptr_t = nullptr) noexcept {}
};

struct IBackgroundCondition :
    Windows::Foundation::IInspectable,
    impl::consume_t<IBackgroundCondition>
{
    IBackgroundCondition(std::nullptr_t = nullptr) noexcept {}
};

struct IBackgroundExecutionManagerStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IBackgroundExecutionManagerStatics>
{
    IBackgroundExecutionManagerStatics(std::nullptr_t = nullptr) noexcept {}
};

struct IBackgroundTask :
    Windows::Foundation::IInspectable,
    impl::consume_t<IBackgroundTask>
{
    IBackgroundTask(std::nullptr_t = nullptr) noexcept {}
};

struct IBackgroundTaskBuilder :
    Windows::Foundation::IInspectable,
    impl::consume_t<IBackgroundTaskBuilder>
{
    IBackgroundTaskBuilder(std::nullptr_t = nullptr) noexcept {}
};

struct IBackgroundTaskBuilder2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IBackgroundTaskBuilder2>,
    impl::require<IBackgroundTaskBuilder2, Windows::ApplicationModel::Background::IBackgroundTaskBuilder>
{
    IBackgroundTaskBuilder2(std::nullptr_t = nullptr) noexcept {}
};

struct IBackgroundTaskBuilder3 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IBackgroundTaskBuilder3>,
    impl::require<IBackgroundTaskBuilder3, Windows::ApplicationModel::Background::IBackgroundTaskBuilder>
{
    IBackgroundTaskBuilder3(std::nullptr_t = nullptr) noexcept {}
};

struct IBackgroundTaskBuilder4 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IBackgroundTaskBuilder4>,
    impl::require<IBackgroundTaskBuilder4, Windows::ApplicationModel::Background::IBackgroundTaskBuilder>
{
    IBackgroundTaskBuilder4(std::nullptr_t = nullptr) noexcept {}
};

struct IBackgroundTaskCompletedEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<IBackgroundTaskCompletedEventArgs>
{
    IBackgroundTaskCompletedEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct IBackgroundTaskDeferral :
    Windows::Foundation::IInspectable,
    impl::consume_t<IBackgroundTaskDeferral>
{
    IBackgroundTaskDeferral(std::nullptr_t = nullptr) noexcept {}
};

struct IBackgroundTaskInstance :
    Windows::Foundation::IInspectable,
    impl::consume_t<IBackgroundTaskInstance>
{
    IBackgroundTaskInstance(std::nullptr_t = nullptr) noexcept {}
};

struct IBackgroundTaskInstance2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IBackgroundTaskInstance2>,
    impl::require<IBackgroundTaskInstance2, Windows::ApplicationModel::Background::IBackgroundTaskInstance>
{
    IBackgroundTaskInstance2(std::nullptr_t = nullptr) noexcept {}
};

struct IBackgroundTaskInstance4 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IBackgroundTaskInstance4>,
    impl::require<IBackgroundTaskInstance4, Windows::ApplicationModel::Background::IBackgroundTaskInstance>
{
    IBackgroundTaskInstance4(std::nullptr_t = nullptr) noexcept {}
};

struct IBackgroundTaskProgressEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<IBackgroundTaskProgressEventArgs>
{
    IBackgroundTaskProgressEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct IBackgroundTaskRegistration :
    Windows::Foundation::IInspectable,
    impl::consume_t<IBackgroundTaskRegistration>
{
    IBackgroundTaskRegistration(std::nullptr_t = nullptr) noexcept {}
};

struct IBackgroundTaskRegistration2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IBackgroundTaskRegistration2>,
    impl::require<IBackgroundTaskRegistration2, Windows::ApplicationModel::Background::IBackgroundTaskRegistration>
{
    IBackgroundTaskRegistration2(std::nullptr_t = nullptr) noexcept {}
};

struct IBackgroundTaskRegistration3 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IBackgroundTaskRegistration3>,
    impl::require<IBackgroundTaskRegistration3, Windows::ApplicationModel::Background::IBackgroundTaskRegistration>
{
    IBackgroundTaskRegistration3(std::nullptr_t = nullptr) noexcept {}
};

struct IBackgroundTaskRegistrationGroup :
    Windows::Foundation::IInspectable,
    impl::consume_t<IBackgroundTaskRegistrationGroup>
{
    IBackgroundTaskRegistrationGroup(std::nullptr_t = nullptr) noexcept {}
};

struct IBackgroundTaskRegistrationGroupFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<IBackgroundTaskRegistrationGroupFactory>
{
    IBackgroundTaskRegistrationGroupFactory(std::nullptr_t = nullptr) noexcept {}
};

struct IBackgroundTaskRegistrationStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IBackgroundTaskRegistrationStatics>
{
    IBackgroundTaskRegistrationStatics(std::nullptr_t = nullptr) noexcept {}
};

struct IBackgroundTaskRegistrationStatics2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IBackgroundTaskRegistrationStatics2>
{
    IBackgroundTaskRegistrationStatics2(std::nullptr_t = nullptr) noexcept {}
};

struct IBackgroundTrigger :
    Windows::Foundation::IInspectable,
    impl::consume_t<IBackgroundTrigger>
{
    IBackgroundTrigger(std::nullptr_t = nullptr) noexcept {}
};

struct IBackgroundWorkCostStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IBackgroundWorkCostStatics>
{
    IBackgroundWorkCostStatics(std::nullptr_t = nullptr) noexcept {}
};

struct IBluetoothLEAdvertisementPublisherTrigger :
    Windows::Foundation::IInspectable,
    impl::consume_t<IBluetoothLEAdvertisementPublisherTrigger>,
    impl::require<IBluetoothLEAdvertisementPublisherTrigger, Windows::ApplicationModel::Background::IBackgroundTrigger>
{
    IBluetoothLEAdvertisementPublisherTrigger(std::nullptr_t = nullptr) noexcept {}
};

struct IBluetoothLEAdvertisementWatcherTrigger :
    Windows::Foundation::IInspectable,
    impl::consume_t<IBluetoothLEAdvertisementWatcherTrigger>,
    impl::require<IBluetoothLEAdvertisementWatcherTrigger, Windows::ApplicationModel::Background::IBackgroundTrigger>
{
    IBluetoothLEAdvertisementWatcherTrigger(std::nullptr_t = nullptr) noexcept {}
};

struct ICachedFileUpdaterTrigger :
    Windows::Foundation::IInspectable,
    impl::consume_t<ICachedFileUpdaterTrigger>,
    impl::require<ICachedFileUpdaterTrigger, Windows::ApplicationModel::Background::IBackgroundTrigger>
{
    ICachedFileUpdaterTrigger(std::nullptr_t = nullptr) noexcept {}
};

struct ICachedFileUpdaterTriggerDetails :
    Windows::Foundation::IInspectable,
    impl::consume_t<ICachedFileUpdaterTriggerDetails>
{
    ICachedFileUpdaterTriggerDetails(std::nullptr_t = nullptr) noexcept {}
};

struct IChatMessageNotificationTrigger :
    Windows::Foundation::IInspectable,
    impl::consume_t<IChatMessageNotificationTrigger>,
    impl::require<IChatMessageNotificationTrigger, Windows::ApplicationModel::Background::IBackgroundTrigger>
{
    IChatMessageNotificationTrigger(std::nullptr_t = nullptr) noexcept {}
};

struct IChatMessageReceivedNotificationTrigger :
    Windows::Foundation::IInspectable,
    impl::consume_t<IChatMessageReceivedNotificationTrigger>,
    impl::require<IChatMessageReceivedNotificationTrigger, Windows::ApplicationModel::Background::IBackgroundTrigger>
{
    IChatMessageReceivedNotificationTrigger(std::nullptr_t = nullptr) noexcept {}
};

struct ICommunicationBlockingAppSetAsActiveTrigger :
    Windows::Foundation::IInspectable,
    impl::consume_t<ICommunicationBlockingAppSetAsActiveTrigger>,
    impl::require<ICommunicationBlockingAppSetAsActiveTrigger, Windows::ApplicationModel::Background::IBackgroundTrigger>
{
    ICommunicationBlockingAppSetAsActiveTrigger(std::nullptr_t = nullptr) noexcept {}
};

struct IContactStoreNotificationTrigger :
    Windows::Foundation::IInspectable,
    impl::consume_t<IContactStoreNotificationTrigger>,
    impl::require<IContactStoreNotificationTrigger, Windows::ApplicationModel::Background::IBackgroundTrigger>
{
    IContactStoreNotificationTrigger(std::nullptr_t = nullptr) noexcept {}
};

struct IContentPrefetchTrigger :
    Windows::Foundation::IInspectable,
    impl::consume_t<IContentPrefetchTrigger>,
    impl::require<IContentPrefetchTrigger, Windows::ApplicationModel::Background::IBackgroundTrigger>
{
    IContentPrefetchTrigger(std::nullptr_t = nullptr) noexcept {}
};

struct IContentPrefetchTriggerFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<IContentPrefetchTriggerFactory>
{
    IContentPrefetchTriggerFactory(std::nullptr_t = nullptr) noexcept {}
};

struct IDeviceConnectionChangeTrigger :
    Windows::Foundation::IInspectable,
    impl::consume_t<IDeviceConnectionChangeTrigger>,
    impl::require<IDeviceConnectionChangeTrigger, Windows::ApplicationModel::Background::IBackgroundTrigger>
{
    IDeviceConnectionChangeTrigger(std::nullptr_t = nullptr) noexcept {}
};

struct IDeviceConnectionChangeTriggerStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IDeviceConnectionChangeTriggerStatics>
{
    IDeviceConnectionChangeTriggerStatics(std::nullptr_t = nullptr) noexcept {}
};

struct IDeviceManufacturerNotificationTrigger :
    Windows::Foundation::IInspectable,
    impl::consume_t<IDeviceManufacturerNotificationTrigger>,
    impl::require<IDeviceManufacturerNotificationTrigger, Windows::ApplicationModel::Background::IBackgroundTrigger>
{
    IDeviceManufacturerNotificationTrigger(std::nullptr_t = nullptr) noexcept {}
};

struct IDeviceManufacturerNotificationTriggerFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<IDeviceManufacturerNotificationTriggerFactory>
{
    IDeviceManufacturerNotificationTriggerFactory(std::nullptr_t = nullptr) noexcept {}
};

struct IDeviceServicingTrigger :
    Windows::Foundation::IInspectable,
    impl::consume_t<IDeviceServicingTrigger>,
    impl::require<IDeviceServicingTrigger, Windows::ApplicationModel::Background::IBackgroundTrigger>
{
    IDeviceServicingTrigger(std::nullptr_t = nullptr) noexcept {}
};

struct IDeviceUseTrigger :
    Windows::Foundation::IInspectable,
    impl::consume_t<IDeviceUseTrigger>,
    impl::require<IDeviceUseTrigger, Windows::ApplicationModel::Background::IBackgroundTrigger>
{
    IDeviceUseTrigger(std::nullptr_t = nullptr) noexcept {}
};

struct IDeviceWatcherTrigger :
    Windows::Foundation::IInspectable,
    impl::consume_t<IDeviceWatcherTrigger>,
    impl::require<IDeviceWatcherTrigger, Windows::ApplicationModel::Background::IBackgroundTrigger>
{
    IDeviceWatcherTrigger(std::nullptr_t = nullptr) noexcept {}
};

struct IEmailStoreNotificationTrigger :
    Windows::Foundation::IInspectable,
    impl::consume_t<IEmailStoreNotificationTrigger>,
    impl::require<IEmailStoreNotificationTrigger, Windows::ApplicationModel::Background::IBackgroundTrigger>
{
    IEmailStoreNotificationTrigger(std::nullptr_t = nullptr) noexcept {}
};

struct IGattCharacteristicNotificationTrigger :
    Windows::Foundation::IInspectable,
    impl::consume_t<IGattCharacteristicNotificationTrigger>,
    impl::require<IGattCharacteristicNotificationTrigger, Windows::ApplicationModel::Background::IBackgroundTrigger>
{
    IGattCharacteristicNotificationTrigger(std::nullptr_t = nullptr) noexcept {}
};

struct IGattCharacteristicNotificationTrigger2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IGattCharacteristicNotificationTrigger2>
{
    IGattCharacteristicNotificationTrigger2(std::nullptr_t = nullptr) noexcept {}
};

struct IGattCharacteristicNotificationTriggerFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<IGattCharacteristicNotificationTriggerFactory>
{
    IGattCharacteristicNotificationTriggerFactory(std::nullptr_t = nullptr) noexcept {}
};

struct IGattCharacteristicNotificationTriggerFactory2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IGattCharacteristicNotificationTriggerFactory2>
{
    IGattCharacteristicNotificationTriggerFactory2(std::nullptr_t = nullptr) noexcept {}
};

struct IGattServiceProviderTrigger :
    Windows::Foundation::IInspectable,
    impl::consume_t<IGattServiceProviderTrigger>
{
    IGattServiceProviderTrigger(std::nullptr_t = nullptr) noexcept {}
};

struct IGattServiceProviderTriggerResult :
    Windows::Foundation::IInspectable,
    impl::consume_t<IGattServiceProviderTriggerResult>
{
    IGattServiceProviderTriggerResult(std::nullptr_t = nullptr) noexcept {}
};

struct IGattServiceProviderTriggerStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IGattServiceProviderTriggerStatics>
{
    IGattServiceProviderTriggerStatics(std::nullptr_t = nullptr) noexcept {}
};

struct ILocationTrigger :
    Windows::Foundation::IInspectable,
    impl::consume_t<ILocationTrigger>,
    impl::require<ILocationTrigger, Windows::ApplicationModel::Background::IBackgroundTrigger>
{
    ILocationTrigger(std::nullptr_t = nullptr) noexcept {}
};

struct ILocationTriggerFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<ILocationTriggerFactory>
{
    ILocationTriggerFactory(std::nullptr_t = nullptr) noexcept {}
};

struct IMaintenanceTrigger :
    Windows::Foundation::IInspectable,
    impl::consume_t<IMaintenanceTrigger>,
    impl::require<IMaintenanceTrigger, Windows::ApplicationModel::Background::IBackgroundTrigger>
{
    IMaintenanceTrigger(std::nullptr_t = nullptr) noexcept {}
};

struct IMaintenanceTriggerFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<IMaintenanceTriggerFactory>
{
    IMaintenanceTriggerFactory(std::nullptr_t = nullptr) noexcept {}
};

struct IMediaProcessingTrigger :
    Windows::Foundation::IInspectable,
    impl::consume_t<IMediaProcessingTrigger>,
    impl::require<IMediaProcessingTrigger, Windows::ApplicationModel::Background::IBackgroundTrigger>
{
    IMediaProcessingTrigger(std::nullptr_t = nullptr) noexcept {}
};

struct INetworkOperatorHotspotAuthenticationTrigger :
    Windows::Foundation::IInspectable,
    impl::consume_t<INetworkOperatorHotspotAuthenticationTrigger>,
    impl::require<INetworkOperatorHotspotAuthenticationTrigger, Windows::ApplicationModel::Background::IBackgroundTrigger>
{
    INetworkOperatorHotspotAuthenticationTrigger(std::nullptr_t = nullptr) noexcept {}
};

struct INetworkOperatorNotificationTrigger :
    Windows::Foundation::IInspectable,
    impl::consume_t<INetworkOperatorNotificationTrigger>,
    impl::require<INetworkOperatorNotificationTrigger, Windows::ApplicationModel::Background::IBackgroundTrigger>
{
    INetworkOperatorNotificationTrigger(std::nullptr_t = nullptr) noexcept {}
};

struct INetworkOperatorNotificationTriggerFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<INetworkOperatorNotificationTriggerFactory>
{
    INetworkOperatorNotificationTriggerFactory(std::nullptr_t = nullptr) noexcept {}
};

struct IPhoneTrigger :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPhoneTrigger>,
    impl::require<IPhoneTrigger, Windows::ApplicationModel::Background::IBackgroundTrigger>
{
    IPhoneTrigger(std::nullptr_t = nullptr) noexcept {}
};

struct IPhoneTriggerFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPhoneTriggerFactory>
{
    IPhoneTriggerFactory(std::nullptr_t = nullptr) noexcept {}
};

struct IPushNotificationTriggerFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPushNotificationTriggerFactory>
{
    IPushNotificationTriggerFactory(std::nullptr_t = nullptr) noexcept {}
};

struct IRcsEndUserMessageAvailableTrigger :
    Windows::Foundation::IInspectable,
    impl::consume_t<IRcsEndUserMessageAvailableTrigger>,
    impl::require<IRcsEndUserMessageAvailableTrigger, Windows::ApplicationModel::Background::IBackgroundTrigger>
{
    IRcsEndUserMessageAvailableTrigger(std::nullptr_t = nullptr) noexcept {}
};

struct IRfcommConnectionTrigger :
    Windows::Foundation::IInspectable,
    impl::consume_t<IRfcommConnectionTrigger>,
    impl::require<IRfcommConnectionTrigger, Windows::ApplicationModel::Background::IBackgroundTrigger>
{
    IRfcommConnectionTrigger(std::nullptr_t = nullptr) noexcept {}
};

struct ISecondaryAuthenticationFactorAuthenticationTrigger :
    Windows::Foundation::IInspectable,
    impl::consume_t<ISecondaryAuthenticationFactorAuthenticationTrigger>,
    impl::require<ISecondaryAuthenticationFactorAuthenticationTrigger, Windows::ApplicationModel::Background::IBackgroundTrigger>
{
    ISecondaryAuthenticationFactorAuthenticationTrigger(std::nullptr_t = nullptr) noexcept {}
};

struct ISensorDataThresholdTrigger :
    Windows::Foundation::IInspectable,
    impl::consume_t<ISensorDataThresholdTrigger>,
    impl::require<ISensorDataThresholdTrigger, Windows::ApplicationModel::Background::IBackgroundTrigger>
{
    ISensorDataThresholdTrigger(std::nullptr_t = nullptr) noexcept {}
};

struct ISensorDataThresholdTriggerFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<ISensorDataThresholdTriggerFactory>
{
    ISensorDataThresholdTriggerFactory(std::nullptr_t = nullptr) noexcept {}
};

struct ISmartCardTrigger :
    Windows::Foundation::IInspectable,
    impl::consume_t<ISmartCardTrigger>,
    impl::require<ISmartCardTrigger, Windows::ApplicationModel::Background::IBackgroundTrigger>
{
    ISmartCardTrigger(std::nullptr_t = nullptr) noexcept {}
};

struct ISmartCardTriggerFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<ISmartCardTriggerFactory>
{
    ISmartCardTriggerFactory(std::nullptr_t = nullptr) noexcept {}
};

struct ISmsMessageReceivedTriggerFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<ISmsMessageReceivedTriggerFactory>
{
    ISmsMessageReceivedTriggerFactory(std::nullptr_t = nullptr) noexcept {}
};

struct ISocketActivityTrigger :
    Windows::Foundation::IInspectable,
    impl::consume_t<ISocketActivityTrigger>
{
    ISocketActivityTrigger(std::nullptr_t = nullptr) noexcept {}
};

struct IStorageLibraryContentChangedTrigger :
    Windows::Foundation::IInspectable,
    impl::consume_t<IStorageLibraryContentChangedTrigger>,
    impl::require<IStorageLibraryContentChangedTrigger, Windows::ApplicationModel::Background::IBackgroundTrigger>
{
    IStorageLibraryContentChangedTrigger(std::nullptr_t = nullptr) noexcept {}
};

struct IStorageLibraryContentChangedTriggerStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IStorageLibraryContentChangedTriggerStatics>
{
    IStorageLibraryContentChangedTriggerStatics(std::nullptr_t = nullptr) noexcept {}
};

struct ISystemCondition :
    Windows::Foundation::IInspectable,
    impl::consume_t<ISystemCondition>,
    impl::require<ISystemCondition, Windows::ApplicationModel::Background::IBackgroundCondition>
{
    ISystemCondition(std::nullptr_t = nullptr) noexcept {}
};

struct ISystemConditionFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<ISystemConditionFactory>
{
    ISystemConditionFactory(std::nullptr_t = nullptr) noexcept {}
};

struct ISystemTrigger :
    Windows::Foundation::IInspectable,
    impl::consume_t<ISystemTrigger>,
    impl::require<ISystemTrigger, Windows::ApplicationModel::Background::IBackgroundTrigger>
{
    ISystemTrigger(std::nullptr_t = nullptr) noexcept {}
};

struct ISystemTriggerFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<ISystemTriggerFactory>
{
    ISystemTriggerFactory(std::nullptr_t = nullptr) noexcept {}
};

struct ITimeTrigger :
    Windows::Foundation::IInspectable,
    impl::consume_t<ITimeTrigger>,
    impl::require<ITimeTrigger, Windows::ApplicationModel::Background::IBackgroundTrigger>
{
    ITimeTrigger(std::nullptr_t = nullptr) noexcept {}
};

struct ITimeTriggerFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<ITimeTriggerFactory>
{
    ITimeTriggerFactory(std::nullptr_t = nullptr) noexcept {}
};

struct IToastNotificationActionTriggerFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<IToastNotificationActionTriggerFactory>
{
    IToastNotificationActionTriggerFactory(std::nullptr_t = nullptr) noexcept {}
};

struct IToastNotificationHistoryChangedTriggerFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<IToastNotificationHistoryChangedTriggerFactory>
{
    IToastNotificationHistoryChangedTriggerFactory(std::nullptr_t = nullptr) noexcept {}
};

struct IUserNotificationChangedTriggerFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<IUserNotificationChangedTriggerFactory>
{
    IUserNotificationChangedTriggerFactory(std::nullptr_t = nullptr) noexcept {}
};

}

}
