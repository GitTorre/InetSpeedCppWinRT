// C++/WinRT v1.0.170717.1
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "Windows.Phone.System.0.h"

namespace winrt {

namespace Windows::Phone::System {

struct ISystemProtectionStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<ISystemProtectionStatics>
{
    ISystemProtectionStatics(std::nullptr_t = nullptr) noexcept {}
};

struct ISystemProtectionUnlockStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<ISystemProtectionUnlockStatics>
{
    ISystemProtectionUnlockStatics(std::nullptr_t = nullptr) noexcept {}
};

}

}
