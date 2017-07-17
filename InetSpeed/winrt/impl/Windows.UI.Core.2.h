// C++/WinRT v1.0.170717.1
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "Windows.Foundation.Collections.1.h"
#include "Windows.System.1.h"
#include "Windows.UI.Input.1.h"
#include "Windows.UI.Popups.1.h"
#include "Windows.UI.Core.1.h"

namespace winrt {

namespace Windows::UI::Core {

struct DispatchedHandler : Windows::Foundation::IUnknown
{
    DispatchedHandler(std::nullptr_t = nullptr) noexcept {}
    template <typename L> DispatchedHandler(L lambda);
    template <typename F> DispatchedHandler(F* function);
    template <typename O, typename M> DispatchedHandler(O* object, M method);
    void operator()() const;
};

struct IdleDispatchedHandler : Windows::Foundation::IUnknown
{
    IdleDispatchedHandler(std::nullptr_t = nullptr) noexcept {}
    template <typename L> IdleDispatchedHandler(L lambda);
    template <typename F> IdleDispatchedHandler(F* function);
    template <typename O, typename M> IdleDispatchedHandler(O* object, M method);
    void operator()(Windows::UI::Core::IdleDispatchedHandlerArgs const& e) const;
};

struct CorePhysicalKeyStatus
{
    uint32_t RepeatCount;
    uint32_t ScanCode;
    bool IsExtendedKey;
    bool IsMenuKeyDown;
    bool WasKeyDown;
    bool IsKeyReleased;
};

struct CoreProximityEvaluation
{
    int32_t Score;
    Windows::Foundation::Point AdjustedPoint;
};

struct AcceleratorKeyEventArgs :
    Windows::UI::Core::IAcceleratorKeyEventArgs,
    impl::require<AcceleratorKeyEventArgs, Windows::UI::Core::IAcceleratorKeyEventArgs2>
{
    AcceleratorKeyEventArgs(std::nullptr_t) noexcept {}
};

struct AutomationProviderRequestedEventArgs :
    Windows::UI::Core::IAutomationProviderRequestedEventArgs
{
    AutomationProviderRequestedEventArgs(std::nullptr_t) noexcept {}
};

struct BackRequestedEventArgs :
    Windows::UI::Core::IBackRequestedEventArgs
{
    BackRequestedEventArgs(std::nullptr_t) noexcept {}
};

struct CharacterReceivedEventArgs :
    Windows::UI::Core::ICharacterReceivedEventArgs
{
    CharacterReceivedEventArgs(std::nullptr_t) noexcept {}
};

struct ClosestInteractiveBoundsRequestedEventArgs :
    Windows::UI::Core::IClosestInteractiveBoundsRequestedEventArgs
{
    ClosestInteractiveBoundsRequestedEventArgs(std::nullptr_t) noexcept {}
};

struct CoreAcceleratorKeys :
    Windows::UI::Core::ICoreAcceleratorKeys
{
    CoreAcceleratorKeys(std::nullptr_t) noexcept {}
};

struct CoreComponentInputSource :
    Windows::UI::Core::ICoreInputSourceBase,
    impl::require<CoreComponentInputSource, Windows::UI::Core::ICoreClosestInteractiveBoundsRequested, Windows::UI::Core::ICoreComponentFocusable, Windows::UI::Core::ICoreKeyboardInputSource, Windows::UI::Core::ICoreKeyboardInputSource2, Windows::UI::Core::ICorePointerInputSource, Windows::UI::Core::ICoreTouchHitTesting>
{
    CoreComponentInputSource(std::nullptr_t) noexcept {}
};

struct CoreCursor :
    Windows::UI::Core::ICoreCursor
{
    CoreCursor(std::nullptr_t) noexcept {}
    CoreCursor(Windows::UI::Core::CoreCursorType const& type, uint32_t id);
};

struct CoreDispatcher :
    Windows::UI::Core::ICoreDispatcher,
    impl::require<CoreDispatcher, Windows::UI::Core::ICoreDispatcher2, Windows::UI::Core::ICoreDispatcherWithTaskPriority>
{
    CoreDispatcher(std::nullptr_t) noexcept {}
};

struct CoreIndependentInputSource :
    Windows::UI::Core::ICoreInputSourceBase,
    impl::require<CoreIndependentInputSource, Windows::UI::Core::ICorePointerInputSource>
{
    CoreIndependentInputSource(std::nullptr_t) noexcept {}
};

struct CoreWindow :
    Windows::UI::Core::ICoreWindow,
    impl::require<CoreWindow, Windows::UI::Core::ICorePointerRedirector, Windows::UI::Core::ICoreWindow2, Windows::UI::Core::ICoreWindow3, Windows::UI::Core::ICoreWindow4>
{
    CoreWindow(std::nullptr_t) noexcept {}
    using impl::consume_t<CoreWindow, Windows::UI::Core::ICoreWindow2>::PointerPosition;
    using Windows::UI::Core::ICoreWindow::PointerPosition;
    static Windows::UI::Core::CoreWindow GetForCurrentThread();
};

struct CoreWindowDialog :
    Windows::UI::Core::ICoreWindowDialog
{
    CoreWindowDialog(std::nullptr_t) noexcept {}
    CoreWindowDialog();
    CoreWindowDialog(param::hstring const& title);
};

struct CoreWindowEventArgs :
    Windows::UI::Core::ICoreWindowEventArgs
{
    CoreWindowEventArgs(std::nullptr_t) noexcept {}
};

struct CoreWindowFlyout :
    Windows::UI::Core::ICoreWindowFlyout
{
    CoreWindowFlyout(std::nullptr_t) noexcept {}
    CoreWindowFlyout(Windows::Foundation::Point const& position);
    CoreWindowFlyout(Windows::Foundation::Point const& position, param::hstring const& title);
};

struct CoreWindowPopupShowingEventArgs :
    Windows::UI::Core::ICoreWindowPopupShowingEventArgs
{
    CoreWindowPopupShowingEventArgs(std::nullptr_t) noexcept {}
};

struct CoreWindowResizeManager :
    Windows::UI::Core::ICoreWindowResizeManager,
    impl::require<CoreWindowResizeManager, Windows::UI::Core::ICoreWindowResizeManagerLayoutCapability>
{
    CoreWindowResizeManager(std::nullptr_t) noexcept {}
    static Windows::UI::Core::CoreWindowResizeManager GetForCurrentView();
};

struct IdleDispatchedHandlerArgs :
    Windows::UI::Core::IIdleDispatchedHandlerArgs
{
    IdleDispatchedHandlerArgs(std::nullptr_t) noexcept {}
};

struct InputEnabledEventArgs :
    Windows::UI::Core::IInputEnabledEventArgs
{
    InputEnabledEventArgs(std::nullptr_t) noexcept {}
};

struct KeyEventArgs :
    Windows::UI::Core::IKeyEventArgs,
    impl::require<KeyEventArgs, Windows::UI::Core::IKeyEventArgs2>
{
    KeyEventArgs(std::nullptr_t) noexcept {}
};

struct PointerEventArgs :
    Windows::UI::Core::IPointerEventArgs
{
    PointerEventArgs(std::nullptr_t) noexcept {}
};

struct SystemNavigationManager :
    Windows::UI::Core::ISystemNavigationManager,
    impl::require<SystemNavigationManager, Windows::UI::Core::ISystemNavigationManager2>
{
    SystemNavigationManager(std::nullptr_t) noexcept {}
    static Windows::UI::Core::SystemNavigationManager GetForCurrentView();
};

struct TouchHitTestingEventArgs :
    Windows::UI::Core::ITouchHitTestingEventArgs
{
    TouchHitTestingEventArgs(std::nullptr_t) noexcept {}
};

struct VisibilityChangedEventArgs :
    Windows::UI::Core::IVisibilityChangedEventArgs
{
    VisibilityChangedEventArgs(std::nullptr_t) noexcept {}
};

struct WindowActivatedEventArgs :
    Windows::UI::Core::IWindowActivatedEventArgs
{
    WindowActivatedEventArgs(std::nullptr_t) noexcept {}
};

struct WindowSizeChangedEventArgs :
    Windows::UI::Core::IWindowSizeChangedEventArgs
{
    WindowSizeChangedEventArgs(std::nullptr_t) noexcept {}
};

}

namespace impl {

}

}
