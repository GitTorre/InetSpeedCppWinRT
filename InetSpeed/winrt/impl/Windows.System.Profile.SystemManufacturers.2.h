// C++/WinRT v1.0.170717.1
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "Windows.System.Profile.SystemManufacturers.1.h"

namespace winrt {

namespace Windows::System::Profile::SystemManufacturers {

struct SmbiosInformation
{
    SmbiosInformation() = delete;
    static hstring SerialNumber();
};

}

namespace impl {

}

}
