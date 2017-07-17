// C++/WinRT v1.0.170717.1
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "Windows.Foundation.Collections.0.h"
#include "Windows.System.0.h"
#include "Windows.UI.Input.0.h"
#include "Windows.UI.Popups.0.h"
#include "Windows.UI.Core.0.h"

namespace winrt {

namespace Windows::UI::Core {

struct IAcceleratorKeyEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<IAcceleratorKeyEventArgs>,
    impl::require<IAcceleratorKeyEventArgs, Windows::UI::Core::ICoreWindowEventArgs>
{
    IAcceleratorKeyEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct IAcceleratorKeyEventArgs2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IAcceleratorKeyEventArgs2>,
    impl::require<IAcceleratorKeyEventArgs2, Windows::UI::Core::ICoreWindowEventArgs>
{
    IAcceleratorKeyEventArgs2(std::nullptr_t = nullptr) noexcept {}
};

struct IAutomationProviderRequestedEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<IAutomationProviderRequestedEventArgs>,
    impl::require<IAutomationProviderRequestedEventArgs, Windows::UI::Core::ICoreWindowEventArgs>
{
    IAutomationProviderRequestedEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct IBackRequestedEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<IBackRequestedEventArgs>
{
    IBackRequestedEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct ICharacterReceivedEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<ICharacterReceivedEventArgs>,
    impl::require<ICharacterReceivedEventArgs, Windows::UI::Core::ICoreWindowEventArgs>
{
    ICharacterReceivedEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct IClosestInteractiveBoundsRequestedEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<IClosestInteractiveBoundsRequestedEventArgs>
{
    IClosestInteractiveBoundsRequestedEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct ICoreAcceleratorKeys :
    Windows::Foundation::IInspectable,
    impl::consume_t<ICoreAcceleratorKeys>
{
    ICoreAcceleratorKeys(std::nullptr_t = nullptr) noexcept {}
};

struct ICoreClosestInteractiveBoundsRequested :
    Windows::Foundation::IInspectable,
    impl::consume_t<ICoreClosestInteractiveBoundsRequested>
{
    ICoreClosestInteractiveBoundsRequested(std::nullptr_t = nullptr) noexcept {}
};

struct ICoreComponentFocusable :
    Windows::Foundation::IInspectable,
    impl::consume_t<ICoreComponentFocusable>
{
    ICoreComponentFocusable(std::nullptr_t = nullptr) noexcept {}
};

struct ICoreCursor :
    Windows::Foundation::IInspectable,
    impl::consume_t<ICoreCursor>
{
    ICoreCursor(std::nullptr_t = nullptr) noexcept {}
};

struct ICoreCursorFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<ICoreCursorFactory>
{
    ICoreCursorFactory(std::nullptr_t = nullptr) noexcept {}
};

struct ICoreDispatcher :
    Windows::Foundation::IInspectable,
    impl::consume_t<ICoreDispatcher>,
    impl::require<ICoreDispatcher, Windows::UI::Core::ICoreAcceleratorKeys>
{
    ICoreDispatcher(std::nullptr_t = nullptr) noexcept {}
};

struct ICoreDispatcher2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<ICoreDispatcher2>
{
    ICoreDispatcher2(std::nullptr_t = nullptr) noexcept {}
};

struct ICoreDispatcherWithTaskPriority :
    Windows::Foundation::IInspectable,
    impl::consume_t<ICoreDispatcherWithTaskPriority>
{
    ICoreDispatcherWithTaskPriority(std::nullptr_t = nullptr) noexcept {}
};

struct ICoreInputSourceBase :
    Windows::Foundation::IInspectable,
    impl::consume_t<ICoreInputSourceBase>
{
    ICoreInputSourceBase(std::nullptr_t = nullptr) noexcept {}
};

struct ICoreKeyboardInputSource :
    Windows::Foundation::IInspectable,
    impl::consume_t<ICoreKeyboardInputSource>
{
    ICoreKeyboardInputSource(std::nullptr_t = nullptr) noexcept {}
};

struct ICoreKeyboardInputSource2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<ICoreKeyboardInputSource2>
{
    ICoreKeyboardInputSource2(std::nullptr_t = nullptr) noexcept {}
};

struct ICorePointerInputSource :
    Windows::Foundation::IInspectable,
    impl::consume_t<ICorePointerInputSource>
{
    ICorePointerInputSource(std::nullptr_t = nullptr) noexcept {}
};

struct ICorePointerRedirector :
    Windows::Foundation::IInspectable,
    impl::consume_t<ICorePointerRedirector>
{
    ICorePointerRedirector(std::nullptr_t = nullptr) noexcept {}
};

struct ICoreTouchHitTesting :
    Windows::Foundation::IInspectable,
    impl::consume_t<ICoreTouchHitTesting>
{
    ICoreTouchHitTesting(std::nullptr_t = nullptr) noexcept {}
};

struct ICoreWindow :
    Windows::Foundation::IInspectable,
    impl::consume_t<ICoreWindow>
{
    ICoreWindow(std::nullptr_t = nullptr) noexcept {}
};

struct ICoreWindow2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<ICoreWindow2>
{
    ICoreWindow2(std::nullptr_t = nullptr) noexcept {}
};

struct ICoreWindow3 :
    Windows::Foundation::IInspectable,
    impl::consume_t<ICoreWindow3>
{
    ICoreWindow3(std::nullptr_t = nullptr) noexcept {}
};

struct ICoreWindow4 :
    Windows::Foundation::IInspectable,
    impl::consume_t<ICoreWindow4>
{
    ICoreWindow4(std::nullptr_t = nullptr) noexcept {}
};

struct ICoreWindowDialog :
    Windows::Foundation::IInspectable,
    impl::consume_t<ICoreWindowDialog>
{
    ICoreWindowDialog(std::nullptr_t = nullptr) noexcept {}
};

struct ICoreWindowDialogFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<ICoreWindowDialogFactory>
{
    ICoreWindowDialogFactory(std::nullptr_t = nullptr) noexcept {}
};

struct ICoreWindowEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<ICoreWindowEventArgs>
{
    ICoreWindowEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct ICoreWindowFlyout :
    Windows::Foundation::IInspectable,
    impl::consume_t<ICoreWindowFlyout>
{
    ICoreWindowFlyout(std::nullptr_t = nullptr) noexcept {}
};

struct ICoreWindowFlyoutFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<ICoreWindowFlyoutFactory>
{
    ICoreWindowFlyoutFactory(std::nullptr_t = nullptr) noexcept {}
};

struct ICoreWindowPopupShowingEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<ICoreWindowPopupShowingEventArgs>
{
    ICoreWindowPopupShowingEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct ICoreWindowResizeManager :
    Windows::Foundation::IInspectable,
    impl::consume_t<ICoreWindowResizeManager>
{
    ICoreWindowResizeManager(std::nullptr_t = nullptr) noexcept {}
};

struct ICoreWindowResizeManagerLayoutCapability :
    Windows::Foundation::IInspectable,
    impl::consume_t<ICoreWindowResizeManagerLayoutCapability>
{
    ICoreWindowResizeManagerLayoutCapability(std::nullptr_t = nullptr) noexcept {}
};

struct ICoreWindowResizeManagerStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<ICoreWindowResizeManagerStatics>
{
    ICoreWindowResizeManagerStatics(std::nullptr_t = nullptr) noexcept {}
};

struct ICoreWindowStatic :
    Windows::Foundation::IInspectable,
    impl::consume_t<ICoreWindowStatic>
{
    ICoreWindowStatic(std::nullptr_t = nullptr) noexcept {}
};

struct IIdleDispatchedHandlerArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<IIdleDispatchedHandlerArgs>
{
    IIdleDispatchedHandlerArgs(std::nullptr_t = nullptr) noexcept {}
};

struct IInitializeWithCoreWindow :
    Windows::Foundation::IInspectable,
    impl::consume_t<IInitializeWithCoreWindow>
{
    IInitializeWithCoreWindow(std::nullptr_t = nullptr) noexcept {}
};

struct IInputEnabledEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<IInputEnabledEventArgs>,
    impl::require<IInputEnabledEventArgs, Windows::UI::Core::ICoreWindowEventArgs>
{
    IInputEnabledEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct IKeyEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<IKeyEventArgs>,
    impl::require<IKeyEventArgs, Windows::UI::Core::ICoreWindowEventArgs>
{
    IKeyEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct IKeyEventArgs2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IKeyEventArgs2>,
    impl::require<IKeyEventArgs2, Windows::UI::Core::ICoreWindowEventArgs>
{
    IKeyEventArgs2(std::nullptr_t = nullptr) noexcept {}
};

struct IPointerEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPointerEventArgs>,
    impl::require<IPointerEventArgs, Windows::UI::Core::ICoreWindowEventArgs>
{
    IPointerEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct ISystemNavigationManager :
    Windows::Foundation::IInspectable,
    impl::consume_t<ISystemNavigationManager>
{
    ISystemNavigationManager(std::nullptr_t = nullptr) noexcept {}
};

struct ISystemNavigationManager2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<ISystemNavigationManager2>
{
    ISystemNavigationManager2(std::nullptr_t = nullptr) noexcept {}
};

struct ISystemNavigationManagerStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<ISystemNavigationManagerStatics>
{
    ISystemNavigationManagerStatics(std::nullptr_t = nullptr) noexcept {}
};

struct ITouchHitTestingEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<ITouchHitTestingEventArgs>,
    impl::require<ITouchHitTestingEventArgs, Windows::UI::Core::ICoreWindowEventArgs>
{
    ITouchHitTestingEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct IVisibilityChangedEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<IVisibilityChangedEventArgs>,
    impl::require<IVisibilityChangedEventArgs, Windows::UI::Core::ICoreWindowEventArgs>
{
    IVisibilityChangedEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct IWindowActivatedEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<IWindowActivatedEventArgs>,
    impl::require<IWindowActivatedEventArgs, Windows::UI::Core::ICoreWindowEventArgs>
{
    IWindowActivatedEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct IWindowSizeChangedEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<IWindowSizeChangedEventArgs>,
    impl::require<IWindowSizeChangedEventArgs, Windows::UI::Core::ICoreWindowEventArgs>
{
    IWindowSizeChangedEventArgs(std::nullptr_t = nullptr) noexcept {}
};

}

}
