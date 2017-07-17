// C++/WinRT v1.0.170717.1
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "Windows.UI.Input.Preview.Injection.1.h"

namespace winrt {

namespace Windows::UI::Input::Preview::Injection {

struct InjectedInputPoint
{
    int32_t PositionX;
    int32_t PositionY;
};

struct InjectedInputPointerInfo
{
    uint32_t PointerId;
    Windows::UI::Input::Preview::Injection::InjectedInputPointerOptions PointerOptions;
    Windows::UI::Input::Preview::Injection::InjectedInputPoint PixelLocation;
    uint32_t TimeOffsetInMilliseconds;
    uint64_t PerformanceCount;
};

struct InjectedInputRectangle
{
    int32_t Left;
    int32_t Top;
    int32_t Bottom;
    int32_t Right;
};

struct InjectedInputKeyboardInfo :
    Windows::UI::Input::Preview::Injection::IInjectedInputKeyboardInfo
{
    InjectedInputKeyboardInfo(std::nullptr_t) noexcept {}
    InjectedInputKeyboardInfo();
};

struct InjectedInputMouseInfo :
    Windows::UI::Input::Preview::Injection::IInjectedInputMouseInfo
{
    InjectedInputMouseInfo(std::nullptr_t) noexcept {}
    InjectedInputMouseInfo();
};

struct InjectedInputPenInfo :
    Windows::UI::Input::Preview::Injection::IInjectedInputPenInfo
{
    InjectedInputPenInfo(std::nullptr_t) noexcept {}
    InjectedInputPenInfo();
};

struct InjectedInputTouchInfo :
    Windows::UI::Input::Preview::Injection::IInjectedInputTouchInfo
{
    InjectedInputTouchInfo(std::nullptr_t) noexcept {}
    InjectedInputTouchInfo();
};

struct InputInjector :
    Windows::UI::Input::Preview::Injection::IInputInjector
{
    InputInjector(std::nullptr_t) noexcept {}
    static Windows::UI::Input::Preview::Injection::InputInjector TryCreate();
};

}

namespace impl {

}

}
