// C++/WinRT v1.0.170717.1
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "Windows.UI.Composition.1.h"
#include "Windows.UI.Input.1.h"
#include "Windows.Foundation.1.h"
#include "Windows.Foundation.Collections.1.h"
#include "Windows.UI.Composition.Interactions.1.h"

namespace winrt {

namespace Windows::UI::Composition::Interactions {

struct CompositionConditionalValue :
    Windows::UI::Composition::Interactions::ICompositionConditionalValue,
    impl::base<CompositionConditionalValue, Windows::UI::Composition::CompositionObject>,
    impl::require<CompositionConditionalValue, Windows::Foundation::IClosable, Windows::UI::Composition::ICompositionObject, Windows::UI::Composition::ICompositionObject2>
{
    CompositionConditionalValue(std::nullptr_t) noexcept {}
    static Windows::UI::Composition::Interactions::CompositionConditionalValue Create(Windows::UI::Composition::Compositor const& compositor);
};

struct CompositionInteractionSourceCollection :
    Windows::UI::Composition::Interactions::ICompositionInteractionSourceCollection,
    impl::base<CompositionInteractionSourceCollection, Windows::UI::Composition::CompositionObject>,
    impl::require<CompositionInteractionSourceCollection, Windows::Foundation::IClosable, Windows::UI::Composition::ICompositionObject, Windows::UI::Composition::ICompositionObject2>
{
    CompositionInteractionSourceCollection(std::nullptr_t) noexcept {}
};

struct InteractionTracker :
    Windows::UI::Composition::Interactions::IInteractionTracker,
    impl::base<InteractionTracker, Windows::UI::Composition::CompositionObject>,
    impl::require<InteractionTracker, Windows::Foundation::IClosable, Windows::UI::Composition::ICompositionObject, Windows::UI::Composition::ICompositionObject2, Windows::UI::Composition::Interactions::IInteractionTracker2>
{
    InteractionTracker(std::nullptr_t) noexcept {}
    static Windows::UI::Composition::Interactions::InteractionTracker Create(Windows::UI::Composition::Compositor const& compositor);
    static Windows::UI::Composition::Interactions::InteractionTracker CreateWithOwner(Windows::UI::Composition::Compositor const& compositor, Windows::UI::Composition::Interactions::IInteractionTrackerOwner const& owner);
};

struct InteractionTrackerCustomAnimationStateEnteredArgs :
    Windows::UI::Composition::Interactions::IInteractionTrackerCustomAnimationStateEnteredArgs
{
    InteractionTrackerCustomAnimationStateEnteredArgs(std::nullptr_t) noexcept {}
};

struct InteractionTrackerIdleStateEnteredArgs :
    Windows::UI::Composition::Interactions::IInteractionTrackerIdleStateEnteredArgs
{
    InteractionTrackerIdleStateEnteredArgs(std::nullptr_t) noexcept {}
};

struct InteractionTrackerInertiaModifier :
    Windows::UI::Composition::Interactions::IInteractionTrackerInertiaModifier,
    impl::base<InteractionTrackerInertiaModifier, Windows::UI::Composition::CompositionObject>,
    impl::require<InteractionTrackerInertiaModifier, Windows::Foundation::IClosable, Windows::UI::Composition::ICompositionObject, Windows::UI::Composition::ICompositionObject2>
{
    InteractionTrackerInertiaModifier(std::nullptr_t) noexcept {}
};

struct InteractionTrackerInertiaMotion :
    Windows::UI::Composition::Interactions::IInteractionTrackerInertiaMotion,
    impl::base<InteractionTrackerInertiaMotion, Windows::UI::Composition::Interactions::InteractionTrackerInertiaModifier, Windows::UI::Composition::CompositionObject>,
    impl::require<InteractionTrackerInertiaMotion, Windows::Foundation::IClosable, Windows::UI::Composition::ICompositionObject, Windows::UI::Composition::ICompositionObject2, Windows::UI::Composition::Interactions::IInteractionTrackerInertiaModifier>
{
    InteractionTrackerInertiaMotion(std::nullptr_t) noexcept {}
    static Windows::UI::Composition::Interactions::InteractionTrackerInertiaMotion Create(Windows::UI::Composition::Compositor const& compositor);
};

struct InteractionTrackerInertiaRestingValue :
    Windows::UI::Composition::Interactions::IInteractionTrackerInertiaRestingValue,
    impl::base<InteractionTrackerInertiaRestingValue, Windows::UI::Composition::Interactions::InteractionTrackerInertiaModifier, Windows::UI::Composition::CompositionObject>,
    impl::require<InteractionTrackerInertiaRestingValue, Windows::Foundation::IClosable, Windows::UI::Composition::ICompositionObject, Windows::UI::Composition::ICompositionObject2, Windows::UI::Composition::Interactions::IInteractionTrackerInertiaModifier>
{
    InteractionTrackerInertiaRestingValue(std::nullptr_t) noexcept {}
    static Windows::UI::Composition::Interactions::InteractionTrackerInertiaRestingValue Create(Windows::UI::Composition::Compositor const& compositor);
};

struct InteractionTrackerInertiaStateEnteredArgs :
    Windows::UI::Composition::Interactions::IInteractionTrackerInertiaStateEnteredArgs
{
    InteractionTrackerInertiaStateEnteredArgs(std::nullptr_t) noexcept {}
};

struct InteractionTrackerInteractingStateEnteredArgs :
    Windows::UI::Composition::Interactions::IInteractionTrackerInteractingStateEnteredArgs
{
    InteractionTrackerInteractingStateEnteredArgs(std::nullptr_t) noexcept {}
};

struct InteractionTrackerRequestIgnoredArgs :
    Windows::UI::Composition::Interactions::IInteractionTrackerRequestIgnoredArgs
{
    InteractionTrackerRequestIgnoredArgs(std::nullptr_t) noexcept {}
};

struct InteractionTrackerValuesChangedArgs :
    Windows::UI::Composition::Interactions::IInteractionTrackerValuesChangedArgs
{
    InteractionTrackerValuesChangedArgs(std::nullptr_t) noexcept {}
};

struct VisualInteractionSource :
    Windows::UI::Composition::Interactions::IVisualInteractionSource,
    impl::base<VisualInteractionSource, Windows::UI::Composition::CompositionObject>,
    impl::require<VisualInteractionSource, Windows::Foundation::IClosable, Windows::UI::Composition::ICompositionObject, Windows::UI::Composition::ICompositionObject2, Windows::UI::Composition::Interactions::ICompositionInteractionSource, Windows::UI::Composition::Interactions::IVisualInteractionSource2>
{
    VisualInteractionSource(std::nullptr_t) noexcept {}
    static Windows::UI::Composition::Interactions::VisualInteractionSource Create(Windows::UI::Composition::Visual const& source);
};

}

namespace impl {

}

}
