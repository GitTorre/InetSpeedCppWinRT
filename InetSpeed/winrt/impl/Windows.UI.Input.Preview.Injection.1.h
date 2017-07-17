// C++/WinRT v1.0.170717.1
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "Windows.UI.Input.Preview.Injection.0.h"

namespace winrt {

namespace Windows::UI::Input::Preview::Injection {

struct IInjectedInputKeyboardInfo :
    Windows::Foundation::IInspectable,
    impl::consume_t<IInjectedInputKeyboardInfo>
{
    IInjectedInputKeyboardInfo(std::nullptr_t = nullptr) noexcept {}
};

struct IInjectedInputMouseInfo :
    Windows::Foundation::IInspectable,
    impl::consume_t<IInjectedInputMouseInfo>
{
    IInjectedInputMouseInfo(std::nullptr_t = nullptr) noexcept {}
};

struct IInjectedInputPenInfo :
    Windows::Foundation::IInspectable,
    impl::consume_t<IInjectedInputPenInfo>
{
    IInjectedInputPenInfo(std::nullptr_t = nullptr) noexcept {}
};

struct IInjectedInputTouchInfo :
    Windows::Foundation::IInspectable,
    impl::consume_t<IInjectedInputTouchInfo>
{
    IInjectedInputTouchInfo(std::nullptr_t = nullptr) noexcept {}
};

struct IInputInjector :
    Windows::Foundation::IInspectable,
    impl::consume_t<IInputInjector>
{
    IInputInjector(std::nullptr_t = nullptr) noexcept {}
};

struct IInputInjectorStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IInputInjectorStatics>
{
    IInputInjectorStatics(std::nullptr_t = nullptr) noexcept {}
};

}

}
