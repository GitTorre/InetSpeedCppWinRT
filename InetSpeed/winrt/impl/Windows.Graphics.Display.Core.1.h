// C++/WinRT v1.0.170717.1
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "Windows.Graphics.Display.Core.0.h"

namespace winrt {

namespace Windows::Graphics::Display::Core {

struct IHdmiDisplayInformation :
    Windows::Foundation::IInspectable,
    impl::consume_t<IHdmiDisplayInformation>
{
    IHdmiDisplayInformation(std::nullptr_t = nullptr) noexcept {}
};

struct IHdmiDisplayInformationStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IHdmiDisplayInformationStatics>
{
    IHdmiDisplayInformationStatics(std::nullptr_t = nullptr) noexcept {}
};

struct IHdmiDisplayMode :
    Windows::Foundation::IInspectable,
    impl::consume_t<IHdmiDisplayMode>
{
    IHdmiDisplayMode(std::nullptr_t = nullptr) noexcept {}
};

}

}
