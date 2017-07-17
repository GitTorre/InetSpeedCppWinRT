// C++/WinRT v1.0.170717.1
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "Windows.Gaming.Input.Custom.1.h"
#include "Windows.Gaming.Input.Preview.1.h"

namespace winrt {

namespace Windows::Gaming::Input::Preview {

struct GameControllerProviderInfo
{
    GameControllerProviderInfo() = delete;
    static hstring GetParentProviderId(Windows::Gaming::Input::Custom::IGameControllerProvider const& provider);
    static hstring GetProviderId(Windows::Gaming::Input::Custom::IGameControllerProvider const& provider);
};

}

namespace impl {

}

}
