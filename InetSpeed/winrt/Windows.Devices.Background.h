// C++ for the Windows Runtime v1.29
// Copyright (c) 2016 Microsoft Corporation

#pragma once

#include "internal\Windows.Foundation.3.h"
#include "internal\Windows.Devices.Background.3.h"
#include "Windows.Devices.h"

WINRT_EXPORT namespace winrt {

namespace impl {

template <typename D>
struct produce<D, Windows::Devices::Background::IDeviceServicingDetails> : produce_base<D, Windows::Devices::Background::IDeviceServicingDetails>
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

    HRESULT __stdcall get_Arguments(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(shim().Arguments());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ExpectedDuration(abi_arg_out<Windows::Foundation::TimeSpan> value) noexcept override
    {
        try
        {
            *value = detach(shim().ExpectedDuration());
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

    HRESULT __stdcall get_Arguments(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(shim().Arguments());
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

template <typename D> hstring impl_IDeviceUseDetails<D>::DeviceId() const
{
    hstring value;
    check_hresult(shim()->get_DeviceId(put(value)));
    return value;
}

template <typename D> hstring impl_IDeviceUseDetails<D>::Arguments() const
{
    hstring value;
    check_hresult(shim()->get_Arguments(put(value)));
    return value;
}

template <typename D> hstring impl_IDeviceServicingDetails<D>::DeviceId() const
{
    hstring value;
    check_hresult(shim()->get_DeviceId(put(value)));
    return value;
}

template <typename D> hstring impl_IDeviceServicingDetails<D>::Arguments() const
{
    hstring value;
    check_hresult(shim()->get_Arguments(put(value)));
    return value;
}

template <typename D> Windows::Foundation::TimeSpan impl_IDeviceServicingDetails<D>::ExpectedDuration() const
{
    Windows::Foundation::TimeSpan value {};
    check_hresult(shim()->get_ExpectedDuration(put(value)));
    return value;
}

}

}
