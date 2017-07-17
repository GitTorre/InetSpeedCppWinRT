// C++/WinRT v1.0.170717.1
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "base.h"
#include "Windows.Foundation.h"
#include "Windows.Foundation.Collections.h"
#include "impl\complex_structs.h"

WINRT_WARNING_PUSH
#include "impl\Windows.Devices.Background.2.h"
#include "Windows.Devices.h"

namespace winrt {

namespace impl {

template <typename D> hstring consume_Windows_Devices_Background_IDeviceServicingDetails<D>::DeviceId() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Background::IDeviceServicingDetails)->get_DeviceId(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Devices_Background_IDeviceServicingDetails<D>::Arguments() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Background::IDeviceServicingDetails)->get_Arguments(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::TimeSpan consume_Windows_Devices_Background_IDeviceServicingDetails<D>::ExpectedDuration() const
{
    Windows::Foundation::TimeSpan value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Background::IDeviceServicingDetails)->get_ExpectedDuration(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Devices_Background_IDeviceUseDetails<D>::DeviceId() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Background::IDeviceUseDetails)->get_DeviceId(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Devices_Background_IDeviceUseDetails<D>::Arguments() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Background::IDeviceUseDetails)->get_Arguments(put_abi(value)));
    return value;
}

template <typename D>
struct produce<D, Windows::Devices::Background::IDeviceServicingDetails> : produce_base<D, Windows::Devices::Background::IDeviceServicingDetails>
{
    HRESULT __stdcall get_DeviceId(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().DeviceId());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Arguments(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Arguments());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ExpectedDuration(abi_t<Windows::Foundation::TimeSpan>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ExpectedDuration());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Devices::Background::IDeviceUseDetails> : produce_base<D, Windows::Devices::Background::IDeviceUseDetails>
{
    HRESULT __stdcall get_DeviceId(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().DeviceId());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Arguments(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Arguments());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }
};

}

namespace Windows::Devices::Background {

}

}

namespace std {

template<> struct hash<winrt::Windows::Devices::Background::IDeviceServicingDetails> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::Background::IDeviceServicingDetails> {};

template<> struct hash<winrt::Windows::Devices::Background::IDeviceUseDetails> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::Background::IDeviceUseDetails> {};

template<> struct hash<winrt::Windows::Devices::Background::DeviceServicingDetails> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::Background::DeviceServicingDetails> {};

template<> struct hash<winrt::Windows::Devices::Background::DeviceUseDetails> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::Background::DeviceUseDetails> {};

}

WINRT_WARNING_POP
