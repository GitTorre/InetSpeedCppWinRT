// C++/WinRT v1.0.170717.1
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "Windows.Graphics.Effects.1.h"
#include "Windows.UI.Composition.Effects.1.h"

namespace winrt {

namespace Windows::UI::Composition::Effects {

struct SceneLightingEffect :
    Windows::UI::Composition::Effects::ISceneLightingEffect,
    impl::require<SceneLightingEffect, Windows::Graphics::Effects::IGraphicsEffect, Windows::Graphics::Effects::IGraphicsEffectSource>
{
    SceneLightingEffect(std::nullptr_t) noexcept {}
    SceneLightingEffect();
};

}

namespace impl {

}

}
