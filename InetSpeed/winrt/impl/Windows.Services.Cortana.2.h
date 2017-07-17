// C++/WinRT v1.0.170717.1
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "Windows.Services.Cortana.1.h"

namespace winrt {

namespace Windows::Services::Cortana {

struct CortanaPermissionsManager :
    Windows::Services::Cortana::ICortanaPermissionsManager
{
    CortanaPermissionsManager(std::nullptr_t) noexcept {}
    static Windows::Services::Cortana::CortanaPermissionsManager GetDefault();
};

struct CortanaSettings :
    Windows::Services::Cortana::ICortanaSettings
{
    CortanaSettings(std::nullptr_t) noexcept {}
    static bool IsSupported();
    static Windows::Services::Cortana::CortanaSettings GetDefault();
};

}

namespace impl {

}

}
