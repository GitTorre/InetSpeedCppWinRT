// C++/WinRT v1.0.170717.1
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "Windows.UI.Composition.0.h"
#include "Windows.UI.Input.0.h"
#include "Windows.Foundation.0.h"
#include "Windows.Foundation.Collections.0.h"
#include "Windows.UI.Composition.Interactions.0.h"

namespace winrt {

namespace Windows::UI::Composition::Interactions {

struct ICompositionConditionalValue :
    Windows::Foundation::IInspectable,
    impl::consume_t<ICompositionConditionalValue>
{
    ICompositionConditionalValue(std::nullptr_t = nullptr) noexcept {}
};

struct ICompositionConditionalValueStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<ICompositionConditionalValueStatics>
{
    ICompositionConditionalValueStatics(std::nullptr_t = nullptr) noexcept {}
};

struct ICompositionInteractionSource :
    Windows::Foundation::IInspectable,
    impl::consume_t<ICompositionInteractionSource>
{
    ICompositionInteractionSource(std::nullptr_t = nullptr) noexcept {}
};

struct ICompositionInteractionSourceCollection :
    Windows::Foundation::IInspectable,
    impl::consume_t<ICompositionInteractionSourceCollection>,
    impl::require<ICompositionInteractionSourceCollection, Windows::Foundation::Collections::IIterable<Windows::UI::Composition::Interactions::ICompositionInteractionSource>>
{
    ICompositionInteractionSourceCollection(std::nullptr_t = nullptr) noexcept {}
};

struct IInteractionTracker :
    Windows::Foundation::IInspectable,
    impl::consume_t<IInteractionTracker>
{
    IInteractionTracker(std::nullptr_t = nullptr) noexcept {}
};

struct IInteractionTracker2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IInteractionTracker2>
{
    IInteractionTracker2(std::nullptr_t = nullptr) noexcept {}
};

struct IInteractionTrackerCustomAnimationStateEnteredArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<IInteractionTrackerCustomAnimationStateEnteredArgs>
{
    IInteractionTrackerCustomAnimationStateEnteredArgs(std::nullptr_t = nullptr) noexcept {}
};

struct IInteractionTrackerIdleStateEnteredArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<IInteractionTrackerIdleStateEnteredArgs>
{
    IInteractionTrackerIdleStateEnteredArgs(std::nullptr_t = nullptr) noexcept {}
};

struct IInteractionTrackerInertiaModifier :
    Windows::Foundation::IInspectable,
    impl::consume_t<IInteractionTrackerInertiaModifier>
{
    IInteractionTrackerInertiaModifier(std::nullptr_t = nullptr) noexcept {}
};

struct IInteractionTrackerInertiaModifierFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<IInteractionTrackerInertiaModifierFactory>
{
    IInteractionTrackerInertiaModifierFactory(std::nullptr_t = nullptr) noexcept {}
};

struct IInteractionTrackerInertiaMotion :
    Windows::Foundation::IInspectable,
    impl::consume_t<IInteractionTrackerInertiaMotion>
{
    IInteractionTrackerInertiaMotion(std::nullptr_t = nullptr) noexcept {}
};

struct IInteractionTrackerInertiaMotionStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IInteractionTrackerInertiaMotionStatics>
{
    IInteractionTrackerInertiaMotionStatics(std::nullptr_t = nullptr) noexcept {}
};

struct IInteractionTrackerInertiaRestingValue :
    Windows::Foundation::IInspectable,
    impl::consume_t<IInteractionTrackerInertiaRestingValue>
{
    IInteractionTrackerInertiaRestingValue(std::nullptr_t = nullptr) noexcept {}
};

struct IInteractionTrackerInertiaRestingValueStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IInteractionTrackerInertiaRestingValueStatics>
{
    IInteractionTrackerInertiaRestingValueStatics(std::nullptr_t = nullptr) noexcept {}
};

struct IInteractionTrackerInertiaStateEnteredArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<IInteractionTrackerInertiaStateEnteredArgs>
{
    IInteractionTrackerInertiaStateEnteredArgs(std::nullptr_t = nullptr) noexcept {}
};

struct IInteractionTrackerInteractingStateEnteredArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<IInteractionTrackerInteractingStateEnteredArgs>
{
    IInteractionTrackerInteractingStateEnteredArgs(std::nullptr_t = nullptr) noexcept {}
};

struct IInteractionTrackerOwner :
    Windows::Foundation::IInspectable,
    impl::consume_t<IInteractionTrackerOwner>
{
    IInteractionTrackerOwner(std::nullptr_t = nullptr) noexcept {}
};

struct IInteractionTrackerRequestIgnoredArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<IInteractionTrackerRequestIgnoredArgs>
{
    IInteractionTrackerRequestIgnoredArgs(std::nullptr_t = nullptr) noexcept {}
};

struct IInteractionTrackerStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IInteractionTrackerStatics>
{
    IInteractionTrackerStatics(std::nullptr_t = nullptr) noexcept {}
};

struct IInteractionTrackerValuesChangedArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<IInteractionTrackerValuesChangedArgs>
{
    IInteractionTrackerValuesChangedArgs(std::nullptr_t = nullptr) noexcept {}
};

struct IVisualInteractionSource :
    Windows::Foundation::IInspectable,
    impl::consume_t<IVisualInteractionSource>
{
    IVisualInteractionSource(std::nullptr_t = nullptr) noexcept {}
};

struct IVisualInteractionSource2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IVisualInteractionSource2>
{
    IVisualInteractionSource2(std::nullptr_t = nullptr) noexcept {}
};

struct IVisualInteractionSourceObjectFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<IVisualInteractionSourceObjectFactory>
{
    IVisualInteractionSourceObjectFactory(std::nullptr_t = nullptr) noexcept {}
};

struct IVisualInteractionSourceStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IVisualInteractionSourceStatics>
{
    IVisualInteractionSourceStatics(std::nullptr_t = nullptr) noexcept {}
};

}

}
