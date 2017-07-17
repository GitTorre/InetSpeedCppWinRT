// C++/WinRT v1.0.170717.1
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "Windows.System.Display.0.h"

namespace winrt {

namespace Windows::System::Display {

struct IDisplayRequest :
    Windows::Foundation::IInspectable,
    impl::consume_t<IDisplayRequest>
{
    IDisplayRequest(std::nullptr_t = nullptr) noexcept {}
};

}

}
