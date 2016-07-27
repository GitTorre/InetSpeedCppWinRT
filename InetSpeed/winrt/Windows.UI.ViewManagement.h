// C++ for the Windows Runtime v1.29
// Copyright (c) 2016 Microsoft Corporation

#pragma once

#include "internal\Windows.Foundation.3.h"
#include "internal\Windows.UI.Core.3.h"
#include "internal\Windows.Devices.Enumeration.3.h"
#include "internal\Windows.UI.Popups.3.h"
#include "internal\Windows.UI.3.h"
#include "internal\Windows.UI.ViewManagement.3.h"
#include "Windows.UI.h"

WINRT_EXPORT namespace winrt {

namespace impl {

template <typename D>
struct produce<D, Windows::UI::ViewManagement::IAccessibilitySettings> : produce_base<D, Windows::UI::ViewManagement::IAccessibilitySettings>
{
    HRESULT __stdcall get_HighContrast(bool * value) noexcept override
    {
        try
        {
            *value = detach(shim().HighContrast());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_HighContrastScheme(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(shim().HighContrastScheme());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_HighContrastChanged(abi_arg_in<Windows::Foundation::TypedEventHandler<Windows::UI::ViewManagement::AccessibilitySettings, Windows::IInspectable>> handler, event_token * cookie) noexcept override
    {
        try
        {
            *cookie = detach(shim().HighContrastChanged(*reinterpret_cast<const Windows::Foundation::TypedEventHandler<Windows::UI::ViewManagement::AccessibilitySettings, Windows::IInspectable> *>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_HighContrastChanged(event_token cookie) noexcept override
    {
        try
        {
            shim().HighContrastChanged(cookie);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::ViewManagement::IActivationViewSwitcher> : produce_base<D, Windows::UI::ViewManagement::IActivationViewSwitcher>
{
    HRESULT __stdcall abi_ShowAsStandaloneAsync(int32_t viewId, abi_arg_out<Windows::Foundation::IAsyncAction> operation) noexcept override
    {
        try
        {
            *operation = detach(shim().ShowAsStandaloneAsync(viewId));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_ShowAsStandaloneWithSizePreferenceAsync(int32_t viewId, Windows::UI::ViewManagement::ViewSizePreference sizePreference, abi_arg_out<Windows::Foundation::IAsyncAction> operation) noexcept override
    {
        try
        {
            *operation = detach(shim().ShowAsStandaloneAsync(viewId, sizePreference));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_IsViewPresentedOnActivationVirtualDesktop(int32_t viewId, bool * value) noexcept override
    {
        try
        {
            *value = detach(shim().IsViewPresentedOnActivationVirtualDesktop(viewId));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::ViewManagement::IApplicationView> : produce_base<D, Windows::UI::ViewManagement::IApplicationView>
{
    HRESULT __stdcall get_Orientation(Windows::UI::ViewManagement::ApplicationViewOrientation * value) noexcept override
    {
        try
        {
            *value = detach(shim().Orientation());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_AdjacentToLeftDisplayEdge(bool * value) noexcept override
    {
        try
        {
            *value = detach(shim().AdjacentToLeftDisplayEdge());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_AdjacentToRightDisplayEdge(bool * value) noexcept override
    {
        try
        {
            *value = detach(shim().AdjacentToRightDisplayEdge());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_IsFullScreen(bool * value) noexcept override
    {
        try
        {
            *value = detach(shim().IsFullScreen());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_IsOnLockScreen(bool * value) noexcept override
    {
        try
        {
            *value = detach(shim().IsOnLockScreen());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_IsScreenCaptureEnabled(bool * value) noexcept override
    {
        try
        {
            *value = detach(shim().IsScreenCaptureEnabled());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_IsScreenCaptureEnabled(bool value) noexcept override
    {
        try
        {
            shim().IsScreenCaptureEnabled(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Title(abi_arg_in<hstring> value) noexcept override
    {
        try
        {
            shim().Title(*reinterpret_cast<const hstring *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Title(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(shim().Title());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Id(int32_t * value) noexcept override
    {
        try
        {
            *value = detach(shim().Id());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_Consolidated(abi_arg_in<Windows::Foundation::TypedEventHandler<Windows::UI::ViewManagement::ApplicationView, Windows::UI::ViewManagement::ApplicationViewConsolidatedEventArgs>> handler, event_token * token) noexcept override
    {
        try
        {
            *token = detach(shim().Consolidated(*reinterpret_cast<const Windows::Foundation::TypedEventHandler<Windows::UI::ViewManagement::ApplicationView, Windows::UI::ViewManagement::ApplicationViewConsolidatedEventArgs> *>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_Consolidated(event_token token) noexcept override
    {
        try
        {
            shim().Consolidated(token);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::ViewManagement::IApplicationView2> : produce_base<D, Windows::UI::ViewManagement::IApplicationView2>
{
    HRESULT __stdcall get_SuppressSystemOverlays(bool * value) noexcept override
    {
        try
        {
            *value = detach(shim().SuppressSystemOverlays());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_SuppressSystemOverlays(bool value) noexcept override
    {
        try
        {
            shim().SuppressSystemOverlays(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_VisibleBounds(abi_arg_out<Windows::Foundation::Rect> value) noexcept override
    {
        try
        {
            *value = detach(shim().VisibleBounds());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_VisibleBoundsChanged(abi_arg_in<Windows::Foundation::TypedEventHandler<Windows::UI::ViewManagement::ApplicationView, Windows::IInspectable>> handler, event_token * token) noexcept override
    {
        try
        {
            *token = detach(shim().VisibleBoundsChanged(*reinterpret_cast<const Windows::Foundation::TypedEventHandler<Windows::UI::ViewManagement::ApplicationView, Windows::IInspectable> *>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_VisibleBoundsChanged(event_token token) noexcept override
    {
        try
        {
            shim().VisibleBoundsChanged(token);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_SetDesiredBoundsMode(Windows::UI::ViewManagement::ApplicationViewBoundsMode boundsMode, bool * success) noexcept override
    {
        try
        {
            *success = detach(shim().SetDesiredBoundsMode(boundsMode));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_DesiredBoundsMode(Windows::UI::ViewManagement::ApplicationViewBoundsMode * value) noexcept override
    {
        try
        {
            *value = detach(shim().DesiredBoundsMode());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::ViewManagement::IApplicationView3> : produce_base<D, Windows::UI::ViewManagement::IApplicationView3>
{
    HRESULT __stdcall get_TitleBar(abi_arg_out<Windows::UI::ViewManagement::IApplicationViewTitleBar> value) noexcept override
    {
        try
        {
            *value = detach(shim().TitleBar());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_FullScreenSystemOverlayMode(Windows::UI::ViewManagement::FullScreenSystemOverlayMode * value) noexcept override
    {
        try
        {
            *value = detach(shim().FullScreenSystemOverlayMode());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_FullScreenSystemOverlayMode(Windows::UI::ViewManagement::FullScreenSystemOverlayMode value) noexcept override
    {
        try
        {
            shim().FullScreenSystemOverlayMode(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_IsFullScreenMode(bool * value) noexcept override
    {
        try
        {
            *value = detach(shim().IsFullScreenMode());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_TryEnterFullScreenMode(bool * success) noexcept override
    {
        try
        {
            *success = detach(shim().TryEnterFullScreenMode());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_ExitFullScreenMode() noexcept override
    {
        try
        {
            shim().ExitFullScreenMode();
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_ShowStandardSystemOverlays() noexcept override
    {
        try
        {
            shim().ShowStandardSystemOverlays();
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_TryResizeView(abi_arg_in<Windows::Foundation::Size> value, bool * success) noexcept override
    {
        try
        {
            *success = detach(shim().TryResizeView(*reinterpret_cast<const Windows::Foundation::Size *>(&value)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_SetPreferredMinSize(abi_arg_in<Windows::Foundation::Size> minSize) noexcept override
    {
        try
        {
            shim().SetPreferredMinSize(*reinterpret_cast<const Windows::Foundation::Size *>(&minSize));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::ViewManagement::IApplicationViewConsolidatedEventArgs> : produce_base<D, Windows::UI::ViewManagement::IApplicationViewConsolidatedEventArgs>
{
    HRESULT __stdcall get_IsUserInitiated(bool * value) noexcept override
    {
        try
        {
            *value = detach(shim().IsUserInitiated());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::ViewManagement::IApplicationViewFullscreenStatics> : produce_base<D, Windows::UI::ViewManagement::IApplicationViewFullscreenStatics>
{
    HRESULT __stdcall abi_TryUnsnapToFullscreen(bool * success) noexcept override
    {
        try
        {
            *success = detach(shim().TryUnsnapToFullscreen());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::ViewManagement::IApplicationViewInteropStatics> : produce_base<D, Windows::UI::ViewManagement::IApplicationViewInteropStatics>
{
    HRESULT __stdcall abi_GetApplicationViewIdForWindow(abi_arg_in<Windows::UI::Core::ICoreWindow> window, int32_t * id) noexcept override
    {
        try
        {
            *id = detach(shim().GetApplicationViewIdForWindow(*reinterpret_cast<const Windows::UI::Core::ICoreWindow *>(&window)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::ViewManagement::IApplicationViewScaling> : produce_base<D, Windows::UI::ViewManagement::IApplicationViewScaling>
{};

template <typename D>
struct produce<D, Windows::UI::ViewManagement::IApplicationViewScalingStatics> : produce_base<D, Windows::UI::ViewManagement::IApplicationViewScalingStatics>
{
    HRESULT __stdcall get_DisableLayoutScaling(bool * value) noexcept override
    {
        try
        {
            *value = detach(shim().DisableLayoutScaling());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_TrySetDisableLayoutScaling(bool disableLayoutScaling, bool * success) noexcept override
    {
        try
        {
            *success = detach(shim().TrySetDisableLayoutScaling(disableLayoutScaling));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::ViewManagement::IApplicationViewStatics> : produce_base<D, Windows::UI::ViewManagement::IApplicationViewStatics>
{
    HRESULT __stdcall get_Value(Windows::UI::ViewManagement::ApplicationViewState * value) noexcept override
    {
        try
        {
            *value = detach(shim().Value());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_TryUnsnap(bool * success) noexcept override
    {
        try
        {
            *success = detach(shim().TryUnsnap());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::ViewManagement::IApplicationViewStatics2> : produce_base<D, Windows::UI::ViewManagement::IApplicationViewStatics2>
{
    HRESULT __stdcall abi_GetForCurrentView(abi_arg_out<Windows::UI::ViewManagement::IApplicationView> current) noexcept override
    {
        try
        {
            *current = detach(shim().GetForCurrentView());
            return S_OK;
        }
        catch (...)
        {
            *current = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_TerminateAppOnFinalViewClose(bool * value) noexcept override
    {
        try
        {
            *value = detach(shim().TerminateAppOnFinalViewClose());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_TerminateAppOnFinalViewClose(bool value) noexcept override
    {
        try
        {
            shim().TerminateAppOnFinalViewClose(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::ViewManagement::IApplicationViewStatics3> : produce_base<D, Windows::UI::ViewManagement::IApplicationViewStatics3>
{
    HRESULT __stdcall get_PreferredLaunchWindowingMode(Windows::UI::ViewManagement::ApplicationViewWindowingMode * value) noexcept override
    {
        try
        {
            *value = detach(shim().PreferredLaunchWindowingMode());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_PreferredLaunchWindowingMode(Windows::UI::ViewManagement::ApplicationViewWindowingMode value) noexcept override
    {
        try
        {
            shim().PreferredLaunchWindowingMode(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_PreferredLaunchViewSize(abi_arg_out<Windows::Foundation::Size> value) noexcept override
    {
        try
        {
            *value = detach(shim().PreferredLaunchViewSize());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_PreferredLaunchViewSize(abi_arg_in<Windows::Foundation::Size> value) noexcept override
    {
        try
        {
            shim().PreferredLaunchViewSize(*reinterpret_cast<const Windows::Foundation::Size *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::ViewManagement::IApplicationViewSwitcherStatics> : produce_base<D, Windows::UI::ViewManagement::IApplicationViewSwitcherStatics>
{
    HRESULT __stdcall abi_DisableShowingMainViewOnActivation() noexcept override
    {
        try
        {
            shim().DisableShowingMainViewOnActivation();
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_TryShowAsStandaloneAsync(int32_t viewId, abi_arg_out<Windows::Foundation::IAsyncOperation<bool>> operation) noexcept override
    {
        try
        {
            *operation = detach(shim().TryShowAsStandaloneAsync(viewId));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_TryShowAsStandaloneWithSizePreferenceAsync(int32_t viewId, Windows::UI::ViewManagement::ViewSizePreference sizePreference, abi_arg_out<Windows::Foundation::IAsyncOperation<bool>> operation) noexcept override
    {
        try
        {
            *operation = detach(shim().TryShowAsStandaloneAsync(viewId, sizePreference));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_TryShowAsStandaloneWithAnchorViewAndSizePreferenceAsync(int32_t viewId, Windows::UI::ViewManagement::ViewSizePreference sizePreference, int32_t anchorViewId, Windows::UI::ViewManagement::ViewSizePreference anchorSizePreference, abi_arg_out<Windows::Foundation::IAsyncOperation<bool>> operation) noexcept override
    {
        try
        {
            *operation = detach(shim().TryShowAsStandaloneAsync(viewId, sizePreference, anchorViewId, anchorSizePreference));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_SwitchAsync(int32_t viewId, abi_arg_out<Windows::Foundation::IAsyncAction> operation) noexcept override
    {
        try
        {
            *operation = detach(shim().SwitchAsync(viewId));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_SwitchFromViewAsync(int32_t toViewId, int32_t fromViewId, abi_arg_out<Windows::Foundation::IAsyncAction> operation) noexcept override
    {
        try
        {
            *operation = detach(shim().SwitchAsync(toViewId, fromViewId));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_SwitchFromViewWithOptionsAsync(int32_t toViewId, int32_t fromViewId, Windows::UI::ViewManagement::ApplicationViewSwitchingOptions options, abi_arg_out<Windows::Foundation::IAsyncAction> operation) noexcept override
    {
        try
        {
            *operation = detach(shim().SwitchAsync(toViewId, fromViewId, options));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_PrepareForCustomAnimatedSwitchAsync(int32_t toViewId, int32_t fromViewId, Windows::UI::ViewManagement::ApplicationViewSwitchingOptions options, abi_arg_out<Windows::Foundation::IAsyncOperation<bool>> operation) noexcept override
    {
        try
        {
            *operation = detach(shim().PrepareForCustomAnimatedSwitchAsync(toViewId, fromViewId, options));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::ViewManagement::IApplicationViewSwitcherStatics2> : produce_base<D, Windows::UI::ViewManagement::IApplicationViewSwitcherStatics2>
{
    HRESULT __stdcall abi_DisableSystemViewActivationPolicy() noexcept override
    {
        try
        {
            shim().DisableSystemViewActivationPolicy();
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::ViewManagement::IApplicationViewTitleBar> : produce_base<D, Windows::UI::ViewManagement::IApplicationViewTitleBar>
{
    HRESULT __stdcall put_ForegroundColor(abi_arg_in<Windows::Foundation::IReference<Windows::UI::Color>> value) noexcept override
    {
        try
        {
            shim().ForegroundColor(*reinterpret_cast<const Windows::Foundation::IReference<Windows::UI::Color> *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ForegroundColor(abi_arg_out<Windows::Foundation::IReference<Windows::UI::Color>> value) noexcept override
    {
        try
        {
            *value = detach(shim().ForegroundColor());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_BackgroundColor(abi_arg_in<Windows::Foundation::IReference<Windows::UI::Color>> value) noexcept override
    {
        try
        {
            shim().BackgroundColor(*reinterpret_cast<const Windows::Foundation::IReference<Windows::UI::Color> *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_BackgroundColor(abi_arg_out<Windows::Foundation::IReference<Windows::UI::Color>> value) noexcept override
    {
        try
        {
            *value = detach(shim().BackgroundColor());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_ButtonForegroundColor(abi_arg_in<Windows::Foundation::IReference<Windows::UI::Color>> value) noexcept override
    {
        try
        {
            shim().ButtonForegroundColor(*reinterpret_cast<const Windows::Foundation::IReference<Windows::UI::Color> *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ButtonForegroundColor(abi_arg_out<Windows::Foundation::IReference<Windows::UI::Color>> value) noexcept override
    {
        try
        {
            *value = detach(shim().ButtonForegroundColor());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_ButtonBackgroundColor(abi_arg_in<Windows::Foundation::IReference<Windows::UI::Color>> value) noexcept override
    {
        try
        {
            shim().ButtonBackgroundColor(*reinterpret_cast<const Windows::Foundation::IReference<Windows::UI::Color> *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ButtonBackgroundColor(abi_arg_out<Windows::Foundation::IReference<Windows::UI::Color>> value) noexcept override
    {
        try
        {
            *value = detach(shim().ButtonBackgroundColor());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_ButtonHoverForegroundColor(abi_arg_in<Windows::Foundation::IReference<Windows::UI::Color>> value) noexcept override
    {
        try
        {
            shim().ButtonHoverForegroundColor(*reinterpret_cast<const Windows::Foundation::IReference<Windows::UI::Color> *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ButtonHoverForegroundColor(abi_arg_out<Windows::Foundation::IReference<Windows::UI::Color>> value) noexcept override
    {
        try
        {
            *value = detach(shim().ButtonHoverForegroundColor());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_ButtonHoverBackgroundColor(abi_arg_in<Windows::Foundation::IReference<Windows::UI::Color>> value) noexcept override
    {
        try
        {
            shim().ButtonHoverBackgroundColor(*reinterpret_cast<const Windows::Foundation::IReference<Windows::UI::Color> *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ButtonHoverBackgroundColor(abi_arg_out<Windows::Foundation::IReference<Windows::UI::Color>> value) noexcept override
    {
        try
        {
            *value = detach(shim().ButtonHoverBackgroundColor());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_ButtonPressedForegroundColor(abi_arg_in<Windows::Foundation::IReference<Windows::UI::Color>> value) noexcept override
    {
        try
        {
            shim().ButtonPressedForegroundColor(*reinterpret_cast<const Windows::Foundation::IReference<Windows::UI::Color> *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ButtonPressedForegroundColor(abi_arg_out<Windows::Foundation::IReference<Windows::UI::Color>> value) noexcept override
    {
        try
        {
            *value = detach(shim().ButtonPressedForegroundColor());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_ButtonPressedBackgroundColor(abi_arg_in<Windows::Foundation::IReference<Windows::UI::Color>> value) noexcept override
    {
        try
        {
            shim().ButtonPressedBackgroundColor(*reinterpret_cast<const Windows::Foundation::IReference<Windows::UI::Color> *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ButtonPressedBackgroundColor(abi_arg_out<Windows::Foundation::IReference<Windows::UI::Color>> value) noexcept override
    {
        try
        {
            *value = detach(shim().ButtonPressedBackgroundColor());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_InactiveForegroundColor(abi_arg_in<Windows::Foundation::IReference<Windows::UI::Color>> value) noexcept override
    {
        try
        {
            shim().InactiveForegroundColor(*reinterpret_cast<const Windows::Foundation::IReference<Windows::UI::Color> *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_InactiveForegroundColor(abi_arg_out<Windows::Foundation::IReference<Windows::UI::Color>> value) noexcept override
    {
        try
        {
            *value = detach(shim().InactiveForegroundColor());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_InactiveBackgroundColor(abi_arg_in<Windows::Foundation::IReference<Windows::UI::Color>> value) noexcept override
    {
        try
        {
            shim().InactiveBackgroundColor(*reinterpret_cast<const Windows::Foundation::IReference<Windows::UI::Color> *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_InactiveBackgroundColor(abi_arg_out<Windows::Foundation::IReference<Windows::UI::Color>> value) noexcept override
    {
        try
        {
            *value = detach(shim().InactiveBackgroundColor());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_ButtonInactiveForegroundColor(abi_arg_in<Windows::Foundation::IReference<Windows::UI::Color>> value) noexcept override
    {
        try
        {
            shim().ButtonInactiveForegroundColor(*reinterpret_cast<const Windows::Foundation::IReference<Windows::UI::Color> *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ButtonInactiveForegroundColor(abi_arg_out<Windows::Foundation::IReference<Windows::UI::Color>> value) noexcept override
    {
        try
        {
            *value = detach(shim().ButtonInactiveForegroundColor());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_ButtonInactiveBackgroundColor(abi_arg_in<Windows::Foundation::IReference<Windows::UI::Color>> value) noexcept override
    {
        try
        {
            shim().ButtonInactiveBackgroundColor(*reinterpret_cast<const Windows::Foundation::IReference<Windows::UI::Color> *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ButtonInactiveBackgroundColor(abi_arg_out<Windows::Foundation::IReference<Windows::UI::Color>> value) noexcept override
    {
        try
        {
            *value = detach(shim().ButtonInactiveBackgroundColor());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::ViewManagement::IApplicationViewTransferContext> : produce_base<D, Windows::UI::ViewManagement::IApplicationViewTransferContext>
{
    HRESULT __stdcall get_ViewId(int32_t * value) noexcept override
    {
        try
        {
            *value = detach(shim().ViewId());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_ViewId(int32_t value) noexcept override
    {
        try
        {
            shim().ViewId(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::ViewManagement::IApplicationViewTransferContextStatics> : produce_base<D, Windows::UI::ViewManagement::IApplicationViewTransferContextStatics>
{
    HRESULT __stdcall get_DataPackageFormatId(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(shim().DataPackageFormatId());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::ViewManagement::IInputPane> : produce_base<D, Windows::UI::ViewManagement::IInputPane>
{
    HRESULT __stdcall add_Showing(abi_arg_in<Windows::Foundation::TypedEventHandler<Windows::UI::ViewManagement::InputPane, Windows::UI::ViewManagement::InputPaneVisibilityEventArgs>> handler, event_token * token) noexcept override
    {
        try
        {
            *token = detach(shim().Showing(*reinterpret_cast<const Windows::Foundation::TypedEventHandler<Windows::UI::ViewManagement::InputPane, Windows::UI::ViewManagement::InputPaneVisibilityEventArgs> *>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_Showing(event_token token) noexcept override
    {
        try
        {
            shim().Showing(token);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_Hiding(abi_arg_in<Windows::Foundation::TypedEventHandler<Windows::UI::ViewManagement::InputPane, Windows::UI::ViewManagement::InputPaneVisibilityEventArgs>> handler, event_token * token) noexcept override
    {
        try
        {
            *token = detach(shim().Hiding(*reinterpret_cast<const Windows::Foundation::TypedEventHandler<Windows::UI::ViewManagement::InputPane, Windows::UI::ViewManagement::InputPaneVisibilityEventArgs> *>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_Hiding(event_token token) noexcept override
    {
        try
        {
            shim().Hiding(token);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_OccludedRect(abi_arg_out<Windows::Foundation::Rect> value) noexcept override
    {
        try
        {
            *value = detach(shim().OccludedRect());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::ViewManagement::IInputPane2> : produce_base<D, Windows::UI::ViewManagement::IInputPane2>
{
    HRESULT __stdcall abi_TryShow(bool * result) noexcept override
    {
        try
        {
            *result = detach(shim().TryShow());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_TryHide(bool * result) noexcept override
    {
        try
        {
            *result = detach(shim().TryHide());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::ViewManagement::IInputPaneControl> : produce_base<D, Windows::UI::ViewManagement::IInputPaneControl>
{
    HRESULT __stdcall get_Visible(bool * value) noexcept override
    {
        try
        {
            *value = detach(shim().Visible());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Visible(bool value) noexcept override
    {
        try
        {
            shim().Visible(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::ViewManagement::IInputPaneStatics> : produce_base<D, Windows::UI::ViewManagement::IInputPaneStatics>
{
    HRESULT __stdcall abi_GetForCurrentView(abi_arg_out<Windows::UI::ViewManagement::IInputPane> inputPane) noexcept override
    {
        try
        {
            *inputPane = detach(shim().GetForCurrentView());
            return S_OK;
        }
        catch (...)
        {
            *inputPane = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::ViewManagement::IInputPaneVisibilityEventArgs> : produce_base<D, Windows::UI::ViewManagement::IInputPaneVisibilityEventArgs>
{
    HRESULT __stdcall get_OccludedRect(abi_arg_out<Windows::Foundation::Rect> value) noexcept override
    {
        try
        {
            *value = detach(shim().OccludedRect());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_EnsuredFocusedElementInView(bool value) noexcept override
    {
        try
        {
            shim().EnsuredFocusedElementInView(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_EnsuredFocusedElementInView(bool * value) noexcept override
    {
        try
        {
            *value = detach(shim().EnsuredFocusedElementInView());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::ViewManagement::IProjectionManagerStatics> : produce_base<D, Windows::UI::ViewManagement::IProjectionManagerStatics>
{
    HRESULT __stdcall abi_StartProjectingAsync(int32_t projectionViewId, int32_t anchorViewId, abi_arg_out<Windows::Foundation::IAsyncAction> operation) noexcept override
    {
        try
        {
            *operation = detach(shim().StartProjectingAsync(projectionViewId, anchorViewId));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_SwapDisplaysForViewsAsync(int32_t projectionViewId, int32_t anchorViewId, abi_arg_out<Windows::Foundation::IAsyncAction> operation) noexcept override
    {
        try
        {
            *operation = detach(shim().SwapDisplaysForViewsAsync(projectionViewId, anchorViewId));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_StopProjectingAsync(int32_t projectionViewId, int32_t anchorViewId, abi_arg_out<Windows::Foundation::IAsyncAction> operation) noexcept override
    {
        try
        {
            *operation = detach(shim().StopProjectingAsync(projectionViewId, anchorViewId));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ProjectionDisplayAvailable(bool * value) noexcept override
    {
        try
        {
            *value = detach(shim().ProjectionDisplayAvailable());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_ProjectionDisplayAvailableChanged(abi_arg_in<Windows::Foundation::EventHandler<Windows::IInspectable>> handler, event_token * token) noexcept override
    {
        try
        {
            *token = detach(shim().ProjectionDisplayAvailableChanged(*reinterpret_cast<const Windows::Foundation::EventHandler<Windows::IInspectable> *>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_ProjectionDisplayAvailableChanged(event_token token) noexcept override
    {
        try
        {
            shim().ProjectionDisplayAvailableChanged(token);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::ViewManagement::IProjectionManagerStatics2> : produce_base<D, Windows::UI::ViewManagement::IProjectionManagerStatics2>
{
    HRESULT __stdcall abi_StartProjectingWithDeviceInfoAsync(int32_t projectionViewId, int32_t anchorViewId, abi_arg_in<Windows::Devices::Enumeration::IDeviceInformation> displayDeviceInfo, abi_arg_out<Windows::Foundation::IAsyncAction> operation) noexcept override
    {
        try
        {
            *operation = detach(shim().StartProjectingAsync(projectionViewId, anchorViewId, *reinterpret_cast<const Windows::Devices::Enumeration::DeviceInformation *>(&displayDeviceInfo)));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_RequestStartProjectingAsync(int32_t projectionViewId, int32_t anchorViewId, abi_arg_in<Windows::Foundation::Rect> selection, abi_arg_out<Windows::Foundation::IAsyncOperation<bool>> operation) noexcept override
    {
        try
        {
            *operation = detach(shim().RequestStartProjectingAsync(projectionViewId, anchorViewId, *reinterpret_cast<const Windows::Foundation::Rect *>(&selection)));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_RequestStartProjectingWithPlacementAsync(int32_t projectionViewId, int32_t anchorViewId, abi_arg_in<Windows::Foundation::Rect> selection, Windows::UI::Popups::Placement prefferedPlacement, abi_arg_out<Windows::Foundation::IAsyncOperation<bool>> operation) noexcept override
    {
        try
        {
            *operation = detach(shim().RequestStartProjectingAsync(projectionViewId, anchorViewId, *reinterpret_cast<const Windows::Foundation::Rect *>(&selection), prefferedPlacement));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_GetDeviceSelector(abi_arg_out<hstring> selector) noexcept override
    {
        try
        {
            *selector = detach(shim().GetDeviceSelector());
            return S_OK;
        }
        catch (...)
        {
            *selector = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::ViewManagement::IUISettings> : produce_base<D, Windows::UI::ViewManagement::IUISettings>
{
    HRESULT __stdcall get_HandPreference(Windows::UI::ViewManagement::HandPreference * value) noexcept override
    {
        try
        {
            *value = detach(shim().HandPreference());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_CursorSize(abi_arg_out<Windows::Foundation::Size> value) noexcept override
    {
        try
        {
            *value = detach(shim().CursorSize());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ScrollBarSize(abi_arg_out<Windows::Foundation::Size> value) noexcept override
    {
        try
        {
            *value = detach(shim().ScrollBarSize());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ScrollBarArrowSize(abi_arg_out<Windows::Foundation::Size> value) noexcept override
    {
        try
        {
            *value = detach(shim().ScrollBarArrowSize());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ScrollBarThumbBoxSize(abi_arg_out<Windows::Foundation::Size> value) noexcept override
    {
        try
        {
            *value = detach(shim().ScrollBarThumbBoxSize());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_MessageDuration(uint32_t * value) noexcept override
    {
        try
        {
            *value = detach(shim().MessageDuration());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_AnimationsEnabled(bool * value) noexcept override
    {
        try
        {
            *value = detach(shim().AnimationsEnabled());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_CaretBrowsingEnabled(bool * value) noexcept override
    {
        try
        {
            *value = detach(shim().CaretBrowsingEnabled());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_CaretBlinkRate(uint32_t * value) noexcept override
    {
        try
        {
            *value = detach(shim().CaretBlinkRate());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_CaretWidth(uint32_t * value) noexcept override
    {
        try
        {
            *value = detach(shim().CaretWidth());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_DoubleClickTime(uint32_t * value) noexcept override
    {
        try
        {
            *value = detach(shim().DoubleClickTime());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_MouseHoverTime(uint32_t * value) noexcept override
    {
        try
        {
            *value = detach(shim().MouseHoverTime());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_UIElementColor(Windows::UI::ViewManagement::UIElementType desiredElement, abi_arg_out<Windows::UI::Color> value) noexcept override
    {
        try
        {
            *value = detach(shim().UIElementColor(desiredElement));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::ViewManagement::IUISettings2> : produce_base<D, Windows::UI::ViewManagement::IUISettings2>
{
    HRESULT __stdcall get_TextScaleFactor(double * value) noexcept override
    {
        try
        {
            *value = detach(shim().TextScaleFactor());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_TextScaleFactorChanged(abi_arg_in<Windows::Foundation::TypedEventHandler<Windows::UI::ViewManagement::UISettings, Windows::IInspectable>> handler, event_token * cookie) noexcept override
    {
        try
        {
            *cookie = detach(shim().TextScaleFactorChanged(*reinterpret_cast<const Windows::Foundation::TypedEventHandler<Windows::UI::ViewManagement::UISettings, Windows::IInspectable> *>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_TextScaleFactorChanged(event_token cookie) noexcept override
    {
        try
        {
            shim().TextScaleFactorChanged(cookie);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::ViewManagement::IUISettings3> : produce_base<D, Windows::UI::ViewManagement::IUISettings3>
{
    HRESULT __stdcall abi_GetColorValue(Windows::UI::ViewManagement::UIColorType desiredColor, abi_arg_out<Windows::UI::Color> value) noexcept override
    {
        try
        {
            *value = detach(shim().GetColorValue(desiredColor));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_ColorValuesChanged(abi_arg_in<Windows::Foundation::TypedEventHandler<Windows::UI::ViewManagement::UISettings, Windows::IInspectable>> handler, event_token * cookie) noexcept override
    {
        try
        {
            *cookie = detach(shim().ColorValuesChanged(*reinterpret_cast<const Windows::Foundation::TypedEventHandler<Windows::UI::ViewManagement::UISettings, Windows::IInspectable> *>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_ColorValuesChanged(event_token cookie) noexcept override
    {
        try
        {
            shim().ColorValuesChanged(cookie);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::ViewManagement::IUIViewSettings> : produce_base<D, Windows::UI::ViewManagement::IUIViewSettings>
{
    HRESULT __stdcall get_UserInteractionMode(Windows::UI::ViewManagement::UserInteractionMode * value) noexcept override
    {
        try
        {
            *value = detach(shim().UserInteractionMode());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::ViewManagement::IUIViewSettingsStatics> : produce_base<D, Windows::UI::ViewManagement::IUIViewSettingsStatics>
{
    HRESULT __stdcall abi_GetForCurrentView(abi_arg_out<Windows::UI::ViewManagement::IUIViewSettings> current) noexcept override
    {
        try
        {
            *current = detach(shim().GetForCurrentView());
            return S_OK;
        }
        catch (...)
        {
            *current = nullptr;
            return impl::to_hresult();
        }
    }
};

}

namespace Windows::UI::ViewManagement {

template <typename D> void impl_IApplicationViewSwitcherStatics<D>::DisableShowingMainViewOnActivation() const
{
    check_hresult(shim()->abi_DisableShowingMainViewOnActivation());
}

template <typename D> Windows::Foundation::IAsyncOperation<bool> impl_IApplicationViewSwitcherStatics<D>::TryShowAsStandaloneAsync(int32_t viewId) const
{
    Windows::Foundation::IAsyncOperation<bool> operation;
    check_hresult(shim()->abi_TryShowAsStandaloneAsync(viewId, put(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperation<bool> impl_IApplicationViewSwitcherStatics<D>::TryShowAsStandaloneAsync(int32_t viewId, Windows::UI::ViewManagement::ViewSizePreference sizePreference) const
{
    Windows::Foundation::IAsyncOperation<bool> operation;
    check_hresult(shim()->abi_TryShowAsStandaloneWithSizePreferenceAsync(viewId, sizePreference, put(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperation<bool> impl_IApplicationViewSwitcherStatics<D>::TryShowAsStandaloneAsync(int32_t viewId, Windows::UI::ViewManagement::ViewSizePreference sizePreference, int32_t anchorViewId, Windows::UI::ViewManagement::ViewSizePreference anchorSizePreference) const
{
    Windows::Foundation::IAsyncOperation<bool> operation;
    check_hresult(shim()->abi_TryShowAsStandaloneWithAnchorViewAndSizePreferenceAsync(viewId, sizePreference, anchorViewId, anchorSizePreference, put(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncAction impl_IApplicationViewSwitcherStatics<D>::SwitchAsync(int32_t viewId) const
{
    Windows::Foundation::IAsyncAction operation;
    check_hresult(shim()->abi_SwitchAsync(viewId, put(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncAction impl_IApplicationViewSwitcherStatics<D>::SwitchAsync(int32_t toViewId, int32_t fromViewId) const
{
    Windows::Foundation::IAsyncAction operation;
    check_hresult(shim()->abi_SwitchFromViewAsync(toViewId, fromViewId, put(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncAction impl_IApplicationViewSwitcherStatics<D>::SwitchAsync(int32_t toViewId, int32_t fromViewId, Windows::UI::ViewManagement::ApplicationViewSwitchingOptions options) const
{
    Windows::Foundation::IAsyncAction operation;
    check_hresult(shim()->abi_SwitchFromViewWithOptionsAsync(toViewId, fromViewId, options, put(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperation<bool> impl_IApplicationViewSwitcherStatics<D>::PrepareForCustomAnimatedSwitchAsync(int32_t toViewId, int32_t fromViewId, Windows::UI::ViewManagement::ApplicationViewSwitchingOptions options) const
{
    Windows::Foundation::IAsyncOperation<bool> operation;
    check_hresult(shim()->abi_PrepareForCustomAnimatedSwitchAsync(toViewId, fromViewId, options, put(operation)));
    return operation;
}

template <typename D> void impl_IApplicationViewSwitcherStatics2<D>::DisableSystemViewActivationPolicy() const
{
    check_hresult(shim()->abi_DisableSystemViewActivationPolicy());
}

template <typename D> int32_t impl_IApplicationViewInteropStatics<D>::GetApplicationViewIdForWindow(const Windows::UI::Core::ICoreWindow & window) const
{
    int32_t id {};
    check_hresult(shim()->abi_GetApplicationViewIdForWindow(get(window), &id));
    return id;
}

template <typename D> Windows::UI::ViewManagement::ApplicationViewState impl_IApplicationViewStatics<D>::Value() const
{
    Windows::UI::ViewManagement::ApplicationViewState value {};
    check_hresult(shim()->get_Value(&value));
    return value;
}

template <typename D> bool impl_IApplicationViewStatics<D>::TryUnsnap() const
{
    bool success {};
    check_hresult(shim()->abi_TryUnsnap(&success));
    return success;
}

template <typename D> Windows::UI::ViewManagement::ApplicationView impl_IApplicationViewStatics2<D>::GetForCurrentView() const
{
    Windows::UI::ViewManagement::ApplicationView current { nullptr };
    check_hresult(shim()->abi_GetForCurrentView(put(current)));
    return current;
}

template <typename D> bool impl_IApplicationViewStatics2<D>::TerminateAppOnFinalViewClose() const
{
    bool value {};
    check_hresult(shim()->get_TerminateAppOnFinalViewClose(&value));
    return value;
}

template <typename D> void impl_IApplicationViewStatics2<D>::TerminateAppOnFinalViewClose(bool value) const
{
    check_hresult(shim()->put_TerminateAppOnFinalViewClose(value));
}

template <typename D> Windows::UI::ViewManagement::ApplicationViewWindowingMode impl_IApplicationViewStatics3<D>::PreferredLaunchWindowingMode() const
{
    Windows::UI::ViewManagement::ApplicationViewWindowingMode value {};
    check_hresult(shim()->get_PreferredLaunchWindowingMode(&value));
    return value;
}

template <typename D> void impl_IApplicationViewStatics3<D>::PreferredLaunchWindowingMode(Windows::UI::ViewManagement::ApplicationViewWindowingMode value) const
{
    check_hresult(shim()->put_PreferredLaunchWindowingMode(value));
}

template <typename D> Windows::Foundation::Size impl_IApplicationViewStatics3<D>::PreferredLaunchViewSize() const
{
    Windows::Foundation::Size value {};
    check_hresult(shim()->get_PreferredLaunchViewSize(put(value)));
    return value;
}

template <typename D> void impl_IApplicationViewStatics3<D>::PreferredLaunchViewSize(const Windows::Foundation::Size & value) const
{
    check_hresult(shim()->put_PreferredLaunchViewSize(get(value)));
}

template <typename D> Windows::UI::ViewManagement::ApplicationViewOrientation impl_IApplicationView<D>::Orientation() const
{
    Windows::UI::ViewManagement::ApplicationViewOrientation value {};
    check_hresult(shim()->get_Orientation(&value));
    return value;
}

template <typename D> bool impl_IApplicationView<D>::AdjacentToLeftDisplayEdge() const
{
    bool value {};
    check_hresult(shim()->get_AdjacentToLeftDisplayEdge(&value));
    return value;
}

template <typename D> bool impl_IApplicationView<D>::AdjacentToRightDisplayEdge() const
{
    bool value {};
    check_hresult(shim()->get_AdjacentToRightDisplayEdge(&value));
    return value;
}

template <typename D> bool impl_IApplicationView<D>::IsFullScreen() const
{
    bool value {};
    check_hresult(shim()->get_IsFullScreen(&value));
    return value;
}

template <typename D> bool impl_IApplicationView<D>::IsOnLockScreen() const
{
    bool value {};
    check_hresult(shim()->get_IsOnLockScreen(&value));
    return value;
}

template <typename D> bool impl_IApplicationView<D>::IsScreenCaptureEnabled() const
{
    bool value {};
    check_hresult(shim()->get_IsScreenCaptureEnabled(&value));
    return value;
}

template <typename D> void impl_IApplicationView<D>::IsScreenCaptureEnabled(bool value) const
{
    check_hresult(shim()->put_IsScreenCaptureEnabled(value));
}

template <typename D> void impl_IApplicationView<D>::Title(hstring_ref value) const
{
    check_hresult(shim()->put_Title(get(value)));
}

template <typename D> hstring impl_IApplicationView<D>::Title() const
{
    hstring value;
    check_hresult(shim()->get_Title(put(value)));
    return value;
}

template <typename D> int32_t impl_IApplicationView<D>::Id() const
{
    int32_t value {};
    check_hresult(shim()->get_Id(&value));
    return value;
}

template <typename D> event_token impl_IApplicationView<D>::Consolidated(const Windows::Foundation::TypedEventHandler<Windows::UI::ViewManagement::ApplicationView, Windows::UI::ViewManagement::ApplicationViewConsolidatedEventArgs> & handler) const
{
    event_token token {};
    check_hresult(shim()->add_Consolidated(get(handler), &token));
    return token;
}

template <typename D> event_revoker<IApplicationView> impl_IApplicationView<D>::Consolidated(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::UI::ViewManagement::ApplicationView, Windows::UI::ViewManagement::ApplicationViewConsolidatedEventArgs> & handler) const
{
    return impl::make_event_revoker<D, IApplicationView>(this, &ABI::Windows::UI::ViewManagement::IApplicationView::remove_Consolidated, Consolidated(handler));
}

template <typename D> void impl_IApplicationView<D>::Consolidated(event_token token) const
{
    check_hresult(shim()->remove_Consolidated(token));
}

template <typename D> bool impl_IApplicationView2<D>::SuppressSystemOverlays() const
{
    bool value {};
    check_hresult(shim()->get_SuppressSystemOverlays(&value));
    return value;
}

template <typename D> void impl_IApplicationView2<D>::SuppressSystemOverlays(bool value) const
{
    check_hresult(shim()->put_SuppressSystemOverlays(value));
}

template <typename D> Windows::Foundation::Rect impl_IApplicationView2<D>::VisibleBounds() const
{
    Windows::Foundation::Rect value {};
    check_hresult(shim()->get_VisibleBounds(put(value)));
    return value;
}

template <typename D> event_token impl_IApplicationView2<D>::VisibleBoundsChanged(const Windows::Foundation::TypedEventHandler<Windows::UI::ViewManagement::ApplicationView, Windows::IInspectable> & handler) const
{
    event_token token {};
    check_hresult(shim()->add_VisibleBoundsChanged(get(handler), &token));
    return token;
}

template <typename D> event_revoker<IApplicationView2> impl_IApplicationView2<D>::VisibleBoundsChanged(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::UI::ViewManagement::ApplicationView, Windows::IInspectable> & handler) const
{
    return impl::make_event_revoker<D, IApplicationView2>(this, &ABI::Windows::UI::ViewManagement::IApplicationView2::remove_VisibleBoundsChanged, VisibleBoundsChanged(handler));
}

template <typename D> void impl_IApplicationView2<D>::VisibleBoundsChanged(event_token token) const
{
    check_hresult(shim()->remove_VisibleBoundsChanged(token));
}

template <typename D> bool impl_IApplicationView2<D>::SetDesiredBoundsMode(Windows::UI::ViewManagement::ApplicationViewBoundsMode boundsMode) const
{
    bool success {};
    check_hresult(shim()->abi_SetDesiredBoundsMode(boundsMode, &success));
    return success;
}

template <typename D> Windows::UI::ViewManagement::ApplicationViewBoundsMode impl_IApplicationView2<D>::DesiredBoundsMode() const
{
    Windows::UI::ViewManagement::ApplicationViewBoundsMode value {};
    check_hresult(shim()->get_DesiredBoundsMode(&value));
    return value;
}

template <typename D> void impl_IApplicationViewTitleBar<D>::ForegroundColor(const Windows::Foundation::IReference<Windows::UI::Color> & value) const
{
    check_hresult(shim()->put_ForegroundColor(get(value)));
}

template <typename D> Windows::Foundation::IReference<Windows::UI::Color> impl_IApplicationViewTitleBar<D>::ForegroundColor() const
{
    Windows::Foundation::IReference<Windows::UI::Color> value;
    check_hresult(shim()->get_ForegroundColor(put(value)));
    return value;
}

template <typename D> void impl_IApplicationViewTitleBar<D>::BackgroundColor(const Windows::Foundation::IReference<Windows::UI::Color> & value) const
{
    check_hresult(shim()->put_BackgroundColor(get(value)));
}

template <typename D> Windows::Foundation::IReference<Windows::UI::Color> impl_IApplicationViewTitleBar<D>::BackgroundColor() const
{
    Windows::Foundation::IReference<Windows::UI::Color> value;
    check_hresult(shim()->get_BackgroundColor(put(value)));
    return value;
}

template <typename D> void impl_IApplicationViewTitleBar<D>::ButtonForegroundColor(const Windows::Foundation::IReference<Windows::UI::Color> & value) const
{
    check_hresult(shim()->put_ButtonForegroundColor(get(value)));
}

template <typename D> Windows::Foundation::IReference<Windows::UI::Color> impl_IApplicationViewTitleBar<D>::ButtonForegroundColor() const
{
    Windows::Foundation::IReference<Windows::UI::Color> value;
    check_hresult(shim()->get_ButtonForegroundColor(put(value)));
    return value;
}

template <typename D> void impl_IApplicationViewTitleBar<D>::ButtonBackgroundColor(const Windows::Foundation::IReference<Windows::UI::Color> & value) const
{
    check_hresult(shim()->put_ButtonBackgroundColor(get(value)));
}

template <typename D> Windows::Foundation::IReference<Windows::UI::Color> impl_IApplicationViewTitleBar<D>::ButtonBackgroundColor() const
{
    Windows::Foundation::IReference<Windows::UI::Color> value;
    check_hresult(shim()->get_ButtonBackgroundColor(put(value)));
    return value;
}

template <typename D> void impl_IApplicationViewTitleBar<D>::ButtonHoverForegroundColor(const Windows::Foundation::IReference<Windows::UI::Color> & value) const
{
    check_hresult(shim()->put_ButtonHoverForegroundColor(get(value)));
}

template <typename D> Windows::Foundation::IReference<Windows::UI::Color> impl_IApplicationViewTitleBar<D>::ButtonHoverForegroundColor() const
{
    Windows::Foundation::IReference<Windows::UI::Color> value;
    check_hresult(shim()->get_ButtonHoverForegroundColor(put(value)));
    return value;
}

template <typename D> void impl_IApplicationViewTitleBar<D>::ButtonHoverBackgroundColor(const Windows::Foundation::IReference<Windows::UI::Color> & value) const
{
    check_hresult(shim()->put_ButtonHoverBackgroundColor(get(value)));
}

template <typename D> Windows::Foundation::IReference<Windows::UI::Color> impl_IApplicationViewTitleBar<D>::ButtonHoverBackgroundColor() const
{
    Windows::Foundation::IReference<Windows::UI::Color> value;
    check_hresult(shim()->get_ButtonHoverBackgroundColor(put(value)));
    return value;
}

template <typename D> void impl_IApplicationViewTitleBar<D>::ButtonPressedForegroundColor(const Windows::Foundation::IReference<Windows::UI::Color> & value) const
{
    check_hresult(shim()->put_ButtonPressedForegroundColor(get(value)));
}

template <typename D> Windows::Foundation::IReference<Windows::UI::Color> impl_IApplicationViewTitleBar<D>::ButtonPressedForegroundColor() const
{
    Windows::Foundation::IReference<Windows::UI::Color> value;
    check_hresult(shim()->get_ButtonPressedForegroundColor(put(value)));
    return value;
}

template <typename D> void impl_IApplicationViewTitleBar<D>::ButtonPressedBackgroundColor(const Windows::Foundation::IReference<Windows::UI::Color> & value) const
{
    check_hresult(shim()->put_ButtonPressedBackgroundColor(get(value)));
}

template <typename D> Windows::Foundation::IReference<Windows::UI::Color> impl_IApplicationViewTitleBar<D>::ButtonPressedBackgroundColor() const
{
    Windows::Foundation::IReference<Windows::UI::Color> value;
    check_hresult(shim()->get_ButtonPressedBackgroundColor(put(value)));
    return value;
}

template <typename D> void impl_IApplicationViewTitleBar<D>::InactiveForegroundColor(const Windows::Foundation::IReference<Windows::UI::Color> & value) const
{
    check_hresult(shim()->put_InactiveForegroundColor(get(value)));
}

template <typename D> Windows::Foundation::IReference<Windows::UI::Color> impl_IApplicationViewTitleBar<D>::InactiveForegroundColor() const
{
    Windows::Foundation::IReference<Windows::UI::Color> value;
    check_hresult(shim()->get_InactiveForegroundColor(put(value)));
    return value;
}

template <typename D> void impl_IApplicationViewTitleBar<D>::InactiveBackgroundColor(const Windows::Foundation::IReference<Windows::UI::Color> & value) const
{
    check_hresult(shim()->put_InactiveBackgroundColor(get(value)));
}

template <typename D> Windows::Foundation::IReference<Windows::UI::Color> impl_IApplicationViewTitleBar<D>::InactiveBackgroundColor() const
{
    Windows::Foundation::IReference<Windows::UI::Color> value;
    check_hresult(shim()->get_InactiveBackgroundColor(put(value)));
    return value;
}

template <typename D> void impl_IApplicationViewTitleBar<D>::ButtonInactiveForegroundColor(const Windows::Foundation::IReference<Windows::UI::Color> & value) const
{
    check_hresult(shim()->put_ButtonInactiveForegroundColor(get(value)));
}

template <typename D> Windows::Foundation::IReference<Windows::UI::Color> impl_IApplicationViewTitleBar<D>::ButtonInactiveForegroundColor() const
{
    Windows::Foundation::IReference<Windows::UI::Color> value;
    check_hresult(shim()->get_ButtonInactiveForegroundColor(put(value)));
    return value;
}

template <typename D> void impl_IApplicationViewTitleBar<D>::ButtonInactiveBackgroundColor(const Windows::Foundation::IReference<Windows::UI::Color> & value) const
{
    check_hresult(shim()->put_ButtonInactiveBackgroundColor(get(value)));
}

template <typename D> Windows::Foundation::IReference<Windows::UI::Color> impl_IApplicationViewTitleBar<D>::ButtonInactiveBackgroundColor() const
{
    Windows::Foundation::IReference<Windows::UI::Color> value;
    check_hresult(shim()->get_ButtonInactiveBackgroundColor(put(value)));
    return value;
}

template <typename D> Windows::UI::ViewManagement::ApplicationViewTitleBar impl_IApplicationView3<D>::TitleBar() const
{
    Windows::UI::ViewManagement::ApplicationViewTitleBar value { nullptr };
    check_hresult(shim()->get_TitleBar(put(value)));
    return value;
}

template <typename D> Windows::UI::ViewManagement::FullScreenSystemOverlayMode impl_IApplicationView3<D>::FullScreenSystemOverlayMode() const
{
    Windows::UI::ViewManagement::FullScreenSystemOverlayMode value {};
    check_hresult(shim()->get_FullScreenSystemOverlayMode(&value));
    return value;
}

template <typename D> void impl_IApplicationView3<D>::FullScreenSystemOverlayMode(Windows::UI::ViewManagement::FullScreenSystemOverlayMode value) const
{
    check_hresult(shim()->put_FullScreenSystemOverlayMode(value));
}

template <typename D> bool impl_IApplicationView3<D>::IsFullScreenMode() const
{
    bool value {};
    check_hresult(shim()->get_IsFullScreenMode(&value));
    return value;
}

template <typename D> bool impl_IApplicationView3<D>::TryEnterFullScreenMode() const
{
    bool success {};
    check_hresult(shim()->abi_TryEnterFullScreenMode(&success));
    return success;
}

template <typename D> void impl_IApplicationView3<D>::ExitFullScreenMode() const
{
    check_hresult(shim()->abi_ExitFullScreenMode());
}

template <typename D> void impl_IApplicationView3<D>::ShowStandardSystemOverlays() const
{
    check_hresult(shim()->abi_ShowStandardSystemOverlays());
}

template <typename D> bool impl_IApplicationView3<D>::TryResizeView(const Windows::Foundation::Size & value) const
{
    bool success {};
    check_hresult(shim()->abi_TryResizeView(get(value), &success));
    return success;
}

template <typename D> void impl_IApplicationView3<D>::SetPreferredMinSize(const Windows::Foundation::Size & minSize) const
{
    check_hresult(shim()->abi_SetPreferredMinSize(get(minSize)));
}

template <typename D> bool impl_IApplicationViewFullscreenStatics<D>::TryUnsnapToFullscreen() const
{
    bool success {};
    check_hresult(shim()->abi_TryUnsnapToFullscreen(&success));
    return success;
}

template <typename D> bool impl_IApplicationViewConsolidatedEventArgs<D>::IsUserInitiated() const
{
    bool value {};
    check_hresult(shim()->get_IsUserInitiated(&value));
    return value;
}

template <typename D> Windows::Foundation::IAsyncAction impl_IActivationViewSwitcher<D>::ShowAsStandaloneAsync(int32_t viewId) const
{
    Windows::Foundation::IAsyncAction operation;
    check_hresult(shim()->abi_ShowAsStandaloneAsync(viewId, put(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncAction impl_IActivationViewSwitcher<D>::ShowAsStandaloneAsync(int32_t viewId, Windows::UI::ViewManagement::ViewSizePreference sizePreference) const
{
    Windows::Foundation::IAsyncAction operation;
    check_hresult(shim()->abi_ShowAsStandaloneWithSizePreferenceAsync(viewId, sizePreference, put(operation)));
    return operation;
}

template <typename D> bool impl_IActivationViewSwitcher<D>::IsViewPresentedOnActivationVirtualDesktop(int32_t viewId) const
{
    bool value {};
    check_hresult(shim()->abi_IsViewPresentedOnActivationVirtualDesktop(viewId, &value));
    return value;
}

template <typename D> int32_t impl_IApplicationViewTransferContext<D>::ViewId() const
{
    int32_t value {};
    check_hresult(shim()->get_ViewId(&value));
    return value;
}

template <typename D> void impl_IApplicationViewTransferContext<D>::ViewId(int32_t value) const
{
    check_hresult(shim()->put_ViewId(value));
}

template <typename D> hstring impl_IApplicationViewTransferContextStatics<D>::DataPackageFormatId() const
{
    hstring value;
    check_hresult(shim()->get_DataPackageFormatId(put(value)));
    return value;
}

template <typename D> Windows::Foundation::Rect impl_IInputPaneVisibilityEventArgs<D>::OccludedRect() const
{
    Windows::Foundation::Rect value {};
    check_hresult(shim()->get_OccludedRect(put(value)));
    return value;
}

template <typename D> void impl_IInputPaneVisibilityEventArgs<D>::EnsuredFocusedElementInView(bool value) const
{
    check_hresult(shim()->put_EnsuredFocusedElementInView(value));
}

template <typename D> bool impl_IInputPaneVisibilityEventArgs<D>::EnsuredFocusedElementInView() const
{
    bool value {};
    check_hresult(shim()->get_EnsuredFocusedElementInView(&value));
    return value;
}

template <typename D> event_token impl_IInputPane<D>::Showing(const Windows::Foundation::TypedEventHandler<Windows::UI::ViewManagement::InputPane, Windows::UI::ViewManagement::InputPaneVisibilityEventArgs> & handler) const
{
    event_token token {};
    check_hresult(shim()->add_Showing(get(handler), &token));
    return token;
}

template <typename D> event_revoker<IInputPane> impl_IInputPane<D>::Showing(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::UI::ViewManagement::InputPane, Windows::UI::ViewManagement::InputPaneVisibilityEventArgs> & handler) const
{
    return impl::make_event_revoker<D, IInputPane>(this, &ABI::Windows::UI::ViewManagement::IInputPane::remove_Showing, Showing(handler));
}

template <typename D> void impl_IInputPane<D>::Showing(event_token token) const
{
    check_hresult(shim()->remove_Showing(token));
}

template <typename D> event_token impl_IInputPane<D>::Hiding(const Windows::Foundation::TypedEventHandler<Windows::UI::ViewManagement::InputPane, Windows::UI::ViewManagement::InputPaneVisibilityEventArgs> & handler) const
{
    event_token token {};
    check_hresult(shim()->add_Hiding(get(handler), &token));
    return token;
}

template <typename D> event_revoker<IInputPane> impl_IInputPane<D>::Hiding(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::UI::ViewManagement::InputPane, Windows::UI::ViewManagement::InputPaneVisibilityEventArgs> & handler) const
{
    return impl::make_event_revoker<D, IInputPane>(this, &ABI::Windows::UI::ViewManagement::IInputPane::remove_Hiding, Hiding(handler));
}

template <typename D> void impl_IInputPane<D>::Hiding(event_token token) const
{
    check_hresult(shim()->remove_Hiding(token));
}

template <typename D> Windows::Foundation::Rect impl_IInputPane<D>::OccludedRect() const
{
    Windows::Foundation::Rect value {};
    check_hresult(shim()->get_OccludedRect(put(value)));
    return value;
}

template <typename D> bool impl_IInputPane2<D>::TryShow() const
{
    bool result {};
    check_hresult(shim()->abi_TryShow(&result));
    return result;
}

template <typename D> bool impl_IInputPane2<D>::TryHide() const
{
    bool result {};
    check_hresult(shim()->abi_TryHide(&result));
    return result;
}

template <typename D> bool impl_IInputPaneControl<D>::Visible() const
{
    bool value {};
    check_hresult(shim()->get_Visible(&value));
    return value;
}

template <typename D> void impl_IInputPaneControl<D>::Visible(bool value) const
{
    check_hresult(shim()->put_Visible(value));
}

template <typename D> Windows::UI::ViewManagement::InputPane impl_IInputPaneStatics<D>::GetForCurrentView() const
{
    Windows::UI::ViewManagement::InputPane inputPane { nullptr };
    check_hresult(shim()->abi_GetForCurrentView(put(inputPane)));
    return inputPane;
}

template <typename D> Windows::Foundation::IAsyncAction impl_IProjectionManagerStatics<D>::StartProjectingAsync(int32_t projectionViewId, int32_t anchorViewId) const
{
    Windows::Foundation::IAsyncAction operation;
    check_hresult(shim()->abi_StartProjectingAsync(projectionViewId, anchorViewId, put(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncAction impl_IProjectionManagerStatics<D>::SwapDisplaysForViewsAsync(int32_t projectionViewId, int32_t anchorViewId) const
{
    Windows::Foundation::IAsyncAction operation;
    check_hresult(shim()->abi_SwapDisplaysForViewsAsync(projectionViewId, anchorViewId, put(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncAction impl_IProjectionManagerStatics<D>::StopProjectingAsync(int32_t projectionViewId, int32_t anchorViewId) const
{
    Windows::Foundation::IAsyncAction operation;
    check_hresult(shim()->abi_StopProjectingAsync(projectionViewId, anchorViewId, put(operation)));
    return operation;
}

template <typename D> bool impl_IProjectionManagerStatics<D>::ProjectionDisplayAvailable() const
{
    bool value {};
    check_hresult(shim()->get_ProjectionDisplayAvailable(&value));
    return value;
}

template <typename D> event_token impl_IProjectionManagerStatics<D>::ProjectionDisplayAvailableChanged(const Windows::Foundation::EventHandler<Windows::IInspectable> & handler) const
{
    event_token token {};
    check_hresult(shim()->add_ProjectionDisplayAvailableChanged(get(handler), &token));
    return token;
}

template <typename D> event_revoker<IProjectionManagerStatics> impl_IProjectionManagerStatics<D>::ProjectionDisplayAvailableChanged(auto_revoke_t, const Windows::Foundation::EventHandler<Windows::IInspectable> & handler) const
{
    return impl::make_event_revoker<D, IProjectionManagerStatics>(this, &ABI::Windows::UI::ViewManagement::IProjectionManagerStatics::remove_ProjectionDisplayAvailableChanged, ProjectionDisplayAvailableChanged(handler));
}

template <typename D> void impl_IProjectionManagerStatics<D>::ProjectionDisplayAvailableChanged(event_token token) const
{
    check_hresult(shim()->remove_ProjectionDisplayAvailableChanged(token));
}

template <typename D> Windows::Foundation::IAsyncAction impl_IProjectionManagerStatics2<D>::StartProjectingAsync(int32_t projectionViewId, int32_t anchorViewId, const Windows::Devices::Enumeration::DeviceInformation & displayDeviceInfo) const
{
    Windows::Foundation::IAsyncAction operation;
    check_hresult(shim()->abi_StartProjectingWithDeviceInfoAsync(projectionViewId, anchorViewId, get(displayDeviceInfo), put(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperation<bool> impl_IProjectionManagerStatics2<D>::RequestStartProjectingAsync(int32_t projectionViewId, int32_t anchorViewId, const Windows::Foundation::Rect & selection) const
{
    Windows::Foundation::IAsyncOperation<bool> operation;
    check_hresult(shim()->abi_RequestStartProjectingAsync(projectionViewId, anchorViewId, get(selection), put(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperation<bool> impl_IProjectionManagerStatics2<D>::RequestStartProjectingAsync(int32_t projectionViewId, int32_t anchorViewId, const Windows::Foundation::Rect & selection, Windows::UI::Popups::Placement prefferedPlacement) const
{
    Windows::Foundation::IAsyncOperation<bool> operation;
    check_hresult(shim()->abi_RequestStartProjectingWithPlacementAsync(projectionViewId, anchorViewId, get(selection), prefferedPlacement, put(operation)));
    return operation;
}

template <typename D> hstring impl_IProjectionManagerStatics2<D>::GetDeviceSelector() const
{
    hstring selector;
    check_hresult(shim()->abi_GetDeviceSelector(put(selector)));
    return selector;
}

template <typename D> Windows::UI::ViewManagement::UserInteractionMode impl_IUIViewSettings<D>::UserInteractionMode() const
{
    Windows::UI::ViewManagement::UserInteractionMode value {};
    check_hresult(shim()->get_UserInteractionMode(&value));
    return value;
}

template <typename D> Windows::UI::ViewManagement::UIViewSettings impl_IUIViewSettingsStatics<D>::GetForCurrentView() const
{
    Windows::UI::ViewManagement::UIViewSettings current { nullptr };
    check_hresult(shim()->abi_GetForCurrentView(put(current)));
    return current;
}

template <typename D> bool impl_IAccessibilitySettings<D>::HighContrast() const
{
    bool value {};
    check_hresult(shim()->get_HighContrast(&value));
    return value;
}

template <typename D> hstring impl_IAccessibilitySettings<D>::HighContrastScheme() const
{
    hstring value;
    check_hresult(shim()->get_HighContrastScheme(put(value)));
    return value;
}

template <typename D> event_token impl_IAccessibilitySettings<D>::HighContrastChanged(const Windows::Foundation::TypedEventHandler<Windows::UI::ViewManagement::AccessibilitySettings, Windows::IInspectable> & handler) const
{
    event_token cookie {};
    check_hresult(shim()->add_HighContrastChanged(get(handler), &cookie));
    return cookie;
}

template <typename D> event_revoker<IAccessibilitySettings> impl_IAccessibilitySettings<D>::HighContrastChanged(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::UI::ViewManagement::AccessibilitySettings, Windows::IInspectable> & handler) const
{
    return impl::make_event_revoker<D, IAccessibilitySettings>(this, &ABI::Windows::UI::ViewManagement::IAccessibilitySettings::remove_HighContrastChanged, HighContrastChanged(handler));
}

template <typename D> void impl_IAccessibilitySettings<D>::HighContrastChanged(event_token cookie) const
{
    check_hresult(shim()->remove_HighContrastChanged(cookie));
}

template <typename D> Windows::UI::ViewManagement::HandPreference impl_IUISettings<D>::HandPreference() const
{
    Windows::UI::ViewManagement::HandPreference value {};
    check_hresult(shim()->get_HandPreference(&value));
    return value;
}

template <typename D> Windows::Foundation::Size impl_IUISettings<D>::CursorSize() const
{
    Windows::Foundation::Size value {};
    check_hresult(shim()->get_CursorSize(put(value)));
    return value;
}

template <typename D> Windows::Foundation::Size impl_IUISettings<D>::ScrollBarSize() const
{
    Windows::Foundation::Size value {};
    check_hresult(shim()->get_ScrollBarSize(put(value)));
    return value;
}

template <typename D> Windows::Foundation::Size impl_IUISettings<D>::ScrollBarArrowSize() const
{
    Windows::Foundation::Size value {};
    check_hresult(shim()->get_ScrollBarArrowSize(put(value)));
    return value;
}

template <typename D> Windows::Foundation::Size impl_IUISettings<D>::ScrollBarThumbBoxSize() const
{
    Windows::Foundation::Size value {};
    check_hresult(shim()->get_ScrollBarThumbBoxSize(put(value)));
    return value;
}

template <typename D> uint32_t impl_IUISettings<D>::MessageDuration() const
{
    uint32_t value {};
    check_hresult(shim()->get_MessageDuration(&value));
    return value;
}

template <typename D> bool impl_IUISettings<D>::AnimationsEnabled() const
{
    bool value {};
    check_hresult(shim()->get_AnimationsEnabled(&value));
    return value;
}

template <typename D> bool impl_IUISettings<D>::CaretBrowsingEnabled() const
{
    bool value {};
    check_hresult(shim()->get_CaretBrowsingEnabled(&value));
    return value;
}

template <typename D> uint32_t impl_IUISettings<D>::CaretBlinkRate() const
{
    uint32_t value {};
    check_hresult(shim()->get_CaretBlinkRate(&value));
    return value;
}

template <typename D> uint32_t impl_IUISettings<D>::CaretWidth() const
{
    uint32_t value {};
    check_hresult(shim()->get_CaretWidth(&value));
    return value;
}

template <typename D> uint32_t impl_IUISettings<D>::DoubleClickTime() const
{
    uint32_t value {};
    check_hresult(shim()->get_DoubleClickTime(&value));
    return value;
}

template <typename D> uint32_t impl_IUISettings<D>::MouseHoverTime() const
{
    uint32_t value {};
    check_hresult(shim()->get_MouseHoverTime(&value));
    return value;
}

template <typename D> Windows::UI::Color impl_IUISettings<D>::UIElementColor(Windows::UI::ViewManagement::UIElementType desiredElement) const
{
    Windows::UI::Color value {};
    check_hresult(shim()->abi_UIElementColor(desiredElement, put(value)));
    return value;
}

template <typename D> double impl_IUISettings2<D>::TextScaleFactor() const
{
    double value {};
    check_hresult(shim()->get_TextScaleFactor(&value));
    return value;
}

template <typename D> event_token impl_IUISettings2<D>::TextScaleFactorChanged(const Windows::Foundation::TypedEventHandler<Windows::UI::ViewManagement::UISettings, Windows::IInspectable> & handler) const
{
    event_token cookie {};
    check_hresult(shim()->add_TextScaleFactorChanged(get(handler), &cookie));
    return cookie;
}

template <typename D> event_revoker<IUISettings2> impl_IUISettings2<D>::TextScaleFactorChanged(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::UI::ViewManagement::UISettings, Windows::IInspectable> & handler) const
{
    return impl::make_event_revoker<D, IUISettings2>(this, &ABI::Windows::UI::ViewManagement::IUISettings2::remove_TextScaleFactorChanged, TextScaleFactorChanged(handler));
}

template <typename D> void impl_IUISettings2<D>::TextScaleFactorChanged(event_token cookie) const
{
    check_hresult(shim()->remove_TextScaleFactorChanged(cookie));
}

template <typename D> Windows::UI::Color impl_IUISettings3<D>::GetColorValue(Windows::UI::ViewManagement::UIColorType desiredColor) const
{
    Windows::UI::Color value {};
    check_hresult(shim()->abi_GetColorValue(desiredColor, put(value)));
    return value;
}

template <typename D> event_token impl_IUISettings3<D>::ColorValuesChanged(const Windows::Foundation::TypedEventHandler<Windows::UI::ViewManagement::UISettings, Windows::IInspectable> & handler) const
{
    event_token cookie {};
    check_hresult(shim()->add_ColorValuesChanged(get(handler), &cookie));
    return cookie;
}

template <typename D> event_revoker<IUISettings3> impl_IUISettings3<D>::ColorValuesChanged(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::UI::ViewManagement::UISettings, Windows::IInspectable> & handler) const
{
    return impl::make_event_revoker<D, IUISettings3>(this, &ABI::Windows::UI::ViewManagement::IUISettings3::remove_ColorValuesChanged, ColorValuesChanged(handler));
}

template <typename D> void impl_IUISettings3<D>::ColorValuesChanged(event_token cookie) const
{
    check_hresult(shim()->remove_ColorValuesChanged(cookie));
}

template <typename D> bool impl_IApplicationViewScalingStatics<D>::DisableLayoutScaling() const
{
    bool value {};
    check_hresult(shim()->get_DisableLayoutScaling(&value));
    return value;
}

template <typename D> bool impl_IApplicationViewScalingStatics<D>::TrySetDisableLayoutScaling(bool disableLayoutScaling) const
{
    bool success {};
    check_hresult(shim()->abi_TrySetDisableLayoutScaling(disableLayoutScaling, &success));
    return success;
}

inline AccessibilitySettings::AccessibilitySettings() :
    AccessibilitySettings(activate_instance<AccessibilitySettings>())
{}

inline bool ApplicationView::TryUnsnapToFullscreen()
{
    return get_activation_factory<ApplicationView, IApplicationViewFullscreenStatics>().TryUnsnapToFullscreen();
}

inline int32_t ApplicationView::GetApplicationViewIdForWindow(const Windows::UI::Core::ICoreWindow & window)
{
    return get_activation_factory<ApplicationView, IApplicationViewInteropStatics>().GetApplicationViewIdForWindow(window);
}

inline Windows::UI::ViewManagement::ApplicationViewState ApplicationView::Value()
{
    return get_activation_factory<ApplicationView, IApplicationViewStatics>().Value();
}

inline bool ApplicationView::TryUnsnap()
{
    return get_activation_factory<ApplicationView, IApplicationViewStatics>().TryUnsnap();
}

inline Windows::UI::ViewManagement::ApplicationView ApplicationView::GetForCurrentView()
{
    return get_activation_factory<ApplicationView, IApplicationViewStatics2>().GetForCurrentView();
}

inline bool ApplicationView::TerminateAppOnFinalViewClose()
{
    return get_activation_factory<ApplicationView, IApplicationViewStatics2>().TerminateAppOnFinalViewClose();
}

inline void ApplicationView::TerminateAppOnFinalViewClose(bool value)
{
    get_activation_factory<ApplicationView, IApplicationViewStatics2>().TerminateAppOnFinalViewClose(value);
}

inline Windows::UI::ViewManagement::ApplicationViewWindowingMode ApplicationView::PreferredLaunchWindowingMode()
{
    return get_activation_factory<ApplicationView, IApplicationViewStatics3>().PreferredLaunchWindowingMode();
}

inline void ApplicationView::PreferredLaunchWindowingMode(Windows::UI::ViewManagement::ApplicationViewWindowingMode value)
{
    get_activation_factory<ApplicationView, IApplicationViewStatics3>().PreferredLaunchWindowingMode(value);
}

inline Windows::Foundation::Size ApplicationView::PreferredLaunchViewSize()
{
    return get_activation_factory<ApplicationView, IApplicationViewStatics3>().PreferredLaunchViewSize();
}

inline void ApplicationView::PreferredLaunchViewSize(const Windows::Foundation::Size & value)
{
    get_activation_factory<ApplicationView, IApplicationViewStatics3>().PreferredLaunchViewSize(value);
}

inline bool ApplicationViewScaling::DisableLayoutScaling()
{
    return get_activation_factory<ApplicationViewScaling, IApplicationViewScalingStatics>().DisableLayoutScaling();
}

inline bool ApplicationViewScaling::TrySetDisableLayoutScaling(bool disableLayoutScaling)
{
    return get_activation_factory<ApplicationViewScaling, IApplicationViewScalingStatics>().TrySetDisableLayoutScaling(disableLayoutScaling);
}

inline void ApplicationViewSwitcher::DisableShowingMainViewOnActivation()
{
    get_activation_factory<ApplicationViewSwitcher, IApplicationViewSwitcherStatics>().DisableShowingMainViewOnActivation();
}

inline Windows::Foundation::IAsyncOperation<bool> ApplicationViewSwitcher::TryShowAsStandaloneAsync(int32_t viewId)
{
    return get_activation_factory<ApplicationViewSwitcher, IApplicationViewSwitcherStatics>().TryShowAsStandaloneAsync(viewId);
}

inline Windows::Foundation::IAsyncOperation<bool> ApplicationViewSwitcher::TryShowAsStandaloneAsync(int32_t viewId, Windows::UI::ViewManagement::ViewSizePreference sizePreference)
{
    return get_activation_factory<ApplicationViewSwitcher, IApplicationViewSwitcherStatics>().TryShowAsStandaloneAsync(viewId, sizePreference);
}

inline Windows::Foundation::IAsyncOperation<bool> ApplicationViewSwitcher::TryShowAsStandaloneAsync(int32_t viewId, Windows::UI::ViewManagement::ViewSizePreference sizePreference, int32_t anchorViewId, Windows::UI::ViewManagement::ViewSizePreference anchorSizePreference)
{
    return get_activation_factory<ApplicationViewSwitcher, IApplicationViewSwitcherStatics>().TryShowAsStandaloneAsync(viewId, sizePreference, anchorViewId, anchorSizePreference);
}

inline Windows::Foundation::IAsyncAction ApplicationViewSwitcher::SwitchAsync(int32_t viewId)
{
    return get_activation_factory<ApplicationViewSwitcher, IApplicationViewSwitcherStatics>().SwitchAsync(viewId);
}

inline Windows::Foundation::IAsyncAction ApplicationViewSwitcher::SwitchAsync(int32_t toViewId, int32_t fromViewId)
{
    return get_activation_factory<ApplicationViewSwitcher, IApplicationViewSwitcherStatics>().SwitchAsync(toViewId, fromViewId);
}

inline Windows::Foundation::IAsyncAction ApplicationViewSwitcher::SwitchAsync(int32_t toViewId, int32_t fromViewId, Windows::UI::ViewManagement::ApplicationViewSwitchingOptions options)
{
    return get_activation_factory<ApplicationViewSwitcher, IApplicationViewSwitcherStatics>().SwitchAsync(toViewId, fromViewId, options);
}

inline Windows::Foundation::IAsyncOperation<bool> ApplicationViewSwitcher::PrepareForCustomAnimatedSwitchAsync(int32_t toViewId, int32_t fromViewId, Windows::UI::ViewManagement::ApplicationViewSwitchingOptions options)
{
    return get_activation_factory<ApplicationViewSwitcher, IApplicationViewSwitcherStatics>().PrepareForCustomAnimatedSwitchAsync(toViewId, fromViewId, options);
}

inline void ApplicationViewSwitcher::DisableSystemViewActivationPolicy()
{
    get_activation_factory<ApplicationViewSwitcher, IApplicationViewSwitcherStatics2>().DisableSystemViewActivationPolicy();
}

inline ApplicationViewTransferContext::ApplicationViewTransferContext() :
    ApplicationViewTransferContext(activate_instance<ApplicationViewTransferContext>())
{}

inline hstring ApplicationViewTransferContext::DataPackageFormatId()
{
    return get_activation_factory<ApplicationViewTransferContext, IApplicationViewTransferContextStatics>().DataPackageFormatId();
}

inline Windows::UI::ViewManagement::InputPane InputPane::GetForCurrentView()
{
    return get_activation_factory<InputPane, IInputPaneStatics>().GetForCurrentView();
}

inline Windows::Foundation::IAsyncAction ProjectionManager::StartProjectingAsync(int32_t projectionViewId, int32_t anchorViewId)
{
    return get_activation_factory<ProjectionManager, IProjectionManagerStatics>().StartProjectingAsync(projectionViewId, anchorViewId);
}

inline Windows::Foundation::IAsyncAction ProjectionManager::SwapDisplaysForViewsAsync(int32_t projectionViewId, int32_t anchorViewId)
{
    return get_activation_factory<ProjectionManager, IProjectionManagerStatics>().SwapDisplaysForViewsAsync(projectionViewId, anchorViewId);
}

inline Windows::Foundation::IAsyncAction ProjectionManager::StopProjectingAsync(int32_t projectionViewId, int32_t anchorViewId)
{
    return get_activation_factory<ProjectionManager, IProjectionManagerStatics>().StopProjectingAsync(projectionViewId, anchorViewId);
}

inline bool ProjectionManager::ProjectionDisplayAvailable()
{
    return get_activation_factory<ProjectionManager, IProjectionManagerStatics>().ProjectionDisplayAvailable();
}

inline event_token ProjectionManager::ProjectionDisplayAvailableChanged(const Windows::Foundation::EventHandler<Windows::IInspectable> & handler)
{
    return get_activation_factory<ProjectionManager, IProjectionManagerStatics>().ProjectionDisplayAvailableChanged(handler);
}

inline factory_event_revoker<IProjectionManagerStatics> ProjectionManager::ProjectionDisplayAvailableChanged(auto_revoke_t, const Windows::Foundation::EventHandler<Windows::IInspectable> & handler)
{
    auto factory = get_activation_factory<ProjectionManager, IProjectionManagerStatics>();
    return { factory, &ABI::Windows::UI::ViewManagement::IProjectionManagerStatics::remove_ProjectionDisplayAvailableChanged, factory.ProjectionDisplayAvailableChanged(handler) };
}

inline void ProjectionManager::ProjectionDisplayAvailableChanged(event_token token)
{
    get_activation_factory<ProjectionManager, IProjectionManagerStatics>().ProjectionDisplayAvailableChanged(token);
}

inline Windows::Foundation::IAsyncAction ProjectionManager::StartProjectingAsync(int32_t projectionViewId, int32_t anchorViewId, const Windows::Devices::Enumeration::DeviceInformation & displayDeviceInfo)
{
    return get_activation_factory<ProjectionManager, IProjectionManagerStatics2>().StartProjectingAsync(projectionViewId, anchorViewId, displayDeviceInfo);
}

inline Windows::Foundation::IAsyncOperation<bool> ProjectionManager::RequestStartProjectingAsync(int32_t projectionViewId, int32_t anchorViewId, const Windows::Foundation::Rect & selection)
{
    return get_activation_factory<ProjectionManager, IProjectionManagerStatics2>().RequestStartProjectingAsync(projectionViewId, anchorViewId, selection);
}

inline Windows::Foundation::IAsyncOperation<bool> ProjectionManager::RequestStartProjectingAsync(int32_t projectionViewId, int32_t anchorViewId, const Windows::Foundation::Rect & selection, Windows::UI::Popups::Placement prefferedPlacement)
{
    return get_activation_factory<ProjectionManager, IProjectionManagerStatics2>().RequestStartProjectingAsync(projectionViewId, anchorViewId, selection, prefferedPlacement);
}

inline hstring ProjectionManager::GetDeviceSelector()
{
    return get_activation_factory<ProjectionManager, IProjectionManagerStatics2>().GetDeviceSelector();
}

inline UISettings::UISettings() :
    UISettings(activate_instance<UISettings>())
{}

inline Windows::UI::ViewManagement::UIViewSettings UIViewSettings::GetForCurrentView()
{
    return get_activation_factory<UIViewSettings, IUIViewSettingsStatics>().GetForCurrentView();
}

}

}
