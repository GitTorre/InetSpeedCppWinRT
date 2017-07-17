// C++/WinRT v1.0.170717.1
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "Windows.Phone.System.Power.0.h"

namespace winrt {

namespace Windows::Phone::System::Power {

struct IPowerManagerStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPowerManagerStatics>
{
    IPowerManagerStatics(std::nullptr_t = nullptr) noexcept {}
};

struct IPowerManagerStatics2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPowerManagerStatics2>
{
    IPowerManagerStatics2(std::nullptr_t = nullptr) noexcept {}
};

}

}
