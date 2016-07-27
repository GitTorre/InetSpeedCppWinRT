// C++ for the Windows Runtime v1.29
// Copyright (c) 2016 Microsoft Corporation

#pragma once

#include "internal\Windows.Foundation.3.h"
#include "internal\Windows.Foundation.Collections.3.h"
#include "internal\Windows.Devices.Gpio.Provider.3.h"
#include "Windows.Devices.Gpio.h"

WINRT_EXPORT namespace winrt {

namespace impl {

template <typename D>
struct produce<D, Windows::Devices::Gpio::Provider::IGpioControllerProvider> : produce_base<D, Windows::Devices::Gpio::Provider::IGpioControllerProvider>
{
    HRESULT __stdcall get_PinCount(int32_t * value) noexcept override
    {
        try
        {
            *value = detach(shim().PinCount());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_OpenPinProvider(int32_t pin, Windows::Devices::Gpio::Provider::ProviderGpioSharingMode sharingMode, abi_arg_out<Windows::Devices::Gpio::Provider::IGpioPinProvider> gpioPinProvider) noexcept override
    {
        try
        {
            *gpioPinProvider = detach(shim().OpenPinProvider(pin, sharingMode));
            return S_OK;
        }
        catch (...)
        {
            *gpioPinProvider = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Devices::Gpio::Provider::IGpioPinProvider> : produce_base<D, Windows::Devices::Gpio::Provider::IGpioPinProvider>
{
    HRESULT __stdcall add_ValueChanged(abi_arg_in<Windows::Foundation::TypedEventHandler<Windows::Devices::Gpio::Provider::IGpioPinProvider, Windows::Devices::Gpio::Provider::GpioPinProviderValueChangedEventArgs>> handler, event_token * token) noexcept override
    {
        try
        {
            *token = detach(shim().ValueChanged(*reinterpret_cast<const Windows::Foundation::TypedEventHandler<Windows::Devices::Gpio::Provider::IGpioPinProvider, Windows::Devices::Gpio::Provider::GpioPinProviderValueChangedEventArgs> *>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_ValueChanged(event_token token) noexcept override
    {
        try
        {
            shim().ValueChanged(token);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_DebounceTimeout(abi_arg_out<Windows::Foundation::TimeSpan> value) noexcept override
    {
        try
        {
            *value = detach(shim().DebounceTimeout());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_DebounceTimeout(abi_arg_in<Windows::Foundation::TimeSpan> value) noexcept override
    {
        try
        {
            shim().DebounceTimeout(*reinterpret_cast<const Windows::Foundation::TimeSpan *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_PinNumber(int32_t * value) noexcept override
    {
        try
        {
            *value = detach(shim().PinNumber());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_SharingMode(Windows::Devices::Gpio::Provider::ProviderGpioSharingMode * value) noexcept override
    {
        try
        {
            *value = detach(shim().SharingMode());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_IsDriveModeSupported(Windows::Devices::Gpio::Provider::ProviderGpioPinDriveMode driveMode, bool * supported) noexcept override
    {
        try
        {
            *supported = detach(shim().IsDriveModeSupported(driveMode));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_GetDriveMode(Windows::Devices::Gpio::Provider::ProviderGpioPinDriveMode * value) noexcept override
    {
        try
        {
            *value = detach(shim().GetDriveMode());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_SetDriveMode(Windows::Devices::Gpio::Provider::ProviderGpioPinDriveMode value) noexcept override
    {
        try
        {
            shim().SetDriveMode(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_Write(Windows::Devices::Gpio::Provider::ProviderGpioPinValue value) noexcept override
    {
        try
        {
            shim().Write(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_Read(Windows::Devices::Gpio::Provider::ProviderGpioPinValue * value) noexcept override
    {
        try
        {
            *value = detach(shim().Read());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Devices::Gpio::Provider::IGpioPinProviderValueChangedEventArgs> : produce_base<D, Windows::Devices::Gpio::Provider::IGpioPinProviderValueChangedEventArgs>
{
    HRESULT __stdcall get_Edge(Windows::Devices::Gpio::Provider::ProviderGpioPinEdge * value) noexcept override
    {
        try
        {
            *value = detach(shim().Edge());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Devices::Gpio::Provider::IGpioPinProviderValueChangedEventArgsFactory> : produce_base<D, Windows::Devices::Gpio::Provider::IGpioPinProviderValueChangedEventArgsFactory>
{
    HRESULT __stdcall abi_Create(Windows::Devices::Gpio::Provider::ProviderGpioPinEdge edge, abi_arg_out<Windows::Devices::Gpio::Provider::IGpioPinProviderValueChangedEventArgs> value) noexcept override
    {
        try
        {
            *value = detach(shim().Create(edge));
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
struct produce<D, Windows::Devices::Gpio::Provider::IGpioProvider> : produce_base<D, Windows::Devices::Gpio::Provider::IGpioProvider>
{
    HRESULT __stdcall abi_GetControllers(abi_arg_out<Windows::Foundation::Collections::IVectorView<Windows::Devices::Gpio::Provider::IGpioControllerProvider>> result) noexcept override
    {
        try
        {
            *result = detach(shim().GetControllers());
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }
};

}

namespace Windows::Devices::Gpio::Provider {

template <typename D> Windows::Devices::Gpio::Provider::GpioPinProviderValueChangedEventArgs impl_IGpioPinProviderValueChangedEventArgsFactory<D>::Create(Windows::Devices::Gpio::Provider::ProviderGpioPinEdge edge) const
{
    Windows::Devices::Gpio::Provider::GpioPinProviderValueChangedEventArgs value { nullptr };
    check_hresult(shim()->abi_Create(edge, put(value)));
    return value;
}

template <typename D> Windows::Devices::Gpio::Provider::ProviderGpioPinEdge impl_IGpioPinProviderValueChangedEventArgs<D>::Edge() const
{
    Windows::Devices::Gpio::Provider::ProviderGpioPinEdge value {};
    check_hresult(shim()->get_Edge(&value));
    return value;
}

template <typename D> event_token impl_IGpioPinProvider<D>::ValueChanged(const Windows::Foundation::TypedEventHandler<Windows::Devices::Gpio::Provider::IGpioPinProvider, Windows::Devices::Gpio::Provider::GpioPinProviderValueChangedEventArgs> & handler) const
{
    event_token token {};
    check_hresult(shim()->add_ValueChanged(get(handler), &token));
    return token;
}

template <typename D> event_revoker<IGpioPinProvider> impl_IGpioPinProvider<D>::ValueChanged(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::Devices::Gpio::Provider::IGpioPinProvider, Windows::Devices::Gpio::Provider::GpioPinProviderValueChangedEventArgs> & handler) const
{
    return impl::make_event_revoker<D, IGpioPinProvider>(this, &ABI::Windows::Devices::Gpio::Provider::IGpioPinProvider::remove_ValueChanged, ValueChanged(handler));
}

template <typename D> void impl_IGpioPinProvider<D>::ValueChanged(event_token token) const
{
    check_hresult(shim()->remove_ValueChanged(token));
}

template <typename D> Windows::Foundation::TimeSpan impl_IGpioPinProvider<D>::DebounceTimeout() const
{
    Windows::Foundation::TimeSpan value {};
    check_hresult(shim()->get_DebounceTimeout(put(value)));
    return value;
}

template <typename D> void impl_IGpioPinProvider<D>::DebounceTimeout(const Windows::Foundation::TimeSpan & value) const
{
    check_hresult(shim()->put_DebounceTimeout(get(value)));
}

template <typename D> int32_t impl_IGpioPinProvider<D>::PinNumber() const
{
    int32_t value {};
    check_hresult(shim()->get_PinNumber(&value));
    return value;
}

template <typename D> Windows::Devices::Gpio::Provider::ProviderGpioSharingMode impl_IGpioPinProvider<D>::SharingMode() const
{
    Windows::Devices::Gpio::Provider::ProviderGpioSharingMode value {};
    check_hresult(shim()->get_SharingMode(&value));
    return value;
}

template <typename D> bool impl_IGpioPinProvider<D>::IsDriveModeSupported(Windows::Devices::Gpio::Provider::ProviderGpioPinDriveMode driveMode) const
{
    bool supported {};
    check_hresult(shim()->abi_IsDriveModeSupported(driveMode, &supported));
    return supported;
}

template <typename D> Windows::Devices::Gpio::Provider::ProviderGpioPinDriveMode impl_IGpioPinProvider<D>::GetDriveMode() const
{
    Windows::Devices::Gpio::Provider::ProviderGpioPinDriveMode value {};
    check_hresult(shim()->abi_GetDriveMode(&value));
    return value;
}

template <typename D> void impl_IGpioPinProvider<D>::SetDriveMode(Windows::Devices::Gpio::Provider::ProviderGpioPinDriveMode value) const
{
    check_hresult(shim()->abi_SetDriveMode(value));
}

template <typename D> void impl_IGpioPinProvider<D>::Write(Windows::Devices::Gpio::Provider::ProviderGpioPinValue value) const
{
    check_hresult(shim()->abi_Write(value));
}

template <typename D> Windows::Devices::Gpio::Provider::ProviderGpioPinValue impl_IGpioPinProvider<D>::Read() const
{
    Windows::Devices::Gpio::Provider::ProviderGpioPinValue value {};
    check_hresult(shim()->abi_Read(&value));
    return value;
}

template <typename D> int32_t impl_IGpioControllerProvider<D>::PinCount() const
{
    int32_t value {};
    check_hresult(shim()->get_PinCount(&value));
    return value;
}

template <typename D> Windows::Devices::Gpio::Provider::IGpioPinProvider impl_IGpioControllerProvider<D>::OpenPinProvider(int32_t pin, Windows::Devices::Gpio::Provider::ProviderGpioSharingMode sharingMode) const
{
    Windows::Devices::Gpio::Provider::IGpioPinProvider gpioPinProvider;
    check_hresult(shim()->abi_OpenPinProvider(pin, sharingMode, put(gpioPinProvider)));
    return gpioPinProvider;
}

template <typename D> Windows::Foundation::Collections::IVectorView<Windows::Devices::Gpio::Provider::IGpioControllerProvider> impl_IGpioProvider<D>::GetControllers() const
{
    Windows::Foundation::Collections::IVectorView<Windows::Devices::Gpio::Provider::IGpioControllerProvider> result;
    check_hresult(shim()->abi_GetControllers(put(result)));
    return result;
}

inline GpioPinProviderValueChangedEventArgs::GpioPinProviderValueChangedEventArgs(Windows::Devices::Gpio::Provider::ProviderGpioPinEdge edge) :
    GpioPinProviderValueChangedEventArgs(get_activation_factory<GpioPinProviderValueChangedEventArgs, IGpioPinProviderValueChangedEventArgsFactory>().Create(edge))
{}

}

}
