// C++ for the Windows Runtime v1.29
// Copyright (c) 2016 Microsoft Corporation

#pragma once

#include "Windows.System.Display.2.h"

WINRT_EXPORT namespace winrt {

namespace Windows::System::Display {

struct WINRT_EBO DisplayRequest :
    Windows::System::Display::IDisplayRequest
{
    DisplayRequest(std::nullptr_t) noexcept {}
    DisplayRequest();
};

}

}
