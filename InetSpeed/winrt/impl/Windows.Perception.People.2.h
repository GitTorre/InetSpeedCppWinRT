// C++/WinRT v1.0.170717.1
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "Windows.Perception.People.1.h"

namespace winrt {

namespace Windows::Perception::People {

struct HeadPose :
    Windows::Perception::People::IHeadPose
{
    HeadPose(std::nullptr_t) noexcept {}
};

}

namespace impl {

}

}
