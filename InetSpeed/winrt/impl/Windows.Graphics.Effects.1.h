// C++/WinRT v1.0.170717.1
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "Windows.Graphics.Effects.0.h"

namespace winrt {

namespace Windows::Graphics::Effects {

struct IGraphicsEffect :
    Windows::Foundation::IInspectable,
    impl::consume_t<IGraphicsEffect>,
    impl::require<IGraphicsEffect, Windows::Graphics::Effects::IGraphicsEffectSource>
{
    IGraphicsEffect(std::nullptr_t = nullptr) noexcept {}
};

struct IGraphicsEffectSource :
    Windows::Foundation::IInspectable,
    impl::consume_t<IGraphicsEffectSource>
{
    IGraphicsEffectSource(std::nullptr_t = nullptr) noexcept {}
};

}

}
