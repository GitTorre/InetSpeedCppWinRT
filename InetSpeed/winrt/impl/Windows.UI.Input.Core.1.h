// C++/WinRT v1.0.170717.1
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "Windows.ApplicationModel.Core.0.h"
#include "Windows.UI.Core.0.h"
#include "Windows.UI.Input.0.h"
#include "Windows.UI.Input.Core.0.h"

namespace winrt {

namespace Windows::UI::Input::Core {

struct IRadialControllerIndependentInputSource :
    Windows::Foundation::IInspectable,
    impl::consume_t<IRadialControllerIndependentInputSource>
{
    IRadialControllerIndependentInputSource(std::nullptr_t = nullptr) noexcept {}
};

struct IRadialControllerIndependentInputSourceStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IRadialControllerIndependentInputSourceStatics>
{
    IRadialControllerIndependentInputSourceStatics(std::nullptr_t = nullptr) noexcept {}
};

}

}
