// C++ for the Windows Runtime v1.29
// Copyright (c) 2016 Microsoft Corporation

#pragma once

#include "internal\Windows.Graphics.DirectX.Direct3D11.3.h"
#include "Windows.Graphics.DirectX.h"

WINRT_EXPORT namespace winrt {

namespace impl {

template <typename D>
struct produce<D, Windows::Graphics::DirectX::Direct3D11::IDirect3DDevice> : produce_base<D, Windows::Graphics::DirectX::Direct3D11::IDirect3DDevice>
{
    HRESULT __stdcall abi_Trim() noexcept override
    {
        try
        {
            shim().Trim();
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Graphics::DirectX::Direct3D11::IDirect3DSurface> : produce_base<D, Windows::Graphics::DirectX::Direct3D11::IDirect3DSurface>
{
    HRESULT __stdcall get_Description(abi_arg_out<Windows::Graphics::DirectX::Direct3D11::Direct3DSurfaceDescription> value) noexcept override
    {
        try
        {
            *value = detach(shim().Description());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

}

namespace Windows::Graphics::DirectX::Direct3D11 {

template <typename D> void impl_IDirect3DDevice<D>::Trim() const
{
    check_hresult(shim()->abi_Trim());
}

template <typename D> Windows::Graphics::DirectX::Direct3D11::Direct3DSurfaceDescription impl_IDirect3DSurface<D>::Description() const
{
    Windows::Graphics::DirectX::Direct3D11::Direct3DSurfaceDescription value {};
    check_hresult(shim()->get_Description(put(value)));
    return value;
}

}

}
