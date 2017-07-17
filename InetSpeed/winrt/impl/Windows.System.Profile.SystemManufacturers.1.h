// C++/WinRT v1.0.170717.1
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "Windows.System.Profile.SystemManufacturers.0.h"

namespace winrt {

namespace Windows::System::Profile::SystemManufacturers {

struct ISmbiosInformationStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<ISmbiosInformationStatics>
{
    ISmbiosInformationStatics(std::nullptr_t = nullptr) noexcept {}
};

}

}
