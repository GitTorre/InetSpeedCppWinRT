// C++/WinRT v1.0.170717.1
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "Windows.Devices.Enumeration.1.h"
#include "Windows.UI.1.h"
#include "Windows.UI.Core.1.h"
#include "Windows.UI.Popups.1.h"
#include "Windows.UI.ViewManagement.1.h"

namespace winrt {

namespace Windows::UI::ViewManagement {

struct AccessibilitySettings :
    Windows::UI::ViewManagement::IAccessibilitySettings
{
    AccessibilitySettings(std::nullptr_t) noexcept {}
    AccessibilitySettings();
};

struct ActivationViewSwitcher :
    Windows::UI::ViewManagement::IActivationViewSwitcher
{
    ActivationViewSwitcher(std::nullptr_t) noexcept {}
};

struct ApplicationView :
    Windows::UI::ViewManagement::IApplicationView,
    impl::require<ApplicationView, Windows::UI::ViewManagement::IApplicationView2, Windows::UI::ViewManagement::IApplicationView3, Windows::UI::ViewManagement::IApplicationView4>
{
    ApplicationView(std::nullptr_t) noexcept {}
    [[deprecated("IApplicationViewFullscreenStatics is deprecated after Windows 8. Please use other resize APIs.")]] static bool TryUnsnapToFullscreen();
    static int32_t GetApplicationViewIdForWindow(Windows::UI::Core::ICoreWindow const& window);
    [[deprecated("Value may be altered or unavailable for releases after Windows 8.1. Instead, query for window layout sizes directly.")]] static Windows::UI::ViewManagement::ApplicationViewState Value();
    [[deprecated("TryUnsnap may be altered or unavailable for releases after Windows 8.1. Apps can be continuously resized, but cannot be snapped, starting in Windows 8.1.")]] static bool TryUnsnap();
    static Windows::UI::ViewManagement::ApplicationView GetForCurrentView();
    static bool TerminateAppOnFinalViewClose();
    static void TerminateAppOnFinalViewClose(bool value);
    static Windows::UI::ViewManagement::ApplicationViewWindowingMode PreferredLaunchWindowingMode();
    static void PreferredLaunchWindowingMode(Windows::UI::ViewManagement::ApplicationViewWindowingMode const& value);
    static Windows::Foundation::Size PreferredLaunchViewSize();
    static void PreferredLaunchViewSize(Windows::Foundation::Size const& value);
};

struct ApplicationViewConsolidatedEventArgs :
    Windows::UI::ViewManagement::IApplicationViewConsolidatedEventArgs,
    impl::require<ApplicationViewConsolidatedEventArgs, Windows::UI::ViewManagement::IApplicationViewConsolidatedEventArgs2>
{
    ApplicationViewConsolidatedEventArgs(std::nullptr_t) noexcept {}
};

struct ApplicationViewScaling :
    Windows::UI::ViewManagement::IApplicationViewScaling
{
    ApplicationViewScaling(std::nullptr_t) noexcept {}
    static bool DisableLayoutScaling();
    static bool TrySetDisableLayoutScaling(bool disableLayoutScaling);
};

struct ApplicationViewSwitcher
{
    ApplicationViewSwitcher() = delete;
    static void DisableShowingMainViewOnActivation();
    static Windows::Foundation::IAsyncOperation<bool> TryShowAsStandaloneAsync(int32_t viewId);
    static Windows::Foundation::IAsyncOperation<bool> TryShowAsStandaloneAsync(int32_t viewId, Windows::UI::ViewManagement::ViewSizePreference const& sizePreference);
    static Windows::Foundation::IAsyncOperation<bool> TryShowAsStandaloneAsync(int32_t viewId, Windows::UI::ViewManagement::ViewSizePreference const& sizePreference, int32_t anchorViewId, Windows::UI::ViewManagement::ViewSizePreference const& anchorSizePreference);
    static Windows::Foundation::IAsyncAction SwitchAsync(int32_t viewId);
    static Windows::Foundation::IAsyncAction SwitchAsync(int32_t toViewId, int32_t fromViewId);
    static Windows::Foundation::IAsyncAction SwitchAsync(int32_t toViewId, int32_t fromViewId, Windows::UI::ViewManagement::ApplicationViewSwitchingOptions const& options);
    static Windows::Foundation::IAsyncOperation<bool> PrepareForCustomAnimatedSwitchAsync(int32_t toViewId, int32_t fromViewId, Windows::UI::ViewManagement::ApplicationViewSwitchingOptions const& options);
    static void DisableSystemViewActivationPolicy();
    static Windows::Foundation::IAsyncOperation<bool> TryShowAsViewModeAsync(int32_t viewId, Windows::UI::ViewManagement::ApplicationViewMode const& viewMode);
    static Windows::Foundation::IAsyncOperation<bool> TryShowAsViewModeAsync(int32_t viewId, Windows::UI::ViewManagement::ApplicationViewMode const& viewMode, Windows::UI::ViewManagement::ViewModePreferences const& viewModePreferences);
};

struct ApplicationViewTitleBar :
    Windows::UI::ViewManagement::IApplicationViewTitleBar
{
    ApplicationViewTitleBar(std::nullptr_t) noexcept {}
};

struct ApplicationViewTransferContext :
    Windows::UI::ViewManagement::IApplicationViewTransferContext
{
    ApplicationViewTransferContext(std::nullptr_t) noexcept {}
    ApplicationViewTransferContext();
    static hstring DataPackageFormatId();
};

struct InputPane :
    Windows::UI::ViewManagement::IInputPane,
    impl::require<InputPane, Windows::UI::ViewManagement::IInputPane2, Windows::UI::ViewManagement::IInputPaneControl>
{
    InputPane(std::nullptr_t) noexcept {}
    static Windows::UI::ViewManagement::InputPane GetForCurrentView();
};

struct InputPaneVisibilityEventArgs :
    Windows::UI::ViewManagement::IInputPaneVisibilityEventArgs
{
    InputPaneVisibilityEventArgs(std::nullptr_t) noexcept {}
};

struct ProjectionManager
{
    ProjectionManager() = delete;
    static Windows::Foundation::IAsyncAction StartProjectingAsync(int32_t projectionViewId, int32_t anchorViewId);
    static Windows::Foundation::IAsyncAction SwapDisplaysForViewsAsync(int32_t projectionViewId, int32_t anchorViewId);
    static Windows::Foundation::IAsyncAction StopProjectingAsync(int32_t projectionViewId, int32_t anchorViewId);
    static bool ProjectionDisplayAvailable();
    static event_token ProjectionDisplayAvailableChanged(Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> const& handler);
    using ProjectionDisplayAvailableChanged_revoker = factory_event_revoker<Windows::UI::ViewManagement::IProjectionManagerStatics>;
    static ProjectionDisplayAvailableChanged_revoker ProjectionDisplayAvailableChanged(auto_revoke_t, Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> const& handler);
    static void ProjectionDisplayAvailableChanged(event_token const& token);
    static Windows::Foundation::IAsyncAction StartProjectingAsync(int32_t projectionViewId, int32_t anchorViewId, Windows::Devices::Enumeration::DeviceInformation const& displayDeviceInfo);
    static Windows::Foundation::IAsyncOperation<bool> RequestStartProjectingAsync(int32_t projectionViewId, int32_t anchorViewId, Windows::Foundation::Rect const& selection);
    static Windows::Foundation::IAsyncOperation<bool> RequestStartProjectingAsync(int32_t projectionViewId, int32_t anchorViewId, Windows::Foundation::Rect const& selection, Windows::UI::Popups::Placement const& prefferedPlacement);
    static hstring GetDeviceSelector();
};

struct StatusBar :
    Windows::UI::ViewManagement::IStatusBar
{
    StatusBar(std::nullptr_t) noexcept {}
    static Windows::UI::ViewManagement::StatusBar GetForCurrentView();
};

struct StatusBarProgressIndicator :
    Windows::UI::ViewManagement::IStatusBarProgressIndicator
{
    StatusBarProgressIndicator(std::nullptr_t) noexcept {}
};

struct UISettings :
    Windows::UI::ViewManagement::IUISettings,
    impl::require<UISettings, Windows::UI::ViewManagement::IUISettings2, Windows::UI::ViewManagement::IUISettings3, Windows::UI::ViewManagement::IUISettings4>
{
    UISettings(std::nullptr_t) noexcept {}
    UISettings();
};

struct UIViewSettings :
    Windows::UI::ViewManagement::IUIViewSettings
{
    UIViewSettings(std::nullptr_t) noexcept {}
    static Windows::UI::ViewManagement::UIViewSettings GetForCurrentView();
};

struct ViewModePreferences :
    Windows::UI::ViewManagement::IViewModePreferences
{
    ViewModePreferences(std::nullptr_t) noexcept {}
    static Windows::UI::ViewManagement::ViewModePreferences CreateDefault(Windows::UI::ViewManagement::ApplicationViewMode const& mode);
};

}

namespace impl {

}

}
