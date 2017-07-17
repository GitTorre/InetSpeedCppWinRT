// C++/WinRT v1.0.170717.1
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "Windows.UI.Notifications.0.h"
#include "Windows.Phone.StartScreen.0.h"

namespace winrt {

namespace Windows::Phone::StartScreen {

struct IDualSimTile :
    Windows::Foundation::IInspectable,
    impl::consume_t<IDualSimTile>
{
    IDualSimTile(std::nullptr_t = nullptr) noexcept {}
};

struct IDualSimTileStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IDualSimTileStatics>
{
    IDualSimTileStatics(std::nullptr_t = nullptr) noexcept {}
};

struct IToastNotificationManagerStatics3 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IToastNotificationManagerStatics3>
{
    IToastNotificationManagerStatics3(std::nullptr_t = nullptr) noexcept {}
};

}

}
