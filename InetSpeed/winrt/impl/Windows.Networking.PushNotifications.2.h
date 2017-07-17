// C++/WinRT v1.0.170717.1
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "Windows.Storage.Streams.1.h"
#include "Windows.System.1.h"
#include "Windows.UI.Notifications.1.h"
#include "Windows.Networking.PushNotifications.1.h"

namespace winrt {

namespace Windows::Networking::PushNotifications {

struct PushNotificationChannel :
    Windows::Networking::PushNotifications::IPushNotificationChannel
{
    PushNotificationChannel(std::nullptr_t) noexcept {}
};

struct PushNotificationChannelManager
{
    PushNotificationChannelManager() = delete;
    static Windows::Foundation::IAsyncOperation<Windows::Networking::PushNotifications::PushNotificationChannel> CreatePushNotificationChannelForApplicationAsync();
    static Windows::Foundation::IAsyncOperation<Windows::Networking::PushNotifications::PushNotificationChannel> CreatePushNotificationChannelForApplicationAsync(param::hstring const& applicationId);
    static Windows::Foundation::IAsyncOperation<Windows::Networking::PushNotifications::PushNotificationChannel> CreatePushNotificationChannelForSecondaryTileAsync(param::hstring const& tileId);
    static Windows::Networking::PushNotifications::PushNotificationChannelManagerForUser GetForUser(Windows::System::User const& user);
    static Windows::Networking::PushNotifications::PushNotificationChannelManagerForUser GetDefault();
};

struct PushNotificationChannelManagerForUser :
    Windows::Networking::PushNotifications::IPushNotificationChannelManagerForUser,
    impl::require<PushNotificationChannelManagerForUser, Windows::Networking::PushNotifications::IPushNotificationChannelManagerForUser2>
{
    PushNotificationChannelManagerForUser(std::nullptr_t) noexcept {}
};

struct PushNotificationReceivedEventArgs :
    Windows::Networking::PushNotifications::IPushNotificationReceivedEventArgs
{
    PushNotificationReceivedEventArgs(std::nullptr_t) noexcept {}
};

struct RawNotification :
    Windows::Networking::PushNotifications::IRawNotification,
    impl::require<RawNotification, Windows::Networking::PushNotifications::IRawNotification2>
{
    RawNotification(std::nullptr_t) noexcept {}
};

}

namespace impl {

}

}
