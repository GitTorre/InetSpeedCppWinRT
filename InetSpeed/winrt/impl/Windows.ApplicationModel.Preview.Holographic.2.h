// C++/WinRT v1.0.170717.1
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "Windows.ApplicationModel.Activation.1.h"
#include "Windows.ApplicationModel.Preview.Holographic.1.h"

namespace winrt {

namespace Windows::ApplicationModel::Preview::Holographic {

struct HolographicApplicationPreview
{
    HolographicApplicationPreview() = delete;
    static bool IsCurrentViewPresentedOnHolographicDisplay();
    static bool IsHolographicActivation(Windows::ApplicationModel::Activation::IActivatedEventArgs const& activatedEventArgs);
};

}

namespace impl {

}

}
