// C++/WinRT v1.0.170717.1
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "Windows.Devices.Enumeration.0.h"
#include "Windows.UI.0.h"
#include "Windows.UI.Core.0.h"
#include "Windows.UI.Popups.0.h"
#include "Windows.UI.ViewManagement.0.h"

namespace winrt {

namespace Windows::UI::ViewManagement {

struct IAccessibilitySettings :
    Windows::Foundation::IInspectable,
    impl::consume_t<IAccessibilitySettings>
{
    IAccessibilitySettings(std::nullptr_t = nullptr) noexcept {}
};

struct IActivationViewSwitcher :
    Windows::Foundation::IInspectable,
    impl::consume_t<IActivationViewSwitcher>
{
    IActivationViewSwitcher(std::nullptr_t = nullptr) noexcept {}
};

struct IApplicationView :
    Windows::Foundation::IInspectable,
    impl::consume_t<IApplicationView>
{
    IApplicationView(std::nullptr_t = nullptr) noexcept {}
};

struct IApplicationView2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IApplicationView2>
{
    IApplicationView2(std::nullptr_t = nullptr) noexcept {}
};

struct IApplicationView3 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IApplicationView3>
{
    IApplicationView3(std::nullptr_t = nullptr) noexcept {}
};

struct IApplicationView4 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IApplicationView4>
{
    IApplicationView4(std::nullptr_t = nullptr) noexcept {}
};

struct IApplicationViewConsolidatedEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<IApplicationViewConsolidatedEventArgs>
{
    IApplicationViewConsolidatedEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct IApplicationViewConsolidatedEventArgs2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IApplicationViewConsolidatedEventArgs2>
{
    IApplicationViewConsolidatedEventArgs2(std::nullptr_t = nullptr) noexcept {}
};

struct [[deprecated("IApplicationViewFullscreenStatics is deprecated after Windows 8. Please use other resize APIs.")]] IApplicationViewFullscreenStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IApplicationViewFullscreenStatics>
{
    IApplicationViewFullscreenStatics(std::nullptr_t = nullptr) noexcept {}
};

struct IApplicationViewInteropStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IApplicationViewInteropStatics>
{
    IApplicationViewInteropStatics(std::nullptr_t = nullptr) noexcept {}
};

struct IApplicationViewScaling :
    Windows::Foundation::IInspectable,
    impl::consume_t<IApplicationViewScaling>
{
    IApplicationViewScaling(std::nullptr_t = nullptr) noexcept {}
};

struct IApplicationViewScalingStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IApplicationViewScalingStatics>
{
    IApplicationViewScalingStatics(std::nullptr_t = nullptr) noexcept {}
};

struct [[deprecated("ApplicationView static methods may be altered or unavailable for releases after Windows 8.1. Instead, use ApplicationView.GetForCurrentView to get an instance of ApplicationView.")]] IApplicationViewStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IApplicationViewStatics>
{
    IApplicationViewStatics(std::nullptr_t = nullptr) noexcept {}
};

struct IApplicationViewStatics2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IApplicationViewStatics2>
{
    IApplicationViewStatics2(std::nullptr_t = nullptr) noexcept {}
};

struct IApplicationViewStatics3 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IApplicationViewStatics3>
{
    IApplicationViewStatics3(std::nullptr_t = nullptr) noexcept {}
};

struct IApplicationViewSwitcherStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IApplicationViewSwitcherStatics>
{
    IApplicationViewSwitcherStatics(std::nullptr_t = nullptr) noexcept {}
};

struct IApplicationViewSwitcherStatics2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IApplicationViewSwitcherStatics2>
{
    IApplicationViewSwitcherStatics2(std::nullptr_t = nullptr) noexcept {}
};

struct IApplicationViewSwitcherStatics3 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IApplicationViewSwitcherStatics3>
{
    IApplicationViewSwitcherStatics3(std::nullptr_t = nullptr) noexcept {}
};

struct IApplicationViewTitleBar :
    Windows::Foundation::IInspectable,
    impl::consume_t<IApplicationViewTitleBar>
{
    IApplicationViewTitleBar(std::nullptr_t = nullptr) noexcept {}
};

struct IApplicationViewTransferContext :
    Windows::Foundation::IInspectable,
    impl::consume_t<IApplicationViewTransferContext>
{
    IApplicationViewTransferContext(std::nullptr_t = nullptr) noexcept {}
};

struct IApplicationViewTransferContextStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IApplicationViewTransferContextStatics>
{
    IApplicationViewTransferContextStatics(std::nullptr_t = nullptr) noexcept {}
};

struct IInputPane :
    Windows::Foundation::IInspectable,
    impl::consume_t<IInputPane>
{
    IInputPane(std::nullptr_t = nullptr) noexcept {}
};

struct IInputPane2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IInputPane2>
{
    IInputPane2(std::nullptr_t = nullptr) noexcept {}
};

struct IInputPaneControl :
    Windows::Foundation::IInspectable,
    impl::consume_t<IInputPaneControl>
{
    IInputPaneControl(std::nullptr_t = nullptr) noexcept {}
};

struct IInputPaneStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IInputPaneStatics>
{
    IInputPaneStatics(std::nullptr_t = nullptr) noexcept {}
};

struct IInputPaneVisibilityEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<IInputPaneVisibilityEventArgs>
{
    IInputPaneVisibilityEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct IProjectionManagerStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IProjectionManagerStatics>
{
    IProjectionManagerStatics(std::nullptr_t = nullptr) noexcept {}
};

struct IProjectionManagerStatics2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IProjectionManagerStatics2>
{
    IProjectionManagerStatics2(std::nullptr_t = nullptr) noexcept {}
};

struct IStatusBar :
    Windows::Foundation::IInspectable,
    impl::consume_t<IStatusBar>
{
    IStatusBar(std::nullptr_t = nullptr) noexcept {}
};

struct IStatusBarProgressIndicator :
    Windows::Foundation::IInspectable,
    impl::consume_t<IStatusBarProgressIndicator>
{
    IStatusBarProgressIndicator(std::nullptr_t = nullptr) noexcept {}
};

struct IStatusBarStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IStatusBarStatics>
{
    IStatusBarStatics(std::nullptr_t = nullptr) noexcept {}
};

struct IUISettings :
    Windows::Foundation::IInspectable,
    impl::consume_t<IUISettings>
{
    IUISettings(std::nullptr_t = nullptr) noexcept {}
};

struct IUISettings2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IUISettings2>
{
    IUISettings2(std::nullptr_t = nullptr) noexcept {}
};

struct IUISettings3 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IUISettings3>
{
    IUISettings3(std::nullptr_t = nullptr) noexcept {}
};

struct IUISettings4 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IUISettings4>
{
    IUISettings4(std::nullptr_t = nullptr) noexcept {}
};

struct IUIViewSettings :
    Windows::Foundation::IInspectable,
    impl::consume_t<IUIViewSettings>
{
    IUIViewSettings(std::nullptr_t = nullptr) noexcept {}
};

struct IUIViewSettingsStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IUIViewSettingsStatics>
{
    IUIViewSettingsStatics(std::nullptr_t = nullptr) noexcept {}
};

struct IViewModePreferences :
    Windows::Foundation::IInspectable,
    impl::consume_t<IViewModePreferences>
{
    IViewModePreferences(std::nullptr_t = nullptr) noexcept {}
};

struct IViewModePreferencesStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IViewModePreferencesStatics>
{
    IViewModePreferencesStatics(std::nullptr_t = nullptr) noexcept {}
};

}

}
