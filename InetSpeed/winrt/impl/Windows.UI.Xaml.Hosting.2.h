// C++/WinRT v1.0.170717.1
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "Windows.UI.Composition.1.h"
#include "Windows.UI.Xaml.1.h"
#include "Windows.UI.Xaml.Controls.1.h"
#include "Windows.UI.Xaml.Controls.Primitives.1.h"
#include "Windows.UI.Xaml.Hosting.1.h"

namespace winrt {

namespace Windows::UI::Xaml::Hosting {

struct ElementCompositionPreview :
    Windows::UI::Xaml::Hosting::IElementCompositionPreview
{
    ElementCompositionPreview(std::nullptr_t) noexcept {}
    static Windows::UI::Composition::Visual GetElementVisual(Windows::UI::Xaml::UIElement const& element);
    static Windows::UI::Composition::Visual GetElementChildVisual(Windows::UI::Xaml::UIElement const& element);
    static void SetElementChildVisual(Windows::UI::Xaml::UIElement const& element, Windows::UI::Composition::Visual const& visual);
    static Windows::UI::Composition::CompositionPropertySet GetScrollViewerManipulationPropertySet(Windows::UI::Xaml::Controls::ScrollViewer const& scrollViewer);
    static void SetImplicitShowAnimation(Windows::UI::Xaml::UIElement const& element, Windows::UI::Composition::ICompositionAnimationBase const& animation);
    static void SetImplicitHideAnimation(Windows::UI::Xaml::UIElement const& element, Windows::UI::Composition::ICompositionAnimationBase const& animation);
    static void SetIsTranslationEnabled(Windows::UI::Xaml::UIElement const& element, bool value);
    static Windows::UI::Composition::CompositionPropertySet GetPointerPositionPropertySet(Windows::UI::Xaml::UIElement const& targetElement);
};

struct XamlUIPresenter :
    Windows::UI::Xaml::Hosting::IXamlUIPresenter
{
    XamlUIPresenter(std::nullptr_t) noexcept {}
    static bool CompleteTimelinesAutomatically();
    static void CompleteTimelinesAutomatically(bool value);
    static void SetHost(Windows::UI::Xaml::Hosting::IXamlUIPresenterHost const& host);
    static void NotifyWindowSizeChanged();
    static Windows::Foundation::Rect GetFlyoutPlacementTargetInfo(Windows::UI::Xaml::FrameworkElement const& placementTarget, Windows::UI::Xaml::Controls::Primitives::FlyoutPlacementMode const& preferredPlacement, Windows::UI::Xaml::Controls::Primitives::FlyoutPlacementMode& targetPreferredPlacement, bool& allowFallbacks);
    static Windows::Foundation::Rect GetFlyoutPlacement(Windows::Foundation::Rect const& placementTargetBounds, Windows::Foundation::Size const& controlSize, Windows::Foundation::Size const& minControlSize, Windows::Foundation::Rect const& containerRect, Windows::UI::Xaml::Controls::Primitives::FlyoutPlacementMode const& targetPreferredPlacement, bool allowFallbacks, Windows::UI::Xaml::Controls::Primitives::FlyoutPlacementMode& chosenPlacement);
};

}

namespace impl {

}

}
