// C++ for the Windows Runtime v1.29
// Copyright (c) 2016 Microsoft Corporation

#pragma once

#include "internal\Windows.Foundation.3.h"
#include "internal\Windows.UI.3.h"
#include "internal\Windows.Devices.Lights.3.h"
#include "Windows.Devices.h"
#include "Windows.Foundation.h"

WINRT_EXPORT namespace winrt {

namespace impl {

template <typename D>
struct produce<D, Windows::Devices::Lights::ILamp> : produce_base<D, Windows::Devices::Lights::ILamp>
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

    HRESULT __stdcall get_IsEnabled(bool * value) noexcept override
    {
        try
        {
            *value = detach(shim().IsEnabled());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_IsEnabled(bool value) noexcept override
    {
        try
        {
            shim().IsEnabled(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_BrightnessLevel(float * value) noexcept override
    {
        try
        {
            *value = detach(shim().BrightnessLevel());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_BrightnessLevel(float value) noexcept override
    {
        try
        {
            shim().BrightnessLevel(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_IsColorSettable(bool * value) noexcept override
    {
        try
        {
            *value = detach(shim().IsColorSettable());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Color(abi_arg_out<Windows::UI::Color> value) noexcept override
    {
        try
        {
            *value = detach(shim().Color());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Color(abi_arg_in<Windows::UI::Color> value) noexcept override
    {
        try
        {
            shim().Color(*reinterpret_cast<const Windows::UI::Color *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_AvailabilityChanged(abi_arg_in<Windows::Foundation::TypedEventHandler<Windows::Devices::Lights::Lamp, Windows::Devices::Lights::LampAvailabilityChangedEventArgs>> handler, event_token * token) noexcept override
    {
        try
        {
            *token = detach(shim().AvailabilityChanged(*reinterpret_cast<const Windows::Foundation::TypedEventHandler<Windows::Devices::Lights::Lamp, Windows::Devices::Lights::LampAvailabilityChangedEventArgs> *>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_AvailabilityChanged(event_token token) noexcept override
    {
        try
        {
            shim().AvailabilityChanged(token);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Devices::Lights::ILampAvailabilityChangedEventArgs> : produce_base<D, Windows::Devices::Lights::ILampAvailabilityChangedEventArgs>
{
    HRESULT __stdcall get_IsAvailable(bool * value) noexcept override
    {
        try
        {
            *value = detach(shim().IsAvailable());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Devices::Lights::ILampStatics> : produce_base<D, Windows::Devices::Lights::ILampStatics>
{
    HRESULT __stdcall abi_GetDeviceSelector(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(shim().GetDeviceSelector());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_FromIdAsync(abi_arg_in<hstring> deviceId, abi_arg_out<Windows::Foundation::IAsyncOperation<Windows::Devices::Lights::Lamp>> operation) noexcept override
    {
        try
        {
            *operation = detach(shim().FromIdAsync(*reinterpret_cast<const hstring *>(&deviceId)));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_GetDefaultAsync(abi_arg_out<Windows::Foundation::IAsyncOperation<Windows::Devices::Lights::Lamp>> operation) noexcept override
    {
        try
        {
            *operation = detach(shim().GetDefaultAsync());
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }
};

}

namespace Windows::Devices::Lights {

template <typename D> hstring impl_ILampStatics<D>::GetDeviceSelector() const
{
    hstring value;
    check_hresult(shim()->abi_GetDeviceSelector(put(value)));
    return value;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Devices::Lights::Lamp> impl_ILampStatics<D>::FromIdAsync(hstring_ref deviceId) const
{
    Windows::Foundation::IAsyncOperation<Windows::Devices::Lights::Lamp> operation;
    check_hresult(shim()->abi_FromIdAsync(get(deviceId), put(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Devices::Lights::Lamp> impl_ILampStatics<D>::GetDefaultAsync() const
{
    Windows::Foundation::IAsyncOperation<Windows::Devices::Lights::Lamp> operation;
    check_hresult(shim()->abi_GetDefaultAsync(put(operation)));
    return operation;
}

template <typename D> bool impl_ILampAvailabilityChangedEventArgs<D>::IsAvailable() const
{
    bool value {};
    check_hresult(shim()->get_IsAvailable(&value));
    return value;
}

template <typename D> hstring impl_ILamp<D>::DeviceId() const
{
    hstring value;
    check_hresult(shim()->get_DeviceId(put(value)));
    return value;
}

template <typename D> bool impl_ILamp<D>::IsEnabled() const
{
    bool value {};
    check_hresult(shim()->get_IsEnabled(&value));
    return value;
}

template <typename D> void impl_ILamp<D>::IsEnabled(bool value) const
{
    check_hresult(shim()->put_IsEnabled(value));
}

template <typename D> float impl_ILamp<D>::BrightnessLevel() const
{
    float value {};
    check_hresult(shim()->get_BrightnessLevel(&value));
    return value;
}

template <typename D> void impl_ILamp<D>::BrightnessLevel(float value) const
{
    check_hresult(shim()->put_BrightnessLevel(value));
}

template <typename D> bool impl_ILamp<D>::IsColorSettable() const
{
    bool value {};
    check_hresult(shim()->get_IsColorSettable(&value));
    return value;
}

template <typename D> Windows::UI::Color impl_ILamp<D>::Color() const
{
    Windows::UI::Color value {};
    check_hresult(shim()->get_Color(put(value)));
    return value;
}

template <typename D> void impl_ILamp<D>::Color(const Windows::UI::Color & value) const
{
    check_hresult(shim()->put_Color(get(value)));
}

template <typename D> event_token impl_ILamp<D>::AvailabilityChanged(const Windows::Foundation::TypedEventHandler<Windows::Devices::Lights::Lamp, Windows::Devices::Lights::LampAvailabilityChangedEventArgs> & handler) const
{
    event_token token {};
    check_hresult(shim()->add_AvailabilityChanged(get(handler), &token));
    return token;
}

template <typename D> event_revoker<ILamp> impl_ILamp<D>::AvailabilityChanged(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::Devices::Lights::Lamp, Windows::Devices::Lights::LampAvailabilityChangedEventArgs> & handler) const
{
    return impl::make_event_revoker<D, ILamp>(this, &ABI::Windows::Devices::Lights::ILamp::remove_AvailabilityChanged, AvailabilityChanged(handler));
}

template <typename D> void impl_ILamp<D>::AvailabilityChanged(event_token token) const
{
    check_hresult(shim()->remove_AvailabilityChanged(token));
}

inline hstring Lamp::GetDeviceSelector()
{
    return get_activation_factory<Lamp, ILampStatics>().GetDeviceSelector();
}

inline Windows::Foundation::IAsyncOperation<Windows::Devices::Lights::Lamp> Lamp::FromIdAsync(hstring_ref deviceId)
{
    return get_activation_factory<Lamp, ILampStatics>().FromIdAsync(deviceId);
}

inline Windows::Foundation::IAsyncOperation<Windows::Devices::Lights::Lamp> Lamp::GetDefaultAsync()
{
    return get_activation_factory<Lamp, ILampStatics>().GetDefaultAsync();
}

}

}
