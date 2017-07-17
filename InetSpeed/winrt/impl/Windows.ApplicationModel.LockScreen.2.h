// C++/WinRT v1.0.170717.1
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "Windows.Storage.Streams.1.h"
#include "Windows.ApplicationModel.LockScreen.1.h"

namespace winrt {

namespace Windows::ApplicationModel::LockScreen {

struct LockApplicationHost :
    Windows::ApplicationModel::LockScreen::ILockApplicationHost
{
    LockApplicationHost(std::nullptr_t) noexcept {}
    static Windows::ApplicationModel::LockScreen::LockApplicationHost GetForCurrentView();
};

struct LockScreenBadge :
    Windows::ApplicationModel::LockScreen::ILockScreenBadge
{
    LockScreenBadge(std::nullptr_t) noexcept {}
};

struct LockScreenInfo :
    Windows::ApplicationModel::LockScreen::ILockScreenInfo
{
    LockScreenInfo(std::nullptr_t) noexcept {}
};

struct LockScreenUnlockingDeferral :
    Windows::ApplicationModel::LockScreen::ILockScreenUnlockingDeferral
{
    LockScreenUnlockingDeferral(std::nullptr_t) noexcept {}
};

struct LockScreenUnlockingEventArgs :
    Windows::ApplicationModel::LockScreen::ILockScreenUnlockingEventArgs
{
    LockScreenUnlockingEventArgs(std::nullptr_t) noexcept {}
};

}

namespace impl {

}

}
