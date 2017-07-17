// C++/WinRT v1.0.170717.1
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "Windows.Perception.0.h"

namespace winrt {

namespace Windows::Perception {

struct IPerceptionTimestamp :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPerceptionTimestamp>
{
    IPerceptionTimestamp(std::nullptr_t = nullptr) noexcept {}
};

struct IPerceptionTimestampHelperStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPerceptionTimestampHelperStatics>
{
    IPerceptionTimestampHelperStatics(std::nullptr_t = nullptr) noexcept {}
};

}

}
