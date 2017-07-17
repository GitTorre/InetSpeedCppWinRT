// C++/WinRT v1.0.170717.1
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "Windows.ApplicationModel.Core.1.h"
#include "Windows.UI.Core.1.h"
#include "Windows.UI.Input.1.h"
#include "Windows.UI.Input.Core.1.h"

namespace winrt {

namespace Windows::UI::Input::Core {

struct RadialControllerIndependentInputSource :
    Windows::UI::Input::Core::IRadialControllerIndependentInputSource
{
    RadialControllerIndependentInputSource(std::nullptr_t) noexcept {}
    static Windows::UI::Input::Core::RadialControllerIndependentInputSource CreateForView(Windows::ApplicationModel::Core::CoreApplicationView const& view);
};

}

namespace impl {

}

}
