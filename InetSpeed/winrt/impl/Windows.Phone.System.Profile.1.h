// C++/WinRT v1.0.170717.1
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "Windows.Phone.System.Profile.0.h"

namespace winrt {

namespace Windows::Phone::System::Profile {

struct [[deprecated("Use Windows.System.Profile.IRetailInfoStatics instead.")]] IRetailModeStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IRetailModeStatics>
{
    IRetailModeStatics(std::nullptr_t = nullptr) noexcept {}
};

}

}
