// C++/WinRT v1.0.170717.1
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "Windows.Phone.Media.Devices.0.h"

namespace winrt {

namespace Windows::Phone::Media::Devices {

struct IAudioRoutingManager :
    Windows::Foundation::IInspectable,
    impl::consume_t<IAudioRoutingManager>
{
    IAudioRoutingManager(std::nullptr_t = nullptr) noexcept {}
};

struct IAudioRoutingManagerStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IAudioRoutingManagerStatics>
{
    IAudioRoutingManagerStatics(std::nullptr_t = nullptr) noexcept {}
};

}

}
