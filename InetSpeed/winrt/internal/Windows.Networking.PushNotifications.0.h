// C++ for the Windows Runtime v1.29
// Copyright (c) 2016 Microsoft Corporation

#pragma once


WINRT_EXPORT namespace winrt {

namespace ABI::Windows::Networking::PushNotifications {

struct IPushNotificationChannel;
struct IPushNotificationChannelManagerForUser;
struct IPushNotificationChannelManagerStatics;
struct IPushNotificationChannelManagerStatics2;
struct IPushNotificationReceivedEventArgs;
struct IRawNotification;
struct PushNotificationChannel;
struct PushNotificationChannelManagerForUser;
struct PushNotificationReceivedEventArgs;
struct RawNotification;

}

namespace Windows::Networking::PushNotifications {

struct IPushNotificationChannel;
struct IPushNotificationChannelManagerForUser;
struct IPushNotificationChannelManagerStatics;
struct IPushNotificationChannelManagerStatics2;
struct IPushNotificationReceivedEventArgs;
struct IRawNotification;
struct PushNotificationChannel;
struct PushNotificationChannelManager;
struct PushNotificationChannelManagerForUser;
struct PushNotificationReceivedEventArgs;
struct RawNotification;

}

namespace Windows::Networking::PushNotifications {

enum class PushNotificationType
{
    Toast = 0,
    Tile = 1,
    Badge = 2,
    Raw = 3,
    TileFlyout = 4,
};

}

}
