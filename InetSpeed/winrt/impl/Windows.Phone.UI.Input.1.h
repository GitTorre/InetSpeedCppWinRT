// C++/WinRT v1.0.170717.1
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "Windows.Phone.UI.Input.0.h"

namespace winrt {

namespace Windows::Phone::UI::Input {

struct IBackPressedEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<IBackPressedEventArgs>
{
    IBackPressedEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct ICameraEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<ICameraEventArgs>
{
    ICameraEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct IHardwareButtonsStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IHardwareButtonsStatics>
{
    IHardwareButtonsStatics(std::nullptr_t = nullptr) noexcept {}
};

struct IHardwareButtonsStatics2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IHardwareButtonsStatics2>
{
    IHardwareButtonsStatics2(std::nullptr_t = nullptr) noexcept {}
};

}

}
