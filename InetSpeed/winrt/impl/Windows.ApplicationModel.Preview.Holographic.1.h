// C++/WinRT v1.0.170717.1
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "Windows.ApplicationModel.Activation.0.h"
#include "Windows.ApplicationModel.Preview.Holographic.0.h"

namespace winrt {

namespace Windows::ApplicationModel::Preview::Holographic {

struct IHolographicApplicationPreviewStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IHolographicApplicationPreviewStatics>
{
    IHolographicApplicationPreviewStatics(std::nullptr_t = nullptr) noexcept {}
};

}

}
