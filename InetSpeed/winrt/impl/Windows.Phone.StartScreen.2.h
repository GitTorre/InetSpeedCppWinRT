﻿// C++/WinRT v1.0.170717.1
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "Windows.UI.Notifications.1.h"
#include "Windows.Phone.StartScreen.1.h"

namespace winrt {

namespace Windows::Phone::StartScreen {

struct DualSimTile :
    Windows::Phone::StartScreen::IDualSimTile
{
    DualSimTile(std::nullptr_t) noexcept {}
    DualSimTile();
    static Windows::Phone::StartScreen::DualSimTile GetTileForSim2();
    static Windows::Foundation::IAsyncOperation<bool> UpdateDisplayNameForSim1Async(param::hstring const& name);
    static Windows::UI::Notifications::TileUpdater CreateTileUpdaterForSim1();
    static Windows::UI::Notifications::TileUpdater CreateTileUpdaterForSim2();
    static Windows::UI::Notifications::BadgeUpdater CreateBadgeUpdaterForSim1();
    static Windows::UI::Notifications::BadgeUpdater CreateBadgeUpdaterForSim2();
    static Windows::UI::Notifications::ToastNotifier CreateToastNotifierForSim1();
    static Windows::UI::Notifications::ToastNotifier CreateToastNotifierForSim2();
};

}

namespace impl {

}

}
