// C++/WinRT v1.0.170717.1
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "Windows.System.Power.Diagnostics.0.h"

namespace winrt {

namespace Windows::System::Power::Diagnostics {

struct IBackgroundEnergyDiagnosticsStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IBackgroundEnergyDiagnosticsStatics>
{
    IBackgroundEnergyDiagnosticsStatics(std::nullptr_t = nullptr) noexcept {}
};

struct IForegroundEnergyDiagnosticsStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IForegroundEnergyDiagnosticsStatics>
{
    IForegroundEnergyDiagnosticsStatics(std::nullptr_t = nullptr) noexcept {}
};

}

}
