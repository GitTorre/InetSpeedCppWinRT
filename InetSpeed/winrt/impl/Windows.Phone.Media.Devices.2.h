// C++/WinRT v1.0.170717.1
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "Windows.Phone.Media.Devices.1.h"

namespace winrt {

namespace Windows::Phone::Media::Devices {

struct AudioRoutingManager :
    Windows::Phone::Media::Devices::IAudioRoutingManager
{
    AudioRoutingManager(std::nullptr_t) noexcept {}
    static Windows::Phone::Media::Devices::AudioRoutingManager GetDefault();
};

}

namespace impl {

}

}
