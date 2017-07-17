// C++/WinRT v1.0.170717.1
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "Windows.System.Power.0.h"

namespace winrt {

namespace Windows::System::Power {

struct IBackgroundEnergyManagerStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IBackgroundEnergyManagerStatics>
{
    IBackgroundEnergyManagerStatics(std::nullptr_t = nullptr) noexcept {}
};

struct IForegroundEnergyManagerStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IForegroundEnergyManagerStatics>
{
    IForegroundEnergyManagerStatics(std::nullptr_t = nullptr) noexcept {}
};

struct IPowerManagerStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPowerManagerStatics>
{
    IPowerManagerStatics(std::nullptr_t = nullptr) noexcept {}
};

}

}
