// C++ for the Windows Runtime v1.29
// Copyright (c) 2016 Microsoft Corporation

#pragma once

#include "base.h"
#include "Windows.Devices.Pwm.0.h"
#include "Windows.Devices.Pwm.Provider.0.h"
#include "Windows.Foundation.0.h"
#include "Windows.Foundation.1.h"

WINRT_EXPORT namespace winrt {

namespace ABI::Windows::Devices::Pwm {

struct __declspec(uuid("c45f5c85-d2e8-42cf-9bd6-cf5ed029e6a7")) __declspec(novtable) IPwmController : Windows::IInspectable
{
    virtual HRESULT __stdcall get_PinCount(int32_t * value) = 0;
    virtual HRESULT __stdcall get_ActualFrequency(double * value) = 0;
    virtual HRESULT __stdcall abi_SetDesiredFrequency(double desiredFrequency, double * value) = 0;
    virtual HRESULT __stdcall get_MinFrequency(double * value) = 0;
    virtual HRESULT __stdcall get_MaxFrequency(double * value) = 0;
    virtual HRESULT __stdcall abi_OpenPin(int32_t pinNumber, Windows::Devices::Pwm::IPwmPin ** pin) = 0;
};

struct __declspec(uuid("4263bda1-8946-4404-bd48-81dd124af4d9")) __declspec(novtable) IPwmControllerStatics : Windows::IInspectable
{
    virtual HRESULT __stdcall abi_GetControllersAsync(Windows::Devices::Pwm::Provider::IPwmProvider * provider, Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Devices::Pwm::PwmController>> ** operation) = 0;
};

struct __declspec(uuid("44fc5b1f-f119-4bdd-97ad-f76ef986736d")) __declspec(novtable) IPwmControllerStatics2 : Windows::IInspectable
{
    virtual HRESULT __stdcall abi_GetDefaultAsync(Windows::Foundation::IAsyncOperation<Windows::Devices::Pwm::PwmController> ** operation) = 0;
};

struct __declspec(uuid("22972dc8-c6cf-4821-b7f9-c6454fb6af79")) __declspec(novtable) IPwmPin : Windows::IInspectable
{
    virtual HRESULT __stdcall get_Controller(Windows::Devices::Pwm::IPwmController ** value) = 0;
    virtual HRESULT __stdcall abi_GetActiveDutyCyclePercentage(double * result) = 0;
    virtual HRESULT __stdcall abi_SetActiveDutyCyclePercentage(double dutyCyclePercentage) = 0;
    virtual HRESULT __stdcall get_Polarity(winrt::Windows::Devices::Pwm::PwmPulsePolarity * value) = 0;
    virtual HRESULT __stdcall put_Polarity(winrt::Windows::Devices::Pwm::PwmPulsePolarity value) = 0;
    virtual HRESULT __stdcall abi_Start() = 0;
    virtual HRESULT __stdcall abi_Stop() = 0;
    virtual HRESULT __stdcall get_IsStarted(bool * value) = 0;
};

}

namespace ABI {

template <> struct traits<Windows::Devices::Pwm::PwmController> { using default_interface = Windows::Devices::Pwm::IPwmController; };
template <> struct traits<Windows::Devices::Pwm::PwmPin> { using default_interface = Windows::Devices::Pwm::IPwmPin; };

}

namespace Windows::Devices::Pwm {

template <typename T> class impl_IPwmController;
template <typename T> class impl_IPwmControllerStatics;
template <typename T> class impl_IPwmControllerStatics2;
template <typename T> class impl_IPwmPin;

}

namespace impl {

template <> struct traits<Windows::Devices::Pwm::IPwmController>
{
    using abi = ABI::Windows::Devices::Pwm::IPwmController;
    template <typename D> using consume = Windows::Devices::Pwm::impl_IPwmController<D>;
};

template <> struct traits<Windows::Devices::Pwm::IPwmControllerStatics>
{
    using abi = ABI::Windows::Devices::Pwm::IPwmControllerStatics;
    template <typename D> using consume = Windows::Devices::Pwm::impl_IPwmControllerStatics<D>;
};

template <> struct traits<Windows::Devices::Pwm::IPwmControllerStatics2>
{
    using abi = ABI::Windows::Devices::Pwm::IPwmControllerStatics2;
    template <typename D> using consume = Windows::Devices::Pwm::impl_IPwmControllerStatics2<D>;
};

template <> struct traits<Windows::Devices::Pwm::IPwmPin>
{
    using abi = ABI::Windows::Devices::Pwm::IPwmPin;
    template <typename D> using consume = Windows::Devices::Pwm::impl_IPwmPin<D>;
};

template <> struct traits<Windows::Devices::Pwm::PwmController>
{
    using abi = ABI::Windows::Devices::Pwm::PwmController;
    using default_interface = Windows::Devices::Pwm::IPwmController;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Devices.Pwm.PwmController"; }
};

template <> struct traits<Windows::Devices::Pwm::PwmPin>
{
    using abi = ABI::Windows::Devices::Pwm::PwmPin;
    using default_interface = Windows::Devices::Pwm::IPwmPin;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Devices.Pwm.PwmPin"; }
};

}

}