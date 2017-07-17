// C++/WinRT v1.0.170717.1
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "Windows.System.Display.1.h"

namespace winrt {

namespace Windows::System::Display {

struct DisplayRequest :
    Windows::System::Display::IDisplayRequest
{
    DisplayRequest(std::nullptr_t) noexcept {}
    DisplayRequest();
};

}

namespace impl {

}

}
