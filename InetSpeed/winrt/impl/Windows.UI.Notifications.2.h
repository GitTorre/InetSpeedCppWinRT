// C++/WinRT v1.0.170717.1
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "Windows.ApplicationModel.1.h"
#include "Windows.Data.Xml.Dom.1.h"
#include "Windows.Foundation.1.h"
#include "Windows.Foundation.Collections.1.h"
#include "Windows.System.1.h"
#include "Windows.UI.Notifications.1.h"

namespace winrt {

namespace Windows::UI::Notifications {

struct AdaptiveNotificationText :
    Windows::UI::Notifications::IAdaptiveNotificationText
{
    AdaptiveNotificationText(std::nullptr_t) noexcept {}
    AdaptiveNotificationText();
};

struct BadgeNotification :
    Windows::UI::Notifications::IBadgeNotification
{
    BadgeNotification(std::nullptr_t) noexcept {}
    BadgeNotification(Windows::Data::Xml::Dom::XmlDocument const& content);
};

struct BadgeUpdateManager
{
    BadgeUpdateManager() = delete;
    static Windows::UI::Notifications::BadgeUpdater CreateBadgeUpdaterForApplication();
    static Windows::UI::Notifications::BadgeUpdater CreateBadgeUpdaterForApplication(param::hstring const& applicationId);
    static Windows::UI::Notifications::BadgeUpdater CreateBadgeUpdaterForSecondaryTile(param::hstring const& tileId);
    static Windows::Data::Xml::Dom::XmlDocument GetTemplateContent(Windows::UI::Notifications::BadgeTemplateType const& type);
    static Windows::UI::Notifications::BadgeUpdateManagerForUser GetForUser(Windows::System::User const& user);
};

struct BadgeUpdateManagerForUser :
    Windows::UI::Notifications::IBadgeUpdateManagerForUser
{
    BadgeUpdateManagerForUser(std::nullptr_t) noexcept {}
};

struct BadgeUpdater :
    Windows::UI::Notifications::IBadgeUpdater
{
    BadgeUpdater(std::nullptr_t) noexcept {}
};

struct KnownAdaptiveNotificationHints
{
    KnownAdaptiveNotificationHints() = delete;
    static hstring Style();
    static hstring Wrap();
    static hstring MaxLines();
    static hstring MinLines();
    static hstring TextStacking();
    static hstring Align();
};

struct KnownAdaptiveNotificationTextStyles
{
    KnownAdaptiveNotificationTextStyles() = delete;
    static hstring Caption();
    static hstring Body();
    static hstring Base();
    static hstring Subtitle();
    static hstring Title();
    static hstring Subheader();
    static hstring Header();
    static hstring TitleNumeral();
    static hstring SubheaderNumeral();
    static hstring HeaderNumeral();
    static hstring CaptionSubtle();
    static hstring BodySubtle();
    static hstring BaseSubtle();
    static hstring SubtitleSubtle();
    static hstring TitleSubtle();
    static hstring SubheaderSubtle();
    static hstring SubheaderNumeralSubtle();
    static hstring HeaderSubtle();
    static hstring HeaderNumeralSubtle();
};

struct KnownNotificationBindings
{
    KnownNotificationBindings() = delete;
    static hstring ToastGeneric();
};

struct Notification :
    Windows::UI::Notifications::INotification
{
    Notification(std::nullptr_t) noexcept {}
    Notification();
};

struct NotificationBinding :
    Windows::UI::Notifications::INotificationBinding
{
    NotificationBinding(std::nullptr_t) noexcept {}
};

struct NotificationData :
    Windows::UI::Notifications::INotificationData
{
    NotificationData(std::nullptr_t) noexcept {}
    NotificationData();
    NotificationData(param::iterable<Windows::Foundation::Collections::IKeyValuePair<hstring, hstring>> const& initialValues, uint32_t sequenceNumber);
    NotificationData(param::iterable<Windows::Foundation::Collections::IKeyValuePair<hstring, hstring>> const& initialValues);
};

struct NotificationVisual :
    Windows::UI::Notifications::INotificationVisual
{
    NotificationVisual(std::nullptr_t) noexcept {}
};

struct ScheduledTileNotification :
    Windows::UI::Notifications::IScheduledTileNotification
{
    ScheduledTileNotification(std::nullptr_t) noexcept {}
    ScheduledTileNotification(Windows::Data::Xml::Dom::XmlDocument const& content, Windows::Foundation::DateTime const& deliveryTime);
};

struct ScheduledToastNotification :
    Windows::UI::Notifications::IScheduledToastNotification,
    impl::require<ScheduledToastNotification, Windows::UI::Notifications::IScheduledToastNotification2, Windows::UI::Notifications::IScheduledToastNotification3>
{
    ScheduledToastNotification(std::nullptr_t) noexcept {}
    ScheduledToastNotification(Windows::Data::Xml::Dom::XmlDocument const& content, Windows::Foundation::DateTime const& deliveryTime);
    ScheduledToastNotification(Windows::Data::Xml::Dom::XmlDocument const& content, Windows::Foundation::DateTime const& deliveryTime, Windows::Foundation::TimeSpan const& snoozeInterval, uint32_t maximumSnoozeCount);
};

struct ShownTileNotification :
    Windows::UI::Notifications::IShownTileNotification
{
    ShownTileNotification(std::nullptr_t) noexcept {}
};

struct TileFlyoutNotification :
    Windows::UI::Notifications::ITileFlyoutNotification
{
    TileFlyoutNotification(std::nullptr_t) noexcept {}
    TileFlyoutNotification(Windows::Data::Xml::Dom::XmlDocument const& content);
};

struct TileFlyoutUpdateManager
{
    TileFlyoutUpdateManager() = delete;
    static Windows::UI::Notifications::TileFlyoutUpdater CreateTileFlyoutUpdaterForApplication();
    static Windows::UI::Notifications::TileFlyoutUpdater CreateTileFlyoutUpdaterForApplication(param::hstring const& applicationId);
    static Windows::UI::Notifications::TileFlyoutUpdater CreateTileFlyoutUpdaterForSecondaryTile(param::hstring const& tileId);
    static Windows::Data::Xml::Dom::XmlDocument GetTemplateContent(Windows::UI::Notifications::TileFlyoutTemplateType const& type);
};

struct TileFlyoutUpdater :
    Windows::UI::Notifications::ITileFlyoutUpdater
{
    TileFlyoutUpdater(std::nullptr_t) noexcept {}
};

struct TileNotification :
    Windows::UI::Notifications::ITileNotification
{
    TileNotification(std::nullptr_t) noexcept {}
    TileNotification(Windows::Data::Xml::Dom::XmlDocument const& content);
};

struct TileUpdateManager
{
    TileUpdateManager() = delete;
    static Windows::UI::Notifications::TileUpdater CreateTileUpdaterForApplication();
    static Windows::UI::Notifications::TileUpdater CreateTileUpdaterForApplication(param::hstring const& applicationId);
    static Windows::UI::Notifications::TileUpdater CreateTileUpdaterForSecondaryTile(param::hstring const& tileId);
    static Windows::Data::Xml::Dom::XmlDocument GetTemplateContent(Windows::UI::Notifications::TileTemplateType const& type);
    static Windows::UI::Notifications::TileUpdateManagerForUser GetForUser(Windows::System::User const& user);
};

struct TileUpdateManagerForUser :
    Windows::UI::Notifications::ITileUpdateManagerForUser
{
    TileUpdateManagerForUser(std::nullptr_t) noexcept {}
};

struct TileUpdater :
    Windows::UI::Notifications::ITileUpdater,
    impl::require<TileUpdater, Windows::UI::Notifications::ITileUpdater2>
{
    TileUpdater(std::nullptr_t) noexcept {}
};

struct ToastActivatedEventArgs :
    Windows::UI::Notifications::IToastActivatedEventArgs
{
    ToastActivatedEventArgs(std::nullptr_t) noexcept {}
};

struct ToastCollection :
    Windows::UI::Notifications::IToastCollection
{
    ToastCollection(std::nullptr_t) noexcept {}
    ToastCollection(param::hstring const& collectionId, param::hstring const& displayName, param::hstring const& launchArgs, Windows::Foundation::Uri const& iconUri);
};

struct ToastCollectionManager :
    Windows::UI::Notifications::IToastCollectionManager
{
    ToastCollectionManager(std::nullptr_t) noexcept {}
};

struct ToastDismissedEventArgs :
    Windows::UI::Notifications::IToastDismissedEventArgs
{
    ToastDismissedEventArgs(std::nullptr_t) noexcept {}
};

struct ToastFailedEventArgs :
    Windows::UI::Notifications::IToastFailedEventArgs
{
    ToastFailedEventArgs(std::nullptr_t) noexcept {}
};

struct ToastNotification :
    Windows::UI::Notifications::IToastNotification,
    impl::require<ToastNotification, Windows::UI::Notifications::IToastNotification2, Windows::UI::Notifications::IToastNotification3, Windows::UI::Notifications::IToastNotification4>
{
    ToastNotification(std::nullptr_t) noexcept {}
    ToastNotification(Windows::Data::Xml::Dom::XmlDocument const& content);
};

struct ToastNotificationActionTriggerDetail :
    Windows::UI::Notifications::IToastNotificationActionTriggerDetail
{
    ToastNotificationActionTriggerDetail(std::nullptr_t) noexcept {}
};

struct ToastNotificationHistory :
    Windows::UI::Notifications::IToastNotificationHistory,
    impl::require<ToastNotificationHistory, Windows::UI::Notifications::IToastNotificationHistory2>
{
    ToastNotificationHistory(std::nullptr_t) noexcept {}
};

struct ToastNotificationHistoryChangedTriggerDetail :
    Windows::UI::Notifications::IToastNotificationHistoryChangedTriggerDetail,
    impl::require<ToastNotificationHistoryChangedTriggerDetail, Windows::UI::Notifications::IToastNotificationHistoryChangedTriggerDetail2>
{
    ToastNotificationHistoryChangedTriggerDetail(std::nullptr_t) noexcept {}
};

struct ToastNotificationManager
{
    ToastNotificationManager() = delete;
    static Windows::UI::Notifications::ToastNotifier CreateToastNotifier();
    static Windows::UI::Notifications::ToastNotifier CreateToastNotifier(param::hstring const& applicationId);
    static Windows::Data::Xml::Dom::XmlDocument GetTemplateContent(Windows::UI::Notifications::ToastTemplateType const& type);
    static Windows::UI::Notifications::ToastNotificationHistory History();
    static Windows::UI::Notifications::ToastNotificationManagerForUser GetForUser(Windows::System::User const& user);
    static void ConfigureNotificationMirroring(Windows::UI::Notifications::NotificationMirroring const& value);
    static Windows::UI::Notifications::ToastNotificationManagerForUser GetDefault();
};

struct ToastNotificationManagerForUser :
    Windows::UI::Notifications::IToastNotificationManagerForUser,
    impl::require<ToastNotificationManagerForUser, Windows::UI::Notifications::IToastNotificationManagerForUser2>
{
    ToastNotificationManagerForUser(std::nullptr_t) noexcept {}
};

struct ToastNotifier :
    Windows::UI::Notifications::IToastNotifier,
    impl::require<ToastNotifier, Windows::UI::Notifications::IToastNotifier2>
{
    ToastNotifier(std::nullptr_t) noexcept {}
};

struct UserNotification :
    Windows::UI::Notifications::IUserNotification
{
    UserNotification(std::nullptr_t) noexcept {}
};

struct UserNotificationChangedEventArgs :
    Windows::UI::Notifications::IUserNotificationChangedEventArgs
{
    UserNotificationChangedEventArgs(std::nullptr_t) noexcept {}
};

}

namespace impl {

}

}
