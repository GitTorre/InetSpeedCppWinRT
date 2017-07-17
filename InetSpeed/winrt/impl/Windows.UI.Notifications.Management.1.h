// C++/WinRT v1.0.170717.1
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "Windows.UI.Notifications.0.h"
#include "Windows.UI.Notifications.Management.0.h"

namespace winrt {

namespace Windows::UI::Notifications::Management {

struct IUserNotificationListener :
    Windows::Foundation::IInspectable,
    impl::consume_t<IUserNotificationListener>
{
    IUserNotificationListener(std::nullptr_t = nullptr) noexcept {}
};

struct IUserNotificationListenerStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IUserNotificationListenerStatics>
{
    IUserNotificationListenerStatics(std::nullptr_t = nullptr) noexcept {}
};

}

}
