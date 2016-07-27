// C++ for the Windows Runtime v1.29
// Copyright (c) 2016 Microsoft Corporation

#pragma once

#include "internal\Windows.Devices.Pwm.Provider.3.h"
#include "internal\Windows.Foundation.3.h"
#include "internal\Windows.Devices.Pwm.3.h"
#include "Windows.Devices.h"
#include "Windows.Foundation.h"

WINRT_EXPORT namespace winrt {

namespace impl {

template <typename D>
struct produce<D, Windows::Devices::Pwm::IPwmController> : produce_base<D, Windows::Devices::Pwm::IPwmController>
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

    HRESULT __stdcall get_ActualFrequency(double * value) noexcept override
    {
        try
        {
            *value = detach(shim().ActualFrequency());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_SetDesiredFrequency(double desiredFrequency, double * value) noexcept override
    {
        try
        {
            *value = detach(shim().SetDesiredFrequency(desiredFrequency));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_MinFrequency(double * value) noexcept override
    {
        try
        {
            *value = detach(shim().MinFrequency());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_MaxFrequency(double * value) noexcept override
    {
        try
        {
            *value = detach(shim().MaxFrequency());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_OpenPin(int32_t pinNumber, abi_arg_out<Windows::Devices::Pwm::IPwmPin> pin) noexcept override
    {
        try
        {
            *pin = detach(shim().OpenPin(pinNumber));
            return S_OK;
        }
        catch (...)
        {
            *pin = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Devices::Pwm::IPwmControllerStatics> : produce_base<D, Windows::Devices::Pwm::IPwmControllerStatics>
{
    HRESULT __stdcall abi_GetControllersAsync(abi_arg_in<Windows::Devices::Pwm::Provider::IPwmProvider> provider, abi_arg_out<Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Devices::Pwm::PwmController>>> operation) noexcept override
    {
        try
        {
            *operation = detach(shim().GetControllersAsync(*reinterpret_cast<const Windows::Devices::Pwm::Provider::IPwmProvider *>(&provider)));
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
struct produce<D, Windows::Devices::Pwm::IPwmControllerStatics2> : produce_base<D, Windows::Devices::Pwm::IPwmControllerStatics2>
{
    HRESULT __stdcall abi_GetDefaultAsync(abi_arg_out<Windows::Foundation::IAsyncOperation<Windows::Devices::Pwm::PwmController>> operation) noexcept override
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

template <typename D>
struct produce<D, Windows::Devices::Pwm::IPwmPin> : produce_base<D, Windows::Devices::Pwm::IPwmPin>
{
    HRESULT __stdcall get_Controller(abi_arg_out<Windows::Devices::Pwm::IPwmController> value) noexcept override
    {
        try
        {
            *value = detach(shim().Controller());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_GetActiveDutyCyclePercentage(double * result) noexcept override
    {
        try
        {
            *result = detach(shim().GetActiveDutyCyclePercentage());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_SetActiveDutyCyclePercentage(double dutyCyclePercentage) noexcept override
    {
        try
        {
            shim().SetActiveDutyCyclePercentage(dutyCyclePercentage);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Polarity(Windows::Devices::Pwm::PwmPulsePolarity * value) noexcept override
    {
        try
        {
            *value = detach(shim().Polarity());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Polarity(Windows::Devices::Pwm::PwmPulsePolarity value) noexcept override
    {
        try
        {
            shim().Polarity(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_Start() noexcept override
    {
        try
        {
            shim().Start();
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_Stop() noexcept override
    {
        try
        {
            shim().Stop();
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_IsStarted(bool * value) noexcept override
    {
        try
        {
            *value = detach(shim().IsStarted());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

}

namespace Windows::Devices::Pwm {

template <typename D> int32_t impl_IPwmController<D>::PinCount() const
{
    int32_t value {};
    check_hresult(shim()->get_PinCount(&value));
    return value;
}

template <typename D> double impl_IPwmController<D>::ActualFrequency() const
{
    double value {};
    check_hresult(shim()->get_ActualFrequency(&value));
    return value;
}

template <typename D> double impl_IPwmController<D>::SetDesiredFrequency(double desiredFrequency) const
{
    double value {};
    check_hresult(shim()->abi_SetDesiredFrequency(desiredFrequency, &value));
    return value;
}

template <typename D> double impl_IPwmController<D>::MinFrequency() const
{
    double value {};
    check_hresult(shim()->get_MinFrequency(&value));
    return value;
}

template <typename D> double impl_IPwmController<D>::MaxFrequency() const
{
    double value {};
    check_hresult(shim()->get_MaxFrequency(&value));
    return value;
}

template <typename D> Windows::Devices::Pwm::PwmPin impl_IPwmController<D>::OpenPin(int32_t pinNumber) const
{
    Windows::Devices::Pwm::PwmPin pin { nullptr };
    check_hresult(shim()->abi_OpenPin(pinNumber, put(pin)));
    return pin;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Devices::Pwm::PwmController>> impl_IPwmControllerStatics<D>::GetControllersAsync(const Windows::Devices::Pwm::Provider::IPwmProvider & provider) const
{
    Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Devices::Pwm::PwmController>> operation;
    check_hresult(shim()->abi_GetControllersAsync(get(provider), put(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Devices::Pwm::PwmController> impl_IPwmControllerStatics2<D>::GetDefaultAsync() const
{
    Windows::Foundation::IAsyncOperation<Windows::Devices::Pwm::PwmController> operation;
    check_hresult(shim()->abi_GetDefaultAsync(put(operation)));
    return operation;
}

template <typename D> Windows::Devices::Pwm::PwmController impl_IPwmPin<D>::Controller() const
{
    Windows::Devices::Pwm::PwmController value { nullptr };
    check_hresult(shim()->get_Controller(put(value)));
    return value;
}

template <typename D> double impl_IPwmPin<D>::GetActiveDutyCyclePercentage() const
{
    double result {};
    check_hresult(shim()->abi_GetActiveDutyCyclePercentage(&result));
    return result;
}

template <typename D> void impl_IPwmPin<D>::SetActiveDutyCyclePercentage(double dutyCyclePercentage) const
{
    check_hresult(shim()->abi_SetActiveDutyCyclePercentage(dutyCyclePercentage));
}

template <typename D> Windows::Devices::Pwm::PwmPulsePolarity impl_IPwmPin<D>::Polarity() const
{
    Windows::Devices::Pwm::PwmPulsePolarity value {};
    check_hresult(shim()->get_Polarity(&value));
    return value;
}

template <typename D> void impl_IPwmPin<D>::Polarity(Windows::Devices::Pwm::PwmPulsePolarity value) const
{
    check_hresult(shim()->put_Polarity(value));
}

template <typename D> void impl_IPwmPin<D>::Start() const
{
    check_hresult(shim()->abi_Start());
}

template <typename D> void impl_IPwmPin<D>::Stop() const
{
    check_hresult(shim()->abi_Stop());
}

template <typename D> bool impl_IPwmPin<D>::IsStarted() const
{
    bool value {};
    check_hresult(shim()->get_IsStarted(&value));
    return value;
}

inline Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Devices::Pwm::PwmController>> PwmController::GetControllersAsync(const Windows::Devices::Pwm::Provider::IPwmProvider & provider)
{
    return get_activation_factory<PwmController, IPwmControllerStatics>().GetControllersAsync(provider);
}

inline Windows::Foundation::IAsyncOperation<Windows::Devices::Pwm::PwmController> PwmController::GetDefaultAsync()
{
    return get_activation_factory<PwmController, IPwmControllerStatics2>().GetDefaultAsync();
}

}

}
