// C++ for the Windows Runtime v1.29
// Copyright (c) 2016 Microsoft Corporation

#pragma once

#include "internal\Windows.Foundation.3.h"
#include "internal\Windows.Foundation.Collections.3.h"
#include "internal\Windows.UI.Popups.3.h"
#include "internal\Windows.System.3.h"
#include "internal\Windows.UI.Input.3.h"
#include "internal\Windows.UI.Core.3.h"
#include "Windows.UI.h"

WINRT_EXPORT namespace winrt {

namespace Windows::UI::Core {

template <typename L> DispatchedHandler::DispatchedHandler(L lambda) :
    DispatchedHandler(impl::make_delegate<impl_DispatchedHandler<L>, DispatchedHandler>(std::forward<L>(lambda)))
{}

template <typename F> DispatchedHandler::DispatchedHandler(F * function) :
    DispatchedHandler([=](auto && ... args) { function(args ...); })
{}

template <typename O, typename M> DispatchedHandler::DispatchedHandler(O * object, M method) :
    DispatchedHandler([=](auto && ... args) { ((*object).*(method))(args ...); })
{}

inline void DispatchedHandler::operator()() const
{
    check_hresult((*this)->abi_Invoke());
}

template <typename L> IdleDispatchedHandler::IdleDispatchedHandler(L lambda) :
    IdleDispatchedHandler(impl::make_delegate<impl_IdleDispatchedHandler<L>, IdleDispatchedHandler>(std::forward<L>(lambda)))
{}

template <typename F> IdleDispatchedHandler::IdleDispatchedHandler(F * function) :
    IdleDispatchedHandler([=](auto && ... args) { function(args ...); })
{}

template <typename O, typename M> IdleDispatchedHandler::IdleDispatchedHandler(O * object, M method) :
    IdleDispatchedHandler([=](auto && ... args) { ((*object).*(method))(args ...); })
{}

inline void IdleDispatchedHandler::operator()(const Windows::UI::Core::IdleDispatchedHandlerArgs & e) const
{
    check_hresult((*this)->abi_Invoke(get(e)));
}

}

namespace impl {

template <typename D>
struct produce<D, Windows::UI::Core::IAcceleratorKeyEventArgs> : produce_base<D, Windows::UI::Core::IAcceleratorKeyEventArgs>
{
    HRESULT __stdcall get_EventType(Windows::UI::Core::CoreAcceleratorKeyEventType * value) noexcept override
    {
        try
        {
            *value = detach(shim().EventType());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_VirtualKey(Windows::System::VirtualKey * value) noexcept override
    {
        try
        {
            *value = detach(shim().VirtualKey());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_KeyStatus(abi_arg_out<Windows::UI::Core::CorePhysicalKeyStatus> value) noexcept override
    {
        try
        {
            *value = detach(shim().KeyStatus());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Core::IAcceleratorKeyEventArgs2> : produce_base<D, Windows::UI::Core::IAcceleratorKeyEventArgs2>
{
    HRESULT __stdcall get_DeviceId(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(shim().DeviceId());
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
struct produce<D, Windows::UI::Core::IAutomationProviderRequestedEventArgs> : produce_base<D, Windows::UI::Core::IAutomationProviderRequestedEventArgs>
{
    HRESULT __stdcall get_AutomationProvider(abi_arg_out<Windows::IInspectable> value) noexcept override
    {
        try
        {
            *value = detach(shim().AutomationProvider());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_AutomationProvider(abi_arg_in<Windows::IInspectable> value) noexcept override
    {
        try
        {
            shim().AutomationProvider(*reinterpret_cast<const Windows::IInspectable *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Core::IBackRequestedEventArgs> : produce_base<D, Windows::UI::Core::IBackRequestedEventArgs>
{
    HRESULT __stdcall get_Handled(bool * value) noexcept override
    {
        try
        {
            *value = detach(shim().Handled());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Handled(bool value) noexcept override
    {
        try
        {
            shim().Handled(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Core::ICharacterReceivedEventArgs> : produce_base<D, Windows::UI::Core::ICharacterReceivedEventArgs>
{
    HRESULT __stdcall get_KeyCode(uint32_t * value) noexcept override
    {
        try
        {
            *value = detach(shim().KeyCode());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_KeyStatus(abi_arg_out<Windows::UI::Core::CorePhysicalKeyStatus> value) noexcept override
    {
        try
        {
            *value = detach(shim().KeyStatus());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Core::IClosestInteractiveBoundsRequestedEventArgs> : produce_base<D, Windows::UI::Core::IClosestInteractiveBoundsRequestedEventArgs>
{
    HRESULT __stdcall get_PointerPosition(abi_arg_out<Windows::Foundation::Point> value) noexcept override
    {
        try
        {
            *value = detach(shim().PointerPosition());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_SearchBounds(abi_arg_out<Windows::Foundation::Rect> value) noexcept override
    {
        try
        {
            *value = detach(shim().SearchBounds());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ClosestInteractiveBounds(abi_arg_out<Windows::Foundation::Rect> value) noexcept override
    {
        try
        {
            *value = detach(shim().ClosestInteractiveBounds());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_ClosestInteractiveBounds(abi_arg_in<Windows::Foundation::Rect> value) noexcept override
    {
        try
        {
            shim().ClosestInteractiveBounds(*reinterpret_cast<const Windows::Foundation::Rect *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Core::ICoreAcceleratorKeys> : produce_base<D, Windows::UI::Core::ICoreAcceleratorKeys>
{
    HRESULT __stdcall add_AcceleratorKeyActivated(abi_arg_in<Windows::Foundation::TypedEventHandler<Windows::UI::Core::CoreDispatcher, Windows::UI::Core::AcceleratorKeyEventArgs>> handler, event_token * pCookie) noexcept override
    {
        try
        {
            *pCookie = detach(shim().AcceleratorKeyActivated(*reinterpret_cast<const Windows::Foundation::TypedEventHandler<Windows::UI::Core::CoreDispatcher, Windows::UI::Core::AcceleratorKeyEventArgs> *>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_AcceleratorKeyActivated(event_token cookie) noexcept override
    {
        try
        {
            shim().AcceleratorKeyActivated(cookie);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Core::ICoreClosestInteractiveBoundsRequested> : produce_base<D, Windows::UI::Core::ICoreClosestInteractiveBoundsRequested>
{
    HRESULT __stdcall add_ClosestInteractiveBoundsRequested(abi_arg_in<Windows::Foundation::TypedEventHandler<Windows::UI::Core::CoreComponentInputSource, Windows::UI::Core::ClosestInteractiveBoundsRequestedEventArgs>> handler, event_token * pCookie) noexcept override
    {
        try
        {
            *pCookie = detach(shim().ClosestInteractiveBoundsRequested(*reinterpret_cast<const Windows::Foundation::TypedEventHandler<Windows::UI::Core::CoreComponentInputSource, Windows::UI::Core::ClosestInteractiveBoundsRequestedEventArgs> *>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_ClosestInteractiveBoundsRequested(event_token cookie) noexcept override
    {
        try
        {
            shim().ClosestInteractiveBoundsRequested(cookie);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Core::ICoreComponentFocusable> : produce_base<D, Windows::UI::Core::ICoreComponentFocusable>
{
    HRESULT __stdcall get_HasFocus(bool * value) noexcept override
    {
        try
        {
            *value = detach(shim().HasFocus());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_GotFocus(abi_arg_in<Windows::Foundation::TypedEventHandler<Windows::IInspectable, Windows::UI::Core::CoreWindowEventArgs>> handler, event_token * pCookie) noexcept override
    {
        try
        {
            *pCookie = detach(shim().GotFocus(*reinterpret_cast<const Windows::Foundation::TypedEventHandler<Windows::IInspectable, Windows::UI::Core::CoreWindowEventArgs> *>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_GotFocus(event_token cookie) noexcept override
    {
        try
        {
            shim().GotFocus(cookie);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_LostFocus(abi_arg_in<Windows::Foundation::TypedEventHandler<Windows::IInspectable, Windows::UI::Core::CoreWindowEventArgs>> handler, event_token * pCookie) noexcept override
    {
        try
        {
            *pCookie = detach(shim().LostFocus(*reinterpret_cast<const Windows::Foundation::TypedEventHandler<Windows::IInspectable, Windows::UI::Core::CoreWindowEventArgs> *>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_LostFocus(event_token cookie) noexcept override
    {
        try
        {
            shim().LostFocus(cookie);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Core::ICoreCursor> : produce_base<D, Windows::UI::Core::ICoreCursor>
{
    HRESULT __stdcall get_Id(uint32_t * value) noexcept override
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

    HRESULT __stdcall get_Type(Windows::UI::Core::CoreCursorType * value) noexcept override
    {
        try
        {
            *value = detach(shim().Type());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Core::ICoreCursorFactory> : produce_base<D, Windows::UI::Core::ICoreCursorFactory>
{
    HRESULT __stdcall abi_CreateCursor(Windows::UI::Core::CoreCursorType type, uint32_t id, abi_arg_out<Windows::UI::Core::ICoreCursor> cursor) noexcept override
    {
        try
        {
            *cursor = detach(shim().CreateCursor(type, id));
            return S_OK;
        }
        catch (...)
        {
            *cursor = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Core::ICoreDispatcher> : produce_base<D, Windows::UI::Core::ICoreDispatcher>
{
    HRESULT __stdcall get_HasThreadAccess(bool * value) noexcept override
    {
        try
        {
            *value = detach(shim().HasThreadAccess());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_ProcessEvents(Windows::UI::Core::CoreProcessEventsOption options) noexcept override
    {
        try
        {
            shim().ProcessEvents(options);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_RunAsync(Windows::UI::Core::CoreDispatcherPriority priority, abi_arg_in<Windows::UI::Core::DispatchedHandler> agileCallback, abi_arg_out<Windows::Foundation::IAsyncAction> asyncAction) noexcept override
    {
        try
        {
            *asyncAction = detach(shim().RunAsync(priority, *reinterpret_cast<const Windows::UI::Core::DispatchedHandler *>(&agileCallback)));
            return S_OK;
        }
        catch (...)
        {
            *asyncAction = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_RunIdleAsync(abi_arg_in<Windows::UI::Core::IdleDispatchedHandler> agileCallback, abi_arg_out<Windows::Foundation::IAsyncAction> asyncAction) noexcept override
    {
        try
        {
            *asyncAction = detach(shim().RunIdleAsync(*reinterpret_cast<const Windows::UI::Core::IdleDispatchedHandler *>(&agileCallback)));
            return S_OK;
        }
        catch (...)
        {
            *asyncAction = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Core::ICoreDispatcher2> : produce_base<D, Windows::UI::Core::ICoreDispatcher2>
{
    HRESULT __stdcall abi_TryRunAsync(Windows::UI::Core::CoreDispatcherPriority priority, abi_arg_in<Windows::UI::Core::DispatchedHandler> agileCallback, abi_arg_out<Windows::Foundation::IAsyncOperation<bool>> asyncOperation) noexcept override
    {
        try
        {
            *asyncOperation = detach(shim().TryRunAsync(priority, *reinterpret_cast<const Windows::UI::Core::DispatchedHandler *>(&agileCallback)));
            return S_OK;
        }
        catch (...)
        {
            *asyncOperation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_TryRunIdleAsync(abi_arg_in<Windows::UI::Core::IdleDispatchedHandler> agileCallback, abi_arg_out<Windows::Foundation::IAsyncOperation<bool>> asyncOperation) noexcept override
    {
        try
        {
            *asyncOperation = detach(shim().TryRunIdleAsync(*reinterpret_cast<const Windows::UI::Core::IdleDispatchedHandler *>(&agileCallback)));
            return S_OK;
        }
        catch (...)
        {
            *asyncOperation = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Core::ICoreDispatcherWithTaskPriority> : produce_base<D, Windows::UI::Core::ICoreDispatcherWithTaskPriority>
{
    HRESULT __stdcall get_CurrentPriority(Windows::UI::Core::CoreDispatcherPriority * value) noexcept override
    {
        try
        {
            *value = detach(shim().CurrentPriority());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_CurrentPriority(Windows::UI::Core::CoreDispatcherPriority value) noexcept override
    {
        try
        {
            shim().CurrentPriority(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_ShouldYield(bool * value) noexcept override
    {
        try
        {
            *value = detach(shim().ShouldYield());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_ShouldYieldToPriority(Windows::UI::Core::CoreDispatcherPriority priority, bool * value) noexcept override
    {
        try
        {
            *value = detach(shim().ShouldYield(priority));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_StopProcessEvents() noexcept override
    {
        try
        {
            shim().StopProcessEvents();
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Core::ICoreInputSourceBase> : produce_base<D, Windows::UI::Core::ICoreInputSourceBase>
{
    HRESULT __stdcall get_Dispatcher(abi_arg_out<Windows::UI::Core::ICoreDispatcher> value) noexcept override
    {
        try
        {
            *value = detach(shim().Dispatcher());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_IsInputEnabled(bool * value) noexcept override
    {
        try
        {
            *value = detach(shim().IsInputEnabled());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_IsInputEnabled(bool value) noexcept override
    {
        try
        {
            shim().IsInputEnabled(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_InputEnabled(abi_arg_in<Windows::Foundation::TypedEventHandler<Windows::IInspectable, Windows::UI::Core::InputEnabledEventArgs>> handler, event_token * pCookie) noexcept override
    {
        try
        {
            *pCookie = detach(shim().InputEnabled(*reinterpret_cast<const Windows::Foundation::TypedEventHandler<Windows::IInspectable, Windows::UI::Core::InputEnabledEventArgs> *>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_InputEnabled(event_token cookie) noexcept override
    {
        try
        {
            shim().InputEnabled(cookie);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Core::ICoreKeyboardInputSource> : produce_base<D, Windows::UI::Core::ICoreKeyboardInputSource>
{
    HRESULT __stdcall abi_GetCurrentKeyState(Windows::System::VirtualKey virtualKey, Windows::UI::Core::CoreVirtualKeyStates * KeyState) noexcept override
    {
        try
        {
            *KeyState = detach(shim().GetCurrentKeyState(virtualKey));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_CharacterReceived(abi_arg_in<Windows::Foundation::TypedEventHandler<Windows::IInspectable, Windows::UI::Core::CharacterReceivedEventArgs>> handler, event_token * pCookie) noexcept override
    {
        try
        {
            *pCookie = detach(shim().CharacterReceived(*reinterpret_cast<const Windows::Foundation::TypedEventHandler<Windows::IInspectable, Windows::UI::Core::CharacterReceivedEventArgs> *>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_CharacterReceived(event_token cookie) noexcept override
    {
        try
        {
            shim().CharacterReceived(cookie);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_KeyDown(abi_arg_in<Windows::Foundation::TypedEventHandler<Windows::IInspectable, Windows::UI::Core::KeyEventArgs>> handler, event_token * pCookie) noexcept override
    {
        try
        {
            *pCookie = detach(shim().KeyDown(*reinterpret_cast<const Windows::Foundation::TypedEventHandler<Windows::IInspectable, Windows::UI::Core::KeyEventArgs> *>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_KeyDown(event_token cookie) noexcept override
    {
        try
        {
            shim().KeyDown(cookie);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_KeyUp(abi_arg_in<Windows::Foundation::TypedEventHandler<Windows::IInspectable, Windows::UI::Core::KeyEventArgs>> handler, event_token * pCookie) noexcept override
    {
        try
        {
            *pCookie = detach(shim().KeyUp(*reinterpret_cast<const Windows::Foundation::TypedEventHandler<Windows::IInspectable, Windows::UI::Core::KeyEventArgs> *>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_KeyUp(event_token cookie) noexcept override
    {
        try
        {
            shim().KeyUp(cookie);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Core::ICoreKeyboardInputSource2> : produce_base<D, Windows::UI::Core::ICoreKeyboardInputSource2>
{
    HRESULT __stdcall abi_GetCurrentKeyEventDeviceId(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(shim().GetCurrentKeyEventDeviceId());
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
struct produce<D, Windows::UI::Core::ICorePointerInputSource> : produce_base<D, Windows::UI::Core::ICorePointerInputSource>
{
    HRESULT __stdcall abi_ReleasePointerCapture() noexcept override
    {
        try
        {
            shim().ReleasePointerCapture();
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_SetPointerCapture() noexcept override
    {
        try
        {
            shim().SetPointerCapture();
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_HasCapture(bool * value) noexcept override
    {
        try
        {
            *value = detach(shim().HasCapture());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_PointerPosition(abi_arg_out<Windows::Foundation::Point> value) noexcept override
    {
        try
        {
            *value = detach(shim().PointerPosition());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_PointerCursor(abi_arg_out<Windows::UI::Core::ICoreCursor> value) noexcept override
    {
        try
        {
            *value = detach(shim().PointerCursor());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_PointerCursor(abi_arg_in<Windows::UI::Core::ICoreCursor> value) noexcept override
    {
        try
        {
            shim().PointerCursor(*reinterpret_cast<const Windows::UI::Core::CoreCursor *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_PointerCaptureLost(abi_arg_in<Windows::Foundation::TypedEventHandler<Windows::IInspectable, Windows::UI::Core::PointerEventArgs>> handler, event_token * cookie) noexcept override
    {
        try
        {
            *cookie = detach(shim().PointerCaptureLost(*reinterpret_cast<const Windows::Foundation::TypedEventHandler<Windows::IInspectable, Windows::UI::Core::PointerEventArgs> *>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_PointerCaptureLost(event_token cookie) noexcept override
    {
        try
        {
            shim().PointerCaptureLost(cookie);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_PointerEntered(abi_arg_in<Windows::Foundation::TypedEventHandler<Windows::IInspectable, Windows::UI::Core::PointerEventArgs>> handler, event_token * cookie) noexcept override
    {
        try
        {
            *cookie = detach(shim().PointerEntered(*reinterpret_cast<const Windows::Foundation::TypedEventHandler<Windows::IInspectable, Windows::UI::Core::PointerEventArgs> *>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_PointerEntered(event_token cookie) noexcept override
    {
        try
        {
            shim().PointerEntered(cookie);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_PointerExited(abi_arg_in<Windows::Foundation::TypedEventHandler<Windows::IInspectable, Windows::UI::Core::PointerEventArgs>> handler, event_token * cookie) noexcept override
    {
        try
        {
            *cookie = detach(shim().PointerExited(*reinterpret_cast<const Windows::Foundation::TypedEventHandler<Windows::IInspectable, Windows::UI::Core::PointerEventArgs> *>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_PointerExited(event_token cookie) noexcept override
    {
        try
        {
            shim().PointerExited(cookie);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_PointerMoved(abi_arg_in<Windows::Foundation::TypedEventHandler<Windows::IInspectable, Windows::UI::Core::PointerEventArgs>> handler, event_token * cookie) noexcept override
    {
        try
        {
            *cookie = detach(shim().PointerMoved(*reinterpret_cast<const Windows::Foundation::TypedEventHandler<Windows::IInspectable, Windows::UI::Core::PointerEventArgs> *>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_PointerMoved(event_token cookie) noexcept override
    {
        try
        {
            shim().PointerMoved(cookie);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_PointerPressed(abi_arg_in<Windows::Foundation::TypedEventHandler<Windows::IInspectable, Windows::UI::Core::PointerEventArgs>> handler, event_token * cookie) noexcept override
    {
        try
        {
            *cookie = detach(shim().PointerPressed(*reinterpret_cast<const Windows::Foundation::TypedEventHandler<Windows::IInspectable, Windows::UI::Core::PointerEventArgs> *>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_PointerPressed(event_token cookie) noexcept override
    {
        try
        {
            shim().PointerPressed(cookie);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_PointerReleased(abi_arg_in<Windows::Foundation::TypedEventHandler<Windows::IInspectable, Windows::UI::Core::PointerEventArgs>> handler, event_token * cookie) noexcept override
    {
        try
        {
            *cookie = detach(shim().PointerReleased(*reinterpret_cast<const Windows::Foundation::TypedEventHandler<Windows::IInspectable, Windows::UI::Core::PointerEventArgs> *>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_PointerReleased(event_token cookie) noexcept override
    {
        try
        {
            shim().PointerReleased(cookie);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_PointerWheelChanged(abi_arg_in<Windows::Foundation::TypedEventHandler<Windows::IInspectable, Windows::UI::Core::PointerEventArgs>> handler, event_token * cookie) noexcept override
    {
        try
        {
            *cookie = detach(shim().PointerWheelChanged(*reinterpret_cast<const Windows::Foundation::TypedEventHandler<Windows::IInspectable, Windows::UI::Core::PointerEventArgs> *>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_PointerWheelChanged(event_token cookie) noexcept override
    {
        try
        {
            shim().PointerWheelChanged(cookie);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Core::ICorePointerRedirector> : produce_base<D, Windows::UI::Core::ICorePointerRedirector>
{
    HRESULT __stdcall add_PointerRoutedAway(abi_arg_in<Windows::Foundation::TypedEventHandler<Windows::UI::Core::ICorePointerRedirector, Windows::UI::Core::PointerEventArgs>> handler, event_token * cookie) noexcept override
    {
        try
        {
            *cookie = detach(shim().PointerRoutedAway(*reinterpret_cast<const Windows::Foundation::TypedEventHandler<Windows::UI::Core::ICorePointerRedirector, Windows::UI::Core::PointerEventArgs> *>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_PointerRoutedAway(event_token cookie) noexcept override
    {
        try
        {
            shim().PointerRoutedAway(cookie);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_PointerRoutedTo(abi_arg_in<Windows::Foundation::TypedEventHandler<Windows::UI::Core::ICorePointerRedirector, Windows::UI::Core::PointerEventArgs>> handler, event_token * cookie) noexcept override
    {
        try
        {
            *cookie = detach(shim().PointerRoutedTo(*reinterpret_cast<const Windows::Foundation::TypedEventHandler<Windows::UI::Core::ICorePointerRedirector, Windows::UI::Core::PointerEventArgs> *>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_PointerRoutedTo(event_token cookie) noexcept override
    {
        try
        {
            shim().PointerRoutedTo(cookie);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_PointerRoutedReleased(abi_arg_in<Windows::Foundation::TypedEventHandler<Windows::UI::Core::ICorePointerRedirector, Windows::UI::Core::PointerEventArgs>> handler, event_token * cookie) noexcept override
    {
        try
        {
            *cookie = detach(shim().PointerRoutedReleased(*reinterpret_cast<const Windows::Foundation::TypedEventHandler<Windows::UI::Core::ICorePointerRedirector, Windows::UI::Core::PointerEventArgs> *>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_PointerRoutedReleased(event_token cookie) noexcept override
    {
        try
        {
            shim().PointerRoutedReleased(cookie);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Core::ICoreTouchHitTesting> : produce_base<D, Windows::UI::Core::ICoreTouchHitTesting>
{
    HRESULT __stdcall add_TouchHitTesting(abi_arg_in<Windows::Foundation::TypedEventHandler<Windows::IInspectable, Windows::UI::Core::TouchHitTestingEventArgs>> handler, event_token * pCookie) noexcept override
    {
        try
        {
            *pCookie = detach(shim().TouchHitTesting(*reinterpret_cast<const Windows::Foundation::TypedEventHandler<Windows::IInspectable, Windows::UI::Core::TouchHitTestingEventArgs> *>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_TouchHitTesting(event_token cookie) noexcept override
    {
        try
        {
            shim().TouchHitTesting(cookie);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Core::ICoreWindow> : produce_base<D, Windows::UI::Core::ICoreWindow>
{
    HRESULT __stdcall get_AutomationHostProvider(abi_arg_out<Windows::IInspectable> value) noexcept override
    {
        try
        {
            *value = detach(shim().AutomationHostProvider());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Bounds(abi_arg_out<Windows::Foundation::Rect> value) noexcept override
    {
        try
        {
            *value = detach(shim().Bounds());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_CustomProperties(abi_arg_out<Windows::Foundation::Collections::IPropertySet> value) noexcept override
    {
        try
        {
            *value = detach(shim().CustomProperties());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Dispatcher(abi_arg_out<Windows::UI::Core::ICoreDispatcher> value) noexcept override
    {
        try
        {
            *value = detach(shim().Dispatcher());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_FlowDirection(Windows::UI::Core::CoreWindowFlowDirection * value) noexcept override
    {
        try
        {
            *value = detach(shim().FlowDirection());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_FlowDirection(Windows::UI::Core::CoreWindowFlowDirection value) noexcept override
    {
        try
        {
            shim().FlowDirection(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_IsInputEnabled(bool * value) noexcept override
    {
        try
        {
            *value = detach(shim().IsInputEnabled());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_IsInputEnabled(bool value) noexcept override
    {
        try
        {
            shim().IsInputEnabled(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_PointerCursor(abi_arg_out<Windows::UI::Core::ICoreCursor> value) noexcept override
    {
        try
        {
            *value = detach(shim().PointerCursor());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_PointerCursor(abi_arg_in<Windows::UI::Core::ICoreCursor> value) noexcept override
    {
        try
        {
            shim().PointerCursor(*reinterpret_cast<const Windows::UI::Core::CoreCursor *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_PointerPosition(abi_arg_out<Windows::Foundation::Point> value) noexcept override
    {
        try
        {
            *value = detach(shim().PointerPosition());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

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

    HRESULT __stdcall abi_Activate() noexcept override
    {
        try
        {
            shim().Activate();
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_Close() noexcept override
    {
        try
        {
            shim().Close();
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_GetAsyncKeyState(Windows::System::VirtualKey virtualKey, Windows::UI::Core::CoreVirtualKeyStates * KeyState) noexcept override
    {
        try
        {
            *KeyState = detach(shim().GetAsyncKeyState(virtualKey));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_GetKeyState(Windows::System::VirtualKey virtualKey, Windows::UI::Core::CoreVirtualKeyStates * KeyState) noexcept override
    {
        try
        {
            *KeyState = detach(shim().GetKeyState(virtualKey));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_ReleasePointerCapture() noexcept override
    {
        try
        {
            shim().ReleasePointerCapture();
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_SetPointerCapture() noexcept override
    {
        try
        {
            shim().SetPointerCapture();
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_Activated(abi_arg_in<Windows::Foundation::TypedEventHandler<Windows::UI::Core::CoreWindow, Windows::UI::Core::WindowActivatedEventArgs>> handler, event_token * pCookie) noexcept override
    {
        try
        {
            *pCookie = detach(shim().Activated(*reinterpret_cast<const Windows::Foundation::TypedEventHandler<Windows::UI::Core::CoreWindow, Windows::UI::Core::WindowActivatedEventArgs> *>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_Activated(event_token cookie) noexcept override
    {
        try
        {
            shim().Activated(cookie);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_AutomationProviderRequested(abi_arg_in<Windows::Foundation::TypedEventHandler<Windows::UI::Core::CoreWindow, Windows::UI::Core::AutomationProviderRequestedEventArgs>> handler, event_token * cookie) noexcept override
    {
        try
        {
            *cookie = detach(shim().AutomationProviderRequested(*reinterpret_cast<const Windows::Foundation::TypedEventHandler<Windows::UI::Core::CoreWindow, Windows::UI::Core::AutomationProviderRequestedEventArgs> *>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_AutomationProviderRequested(event_token cookie) noexcept override
    {
        try
        {
            shim().AutomationProviderRequested(cookie);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_CharacterReceived(abi_arg_in<Windows::Foundation::TypedEventHandler<Windows::UI::Core::CoreWindow, Windows::UI::Core::CharacterReceivedEventArgs>> handler, event_token * pCookie) noexcept override
    {
        try
        {
            *pCookie = detach(shim().CharacterReceived(*reinterpret_cast<const Windows::Foundation::TypedEventHandler<Windows::UI::Core::CoreWindow, Windows::UI::Core::CharacterReceivedEventArgs> *>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_CharacterReceived(event_token cookie) noexcept override
    {
        try
        {
            shim().CharacterReceived(cookie);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_Closed(abi_arg_in<Windows::Foundation::TypedEventHandler<Windows::UI::Core::CoreWindow, Windows::UI::Core::CoreWindowEventArgs>> handler, event_token * pCookie) noexcept override
    {
        try
        {
            *pCookie = detach(shim().Closed(*reinterpret_cast<const Windows::Foundation::TypedEventHandler<Windows::UI::Core::CoreWindow, Windows::UI::Core::CoreWindowEventArgs> *>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_Closed(event_token cookie) noexcept override
    {
        try
        {
            shim().Closed(cookie);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_InputEnabled(abi_arg_in<Windows::Foundation::TypedEventHandler<Windows::UI::Core::CoreWindow, Windows::UI::Core::InputEnabledEventArgs>> handler, event_token * pCookie) noexcept override
    {
        try
        {
            *pCookie = detach(shim().InputEnabled(*reinterpret_cast<const Windows::Foundation::TypedEventHandler<Windows::UI::Core::CoreWindow, Windows::UI::Core::InputEnabledEventArgs> *>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_InputEnabled(event_token cookie) noexcept override
    {
        try
        {
            shim().InputEnabled(cookie);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_KeyDown(abi_arg_in<Windows::Foundation::TypedEventHandler<Windows::UI::Core::CoreWindow, Windows::UI::Core::KeyEventArgs>> handler, event_token * pCookie) noexcept override
    {
        try
        {
            *pCookie = detach(shim().KeyDown(*reinterpret_cast<const Windows::Foundation::TypedEventHandler<Windows::UI::Core::CoreWindow, Windows::UI::Core::KeyEventArgs> *>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_KeyDown(event_token cookie) noexcept override
    {
        try
        {
            shim().KeyDown(cookie);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_KeyUp(abi_arg_in<Windows::Foundation::TypedEventHandler<Windows::UI::Core::CoreWindow, Windows::UI::Core::KeyEventArgs>> handler, event_token * pCookie) noexcept override
    {
        try
        {
            *pCookie = detach(shim().KeyUp(*reinterpret_cast<const Windows::Foundation::TypedEventHandler<Windows::UI::Core::CoreWindow, Windows::UI::Core::KeyEventArgs> *>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_KeyUp(event_token cookie) noexcept override
    {
        try
        {
            shim().KeyUp(cookie);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_PointerCaptureLost(abi_arg_in<Windows::Foundation::TypedEventHandler<Windows::UI::Core::CoreWindow, Windows::UI::Core::PointerEventArgs>> handler, event_token * cookie) noexcept override
    {
        try
        {
            *cookie = detach(shim().PointerCaptureLost(*reinterpret_cast<const Windows::Foundation::TypedEventHandler<Windows::UI::Core::CoreWindow, Windows::UI::Core::PointerEventArgs> *>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_PointerCaptureLost(event_token cookie) noexcept override
    {
        try
        {
            shim().PointerCaptureLost(cookie);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_PointerEntered(abi_arg_in<Windows::Foundation::TypedEventHandler<Windows::UI::Core::CoreWindow, Windows::UI::Core::PointerEventArgs>> handler, event_token * cookie) noexcept override
    {
        try
        {
            *cookie = detach(shim().PointerEntered(*reinterpret_cast<const Windows::Foundation::TypedEventHandler<Windows::UI::Core::CoreWindow, Windows::UI::Core::PointerEventArgs> *>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_PointerEntered(event_token cookie) noexcept override
    {
        try
        {
            shim().PointerEntered(cookie);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_PointerExited(abi_arg_in<Windows::Foundation::TypedEventHandler<Windows::UI::Core::CoreWindow, Windows::UI::Core::PointerEventArgs>> handler, event_token * cookie) noexcept override
    {
        try
        {
            *cookie = detach(shim().PointerExited(*reinterpret_cast<const Windows::Foundation::TypedEventHandler<Windows::UI::Core::CoreWindow, Windows::UI::Core::PointerEventArgs> *>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_PointerExited(event_token cookie) noexcept override
    {
        try
        {
            shim().PointerExited(cookie);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_PointerMoved(abi_arg_in<Windows::Foundation::TypedEventHandler<Windows::UI::Core::CoreWindow, Windows::UI::Core::PointerEventArgs>> handler, event_token * cookie) noexcept override
    {
        try
        {
            *cookie = detach(shim().PointerMoved(*reinterpret_cast<const Windows::Foundation::TypedEventHandler<Windows::UI::Core::CoreWindow, Windows::UI::Core::PointerEventArgs> *>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_PointerMoved(event_token cookie) noexcept override
    {
        try
        {
            shim().PointerMoved(cookie);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_PointerPressed(abi_arg_in<Windows::Foundation::TypedEventHandler<Windows::UI::Core::CoreWindow, Windows::UI::Core::PointerEventArgs>> handler, event_token * cookie) noexcept override
    {
        try
        {
            *cookie = detach(shim().PointerPressed(*reinterpret_cast<const Windows::Foundation::TypedEventHandler<Windows::UI::Core::CoreWindow, Windows::UI::Core::PointerEventArgs> *>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_PointerPressed(event_token cookie) noexcept override
    {
        try
        {
            shim().PointerPressed(cookie);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_PointerReleased(abi_arg_in<Windows::Foundation::TypedEventHandler<Windows::UI::Core::CoreWindow, Windows::UI::Core::PointerEventArgs>> handler, event_token * cookie) noexcept override
    {
        try
        {
            *cookie = detach(shim().PointerReleased(*reinterpret_cast<const Windows::Foundation::TypedEventHandler<Windows::UI::Core::CoreWindow, Windows::UI::Core::PointerEventArgs> *>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_PointerReleased(event_token cookie) noexcept override
    {
        try
        {
            shim().PointerReleased(cookie);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_TouchHitTesting(abi_arg_in<Windows::Foundation::TypedEventHandler<Windows::UI::Core::CoreWindow, Windows::UI::Core::TouchHitTestingEventArgs>> handler, event_token * pCookie) noexcept override
    {
        try
        {
            *pCookie = detach(shim().TouchHitTesting(*reinterpret_cast<const Windows::Foundation::TypedEventHandler<Windows::UI::Core::CoreWindow, Windows::UI::Core::TouchHitTestingEventArgs> *>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_TouchHitTesting(event_token cookie) noexcept override
    {
        try
        {
            shim().TouchHitTesting(cookie);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_PointerWheelChanged(abi_arg_in<Windows::Foundation::TypedEventHandler<Windows::UI::Core::CoreWindow, Windows::UI::Core::PointerEventArgs>> handler, event_token * cookie) noexcept override
    {
        try
        {
            *cookie = detach(shim().PointerWheelChanged(*reinterpret_cast<const Windows::Foundation::TypedEventHandler<Windows::UI::Core::CoreWindow, Windows::UI::Core::PointerEventArgs> *>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_PointerWheelChanged(event_token cookie) noexcept override
    {
        try
        {
            shim().PointerWheelChanged(cookie);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_SizeChanged(abi_arg_in<Windows::Foundation::TypedEventHandler<Windows::UI::Core::CoreWindow, Windows::UI::Core::WindowSizeChangedEventArgs>> handler, event_token * pCookie) noexcept override
    {
        try
        {
            *pCookie = detach(shim().SizeChanged(*reinterpret_cast<const Windows::Foundation::TypedEventHandler<Windows::UI::Core::CoreWindow, Windows::UI::Core::WindowSizeChangedEventArgs> *>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_SizeChanged(event_token cookie) noexcept override
    {
        try
        {
            shim().SizeChanged(cookie);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_VisibilityChanged(abi_arg_in<Windows::Foundation::TypedEventHandler<Windows::UI::Core::CoreWindow, Windows::UI::Core::VisibilityChangedEventArgs>> handler, event_token * pCookie) noexcept override
    {
        try
        {
            *pCookie = detach(shim().VisibilityChanged(*reinterpret_cast<const Windows::Foundation::TypedEventHandler<Windows::UI::Core::CoreWindow, Windows::UI::Core::VisibilityChangedEventArgs> *>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_VisibilityChanged(event_token cookie) noexcept override
    {
        try
        {
            shim().VisibilityChanged(cookie);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Core::ICoreWindow2> : produce_base<D, Windows::UI::Core::ICoreWindow2>
{
    HRESULT __stdcall put_PointerPosition(abi_arg_in<Windows::Foundation::Point> value) noexcept override
    {
        try
        {
            shim().PointerPosition(*reinterpret_cast<const Windows::Foundation::Point *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Core::ICoreWindow3> : produce_base<D, Windows::UI::Core::ICoreWindow3>
{
    HRESULT __stdcall add_ClosestInteractiveBoundsRequested(abi_arg_in<Windows::Foundation::TypedEventHandler<Windows::UI::Core::CoreWindow, Windows::UI::Core::ClosestInteractiveBoundsRequestedEventArgs>> handler, event_token * pCookie) noexcept override
    {
        try
        {
            *pCookie = detach(shim().ClosestInteractiveBoundsRequested(*reinterpret_cast<const Windows::Foundation::TypedEventHandler<Windows::UI::Core::CoreWindow, Windows::UI::Core::ClosestInteractiveBoundsRequestedEventArgs> *>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_ClosestInteractiveBoundsRequested(event_token cookie) noexcept override
    {
        try
        {
            shim().ClosestInteractiveBoundsRequested(cookie);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_GetCurrentKeyEventDeviceId(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(shim().GetCurrentKeyEventDeviceId());
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
struct produce<D, Windows::UI::Core::ICoreWindowDialog> : produce_base<D, Windows::UI::Core::ICoreWindowDialog>
{
    HRESULT __stdcall add_Showing(abi_arg_in<Windows::Foundation::TypedEventHandler<Windows::UI::Core::CoreWindow, Windows::UI::Core::CoreWindowPopupShowingEventArgs>> handler, event_token * cookie) noexcept override
    {
        try
        {
            *cookie = detach(shim().Showing(*reinterpret_cast<const Windows::Foundation::TypedEventHandler<Windows::UI::Core::CoreWindow, Windows::UI::Core::CoreWindowPopupShowingEventArgs> *>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_Showing(event_token cookie) noexcept override
    {
        try
        {
            shim().Showing(cookie);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_MaxSize(abi_arg_out<Windows::Foundation::Size> value) noexcept override
    {
        try
        {
            *value = detach(shim().MaxSize());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_MinSize(abi_arg_out<Windows::Foundation::Size> value) noexcept override
    {
        try
        {
            *value = detach(shim().MinSize());
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

    HRESULT __stdcall get_IsInteractionDelayed(int32_t * value) noexcept override
    {
        try
        {
            *value = detach(shim().IsInteractionDelayed());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_IsInteractionDelayed(int32_t value) noexcept override
    {
        try
        {
            shim().IsInteractionDelayed(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Commands(abi_arg_out<Windows::Foundation::Collections::IVector<Windows::UI::Popups::IUICommand>> value) noexcept override
    {
        try
        {
            *value = detach(shim().Commands());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_DefaultCommandIndex(uint32_t * value) noexcept override
    {
        try
        {
            *value = detach(shim().DefaultCommandIndex());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_DefaultCommandIndex(uint32_t value) noexcept override
    {
        try
        {
            shim().DefaultCommandIndex(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_CancelCommandIndex(uint32_t * value) noexcept override
    {
        try
        {
            *value = detach(shim().CancelCommandIndex());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_CancelCommandIndex(uint32_t value) noexcept override
    {
        try
        {
            shim().CancelCommandIndex(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_BackButtonCommand(abi_arg_out<Windows::UI::Popups::UICommandInvokedHandler> value) noexcept override
    {
        try
        {
            *value = detach(shim().BackButtonCommand());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_BackButtonCommand(abi_arg_in<Windows::UI::Popups::UICommandInvokedHandler> value) noexcept override
    {
        try
        {
            shim().BackButtonCommand(*reinterpret_cast<const Windows::UI::Popups::UICommandInvokedHandler *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_ShowAsync(abi_arg_out<Windows::Foundation::IAsyncOperation<Windows::UI::Popups::IUICommand>> asyncInfo) noexcept override
    {
        try
        {
            *asyncInfo = detach(shim().ShowAsync());
            return S_OK;
        }
        catch (...)
        {
            *asyncInfo = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Core::ICoreWindowDialogFactory> : produce_base<D, Windows::UI::Core::ICoreWindowDialogFactory>
{
    HRESULT __stdcall abi_CreateWithTitle(abi_arg_in<hstring> title, abi_arg_out<Windows::UI::Core::ICoreWindowDialog> coreWindowDialog) noexcept override
    {
        try
        {
            *coreWindowDialog = detach(shim().CreateWithTitle(*reinterpret_cast<const hstring *>(&title)));
            return S_OK;
        }
        catch (...)
        {
            *coreWindowDialog = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Core::ICoreWindowEventArgs> : produce_base<D, Windows::UI::Core::ICoreWindowEventArgs>
{
    HRESULT __stdcall get_Handled(bool * value) noexcept override
    {
        try
        {
            *value = detach(shim().Handled());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Handled(bool value) noexcept override
    {
        try
        {
            shim().Handled(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Core::ICoreWindowFlyout> : produce_base<D, Windows::UI::Core::ICoreWindowFlyout>
{
    HRESULT __stdcall add_Showing(abi_arg_in<Windows::Foundation::TypedEventHandler<Windows::UI::Core::CoreWindow, Windows::UI::Core::CoreWindowPopupShowingEventArgs>> handler, event_token * cookie) noexcept override
    {
        try
        {
            *cookie = detach(shim().Showing(*reinterpret_cast<const Windows::Foundation::TypedEventHandler<Windows::UI::Core::CoreWindow, Windows::UI::Core::CoreWindowPopupShowingEventArgs> *>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_Showing(event_token cookie) noexcept override
    {
        try
        {
            shim().Showing(cookie);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_MaxSize(abi_arg_out<Windows::Foundation::Size> value) noexcept override
    {
        try
        {
            *value = detach(shim().MaxSize());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_MinSize(abi_arg_out<Windows::Foundation::Size> value) noexcept override
    {
        try
        {
            *value = detach(shim().MinSize());
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

    HRESULT __stdcall get_IsInteractionDelayed(int32_t * value) noexcept override
    {
        try
        {
            *value = detach(shim().IsInteractionDelayed());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_IsInteractionDelayed(int32_t value) noexcept override
    {
        try
        {
            shim().IsInteractionDelayed(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Commands(abi_arg_out<Windows::Foundation::Collections::IVector<Windows::UI::Popups::IUICommand>> value) noexcept override
    {
        try
        {
            *value = detach(shim().Commands());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_DefaultCommandIndex(uint32_t * value) noexcept override
    {
        try
        {
            *value = detach(shim().DefaultCommandIndex());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_DefaultCommandIndex(uint32_t value) noexcept override
    {
        try
        {
            shim().DefaultCommandIndex(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_BackButtonCommand(abi_arg_out<Windows::UI::Popups::UICommandInvokedHandler> value) noexcept override
    {
        try
        {
            *value = detach(shim().BackButtonCommand());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_BackButtonCommand(abi_arg_in<Windows::UI::Popups::UICommandInvokedHandler> value) noexcept override
    {
        try
        {
            shim().BackButtonCommand(*reinterpret_cast<const Windows::UI::Popups::UICommandInvokedHandler *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_ShowAsync(abi_arg_out<Windows::Foundation::IAsyncOperation<Windows::UI::Popups::IUICommand>> asyncInfo) noexcept override
    {
        try
        {
            *asyncInfo = detach(shim().ShowAsync());
            return S_OK;
        }
        catch (...)
        {
            *asyncInfo = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Core::ICoreWindowFlyoutFactory> : produce_base<D, Windows::UI::Core::ICoreWindowFlyoutFactory>
{
    HRESULT __stdcall abi_Create(abi_arg_in<Windows::Foundation::Point> position, abi_arg_out<Windows::UI::Core::ICoreWindowFlyout> coreWindowFlyout) noexcept override
    {
        try
        {
            *coreWindowFlyout = detach(shim().Create(*reinterpret_cast<const Windows::Foundation::Point *>(&position)));
            return S_OK;
        }
        catch (...)
        {
            *coreWindowFlyout = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_CreateWithTitle(abi_arg_in<Windows::Foundation::Point> position, abi_arg_in<hstring> title, abi_arg_out<Windows::UI::Core::ICoreWindowFlyout> coreWindowFlyout) noexcept override
    {
        try
        {
            *coreWindowFlyout = detach(shim().CreateWithTitle(*reinterpret_cast<const Windows::Foundation::Point *>(&position), *reinterpret_cast<const hstring *>(&title)));
            return S_OK;
        }
        catch (...)
        {
            *coreWindowFlyout = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Core::ICoreWindowPopupShowingEventArgs> : produce_base<D, Windows::UI::Core::ICoreWindowPopupShowingEventArgs>
{
    HRESULT __stdcall abi_SetDesiredSize(abi_arg_in<Windows::Foundation::Size> value) noexcept override
    {
        try
        {
            shim().SetDesiredSize(*reinterpret_cast<const Windows::Foundation::Size *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Core::ICoreWindowResizeManager> : produce_base<D, Windows::UI::Core::ICoreWindowResizeManager>
{
    HRESULT __stdcall abi_NotifyLayoutCompleted() noexcept override
    {
        try
        {
            shim().NotifyLayoutCompleted();
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Core::ICoreWindowResizeManagerLayoutCapability> : produce_base<D, Windows::UI::Core::ICoreWindowResizeManagerLayoutCapability>
{
    HRESULT __stdcall put_ShouldWaitForLayoutCompletion(bool value) noexcept override
    {
        try
        {
            shim().ShouldWaitForLayoutCompletion(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ShouldWaitForLayoutCompletion(bool * value) noexcept override
    {
        try
        {
            *value = detach(shim().ShouldWaitForLayoutCompletion());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Core::ICoreWindowResizeManagerStatics> : produce_base<D, Windows::UI::Core::ICoreWindowResizeManagerStatics>
{
    HRESULT __stdcall abi_GetForCurrentView(abi_arg_out<Windows::UI::Core::ICoreWindowResizeManager> CoreWindowResizeManager) noexcept override
    {
        try
        {
            *CoreWindowResizeManager = detach(shim().GetForCurrentView());
            return S_OK;
        }
        catch (...)
        {
            *CoreWindowResizeManager = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Core::ICoreWindowStatic> : produce_base<D, Windows::UI::Core::ICoreWindowStatic>
{
    HRESULT __stdcall abi_GetForCurrentThread(abi_arg_out<Windows::UI::Core::ICoreWindow> ppWindow) noexcept override
    {
        try
        {
            *ppWindow = detach(shim().GetForCurrentThread());
            return S_OK;
        }
        catch (...)
        {
            *ppWindow = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Core::IIdleDispatchedHandlerArgs> : produce_base<D, Windows::UI::Core::IIdleDispatchedHandlerArgs>
{
    HRESULT __stdcall get_IsDispatcherIdle(bool * value) noexcept override
    {
        try
        {
            *value = detach(shim().IsDispatcherIdle());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Core::IInitializeWithCoreWindow> : produce_base<D, Windows::UI::Core::IInitializeWithCoreWindow>
{
    HRESULT __stdcall abi_Initialize(abi_arg_in<Windows::UI::Core::ICoreWindow> window) noexcept override
    {
        try
        {
            shim().Initialize(*reinterpret_cast<const Windows::UI::Core::CoreWindow *>(&window));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Core::IInputEnabledEventArgs> : produce_base<D, Windows::UI::Core::IInputEnabledEventArgs>
{
    HRESULT __stdcall get_InputEnabled(bool * value) noexcept override
    {
        try
        {
            *value = detach(shim().InputEnabled());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Core::IKeyEventArgs> : produce_base<D, Windows::UI::Core::IKeyEventArgs>
{
    HRESULT __stdcall get_VirtualKey(Windows::System::VirtualKey * value) noexcept override
    {
        try
        {
            *value = detach(shim().VirtualKey());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_KeyStatus(abi_arg_out<Windows::UI::Core::CorePhysicalKeyStatus> value) noexcept override
    {
        try
        {
            *value = detach(shim().KeyStatus());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Core::IKeyEventArgs2> : produce_base<D, Windows::UI::Core::IKeyEventArgs2>
{
    HRESULT __stdcall get_DeviceId(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(shim().DeviceId());
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
struct produce<D, Windows::UI::Core::IPointerEventArgs> : produce_base<D, Windows::UI::Core::IPointerEventArgs>
{
    HRESULT __stdcall get_CurrentPoint(abi_arg_out<Windows::UI::Input::IPointerPoint> value) noexcept override
    {
        try
        {
            *value = detach(shim().CurrentPoint());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_KeyModifiers(Windows::System::VirtualKeyModifiers * value) noexcept override
    {
        try
        {
            *value = detach(shim().KeyModifiers());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_GetIntermediatePoints(abi_arg_out<Windows::Foundation::Collections::IVector<Windows::UI::Input::PointerPoint>> value) noexcept override
    {
        try
        {
            *value = detach(shim().GetIntermediatePoints());
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
struct produce<D, Windows::UI::Core::ISystemNavigationManager> : produce_base<D, Windows::UI::Core::ISystemNavigationManager>
{
    HRESULT __stdcall add_BackRequested(abi_arg_in<Windows::Foundation::EventHandler<Windows::UI::Core::BackRequestedEventArgs>> handler, event_token * token) noexcept override
    {
        try
        {
            *token = detach(shim().BackRequested(*reinterpret_cast<const Windows::Foundation::EventHandler<Windows::UI::Core::BackRequestedEventArgs> *>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_BackRequested(event_token token) noexcept override
    {
        try
        {
            shim().BackRequested(token);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Core::ISystemNavigationManager2> : produce_base<D, Windows::UI::Core::ISystemNavigationManager2>
{
    HRESULT __stdcall get_AppViewBackButtonVisibility(Windows::UI::Core::AppViewBackButtonVisibility * value) noexcept override
    {
        try
        {
            *value = detach(shim().AppViewBackButtonVisibility());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_AppViewBackButtonVisibility(Windows::UI::Core::AppViewBackButtonVisibility value) noexcept override
    {
        try
        {
            shim().AppViewBackButtonVisibility(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Core::ISystemNavigationManagerStatics> : produce_base<D, Windows::UI::Core::ISystemNavigationManagerStatics>
{
    HRESULT __stdcall abi_GetForCurrentView(abi_arg_out<Windows::UI::Core::ISystemNavigationManager> loader) noexcept override
    {
        try
        {
            *loader = detach(shim().GetForCurrentView());
            return S_OK;
        }
        catch (...)
        {
            *loader = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Core::ITouchHitTestingEventArgs> : produce_base<D, Windows::UI::Core::ITouchHitTestingEventArgs>
{
    HRESULT __stdcall get_ProximityEvaluation(abi_arg_out<Windows::UI::Core::CoreProximityEvaluation> value) noexcept override
    {
        try
        {
            *value = detach(shim().ProximityEvaluation());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_ProximityEvaluation(abi_arg_in<Windows::UI::Core::CoreProximityEvaluation> value) noexcept override
    {
        try
        {
            shim().ProximityEvaluation(*reinterpret_cast<const Windows::UI::Core::CoreProximityEvaluation *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Point(abi_arg_out<Windows::Foundation::Point> value) noexcept override
    {
        try
        {
            *value = detach(shim().Point());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_BoundingBox(abi_arg_out<Windows::Foundation::Rect> value) noexcept override
    {
        try
        {
            *value = detach(shim().BoundingBox());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_EvaluateProximityToRect(abi_arg_in<Windows::Foundation::Rect> controlBoundingBox, abi_arg_out<Windows::UI::Core::CoreProximityEvaluation> proximityEvaluation) noexcept override
    {
        try
        {
            *proximityEvaluation = detach(shim().EvaluateProximity(*reinterpret_cast<const Windows::Foundation::Rect *>(&controlBoundingBox)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_EvaluateProximityToPolygon(uint32_t __controlVerticesSize, abi_arg_in<Windows::Foundation::Point> * controlVertices, abi_arg_out<Windows::UI::Core::CoreProximityEvaluation> proximityEvaluation) noexcept override
    {
        try
        {
            *proximityEvaluation = detach(shim().EvaluateProximity(*reinterpret_cast<const Windows::Foundation::Point *>(&controlVertices)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Core::IVisibilityChangedEventArgs> : produce_base<D, Windows::UI::Core::IVisibilityChangedEventArgs>
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
};

template <typename D>
struct produce<D, Windows::UI::Core::IWindowActivatedEventArgs> : produce_base<D, Windows::UI::Core::IWindowActivatedEventArgs>
{
    HRESULT __stdcall get_WindowActivationState(Windows::UI::Core::CoreWindowActivationState * value) noexcept override
    {
        try
        {
            *value = detach(shim().WindowActivationState());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Core::IWindowSizeChangedEventArgs> : produce_base<D, Windows::UI::Core::IWindowSizeChangedEventArgs>
{
    HRESULT __stdcall get_Size(abi_arg_out<Windows::Foundation::Size> value) noexcept override
    {
        try
        {
            *value = detach(shim().Size());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

}

namespace Windows::UI::Core {

template <typename D> void impl_ICoreWindowPopupShowingEventArgs<D>::SetDesiredSize(const Windows::Foundation::Size & value) const
{
    check_hresult(shim()->abi_SetDesiredSize(get(value)));
}

template <typename D> event_token impl_ICoreWindowDialog<D>::Showing(const Windows::Foundation::TypedEventHandler<Windows::UI::Core::CoreWindow, Windows::UI::Core::CoreWindowPopupShowingEventArgs> & handler) const
{
    event_token cookie {};
    check_hresult(shim()->add_Showing(get(handler), &cookie));
    return cookie;
}

template <typename D> event_revoker<ICoreWindowDialog> impl_ICoreWindowDialog<D>::Showing(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::UI::Core::CoreWindow, Windows::UI::Core::CoreWindowPopupShowingEventArgs> & handler) const
{
    return impl::make_event_revoker<D, ICoreWindowDialog>(this, &ABI::Windows::UI::Core::ICoreWindowDialog::remove_Showing, Showing(handler));
}

template <typename D> void impl_ICoreWindowDialog<D>::Showing(event_token cookie) const
{
    check_hresult(shim()->remove_Showing(cookie));
}

template <typename D> Windows::Foundation::Size impl_ICoreWindowDialog<D>::MaxSize() const
{
    Windows::Foundation::Size value {};
    check_hresult(shim()->get_MaxSize(put(value)));
    return value;
}

template <typename D> Windows::Foundation::Size impl_ICoreWindowDialog<D>::MinSize() const
{
    Windows::Foundation::Size value {};
    check_hresult(shim()->get_MinSize(put(value)));
    return value;
}

template <typename D> hstring impl_ICoreWindowDialog<D>::Title() const
{
    hstring value;
    check_hresult(shim()->get_Title(put(value)));
    return value;
}

template <typename D> void impl_ICoreWindowDialog<D>::Title(hstring_ref value) const
{
    check_hresult(shim()->put_Title(get(value)));
}

template <typename D> int32_t impl_ICoreWindowDialog<D>::IsInteractionDelayed() const
{
    int32_t value {};
    check_hresult(shim()->get_IsInteractionDelayed(&value));
    return value;
}

template <typename D> void impl_ICoreWindowDialog<D>::IsInteractionDelayed(int32_t value) const
{
    check_hresult(shim()->put_IsInteractionDelayed(value));
}

template <typename D> Windows::Foundation::Collections::IVector<Windows::UI::Popups::IUICommand> impl_ICoreWindowDialog<D>::Commands() const
{
    Windows::Foundation::Collections::IVector<Windows::UI::Popups::IUICommand> value;
    check_hresult(shim()->get_Commands(put(value)));
    return value;
}

template <typename D> uint32_t impl_ICoreWindowDialog<D>::DefaultCommandIndex() const
{
    uint32_t value {};
    check_hresult(shim()->get_DefaultCommandIndex(&value));
    return value;
}

template <typename D> void impl_ICoreWindowDialog<D>::DefaultCommandIndex(uint32_t value) const
{
    check_hresult(shim()->put_DefaultCommandIndex(value));
}

template <typename D> uint32_t impl_ICoreWindowDialog<D>::CancelCommandIndex() const
{
    uint32_t value {};
    check_hresult(shim()->get_CancelCommandIndex(&value));
    return value;
}

template <typename D> void impl_ICoreWindowDialog<D>::CancelCommandIndex(uint32_t value) const
{
    check_hresult(shim()->put_CancelCommandIndex(value));
}

template <typename D> Windows::UI::Popups::UICommandInvokedHandler impl_ICoreWindowDialog<D>::BackButtonCommand() const
{
    Windows::UI::Popups::UICommandInvokedHandler value {};
    check_hresult(shim()->get_BackButtonCommand(put(value)));
    return value;
}

template <typename D> void impl_ICoreWindowDialog<D>::BackButtonCommand(const Windows::UI::Popups::UICommandInvokedHandler & value) const
{
    check_hresult(shim()->put_BackButtonCommand(get(value)));
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::UI::Popups::IUICommand> impl_ICoreWindowDialog<D>::ShowAsync() const
{
    Windows::Foundation::IAsyncOperation<Windows::UI::Popups::IUICommand> asyncInfo;
    check_hresult(shim()->abi_ShowAsync(put(asyncInfo)));
    return asyncInfo;
}

template <typename D> Windows::UI::Core::CoreWindowDialog impl_ICoreWindowDialogFactory<D>::CreateWithTitle(hstring_ref title) const
{
    Windows::UI::Core::CoreWindowDialog coreWindowDialog { nullptr };
    check_hresult(shim()->abi_CreateWithTitle(get(title), put(coreWindowDialog)));
    return coreWindowDialog;
}

template <typename D> event_token impl_ICoreWindowFlyout<D>::Showing(const Windows::Foundation::TypedEventHandler<Windows::UI::Core::CoreWindow, Windows::UI::Core::CoreWindowPopupShowingEventArgs> & handler) const
{
    event_token cookie {};
    check_hresult(shim()->add_Showing(get(handler), &cookie));
    return cookie;
}

template <typename D> event_revoker<ICoreWindowFlyout> impl_ICoreWindowFlyout<D>::Showing(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::UI::Core::CoreWindow, Windows::UI::Core::CoreWindowPopupShowingEventArgs> & handler) const
{
    return impl::make_event_revoker<D, ICoreWindowFlyout>(this, &ABI::Windows::UI::Core::ICoreWindowFlyout::remove_Showing, Showing(handler));
}

template <typename D> void impl_ICoreWindowFlyout<D>::Showing(event_token cookie) const
{
    check_hresult(shim()->remove_Showing(cookie));
}

template <typename D> Windows::Foundation::Size impl_ICoreWindowFlyout<D>::MaxSize() const
{
    Windows::Foundation::Size value {};
    check_hresult(shim()->get_MaxSize(put(value)));
    return value;
}

template <typename D> Windows::Foundation::Size impl_ICoreWindowFlyout<D>::MinSize() const
{
    Windows::Foundation::Size value {};
    check_hresult(shim()->get_MinSize(put(value)));
    return value;
}

template <typename D> hstring impl_ICoreWindowFlyout<D>::Title() const
{
    hstring value;
    check_hresult(shim()->get_Title(put(value)));
    return value;
}

template <typename D> void impl_ICoreWindowFlyout<D>::Title(hstring_ref value) const
{
    check_hresult(shim()->put_Title(get(value)));
}

template <typename D> int32_t impl_ICoreWindowFlyout<D>::IsInteractionDelayed() const
{
    int32_t value {};
    check_hresult(shim()->get_IsInteractionDelayed(&value));
    return value;
}

template <typename D> void impl_ICoreWindowFlyout<D>::IsInteractionDelayed(int32_t value) const
{
    check_hresult(shim()->put_IsInteractionDelayed(value));
}

template <typename D> Windows::Foundation::Collections::IVector<Windows::UI::Popups::IUICommand> impl_ICoreWindowFlyout<D>::Commands() const
{
    Windows::Foundation::Collections::IVector<Windows::UI::Popups::IUICommand> value;
    check_hresult(shim()->get_Commands(put(value)));
    return value;
}

template <typename D> uint32_t impl_ICoreWindowFlyout<D>::DefaultCommandIndex() const
{
    uint32_t value {};
    check_hresult(shim()->get_DefaultCommandIndex(&value));
    return value;
}

template <typename D> void impl_ICoreWindowFlyout<D>::DefaultCommandIndex(uint32_t value) const
{
    check_hresult(shim()->put_DefaultCommandIndex(value));
}

template <typename D> Windows::UI::Popups::UICommandInvokedHandler impl_ICoreWindowFlyout<D>::BackButtonCommand() const
{
    Windows::UI::Popups::UICommandInvokedHandler value {};
    check_hresult(shim()->get_BackButtonCommand(put(value)));
    return value;
}

template <typename D> void impl_ICoreWindowFlyout<D>::BackButtonCommand(const Windows::UI::Popups::UICommandInvokedHandler & value) const
{
    check_hresult(shim()->put_BackButtonCommand(get(value)));
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::UI::Popups::IUICommand> impl_ICoreWindowFlyout<D>::ShowAsync() const
{
    Windows::Foundation::IAsyncOperation<Windows::UI::Popups::IUICommand> asyncInfo;
    check_hresult(shim()->abi_ShowAsync(put(asyncInfo)));
    return asyncInfo;
}

template <typename D> Windows::UI::Core::CoreWindowFlyout impl_ICoreWindowFlyoutFactory<D>::Create(const Windows::Foundation::Point & position) const
{
    Windows::UI::Core::CoreWindowFlyout coreWindowFlyout { nullptr };
    check_hresult(shim()->abi_Create(get(position), put(coreWindowFlyout)));
    return coreWindowFlyout;
}

template <typename D> Windows::UI::Core::CoreWindowFlyout impl_ICoreWindowFlyoutFactory<D>::CreateWithTitle(const Windows::Foundation::Point & position, hstring_ref title) const
{
    Windows::UI::Core::CoreWindowFlyout coreWindowFlyout { nullptr };
    check_hresult(shim()->abi_CreateWithTitle(get(position), get(title), put(coreWindowFlyout)));
    return coreWindowFlyout;
}

template <typename D> bool impl_ICoreWindowEventArgs<D>::Handled() const
{
    bool value {};
    check_hresult(shim()->get_Handled(&value));
    return value;
}

template <typename D> void impl_ICoreWindowEventArgs<D>::Handled(bool value) const
{
    check_hresult(shim()->put_Handled(value));
}

template <typename D> Windows::IInspectable impl_IAutomationProviderRequestedEventArgs<D>::AutomationProvider() const
{
    Windows::IInspectable value;
    check_hresult(shim()->get_AutomationProvider(put(value)));
    return value;
}

template <typename D> void impl_IAutomationProviderRequestedEventArgs<D>::AutomationProvider(const Windows::IInspectable & value) const
{
    check_hresult(shim()->put_AutomationProvider(get(value)));
}

template <typename D> uint32_t impl_ICharacterReceivedEventArgs<D>::KeyCode() const
{
    uint32_t value {};
    check_hresult(shim()->get_KeyCode(&value));
    return value;
}

template <typename D> Windows::UI::Core::CorePhysicalKeyStatus impl_ICharacterReceivedEventArgs<D>::KeyStatus() const
{
    Windows::UI::Core::CorePhysicalKeyStatus value {};
    check_hresult(shim()->get_KeyStatus(put(value)));
    return value;
}

template <typename D> bool impl_IInputEnabledEventArgs<D>::InputEnabled() const
{
    bool value {};
    check_hresult(shim()->get_InputEnabled(&value));
    return value;
}

template <typename D> Windows::System::VirtualKey impl_IKeyEventArgs<D>::VirtualKey() const
{
    Windows::System::VirtualKey value {};
    check_hresult(shim()->get_VirtualKey(&value));
    return value;
}

template <typename D> Windows::UI::Core::CorePhysicalKeyStatus impl_IKeyEventArgs<D>::KeyStatus() const
{
    Windows::UI::Core::CorePhysicalKeyStatus value {};
    check_hresult(shim()->get_KeyStatus(put(value)));
    return value;
}

template <typename D> hstring impl_IKeyEventArgs2<D>::DeviceId() const
{
    hstring value;
    check_hresult(shim()->get_DeviceId(put(value)));
    return value;
}

template <typename D> Windows::UI::Input::PointerPoint impl_IPointerEventArgs<D>::CurrentPoint() const
{
    Windows::UI::Input::PointerPoint value { nullptr };
    check_hresult(shim()->get_CurrentPoint(put(value)));
    return value;
}

template <typename D> Windows::System::VirtualKeyModifiers impl_IPointerEventArgs<D>::KeyModifiers() const
{
    Windows::System::VirtualKeyModifiers value {};
    check_hresult(shim()->get_KeyModifiers(&value));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVector<Windows::UI::Input::PointerPoint> impl_IPointerEventArgs<D>::GetIntermediatePoints() const
{
    Windows::Foundation::Collections::IVector<Windows::UI::Input::PointerPoint> value;
    check_hresult(shim()->abi_GetIntermediatePoints(put(value)));
    return value;
}

template <typename D> Windows::UI::Core::CoreProximityEvaluation impl_ITouchHitTestingEventArgs<D>::ProximityEvaluation() const
{
    Windows::UI::Core::CoreProximityEvaluation value {};
    check_hresult(shim()->get_ProximityEvaluation(put(value)));
    return value;
}

template <typename D> void impl_ITouchHitTestingEventArgs<D>::ProximityEvaluation(const Windows::UI::Core::CoreProximityEvaluation & value) const
{
    check_hresult(shim()->put_ProximityEvaluation(get(value)));
}

template <typename D> Windows::Foundation::Point impl_ITouchHitTestingEventArgs<D>::Point() const
{
    Windows::Foundation::Point value {};
    check_hresult(shim()->get_Point(put(value)));
    return value;
}

template <typename D> Windows::Foundation::Rect impl_ITouchHitTestingEventArgs<D>::BoundingBox() const
{
    Windows::Foundation::Rect value {};
    check_hresult(shim()->get_BoundingBox(put(value)));
    return value;
}

template <typename D> Windows::UI::Core::CoreProximityEvaluation impl_ITouchHitTestingEventArgs<D>::EvaluateProximity(const Windows::Foundation::Rect & controlBoundingBox) const
{
    Windows::UI::Core::CoreProximityEvaluation proximityEvaluation {};
    check_hresult(shim()->abi_EvaluateProximityToRect(get(controlBoundingBox), put(proximityEvaluation)));
    return proximityEvaluation;
}

template <typename D> Windows::UI::Core::CoreProximityEvaluation impl_ITouchHitTestingEventArgs<D>::EvaluateProximity(array_ref<const Windows::Foundation::Point> controlVertices) const
{
    Windows::UI::Core::CoreProximityEvaluation proximityEvaluation {};
    check_hresult(shim()->abi_EvaluateProximityToPolygon(controlVertices.size(), get(controlVertices), put(proximityEvaluation)));
    return proximityEvaluation;
}

template <typename D> Windows::Foundation::Point impl_IClosestInteractiveBoundsRequestedEventArgs<D>::PointerPosition() const
{
    Windows::Foundation::Point value {};
    check_hresult(shim()->get_PointerPosition(put(value)));
    return value;
}

template <typename D> Windows::Foundation::Rect impl_IClosestInteractiveBoundsRequestedEventArgs<D>::SearchBounds() const
{
    Windows::Foundation::Rect value {};
    check_hresult(shim()->get_SearchBounds(put(value)));
    return value;
}

template <typename D> Windows::Foundation::Rect impl_IClosestInteractiveBoundsRequestedEventArgs<D>::ClosestInteractiveBounds() const
{
    Windows::Foundation::Rect value {};
    check_hresult(shim()->get_ClosestInteractiveBounds(put(value)));
    return value;
}

template <typename D> void impl_IClosestInteractiveBoundsRequestedEventArgs<D>::ClosestInteractiveBounds(const Windows::Foundation::Rect & value) const
{
    check_hresult(shim()->put_ClosestInteractiveBounds(get(value)));
}

template <typename D> Windows::UI::Core::CoreWindowActivationState impl_IWindowActivatedEventArgs<D>::WindowActivationState() const
{
    Windows::UI::Core::CoreWindowActivationState value {};
    check_hresult(shim()->get_WindowActivationState(&value));
    return value;
}

template <typename D> Windows::Foundation::Size impl_IWindowSizeChangedEventArgs<D>::Size() const
{
    Windows::Foundation::Size value {};
    check_hresult(shim()->get_Size(put(value)));
    return value;
}

template <typename D> bool impl_IVisibilityChangedEventArgs<D>::Visible() const
{
    bool value {};
    check_hresult(shim()->get_Visible(&value));
    return value;
}

template <typename D> Windows::IInspectable impl_ICoreWindow<D>::AutomationHostProvider() const
{
    Windows::IInspectable value;
    check_hresult(shim()->get_AutomationHostProvider(put(value)));
    return value;
}

template <typename D> Windows::Foundation::Rect impl_ICoreWindow<D>::Bounds() const
{
    Windows::Foundation::Rect value {};
    check_hresult(shim()->get_Bounds(put(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IPropertySet impl_ICoreWindow<D>::CustomProperties() const
{
    Windows::Foundation::Collections::IPropertySet value;
    check_hresult(shim()->get_CustomProperties(put(value)));
    return value;
}

template <typename D> Windows::UI::Core::CoreDispatcher impl_ICoreWindow<D>::Dispatcher() const
{
    Windows::UI::Core::CoreDispatcher value { nullptr };
    check_hresult(shim()->get_Dispatcher(put(value)));
    return value;
}

template <typename D> Windows::UI::Core::CoreWindowFlowDirection impl_ICoreWindow<D>::FlowDirection() const
{
    Windows::UI::Core::CoreWindowFlowDirection value {};
    check_hresult(shim()->get_FlowDirection(&value));
    return value;
}

template <typename D> void impl_ICoreWindow<D>::FlowDirection(Windows::UI::Core::CoreWindowFlowDirection value) const
{
    check_hresult(shim()->put_FlowDirection(value));
}

template <typename D> bool impl_ICoreWindow<D>::IsInputEnabled() const
{
    bool value {};
    check_hresult(shim()->get_IsInputEnabled(&value));
    return value;
}

template <typename D> void impl_ICoreWindow<D>::IsInputEnabled(bool value) const
{
    check_hresult(shim()->put_IsInputEnabled(value));
}

template <typename D> Windows::UI::Core::CoreCursor impl_ICoreWindow<D>::PointerCursor() const
{
    Windows::UI::Core::CoreCursor value { nullptr };
    check_hresult(shim()->get_PointerCursor(put(value)));
    return value;
}

template <typename D> void impl_ICoreWindow<D>::PointerCursor(const Windows::UI::Core::CoreCursor & value) const
{
    check_hresult(shim()->put_PointerCursor(get(value)));
}

template <typename D> Windows::Foundation::Point impl_ICoreWindow<D>::PointerPosition() const
{
    Windows::Foundation::Point value {};
    check_hresult(shim()->get_PointerPosition(put(value)));
    return value;
}

template <typename D> bool impl_ICoreWindow<D>::Visible() const
{
    bool value {};
    check_hresult(shim()->get_Visible(&value));
    return value;
}

template <typename D> void impl_ICoreWindow<D>::Activate() const
{
    check_hresult(shim()->abi_Activate());
}

template <typename D> void impl_ICoreWindow<D>::Close() const
{
    check_hresult(shim()->abi_Close());
}

template <typename D> Windows::UI::Core::CoreVirtualKeyStates impl_ICoreWindow<D>::GetAsyncKeyState(Windows::System::VirtualKey virtualKey) const
{
    Windows::UI::Core::CoreVirtualKeyStates KeyState {};
    check_hresult(shim()->abi_GetAsyncKeyState(virtualKey, &KeyState));
    return KeyState;
}

template <typename D> Windows::UI::Core::CoreVirtualKeyStates impl_ICoreWindow<D>::GetKeyState(Windows::System::VirtualKey virtualKey) const
{
    Windows::UI::Core::CoreVirtualKeyStates KeyState {};
    check_hresult(shim()->abi_GetKeyState(virtualKey, &KeyState));
    return KeyState;
}

template <typename D> void impl_ICoreWindow<D>::ReleasePointerCapture() const
{
    check_hresult(shim()->abi_ReleasePointerCapture());
}

template <typename D> void impl_ICoreWindow<D>::SetPointerCapture() const
{
    check_hresult(shim()->abi_SetPointerCapture());
}

template <typename D> event_token impl_ICoreWindow<D>::Activated(const Windows::Foundation::TypedEventHandler<Windows::UI::Core::CoreWindow, Windows::UI::Core::WindowActivatedEventArgs> & handler) const
{
    event_token pCookie {};
    check_hresult(shim()->add_Activated(get(handler), &pCookie));
    return pCookie;
}

template <typename D> event_revoker<ICoreWindow> impl_ICoreWindow<D>::Activated(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::UI::Core::CoreWindow, Windows::UI::Core::WindowActivatedEventArgs> & handler) const
{
    return impl::make_event_revoker<D, ICoreWindow>(this, &ABI::Windows::UI::Core::ICoreWindow::remove_Activated, Activated(handler));
}

template <typename D> void impl_ICoreWindow<D>::Activated(event_token cookie) const
{
    check_hresult(shim()->remove_Activated(cookie));
}

template <typename D> event_token impl_ICoreWindow<D>::AutomationProviderRequested(const Windows::Foundation::TypedEventHandler<Windows::UI::Core::CoreWindow, Windows::UI::Core::AutomationProviderRequestedEventArgs> & handler) const
{
    event_token cookie {};
    check_hresult(shim()->add_AutomationProviderRequested(get(handler), &cookie));
    return cookie;
}

template <typename D> event_revoker<ICoreWindow> impl_ICoreWindow<D>::AutomationProviderRequested(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::UI::Core::CoreWindow, Windows::UI::Core::AutomationProviderRequestedEventArgs> & handler) const
{
    return impl::make_event_revoker<D, ICoreWindow>(this, &ABI::Windows::UI::Core::ICoreWindow::remove_AutomationProviderRequested, AutomationProviderRequested(handler));
}

template <typename D> void impl_ICoreWindow<D>::AutomationProviderRequested(event_token cookie) const
{
    check_hresult(shim()->remove_AutomationProviderRequested(cookie));
}

template <typename D> event_token impl_ICoreWindow<D>::CharacterReceived(const Windows::Foundation::TypedEventHandler<Windows::UI::Core::CoreWindow, Windows::UI::Core::CharacterReceivedEventArgs> & handler) const
{
    event_token pCookie {};
    check_hresult(shim()->add_CharacterReceived(get(handler), &pCookie));
    return pCookie;
}

template <typename D> event_revoker<ICoreWindow> impl_ICoreWindow<D>::CharacterReceived(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::UI::Core::CoreWindow, Windows::UI::Core::CharacterReceivedEventArgs> & handler) const
{
    return impl::make_event_revoker<D, ICoreWindow>(this, &ABI::Windows::UI::Core::ICoreWindow::remove_CharacterReceived, CharacterReceived(handler));
}

template <typename D> void impl_ICoreWindow<D>::CharacterReceived(event_token cookie) const
{
    check_hresult(shim()->remove_CharacterReceived(cookie));
}

template <typename D> event_token impl_ICoreWindow<D>::Closed(const Windows::Foundation::TypedEventHandler<Windows::UI::Core::CoreWindow, Windows::UI::Core::CoreWindowEventArgs> & handler) const
{
    event_token pCookie {};
    check_hresult(shim()->add_Closed(get(handler), &pCookie));
    return pCookie;
}

template <typename D> event_revoker<ICoreWindow> impl_ICoreWindow<D>::Closed(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::UI::Core::CoreWindow, Windows::UI::Core::CoreWindowEventArgs> & handler) const
{
    return impl::make_event_revoker<D, ICoreWindow>(this, &ABI::Windows::UI::Core::ICoreWindow::remove_Closed, Closed(handler));
}

template <typename D> void impl_ICoreWindow<D>::Closed(event_token cookie) const
{
    check_hresult(shim()->remove_Closed(cookie));
}

template <typename D> event_token impl_ICoreWindow<D>::InputEnabled(const Windows::Foundation::TypedEventHandler<Windows::UI::Core::CoreWindow, Windows::UI::Core::InputEnabledEventArgs> & handler) const
{
    event_token pCookie {};
    check_hresult(shim()->add_InputEnabled(get(handler), &pCookie));
    return pCookie;
}

template <typename D> event_revoker<ICoreWindow> impl_ICoreWindow<D>::InputEnabled(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::UI::Core::CoreWindow, Windows::UI::Core::InputEnabledEventArgs> & handler) const
{
    return impl::make_event_revoker<D, ICoreWindow>(this, &ABI::Windows::UI::Core::ICoreWindow::remove_InputEnabled, InputEnabled(handler));
}

template <typename D> void impl_ICoreWindow<D>::InputEnabled(event_token cookie) const
{
    check_hresult(shim()->remove_InputEnabled(cookie));
}

template <typename D> event_token impl_ICoreWindow<D>::KeyDown(const Windows::Foundation::TypedEventHandler<Windows::UI::Core::CoreWindow, Windows::UI::Core::KeyEventArgs> & handler) const
{
    event_token pCookie {};
    check_hresult(shim()->add_KeyDown(get(handler), &pCookie));
    return pCookie;
}

template <typename D> event_revoker<ICoreWindow> impl_ICoreWindow<D>::KeyDown(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::UI::Core::CoreWindow, Windows::UI::Core::KeyEventArgs> & handler) const
{
    return impl::make_event_revoker<D, ICoreWindow>(this, &ABI::Windows::UI::Core::ICoreWindow::remove_KeyDown, KeyDown(handler));
}

template <typename D> void impl_ICoreWindow<D>::KeyDown(event_token cookie) const
{
    check_hresult(shim()->remove_KeyDown(cookie));
}

template <typename D> event_token impl_ICoreWindow<D>::KeyUp(const Windows::Foundation::TypedEventHandler<Windows::UI::Core::CoreWindow, Windows::UI::Core::KeyEventArgs> & handler) const
{
    event_token pCookie {};
    check_hresult(shim()->add_KeyUp(get(handler), &pCookie));
    return pCookie;
}

template <typename D> event_revoker<ICoreWindow> impl_ICoreWindow<D>::KeyUp(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::UI::Core::CoreWindow, Windows::UI::Core::KeyEventArgs> & handler) const
{
    return impl::make_event_revoker<D, ICoreWindow>(this, &ABI::Windows::UI::Core::ICoreWindow::remove_KeyUp, KeyUp(handler));
}

template <typename D> void impl_ICoreWindow<D>::KeyUp(event_token cookie) const
{
    check_hresult(shim()->remove_KeyUp(cookie));
}

template <typename D> event_token impl_ICoreWindow<D>::PointerCaptureLost(const Windows::Foundation::TypedEventHandler<Windows::UI::Core::CoreWindow, Windows::UI::Core::PointerEventArgs> & handler) const
{
    event_token cookie {};
    check_hresult(shim()->add_PointerCaptureLost(get(handler), &cookie));
    return cookie;
}

template <typename D> event_revoker<ICoreWindow> impl_ICoreWindow<D>::PointerCaptureLost(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::UI::Core::CoreWindow, Windows::UI::Core::PointerEventArgs> & handler) const
{
    return impl::make_event_revoker<D, ICoreWindow>(this, &ABI::Windows::UI::Core::ICoreWindow::remove_PointerCaptureLost, PointerCaptureLost(handler));
}

template <typename D> void impl_ICoreWindow<D>::PointerCaptureLost(event_token cookie) const
{
    check_hresult(shim()->remove_PointerCaptureLost(cookie));
}

template <typename D> event_token impl_ICoreWindow<D>::PointerEntered(const Windows::Foundation::TypedEventHandler<Windows::UI::Core::CoreWindow, Windows::UI::Core::PointerEventArgs> & handler) const
{
    event_token cookie {};
    check_hresult(shim()->add_PointerEntered(get(handler), &cookie));
    return cookie;
}

template <typename D> event_revoker<ICoreWindow> impl_ICoreWindow<D>::PointerEntered(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::UI::Core::CoreWindow, Windows::UI::Core::PointerEventArgs> & handler) const
{
    return impl::make_event_revoker<D, ICoreWindow>(this, &ABI::Windows::UI::Core::ICoreWindow::remove_PointerEntered, PointerEntered(handler));
}

template <typename D> void impl_ICoreWindow<D>::PointerEntered(event_token cookie) const
{
    check_hresult(shim()->remove_PointerEntered(cookie));
}

template <typename D> event_token impl_ICoreWindow<D>::PointerExited(const Windows::Foundation::TypedEventHandler<Windows::UI::Core::CoreWindow, Windows::UI::Core::PointerEventArgs> & handler) const
{
    event_token cookie {};
    check_hresult(shim()->add_PointerExited(get(handler), &cookie));
    return cookie;
}

template <typename D> event_revoker<ICoreWindow> impl_ICoreWindow<D>::PointerExited(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::UI::Core::CoreWindow, Windows::UI::Core::PointerEventArgs> & handler) const
{
    return impl::make_event_revoker<D, ICoreWindow>(this, &ABI::Windows::UI::Core::ICoreWindow::remove_PointerExited, PointerExited(handler));
}

template <typename D> void impl_ICoreWindow<D>::PointerExited(event_token cookie) const
{
    check_hresult(shim()->remove_PointerExited(cookie));
}

template <typename D> event_token impl_ICoreWindow<D>::PointerMoved(const Windows::Foundation::TypedEventHandler<Windows::UI::Core::CoreWindow, Windows::UI::Core::PointerEventArgs> & handler) const
{
    event_token cookie {};
    check_hresult(shim()->add_PointerMoved(get(handler), &cookie));
    return cookie;
}

template <typename D> event_revoker<ICoreWindow> impl_ICoreWindow<D>::PointerMoved(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::UI::Core::CoreWindow, Windows::UI::Core::PointerEventArgs> & handler) const
{
    return impl::make_event_revoker<D, ICoreWindow>(this, &ABI::Windows::UI::Core::ICoreWindow::remove_PointerMoved, PointerMoved(handler));
}

template <typename D> void impl_ICoreWindow<D>::PointerMoved(event_token cookie) const
{
    check_hresult(shim()->remove_PointerMoved(cookie));
}

template <typename D> event_token impl_ICoreWindow<D>::PointerPressed(const Windows::Foundation::TypedEventHandler<Windows::UI::Core::CoreWindow, Windows::UI::Core::PointerEventArgs> & handler) const
{
    event_token cookie {};
    check_hresult(shim()->add_PointerPressed(get(handler), &cookie));
    return cookie;
}

template <typename D> event_revoker<ICoreWindow> impl_ICoreWindow<D>::PointerPressed(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::UI::Core::CoreWindow, Windows::UI::Core::PointerEventArgs> & handler) const
{
    return impl::make_event_revoker<D, ICoreWindow>(this, &ABI::Windows::UI::Core::ICoreWindow::remove_PointerPressed, PointerPressed(handler));
}

template <typename D> void impl_ICoreWindow<D>::PointerPressed(event_token cookie) const
{
    check_hresult(shim()->remove_PointerPressed(cookie));
}

template <typename D> event_token impl_ICoreWindow<D>::PointerReleased(const Windows::Foundation::TypedEventHandler<Windows::UI::Core::CoreWindow, Windows::UI::Core::PointerEventArgs> & handler) const
{
    event_token cookie {};
    check_hresult(shim()->add_PointerReleased(get(handler), &cookie));
    return cookie;
}

template <typename D> event_revoker<ICoreWindow> impl_ICoreWindow<D>::PointerReleased(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::UI::Core::CoreWindow, Windows::UI::Core::PointerEventArgs> & handler) const
{
    return impl::make_event_revoker<D, ICoreWindow>(this, &ABI::Windows::UI::Core::ICoreWindow::remove_PointerReleased, PointerReleased(handler));
}

template <typename D> void impl_ICoreWindow<D>::PointerReleased(event_token cookie) const
{
    check_hresult(shim()->remove_PointerReleased(cookie));
}

template <typename D> event_token impl_ICoreWindow<D>::TouchHitTesting(const Windows::Foundation::TypedEventHandler<Windows::UI::Core::CoreWindow, Windows::UI::Core::TouchHitTestingEventArgs> & handler) const
{
    event_token pCookie {};
    check_hresult(shim()->add_TouchHitTesting(get(handler), &pCookie));
    return pCookie;
}

template <typename D> event_revoker<ICoreWindow> impl_ICoreWindow<D>::TouchHitTesting(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::UI::Core::CoreWindow, Windows::UI::Core::TouchHitTestingEventArgs> & handler) const
{
    return impl::make_event_revoker<D, ICoreWindow>(this, &ABI::Windows::UI::Core::ICoreWindow::remove_TouchHitTesting, TouchHitTesting(handler));
}

template <typename D> void impl_ICoreWindow<D>::TouchHitTesting(event_token cookie) const
{
    check_hresult(shim()->remove_TouchHitTesting(cookie));
}

template <typename D> event_token impl_ICoreWindow<D>::PointerWheelChanged(const Windows::Foundation::TypedEventHandler<Windows::UI::Core::CoreWindow, Windows::UI::Core::PointerEventArgs> & handler) const
{
    event_token cookie {};
    check_hresult(shim()->add_PointerWheelChanged(get(handler), &cookie));
    return cookie;
}

template <typename D> event_revoker<ICoreWindow> impl_ICoreWindow<D>::PointerWheelChanged(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::UI::Core::CoreWindow, Windows::UI::Core::PointerEventArgs> & handler) const
{
    return impl::make_event_revoker<D, ICoreWindow>(this, &ABI::Windows::UI::Core::ICoreWindow::remove_PointerWheelChanged, PointerWheelChanged(handler));
}

template <typename D> void impl_ICoreWindow<D>::PointerWheelChanged(event_token cookie) const
{
    check_hresult(shim()->remove_PointerWheelChanged(cookie));
}

template <typename D> event_token impl_ICoreWindow<D>::SizeChanged(const Windows::Foundation::TypedEventHandler<Windows::UI::Core::CoreWindow, Windows::UI::Core::WindowSizeChangedEventArgs> & handler) const
{
    event_token pCookie {};
    check_hresult(shim()->add_SizeChanged(get(handler), &pCookie));
    return pCookie;
}

template <typename D> event_revoker<ICoreWindow> impl_ICoreWindow<D>::SizeChanged(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::UI::Core::CoreWindow, Windows::UI::Core::WindowSizeChangedEventArgs> & handler) const
{
    return impl::make_event_revoker<D, ICoreWindow>(this, &ABI::Windows::UI::Core::ICoreWindow::remove_SizeChanged, SizeChanged(handler));
}

template <typename D> void impl_ICoreWindow<D>::SizeChanged(event_token cookie) const
{
    check_hresult(shim()->remove_SizeChanged(cookie));
}

template <typename D> event_token impl_ICoreWindow<D>::VisibilityChanged(const Windows::Foundation::TypedEventHandler<Windows::UI::Core::CoreWindow, Windows::UI::Core::VisibilityChangedEventArgs> & handler) const
{
    event_token pCookie {};
    check_hresult(shim()->add_VisibilityChanged(get(handler), &pCookie));
    return pCookie;
}

template <typename D> event_revoker<ICoreWindow> impl_ICoreWindow<D>::VisibilityChanged(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::UI::Core::CoreWindow, Windows::UI::Core::VisibilityChangedEventArgs> & handler) const
{
    return impl::make_event_revoker<D, ICoreWindow>(this, &ABI::Windows::UI::Core::ICoreWindow::remove_VisibilityChanged, VisibilityChanged(handler));
}

template <typename D> void impl_ICoreWindow<D>::VisibilityChanged(event_token cookie) const
{
    check_hresult(shim()->remove_VisibilityChanged(cookie));
}

template <typename D> void impl_ICoreWindow2<D>::PointerPosition(const Windows::Foundation::Point & value) const
{
    check_hresult(shim()->put_PointerPosition(get(value)));
}

template <typename D> event_token impl_ICoreWindow3<D>::ClosestInteractiveBoundsRequested(const Windows::Foundation::TypedEventHandler<Windows::UI::Core::CoreWindow, Windows::UI::Core::ClosestInteractiveBoundsRequestedEventArgs> & handler) const
{
    event_token pCookie {};
    check_hresult(shim()->add_ClosestInteractiveBoundsRequested(get(handler), &pCookie));
    return pCookie;
}

template <typename D> event_revoker<ICoreWindow3> impl_ICoreWindow3<D>::ClosestInteractiveBoundsRequested(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::UI::Core::CoreWindow, Windows::UI::Core::ClosestInteractiveBoundsRequestedEventArgs> & handler) const
{
    return impl::make_event_revoker<D, ICoreWindow3>(this, &ABI::Windows::UI::Core::ICoreWindow3::remove_ClosestInteractiveBoundsRequested, ClosestInteractiveBoundsRequested(handler));
}

template <typename D> void impl_ICoreWindow3<D>::ClosestInteractiveBoundsRequested(event_token cookie) const
{
    check_hresult(shim()->remove_ClosestInteractiveBoundsRequested(cookie));
}

template <typename D> hstring impl_ICoreWindow3<D>::GetCurrentKeyEventDeviceId() const
{
    hstring value;
    check_hresult(shim()->abi_GetCurrentKeyEventDeviceId(put(value)));
    return value;
}

template <typename D> Windows::UI::Core::CoreWindow impl_ICoreWindowStatic<D>::GetForCurrentThread() const
{
    Windows::UI::Core::CoreWindow ppWindow { nullptr };
    check_hresult(shim()->abi_GetForCurrentThread(put(ppWindow)));
    return ppWindow;
}

template <typename D> Windows::UI::Core::CoreAcceleratorKeyEventType impl_IAcceleratorKeyEventArgs<D>::EventType() const
{
    Windows::UI::Core::CoreAcceleratorKeyEventType value {};
    check_hresult(shim()->get_EventType(&value));
    return value;
}

template <typename D> Windows::System::VirtualKey impl_IAcceleratorKeyEventArgs<D>::VirtualKey() const
{
    Windows::System::VirtualKey value {};
    check_hresult(shim()->get_VirtualKey(&value));
    return value;
}

template <typename D> Windows::UI::Core::CorePhysicalKeyStatus impl_IAcceleratorKeyEventArgs<D>::KeyStatus() const
{
    Windows::UI::Core::CorePhysicalKeyStatus value {};
    check_hresult(shim()->get_KeyStatus(put(value)));
    return value;
}

template <typename D> hstring impl_IAcceleratorKeyEventArgs2<D>::DeviceId() const
{
    hstring value;
    check_hresult(shim()->get_DeviceId(put(value)));
    return value;
}

template <typename D> event_token impl_ICoreAcceleratorKeys<D>::AcceleratorKeyActivated(const Windows::Foundation::TypedEventHandler<Windows::UI::Core::CoreDispatcher, Windows::UI::Core::AcceleratorKeyEventArgs> & handler) const
{
    event_token pCookie {};
    check_hresult(shim()->add_AcceleratorKeyActivated(get(handler), &pCookie));
    return pCookie;
}

template <typename D> event_revoker<ICoreAcceleratorKeys> impl_ICoreAcceleratorKeys<D>::AcceleratorKeyActivated(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::UI::Core::CoreDispatcher, Windows::UI::Core::AcceleratorKeyEventArgs> & handler) const
{
    return impl::make_event_revoker<D, ICoreAcceleratorKeys>(this, &ABI::Windows::UI::Core::ICoreAcceleratorKeys::remove_AcceleratorKeyActivated, AcceleratorKeyActivated(handler));
}

template <typename D> void impl_ICoreAcceleratorKeys<D>::AcceleratorKeyActivated(event_token cookie) const
{
    check_hresult(shim()->remove_AcceleratorKeyActivated(cookie));
}

template <typename D> bool impl_ICoreDispatcher<D>::HasThreadAccess() const
{
    bool value {};
    check_hresult(shim()->get_HasThreadAccess(&value));
    return value;
}

template <typename D> void impl_ICoreDispatcher<D>::ProcessEvents(Windows::UI::Core::CoreProcessEventsOption options) const
{
    check_hresult(shim()->abi_ProcessEvents(options));
}

template <typename D> Windows::Foundation::IAsyncAction impl_ICoreDispatcher<D>::RunAsync(Windows::UI::Core::CoreDispatcherPriority priority, const Windows::UI::Core::DispatchedHandler & agileCallback) const
{
    Windows::Foundation::IAsyncAction asyncAction;
    check_hresult(shim()->abi_RunAsync(priority, get(agileCallback), put(asyncAction)));
    return asyncAction;
}

template <typename D> Windows::Foundation::IAsyncAction impl_ICoreDispatcher<D>::RunIdleAsync(const Windows::UI::Core::IdleDispatchedHandler & agileCallback) const
{
    Windows::Foundation::IAsyncAction asyncAction;
    check_hresult(shim()->abi_RunIdleAsync(get(agileCallback), put(asyncAction)));
    return asyncAction;
}

template <typename D> Windows::Foundation::IAsyncOperation<bool> impl_ICoreDispatcher2<D>::TryRunAsync(Windows::UI::Core::CoreDispatcherPriority priority, const Windows::UI::Core::DispatchedHandler & agileCallback) const
{
    Windows::Foundation::IAsyncOperation<bool> asyncOperation;
    check_hresult(shim()->abi_TryRunAsync(priority, get(agileCallback), put(asyncOperation)));
    return asyncOperation;
}

template <typename D> Windows::Foundation::IAsyncOperation<bool> impl_ICoreDispatcher2<D>::TryRunIdleAsync(const Windows::UI::Core::IdleDispatchedHandler & agileCallback) const
{
    Windows::Foundation::IAsyncOperation<bool> asyncOperation;
    check_hresult(shim()->abi_TryRunIdleAsync(get(agileCallback), put(asyncOperation)));
    return asyncOperation;
}

template <typename D> Windows::UI::Core::CoreDispatcherPriority impl_ICoreDispatcherWithTaskPriority<D>::CurrentPriority() const
{
    Windows::UI::Core::CoreDispatcherPriority value {};
    check_hresult(shim()->get_CurrentPriority(&value));
    return value;
}

template <typename D> void impl_ICoreDispatcherWithTaskPriority<D>::CurrentPriority(Windows::UI::Core::CoreDispatcherPriority value) const
{
    check_hresult(shim()->put_CurrentPriority(value));
}

template <typename D> bool impl_ICoreDispatcherWithTaskPriority<D>::ShouldYield() const
{
    bool value {};
    check_hresult(shim()->abi_ShouldYield(&value));
    return value;
}

template <typename D> bool impl_ICoreDispatcherWithTaskPriority<D>::ShouldYield(Windows::UI::Core::CoreDispatcherPriority priority) const
{
    bool value {};
    check_hresult(shim()->abi_ShouldYieldToPriority(priority, &value));
    return value;
}

template <typename D> void impl_ICoreDispatcherWithTaskPriority<D>::StopProcessEvents() const
{
    check_hresult(shim()->abi_StopProcessEvents());
}

template <typename D> bool impl_IIdleDispatchedHandlerArgs<D>::IsDispatcherIdle() const
{
    bool value {};
    check_hresult(shim()->get_IsDispatcherIdle(&value));
    return value;
}

template <typename D> uint32_t impl_ICoreCursor<D>::Id() const
{
    uint32_t value {};
    check_hresult(shim()->get_Id(&value));
    return value;
}

template <typename D> Windows::UI::Core::CoreCursorType impl_ICoreCursor<D>::Type() const
{
    Windows::UI::Core::CoreCursorType value {};
    check_hresult(shim()->get_Type(&value));
    return value;
}

template <typename D> Windows::UI::Core::CoreCursor impl_ICoreCursorFactory<D>::CreateCursor(Windows::UI::Core::CoreCursorType type, uint32_t id) const
{
    Windows::UI::Core::CoreCursor cursor { nullptr };
    check_hresult(shim()->abi_CreateCursor(type, id, put(cursor)));
    return cursor;
}

template <typename D> void impl_IInitializeWithCoreWindow<D>::Initialize(const Windows::UI::Core::CoreWindow & window) const
{
    check_hresult(shim()->abi_Initialize(get(window)));
}

template <typename D> void impl_ICoreWindowResizeManager<D>::NotifyLayoutCompleted() const
{
    check_hresult(shim()->abi_NotifyLayoutCompleted());
}

template <typename D> void impl_ICoreWindowResizeManagerLayoutCapability<D>::ShouldWaitForLayoutCompletion(bool value) const
{
    check_hresult(shim()->put_ShouldWaitForLayoutCompletion(value));
}

template <typename D> bool impl_ICoreWindowResizeManagerLayoutCapability<D>::ShouldWaitForLayoutCompletion() const
{
    bool value {};
    check_hresult(shim()->get_ShouldWaitForLayoutCompletion(&value));
    return value;
}

template <typename D> Windows::UI::Core::CoreWindowResizeManager impl_ICoreWindowResizeManagerStatics<D>::GetForCurrentView() const
{
    Windows::UI::Core::CoreWindowResizeManager CoreWindowResizeManager { nullptr };
    check_hresult(shim()->abi_GetForCurrentView(put(CoreWindowResizeManager)));
    return CoreWindowResizeManager;
}

template <typename D> Windows::UI::Core::CoreDispatcher impl_ICoreInputSourceBase<D>::Dispatcher() const
{
    Windows::UI::Core::CoreDispatcher value { nullptr };
    check_hresult(shim()->get_Dispatcher(put(value)));
    return value;
}

template <typename D> bool impl_ICoreInputSourceBase<D>::IsInputEnabled() const
{
    bool value {};
    check_hresult(shim()->get_IsInputEnabled(&value));
    return value;
}

template <typename D> void impl_ICoreInputSourceBase<D>::IsInputEnabled(bool value) const
{
    check_hresult(shim()->put_IsInputEnabled(value));
}

template <typename D> event_token impl_ICoreInputSourceBase<D>::InputEnabled(const Windows::Foundation::TypedEventHandler<Windows::IInspectable, Windows::UI::Core::InputEnabledEventArgs> & handler) const
{
    event_token pCookie {};
    check_hresult(shim()->add_InputEnabled(get(handler), &pCookie));
    return pCookie;
}

template <typename D> event_revoker<ICoreInputSourceBase> impl_ICoreInputSourceBase<D>::InputEnabled(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::IInspectable, Windows::UI::Core::InputEnabledEventArgs> & handler) const
{
    return impl::make_event_revoker<D, ICoreInputSourceBase>(this, &ABI::Windows::UI::Core::ICoreInputSourceBase::remove_InputEnabled, InputEnabled(handler));
}

template <typename D> void impl_ICoreInputSourceBase<D>::InputEnabled(event_token cookie) const
{
    check_hresult(shim()->remove_InputEnabled(cookie));
}

template <typename D> void impl_ICorePointerInputSource<D>::ReleasePointerCapture() const
{
    check_hresult(shim()->abi_ReleasePointerCapture());
}

template <typename D> void impl_ICorePointerInputSource<D>::SetPointerCapture() const
{
    check_hresult(shim()->abi_SetPointerCapture());
}

template <typename D> bool impl_ICorePointerInputSource<D>::HasCapture() const
{
    bool value {};
    check_hresult(shim()->get_HasCapture(&value));
    return value;
}

template <typename D> Windows::Foundation::Point impl_ICorePointerInputSource<D>::PointerPosition() const
{
    Windows::Foundation::Point value {};
    check_hresult(shim()->get_PointerPosition(put(value)));
    return value;
}

template <typename D> Windows::UI::Core::CoreCursor impl_ICorePointerInputSource<D>::PointerCursor() const
{
    Windows::UI::Core::CoreCursor value { nullptr };
    check_hresult(shim()->get_PointerCursor(put(value)));
    return value;
}

template <typename D> void impl_ICorePointerInputSource<D>::PointerCursor(const Windows::UI::Core::CoreCursor & value) const
{
    check_hresult(shim()->put_PointerCursor(get(value)));
}

template <typename D> event_token impl_ICorePointerInputSource<D>::PointerCaptureLost(const Windows::Foundation::TypedEventHandler<Windows::IInspectable, Windows::UI::Core::PointerEventArgs> & handler) const
{
    event_token cookie {};
    check_hresult(shim()->add_PointerCaptureLost(get(handler), &cookie));
    return cookie;
}

template <typename D> event_revoker<ICorePointerInputSource> impl_ICorePointerInputSource<D>::PointerCaptureLost(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::IInspectable, Windows::UI::Core::PointerEventArgs> & handler) const
{
    return impl::make_event_revoker<D, ICorePointerInputSource>(this, &ABI::Windows::UI::Core::ICorePointerInputSource::remove_PointerCaptureLost, PointerCaptureLost(handler));
}

template <typename D> void impl_ICorePointerInputSource<D>::PointerCaptureLost(event_token cookie) const
{
    check_hresult(shim()->remove_PointerCaptureLost(cookie));
}

template <typename D> event_token impl_ICorePointerInputSource<D>::PointerEntered(const Windows::Foundation::TypedEventHandler<Windows::IInspectable, Windows::UI::Core::PointerEventArgs> & handler) const
{
    event_token cookie {};
    check_hresult(shim()->add_PointerEntered(get(handler), &cookie));
    return cookie;
}

template <typename D> event_revoker<ICorePointerInputSource> impl_ICorePointerInputSource<D>::PointerEntered(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::IInspectable, Windows::UI::Core::PointerEventArgs> & handler) const
{
    return impl::make_event_revoker<D, ICorePointerInputSource>(this, &ABI::Windows::UI::Core::ICorePointerInputSource::remove_PointerEntered, PointerEntered(handler));
}

template <typename D> void impl_ICorePointerInputSource<D>::PointerEntered(event_token cookie) const
{
    check_hresult(shim()->remove_PointerEntered(cookie));
}

template <typename D> event_token impl_ICorePointerInputSource<D>::PointerExited(const Windows::Foundation::TypedEventHandler<Windows::IInspectable, Windows::UI::Core::PointerEventArgs> & handler) const
{
    event_token cookie {};
    check_hresult(shim()->add_PointerExited(get(handler), &cookie));
    return cookie;
}

template <typename D> event_revoker<ICorePointerInputSource> impl_ICorePointerInputSource<D>::PointerExited(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::IInspectable, Windows::UI::Core::PointerEventArgs> & handler) const
{
    return impl::make_event_revoker<D, ICorePointerInputSource>(this, &ABI::Windows::UI::Core::ICorePointerInputSource::remove_PointerExited, PointerExited(handler));
}

template <typename D> void impl_ICorePointerInputSource<D>::PointerExited(event_token cookie) const
{
    check_hresult(shim()->remove_PointerExited(cookie));
}

template <typename D> event_token impl_ICorePointerInputSource<D>::PointerMoved(const Windows::Foundation::TypedEventHandler<Windows::IInspectable, Windows::UI::Core::PointerEventArgs> & handler) const
{
    event_token cookie {};
    check_hresult(shim()->add_PointerMoved(get(handler), &cookie));
    return cookie;
}

template <typename D> event_revoker<ICorePointerInputSource> impl_ICorePointerInputSource<D>::PointerMoved(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::IInspectable, Windows::UI::Core::PointerEventArgs> & handler) const
{
    return impl::make_event_revoker<D, ICorePointerInputSource>(this, &ABI::Windows::UI::Core::ICorePointerInputSource::remove_PointerMoved, PointerMoved(handler));
}

template <typename D> void impl_ICorePointerInputSource<D>::PointerMoved(event_token cookie) const
{
    check_hresult(shim()->remove_PointerMoved(cookie));
}

template <typename D> event_token impl_ICorePointerInputSource<D>::PointerPressed(const Windows::Foundation::TypedEventHandler<Windows::IInspectable, Windows::UI::Core::PointerEventArgs> & handler) const
{
    event_token cookie {};
    check_hresult(shim()->add_PointerPressed(get(handler), &cookie));
    return cookie;
}

template <typename D> event_revoker<ICorePointerInputSource> impl_ICorePointerInputSource<D>::PointerPressed(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::IInspectable, Windows::UI::Core::PointerEventArgs> & handler) const
{
    return impl::make_event_revoker<D, ICorePointerInputSource>(this, &ABI::Windows::UI::Core::ICorePointerInputSource::remove_PointerPressed, PointerPressed(handler));
}

template <typename D> void impl_ICorePointerInputSource<D>::PointerPressed(event_token cookie) const
{
    check_hresult(shim()->remove_PointerPressed(cookie));
}

template <typename D> event_token impl_ICorePointerInputSource<D>::PointerReleased(const Windows::Foundation::TypedEventHandler<Windows::IInspectable, Windows::UI::Core::PointerEventArgs> & handler) const
{
    event_token cookie {};
    check_hresult(shim()->add_PointerReleased(get(handler), &cookie));
    return cookie;
}

template <typename D> event_revoker<ICorePointerInputSource> impl_ICorePointerInputSource<D>::PointerReleased(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::IInspectable, Windows::UI::Core::PointerEventArgs> & handler) const
{
    return impl::make_event_revoker<D, ICorePointerInputSource>(this, &ABI::Windows::UI::Core::ICorePointerInputSource::remove_PointerReleased, PointerReleased(handler));
}

template <typename D> void impl_ICorePointerInputSource<D>::PointerReleased(event_token cookie) const
{
    check_hresult(shim()->remove_PointerReleased(cookie));
}

template <typename D> event_token impl_ICorePointerInputSource<D>::PointerWheelChanged(const Windows::Foundation::TypedEventHandler<Windows::IInspectable, Windows::UI::Core::PointerEventArgs> & handler) const
{
    event_token cookie {};
    check_hresult(shim()->add_PointerWheelChanged(get(handler), &cookie));
    return cookie;
}

template <typename D> event_revoker<ICorePointerInputSource> impl_ICorePointerInputSource<D>::PointerWheelChanged(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::IInspectable, Windows::UI::Core::PointerEventArgs> & handler) const
{
    return impl::make_event_revoker<D, ICorePointerInputSource>(this, &ABI::Windows::UI::Core::ICorePointerInputSource::remove_PointerWheelChanged, PointerWheelChanged(handler));
}

template <typename D> void impl_ICorePointerInputSource<D>::PointerWheelChanged(event_token cookie) const
{
    check_hresult(shim()->remove_PointerWheelChanged(cookie));
}

template <typename D> Windows::UI::Core::CoreVirtualKeyStates impl_ICoreKeyboardInputSource<D>::GetCurrentKeyState(Windows::System::VirtualKey virtualKey) const
{
    Windows::UI::Core::CoreVirtualKeyStates KeyState {};
    check_hresult(shim()->abi_GetCurrentKeyState(virtualKey, &KeyState));
    return KeyState;
}

template <typename D> event_token impl_ICoreKeyboardInputSource<D>::CharacterReceived(const Windows::Foundation::TypedEventHandler<Windows::IInspectable, Windows::UI::Core::CharacterReceivedEventArgs> & handler) const
{
    event_token pCookie {};
    check_hresult(shim()->add_CharacterReceived(get(handler), &pCookie));
    return pCookie;
}

template <typename D> event_revoker<ICoreKeyboardInputSource> impl_ICoreKeyboardInputSource<D>::CharacterReceived(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::IInspectable, Windows::UI::Core::CharacterReceivedEventArgs> & handler) const
{
    return impl::make_event_revoker<D, ICoreKeyboardInputSource>(this, &ABI::Windows::UI::Core::ICoreKeyboardInputSource::remove_CharacterReceived, CharacterReceived(handler));
}

template <typename D> void impl_ICoreKeyboardInputSource<D>::CharacterReceived(event_token cookie) const
{
    check_hresult(shim()->remove_CharacterReceived(cookie));
}

template <typename D> event_token impl_ICoreKeyboardInputSource<D>::KeyDown(const Windows::Foundation::TypedEventHandler<Windows::IInspectable, Windows::UI::Core::KeyEventArgs> & handler) const
{
    event_token pCookie {};
    check_hresult(shim()->add_KeyDown(get(handler), &pCookie));
    return pCookie;
}

template <typename D> event_revoker<ICoreKeyboardInputSource> impl_ICoreKeyboardInputSource<D>::KeyDown(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::IInspectable, Windows::UI::Core::KeyEventArgs> & handler) const
{
    return impl::make_event_revoker<D, ICoreKeyboardInputSource>(this, &ABI::Windows::UI::Core::ICoreKeyboardInputSource::remove_KeyDown, KeyDown(handler));
}

template <typename D> void impl_ICoreKeyboardInputSource<D>::KeyDown(event_token cookie) const
{
    check_hresult(shim()->remove_KeyDown(cookie));
}

template <typename D> event_token impl_ICoreKeyboardInputSource<D>::KeyUp(const Windows::Foundation::TypedEventHandler<Windows::IInspectable, Windows::UI::Core::KeyEventArgs> & handler) const
{
    event_token pCookie {};
    check_hresult(shim()->add_KeyUp(get(handler), &pCookie));
    return pCookie;
}

template <typename D> event_revoker<ICoreKeyboardInputSource> impl_ICoreKeyboardInputSource<D>::KeyUp(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::IInspectable, Windows::UI::Core::KeyEventArgs> & handler) const
{
    return impl::make_event_revoker<D, ICoreKeyboardInputSource>(this, &ABI::Windows::UI::Core::ICoreKeyboardInputSource::remove_KeyUp, KeyUp(handler));
}

template <typename D> void impl_ICoreKeyboardInputSource<D>::KeyUp(event_token cookie) const
{
    check_hresult(shim()->remove_KeyUp(cookie));
}

template <typename D> hstring impl_ICoreKeyboardInputSource2<D>::GetCurrentKeyEventDeviceId() const
{
    hstring value;
    check_hresult(shim()->abi_GetCurrentKeyEventDeviceId(put(value)));
    return value;
}

template <typename D> bool impl_ICoreComponentFocusable<D>::HasFocus() const
{
    bool value {};
    check_hresult(shim()->get_HasFocus(&value));
    return value;
}

template <typename D> event_token impl_ICoreComponentFocusable<D>::GotFocus(const Windows::Foundation::TypedEventHandler<Windows::IInspectable, Windows::UI::Core::CoreWindowEventArgs> & handler) const
{
    event_token pCookie {};
    check_hresult(shim()->add_GotFocus(get(handler), &pCookie));
    return pCookie;
}

template <typename D> event_revoker<ICoreComponentFocusable> impl_ICoreComponentFocusable<D>::GotFocus(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::IInspectable, Windows::UI::Core::CoreWindowEventArgs> & handler) const
{
    return impl::make_event_revoker<D, ICoreComponentFocusable>(this, &ABI::Windows::UI::Core::ICoreComponentFocusable::remove_GotFocus, GotFocus(handler));
}

template <typename D> void impl_ICoreComponentFocusable<D>::GotFocus(event_token cookie) const
{
    check_hresult(shim()->remove_GotFocus(cookie));
}

template <typename D> event_token impl_ICoreComponentFocusable<D>::LostFocus(const Windows::Foundation::TypedEventHandler<Windows::IInspectable, Windows::UI::Core::CoreWindowEventArgs> & handler) const
{
    event_token pCookie {};
    check_hresult(shim()->add_LostFocus(get(handler), &pCookie));
    return pCookie;
}

template <typename D> event_revoker<ICoreComponentFocusable> impl_ICoreComponentFocusable<D>::LostFocus(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::IInspectable, Windows::UI::Core::CoreWindowEventArgs> & handler) const
{
    return impl::make_event_revoker<D, ICoreComponentFocusable>(this, &ABI::Windows::UI::Core::ICoreComponentFocusable::remove_LostFocus, LostFocus(handler));
}

template <typename D> void impl_ICoreComponentFocusable<D>::LostFocus(event_token cookie) const
{
    check_hresult(shim()->remove_LostFocus(cookie));
}

template <typename D> event_token impl_ICoreTouchHitTesting<D>::TouchHitTesting(const Windows::Foundation::TypedEventHandler<Windows::IInspectable, Windows::UI::Core::TouchHitTestingEventArgs> & handler) const
{
    event_token pCookie {};
    check_hresult(shim()->add_TouchHitTesting(get(handler), &pCookie));
    return pCookie;
}

template <typename D> event_revoker<ICoreTouchHitTesting> impl_ICoreTouchHitTesting<D>::TouchHitTesting(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::IInspectable, Windows::UI::Core::TouchHitTestingEventArgs> & handler) const
{
    return impl::make_event_revoker<D, ICoreTouchHitTesting>(this, &ABI::Windows::UI::Core::ICoreTouchHitTesting::remove_TouchHitTesting, TouchHitTesting(handler));
}

template <typename D> void impl_ICoreTouchHitTesting<D>::TouchHitTesting(event_token cookie) const
{
    check_hresult(shim()->remove_TouchHitTesting(cookie));
}

template <typename D> event_token impl_ICoreClosestInteractiveBoundsRequested<D>::ClosestInteractiveBoundsRequested(const Windows::Foundation::TypedEventHandler<Windows::UI::Core::CoreComponentInputSource, Windows::UI::Core::ClosestInteractiveBoundsRequestedEventArgs> & handler) const
{
    event_token pCookie {};
    check_hresult(shim()->add_ClosestInteractiveBoundsRequested(get(handler), &pCookie));
    return pCookie;
}

template <typename D> event_revoker<ICoreClosestInteractiveBoundsRequested> impl_ICoreClosestInteractiveBoundsRequested<D>::ClosestInteractiveBoundsRequested(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::UI::Core::CoreComponentInputSource, Windows::UI::Core::ClosestInteractiveBoundsRequestedEventArgs> & handler) const
{
    return impl::make_event_revoker<D, ICoreClosestInteractiveBoundsRequested>(this, &ABI::Windows::UI::Core::ICoreClosestInteractiveBoundsRequested::remove_ClosestInteractiveBoundsRequested, ClosestInteractiveBoundsRequested(handler));
}

template <typename D> void impl_ICoreClosestInteractiveBoundsRequested<D>::ClosestInteractiveBoundsRequested(event_token cookie) const
{
    check_hresult(shim()->remove_ClosestInteractiveBoundsRequested(cookie));
}

template <typename D> event_token impl_ICorePointerRedirector<D>::PointerRoutedAway(const Windows::Foundation::TypedEventHandler<Windows::UI::Core::ICorePointerRedirector, Windows::UI::Core::PointerEventArgs> & handler) const
{
    event_token cookie {};
    check_hresult(shim()->add_PointerRoutedAway(get(handler), &cookie));
    return cookie;
}

template <typename D> event_revoker<ICorePointerRedirector> impl_ICorePointerRedirector<D>::PointerRoutedAway(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::UI::Core::ICorePointerRedirector, Windows::UI::Core::PointerEventArgs> & handler) const
{
    return impl::make_event_revoker<D, ICorePointerRedirector>(this, &ABI::Windows::UI::Core::ICorePointerRedirector::remove_PointerRoutedAway, PointerRoutedAway(handler));
}

template <typename D> void impl_ICorePointerRedirector<D>::PointerRoutedAway(event_token cookie) const
{
    check_hresult(shim()->remove_PointerRoutedAway(cookie));
}

template <typename D> event_token impl_ICorePointerRedirector<D>::PointerRoutedTo(const Windows::Foundation::TypedEventHandler<Windows::UI::Core::ICorePointerRedirector, Windows::UI::Core::PointerEventArgs> & handler) const
{
    event_token cookie {};
    check_hresult(shim()->add_PointerRoutedTo(get(handler), &cookie));
    return cookie;
}

template <typename D> event_revoker<ICorePointerRedirector> impl_ICorePointerRedirector<D>::PointerRoutedTo(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::UI::Core::ICorePointerRedirector, Windows::UI::Core::PointerEventArgs> & handler) const
{
    return impl::make_event_revoker<D, ICorePointerRedirector>(this, &ABI::Windows::UI::Core::ICorePointerRedirector::remove_PointerRoutedTo, PointerRoutedTo(handler));
}

template <typename D> void impl_ICorePointerRedirector<D>::PointerRoutedTo(event_token cookie) const
{
    check_hresult(shim()->remove_PointerRoutedTo(cookie));
}

template <typename D> event_token impl_ICorePointerRedirector<D>::PointerRoutedReleased(const Windows::Foundation::TypedEventHandler<Windows::UI::Core::ICorePointerRedirector, Windows::UI::Core::PointerEventArgs> & handler) const
{
    event_token cookie {};
    check_hresult(shim()->add_PointerRoutedReleased(get(handler), &cookie));
    return cookie;
}

template <typename D> event_revoker<ICorePointerRedirector> impl_ICorePointerRedirector<D>::PointerRoutedReleased(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::UI::Core::ICorePointerRedirector, Windows::UI::Core::PointerEventArgs> & handler) const
{
    return impl::make_event_revoker<D, ICorePointerRedirector>(this, &ABI::Windows::UI::Core::ICorePointerRedirector::remove_PointerRoutedReleased, PointerRoutedReleased(handler));
}

template <typename D> void impl_ICorePointerRedirector<D>::PointerRoutedReleased(event_token cookie) const
{
    check_hresult(shim()->remove_PointerRoutedReleased(cookie));
}

template <typename D> event_token impl_ISystemNavigationManager<D>::BackRequested(const Windows::Foundation::EventHandler<Windows::UI::Core::BackRequestedEventArgs> & handler) const
{
    event_token token {};
    check_hresult(shim()->add_BackRequested(get(handler), &token));
    return token;
}

template <typename D> event_revoker<ISystemNavigationManager> impl_ISystemNavigationManager<D>::BackRequested(auto_revoke_t, const Windows::Foundation::EventHandler<Windows::UI::Core::BackRequestedEventArgs> & handler) const
{
    return impl::make_event_revoker<D, ISystemNavigationManager>(this, &ABI::Windows::UI::Core::ISystemNavigationManager::remove_BackRequested, BackRequested(handler));
}

template <typename D> void impl_ISystemNavigationManager<D>::BackRequested(event_token token) const
{
    check_hresult(shim()->remove_BackRequested(token));
}

template <typename D> Windows::UI::Core::AppViewBackButtonVisibility impl_ISystemNavigationManager2<D>::AppViewBackButtonVisibility() const
{
    Windows::UI::Core::AppViewBackButtonVisibility value {};
    check_hresult(shim()->get_AppViewBackButtonVisibility(&value));
    return value;
}

template <typename D> void impl_ISystemNavigationManager2<D>::AppViewBackButtonVisibility(Windows::UI::Core::AppViewBackButtonVisibility value) const
{
    check_hresult(shim()->put_AppViewBackButtonVisibility(value));
}

template <typename D> Windows::UI::Core::SystemNavigationManager impl_ISystemNavigationManagerStatics<D>::GetForCurrentView() const
{
    Windows::UI::Core::SystemNavigationManager loader { nullptr };
    check_hresult(shim()->abi_GetForCurrentView(put(loader)));
    return loader;
}

template <typename D> bool impl_IBackRequestedEventArgs<D>::Handled() const
{
    bool value {};
    check_hresult(shim()->get_Handled(&value));
    return value;
}

template <typename D> void impl_IBackRequestedEventArgs<D>::Handled(bool value) const
{
    check_hresult(shim()->put_Handled(value));
}

inline CoreCursor::CoreCursor(Windows::UI::Core::CoreCursorType type, uint32_t id) :
    CoreCursor(get_activation_factory<CoreCursor, ICoreCursorFactory>().CreateCursor(type, id))
{}

inline Windows::UI::Core::CoreWindow CoreWindow::GetForCurrentThread()
{
    return get_activation_factory<CoreWindow, ICoreWindowStatic>().GetForCurrentThread();
}

inline CoreWindowDialog::CoreWindowDialog() :
    CoreWindowDialog(activate_instance<CoreWindowDialog>())
{}

inline CoreWindowDialog::CoreWindowDialog(hstring_ref title) :
    CoreWindowDialog(get_activation_factory<CoreWindowDialog, ICoreWindowDialogFactory>().CreateWithTitle(title))
{}

inline CoreWindowFlyout::CoreWindowFlyout(const Windows::Foundation::Point & position) :
    CoreWindowFlyout(get_activation_factory<CoreWindowFlyout, ICoreWindowFlyoutFactory>().Create(position))
{}

inline CoreWindowFlyout::CoreWindowFlyout(const Windows::Foundation::Point & position, hstring_ref title) :
    CoreWindowFlyout(get_activation_factory<CoreWindowFlyout, ICoreWindowFlyoutFactory>().CreateWithTitle(position, title))
{}

inline Windows::UI::Core::CoreWindowResizeManager CoreWindowResizeManager::GetForCurrentView()
{
    return get_activation_factory<CoreWindowResizeManager, ICoreWindowResizeManagerStatics>().GetForCurrentView();
}

inline Windows::UI::Core::SystemNavigationManager SystemNavigationManager::GetForCurrentView()
{
    return get_activation_factory<SystemNavigationManager, ISystemNavigationManagerStatics>().GetForCurrentView();
}

}

}
