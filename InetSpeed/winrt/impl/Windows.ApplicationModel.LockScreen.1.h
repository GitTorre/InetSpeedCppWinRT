// C++/WinRT v1.0.170717.1
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "Windows.Storage.Streams.0.h"
#include "Windows.ApplicationModel.LockScreen.0.h"

namespace winrt {

namespace Windows::ApplicationModel::LockScreen {

struct ILockApplicationHost :
    Windows::Foundation::IInspectable,
    impl::consume_t<ILockApplicationHost>
{
    ILockApplicationHost(std::nullptr_t = nullptr) noexcept {}
};

struct ILockApplicationHostStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<ILockApplicationHostStatics>
{
    ILockApplicationHostStatics(std::nullptr_t = nullptr) noexcept {}
};

struct ILockScreenBadge :
    Windows::Foundation::IInspectable,
    impl::consume_t<ILockScreenBadge>
{
    ILockScreenBadge(std::nullptr_t = nullptr) noexcept {}
};

struct ILockScreenInfo :
    Windows::Foundation::IInspectable,
    impl::consume_t<ILockScreenInfo>
{
    ILockScreenInfo(std::nullptr_t = nullptr) noexcept {}
};

struct ILockScreenUnlockingDeferral :
    Windows::Foundation::IInspectable,
    impl::consume_t<ILockScreenUnlockingDeferral>
{
    ILockScreenUnlockingDeferral(std::nullptr_t = nullptr) noexcept {}
};

struct ILockScreenUnlockingEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<ILockScreenUnlockingEventArgs>
{
    ILockScreenUnlockingEventArgs(std::nullptr_t = nullptr) noexcept {}
};

}

}
