// C++/WinRT v1.0.170717.1
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "Windows.UI.Core.AnimationMetrics.0.h"

namespace winrt {

namespace Windows::UI::Core::AnimationMetrics {

struct IAnimationDescription :
    Windows::Foundation::IInspectable,
    impl::consume_t<IAnimationDescription>
{
    IAnimationDescription(std::nullptr_t = nullptr) noexcept {}
};

struct IAnimationDescriptionFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<IAnimationDescriptionFactory>
{
    IAnimationDescriptionFactory(std::nullptr_t = nullptr) noexcept {}
};

struct IOpacityAnimation :
    Windows::Foundation::IInspectable,
    impl::consume_t<IOpacityAnimation>,
    impl::require<IOpacityAnimation, Windows::UI::Core::AnimationMetrics::IPropertyAnimation>
{
    IOpacityAnimation(std::nullptr_t = nullptr) noexcept {}
};

struct IPropertyAnimation :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPropertyAnimation>
{
    IPropertyAnimation(std::nullptr_t = nullptr) noexcept {}
};

struct IScaleAnimation :
    Windows::Foundation::IInspectable,
    impl::consume_t<IScaleAnimation>,
    impl::require<IScaleAnimation, Windows::UI::Core::AnimationMetrics::IPropertyAnimation>
{
    IScaleAnimation(std::nullptr_t = nullptr) noexcept {}
};

}

}
