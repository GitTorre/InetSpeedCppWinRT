// C++/WinRT v1.0.170717.1
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "Windows.Graphics.Effects.0.h"
#include "Windows.UI.Composition.Effects.0.h"

namespace winrt {

namespace Windows::UI::Composition::Effects {

struct ISceneLightingEffect :
    Windows::Foundation::IInspectable,
    impl::consume_t<ISceneLightingEffect>
{
    ISceneLightingEffect(std::nullptr_t = nullptr) noexcept {}
};

}

}
