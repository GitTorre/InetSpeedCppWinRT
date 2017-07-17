// C++/WinRT v1.0.170717.1
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "Windows.Storage.Streams.0.h"
#include "Windows.System.0.h"
#include "Windows.UI.Notifications.0.h"
#include "Windows.Networking.PushNotifications.0.h"

namespace winrt {

namespace Windows::Networking::PushNotifications {

struct IPushNotificationChannel :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPushNotificationChannel>
{
    IPushNotificationChannel(std::nullptr_t = nullptr) noexcept {}
};

struct IPushNotificationChannelManagerForUser :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPushNotificationChannelManagerForUser>
{
    IPushNotificationChannelManagerForUser(std::nullptr_t = nullptr) noexcept {}
};

struct IPushNotificationChannelManagerForUser2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPushNotificationChannelManagerForUser2>
{
    IPushNotificationChannelManagerForUser2(std::nullptr_t = nullptr) noexcept {}
};

struct IPushNotificationChannelManagerStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPushNotificationChannelManagerStatics>
{
    IPushNotificationChannelManagerStatics(std::nullptr_t = nullptr) noexcept {}
};

struct IPushNotificationChannelManagerStatics2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPushNotificationChannelManagerStatics2>
{
    IPushNotificationChannelManagerStatics2(std::nullptr_t = nullptr) noexcept {}
};

struct IPushNotificationChannelManagerStatics3 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPushNotificationChannelManagerStatics3>
{
    IPushNotificationChannelManagerStatics3(std::nullptr_t = nullptr) noexcept {}
};

struct IPushNotificationReceivedEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPushNotificationReceivedEventArgs>
{
    IPushNotificationReceivedEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct IRawNotification :
    Windows::Foundation::IInspectable,
    impl::consume_t<IRawNotification>
{
    IRawNotification(std::nullptr_t = nullptr) noexcept {}
};

struct IRawNotification2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IRawNotification2>
{
    IRawNotification2(std::nullptr_t = nullptr) noexcept {}
};

}

}
