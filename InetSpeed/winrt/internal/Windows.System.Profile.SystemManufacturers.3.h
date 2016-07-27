// C++ for the Windows Runtime v1.29
// Copyright (c) 2016 Microsoft Corporation

#pragma once

#include "Windows.System.Profile.SystemManufacturers.2.h"

WINRT_EXPORT namespace winrt {

namespace Windows::System::Profile::SystemManufacturers {

struct SmbiosInformation
{
    SmbiosInformation() = delete;
    static hstring SerialNumber();
};

}

}
