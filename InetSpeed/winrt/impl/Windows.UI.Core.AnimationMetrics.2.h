// C++/WinRT v1.0.170717.1
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "Windows.UI.Core.AnimationMetrics.1.h"

namespace winrt {

namespace Windows::UI::Core::AnimationMetrics {

struct AnimationDescription :
    Windows::UI::Core::AnimationMetrics::IAnimationDescription
{
    AnimationDescription(std::nullptr_t) noexcept {}
    AnimationDescription(Windows::UI::Core::AnimationMetrics::AnimationEffect const& effect, Windows::UI::Core::AnimationMetrics::AnimationEffectTarget const& target);
};

struct OpacityAnimation :
    Windows::UI::Core::AnimationMetrics::IOpacityAnimation
{
    OpacityAnimation(std::nullptr_t) noexcept {}
};

struct PropertyAnimation :
    Windows::UI::Core::AnimationMetrics::IPropertyAnimation
{
    PropertyAnimation(std::nullptr_t) noexcept {}
};

struct ScaleAnimation :
    Windows::UI::Core::AnimationMetrics::IScaleAnimation
{
    ScaleAnimation(std::nullptr_t) noexcept {}
};

struct TranslationAnimation :
    Windows::UI::Core::AnimationMetrics::IPropertyAnimation
{
    TranslationAnimation(std::nullptr_t) noexcept {}
};

}

namespace impl {

}

}
