// C++/WinRT v1.0.170717.1
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "Windows.Media.0.h"
#include "Windows.Media.Core.Preview.0.h"

namespace winrt {

namespace Windows::Media::Core::Preview {

struct ISoundLevelBrokerStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<ISoundLevelBrokerStatics>
{
    ISoundLevelBrokerStatics(std::nullptr_t = nullptr) noexcept {}
};

}

}
