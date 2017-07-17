// C++/WinRT v1.0.170717.1
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "Windows.Gaming.Input.Custom.0.h"
#include "Windows.Gaming.Input.Preview.0.h"

namespace winrt {

namespace Windows::Gaming::Input::Preview {

struct IGameControllerProviderInfoStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IGameControllerProviderInfoStatics>
{
    IGameControllerProviderInfoStatics(std::nullptr_t = nullptr) noexcept {}
};

}

}
