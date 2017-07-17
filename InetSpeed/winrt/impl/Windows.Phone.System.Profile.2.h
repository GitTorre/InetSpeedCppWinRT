// C++/WinRT v1.0.170717.1
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "Windows.Phone.System.Profile.1.h"

namespace winrt {

namespace Windows::Phone::System::Profile {

struct [[deprecated("Use Windows.System.Profile.RetailInfo instead.")]] RetailMode
{
    RetailMode() = delete;
    [[deprecated("Use Windows.System.Profile.IRetailInfoStatics instead.")]] static bool RetailModeEnabled();
};

}

namespace impl {

}

}
