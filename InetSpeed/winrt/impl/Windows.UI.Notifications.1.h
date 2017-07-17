// C++/WinRT v1.0.170717.1
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "Windows.ApplicationModel.0.h"
#include "Windows.Data.Xml.Dom.0.h"
#include "Windows.Foundation.0.h"
#include "Windows.Foundation.Collections.0.h"
#include "Windows.System.0.h"
#include "Windows.UI.Notifications.0.h"

namespace winrt {

namespace Windows::UI::Notifications {

struct IAdaptiveNotificationContent :
    Windows::Foundation::IInspectable,
    impl::consume_t<IAdaptiveNotificationContent>
{
    IAdaptiveNotificationContent(std::nullptr_t = nullptr) noexcept {}
};

struct IAdaptiveNotificationText :
    Windows::Foundation::IInspectable,
    impl::consume_t<IAdaptiveNotificationText>,
    impl::require<IAdaptiveNotificationText, Windows::UI::Notifications::IAdaptiveNotificationContent>
{
    IAdaptiveNotificationText(std::nullptr_t = nullptr) noexcept {}
};

struct IBadgeNotification :
    Windows::Foundation::IInspectable,
    impl::consume_t<IBadgeNotification>
{
    IBadgeNotification(std::nullptr_t = nullptr) noexcept {}
};

struct IBadgeNotificationFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<IBadgeNotificationFactory>
{
    IBadgeNotificationFactory(std::nullptr_t = nullptr) noexcept {}
};

struct IBadgeUpdateManagerForUser :
    Windows::Foundation::IInspectable,
    impl::consume_t<IBadgeUpdateManagerForUser>
{
    IBadgeUpdateManagerForUser(std::nullptr_t = nullptr) noexcept {}
};

struct IBadgeUpdateManagerStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IBadgeUpdateManagerStatics>
{
    IBadgeUpdateManagerStatics(std::nullptr_t = nullptr) noexcept {}
};

struct IBadgeUpdateManagerStatics2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IBadgeUpdateManagerStatics2>
{
    IBadgeUpdateManagerStatics2(std::nullptr_t = nullptr) noexcept {}
};

struct IBadgeUpdater :
    Windows::Foundation::IInspectable,
    impl::consume_t<IBadgeUpdater>
{
    IBadgeUpdater(std::nullptr_t = nullptr) noexcept {}
};

struct IKnownAdaptiveNotificationHintsStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IKnownAdaptiveNotificationHintsStatics>
{
    IKnownAdaptiveNotificationHintsStatics(std::nullptr_t = nullptr) noexcept {}
};

struct IKnownAdaptiveNotificationTextStylesStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IKnownAdaptiveNotificationTextStylesStatics>
{
    IKnownAdaptiveNotificationTextStylesStatics(std::nullptr_t = nullptr) noexcept {}
};

struct IKnownNotificationBindingsStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IKnownNotificationBindingsStatics>
{
    IKnownNotificationBindingsStatics(std::nullptr_t = nullptr) noexcept {}
};

struct INotification :
    Windows::Foundation::IInspectable,
    impl::consume_t<INotification>
{
    INotification(std::nullptr_t = nullptr) noexcept {}
};

struct INotificationBinding :
    Windows::Foundation::IInspectable,
    impl::consume_t<INotificationBinding>
{
    INotificationBinding(std::nullptr_t = nullptr) noexcept {}
};

struct INotificationData :
    Windows::Foundation::IInspectable,
    impl::consume_t<INotificationData>
{
    INotificationData(std::nullptr_t = nullptr) noexcept {}
};

struct INotificationDataFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<INotificationDataFactory>
{
    INotificationDataFactory(std::nullptr_t = nullptr) noexcept {}
};

struct INotificationVisual :
    Windows::Foundation::IInspectable,
    impl::consume_t<INotificationVisual>
{
    INotificationVisual(std::nullptr_t = nullptr) noexcept {}
};

struct IScheduledTileNotification :
    Windows::Foundation::IInspectable,
    impl::consume_t<IScheduledTileNotification>
{
    IScheduledTileNotification(std::nullptr_t = nullptr) noexcept {}
};

struct IScheduledTileNotificationFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<IScheduledTileNotificationFactory>
{
    IScheduledTileNotificationFactory(std::nullptr_t = nullptr) noexcept {}
};

struct IScheduledToastNotification :
    Windows::Foundation::IInspectable,
    impl::consume_t<IScheduledToastNotification>
{
    IScheduledToastNotification(std::nullptr_t = nullptr) noexcept {}
};

struct IScheduledToastNotification2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IScheduledToastNotification2>
{
    IScheduledToastNotification2(std::nullptr_t = nullptr) noexcept {}
};

struct IScheduledToastNotification3 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IScheduledToastNotification3>
{
    IScheduledToastNotification3(std::nullptr_t = nullptr) noexcept {}
};

struct IScheduledToastNotificationFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<IScheduledToastNotificationFactory>
{
    IScheduledToastNotificationFactory(std::nullptr_t = nullptr) noexcept {}
};

struct IShownTileNotification :
    Windows::Foundation::IInspectable,
    impl::consume_t<IShownTileNotification>
{
    IShownTileNotification(std::nullptr_t = nullptr) noexcept {}
};

struct ITileFlyoutNotification :
    Windows::Foundation::IInspectable,
    impl::consume_t<ITileFlyoutNotification>
{
    ITileFlyoutNotification(std::nullptr_t = nullptr) noexcept {}
};

struct ITileFlyoutNotificationFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<ITileFlyoutNotificationFactory>
{
    ITileFlyoutNotificationFactory(std::nullptr_t = nullptr) noexcept {}
};

struct ITileFlyoutUpdateManagerStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<ITileFlyoutUpdateManagerStatics>
{
    ITileFlyoutUpdateManagerStatics(std::nullptr_t = nullptr) noexcept {}
};

struct ITileFlyoutUpdater :
    Windows::Foundation::IInspectable,
    impl::consume_t<ITileFlyoutUpdater>
{
    ITileFlyoutUpdater(std::nullptr_t = nullptr) noexcept {}
};

struct ITileNotification :
    Windows::Foundation::IInspectable,
    impl::consume_t<ITileNotification>
{
    ITileNotification(std::nullptr_t = nullptr) noexcept {}
};

struct ITileNotificationFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<ITileNotificationFactory>
{
    ITileNotificationFactory(std::nullptr_t = nullptr) noexcept {}
};

struct ITileUpdateManagerForUser :
    Windows::Foundation::IInspectable,
    impl::consume_t<ITileUpdateManagerForUser>
{
    ITileUpdateManagerForUser(std::nullptr_t = nullptr) noexcept {}
};

struct ITileUpdateManagerStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<ITileUpdateManagerStatics>
{
    ITileUpdateManagerStatics(std::nullptr_t = nullptr) noexcept {}
};

struct ITileUpdateManagerStatics2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<ITileUpdateManagerStatics2>
{
    ITileUpdateManagerStatics2(std::nullptr_t = nullptr) noexcept {}
};

struct ITileUpdater :
    Windows::Foundation::IInspectable,
    impl::consume_t<ITileUpdater>
{
    ITileUpdater(std::nullptr_t = nullptr) noexcept {}
};

struct ITileUpdater2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<ITileUpdater2>
{
    ITileUpdater2(std::nullptr_t = nullptr) noexcept {}
};

struct IToastActivatedEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<IToastActivatedEventArgs>
{
    IToastActivatedEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct IToastCollection :
    Windows::Foundation::IInspectable,
    impl::consume_t<IToastCollection>
{
    IToastCollection(std::nullptr_t = nullptr) noexcept {}
};

struct IToastCollectionFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<IToastCollectionFactory>
{
    IToastCollectionFactory(std::nullptr_t = nullptr) noexcept {}
};

struct IToastCollectionManager :
    Windows::Foundation::IInspectable,
    impl::consume_t<IToastCollectionManager>
{
    IToastCollectionManager(std::nullptr_t = nullptr) noexcept {}
};

struct IToastDismissedEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<IToastDismissedEventArgs>
{
    IToastDismissedEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct IToastFailedEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<IToastFailedEventArgs>
{
    IToastFailedEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct IToastNotification :
    Windows::Foundation::IInspectable,
    impl::consume_t<IToastNotification>
{
    IToastNotification(std::nullptr_t = nullptr) noexcept {}
};

struct IToastNotification2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IToastNotification2>
{
    IToastNotification2(std::nullptr_t = nullptr) noexcept {}
};

struct IToastNotification3 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IToastNotification3>
{
    IToastNotification3(std::nullptr_t = nullptr) noexcept {}
};

struct IToastNotification4 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IToastNotification4>
{
    IToastNotification4(std::nullptr_t = nullptr) noexcept {}
};

struct IToastNotificationActionTriggerDetail :
    Windows::Foundation::IInspectable,
    impl::consume_t<IToastNotificationActionTriggerDetail>
{
    IToastNotificationActionTriggerDetail(std::nullptr_t = nullptr) noexcept {}
};

struct IToastNotificationFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<IToastNotificationFactory>
{
    IToastNotificationFactory(std::nullptr_t = nullptr) noexcept {}
};

struct IToastNotificationHistory :
    Windows::Foundation::IInspectable,
    impl::consume_t<IToastNotificationHistory>
{
    IToastNotificationHistory(std::nullptr_t = nullptr) noexcept {}
};

struct IToastNotificationHistory2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IToastNotificationHistory2>
{
    IToastNotificationHistory2(std::nullptr_t = nullptr) noexcept {}
};

struct IToastNotificationHistoryChangedTriggerDetail :
    Windows::Foundation::IInspectable,
    impl::consume_t<IToastNotificationHistoryChangedTriggerDetail>
{
    IToastNotificationHistoryChangedTriggerDetail(std::nullptr_t = nullptr) noexcept {}
};

struct IToastNotificationHistoryChangedTriggerDetail2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IToastNotificationHistoryChangedTriggerDetail2>
{
    IToastNotificationHistoryChangedTriggerDetail2(std::nullptr_t = nullptr) noexcept {}
};

struct IToastNotificationManagerForUser :
    Windows::Foundation::IInspectable,
    impl::consume_t<IToastNotificationManagerForUser>
{
    IToastNotificationManagerForUser(std::nullptr_t = nullptr) noexcept {}
};

struct IToastNotificationManagerForUser2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IToastNotificationManagerForUser2>
{
    IToastNotificationManagerForUser2(std::nullptr_t = nullptr) noexcept {}
};

struct IToastNotificationManagerStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IToastNotificationManagerStatics>
{
    IToastNotificationManagerStatics(std::nullptr_t = nullptr) noexcept {}
};

struct IToastNotificationManagerStatics2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IToastNotificationManagerStatics2>
{
    IToastNotificationManagerStatics2(std::nullptr_t = nullptr) noexcept {}
};

struct IToastNotificationManagerStatics4 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IToastNotificationManagerStatics4>
{
    IToastNotificationManagerStatics4(std::nullptr_t = nullptr) noexcept {}
};

struct IToastNotificationManagerStatics5 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IToastNotificationManagerStatics5>
{
    IToastNotificationManagerStatics5(std::nullptr_t = nullptr) noexcept {}
};

struct IToastNotifier :
    Windows::Foundation::IInspectable,
    impl::consume_t<IToastNotifier>
{
    IToastNotifier(std::nullptr_t = nullptr) noexcept {}
};

struct IToastNotifier2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IToastNotifier2>
{
    IToastNotifier2(std::nullptr_t = nullptr) noexcept {}
};

struct IUserNotification :
    Windows::Foundation::IInspectable,
    impl::consume_t<IUserNotification>
{
    IUserNotification(std::nullptr_t = nullptr) noexcept {}
};

struct IUserNotificationChangedEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<IUserNotificationChangedEventArgs>
{
    IUserNotificationChangedEventArgs(std::nullptr_t = nullptr) noexcept {}
};

}

}
