// C++/WinRT v1.0.170717.1
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "Windows.Perception.1.h"

namespace winrt {

namespace Windows::Perception {

struct PerceptionTimestamp :
    Windows::Perception::IPerceptionTimestamp
{
    PerceptionTimestamp(std::nullptr_t) noexcept {}
};

struct PerceptionTimestampHelper
{
    PerceptionTimestampHelper() = delete;
    static Windows::Perception::PerceptionTimestamp FromHistoricalTargetTime(Windows::Foundation::DateTime const& targetTime);
};

}

namespace impl {

}

}
