// C++/WinRT v1.0.170717.1
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "Windows.Perception.People.0.h"

namespace winrt {

namespace Windows::Perception::People {

struct IHeadPose :
    Windows::Foundation::IInspectable,
    impl::consume_t<IHeadPose>
{
    IHeadPose(std::nullptr_t = nullptr) noexcept {}
};

}

}
