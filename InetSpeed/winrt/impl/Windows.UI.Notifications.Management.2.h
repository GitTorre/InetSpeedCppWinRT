// C++/WinRT v1.0.170717.1
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "Windows.UI.Notifications.1.h"
#include "Windows.UI.Notifications.Management.1.h"

namespace winrt {

namespace Windows::UI::Notifications::Management {

struct UserNotificationListener :
    Windows::UI::Notifications::Management::IUserNotificationListener
{
    UserNotificationListener(std::nullptr_t) noexcept {}
    static Windows::UI::Notifications::Management::UserNotificationListener Current();
};

}

namespace impl {

}

}
