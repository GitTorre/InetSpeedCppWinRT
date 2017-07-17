// C++/WinRT v1.0.170717.1
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "Windows.Phone.System.1.h"

namespace winrt {

namespace Windows::Phone::System {

struct SystemProtection
{
    SystemProtection() = delete;
    static bool ScreenLocked();
    static void RequestScreenUnlock();
};

}

namespace impl {

}

}
