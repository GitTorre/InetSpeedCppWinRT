// C++/WinRT v1.0.170717.1
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "base.h"
#include "Windows.Foundation.h"
#include "Windows.Foundation.Collections.h"
#include "impl\complex_structs.h"

WINRT_WARNING_PUSH
#include "impl\Windows.Graphics.DirectX.2.h"
#include "impl\Windows.Foundation.2.h"
#include "impl\Windows.Graphics.DirectX.Direct3D11.2.h"
#include "Windows.Graphics.DirectX.h"

namespace winrt {

namespace impl {

template <typename D> void consume_Windows_Graphics_DirectX_Direct3D11_IDirect3DDevice<D>::Trim() const
{
    check_hresult(WINRT_SHIM(Windows::Graphics::DirectX::Direct3D11::IDirect3DDevice)->Trim());
}

template <typename D> Windows::Graphics::DirectX::Direct3D11::Direct3DSurfaceDescription consume_Windows_Graphics_DirectX_Direct3D11_IDirect3DSurface<D>::Description() const
{
    Windows::Graphics::DirectX::Direct3D11::Direct3DSurfaceDescription value{};
    check_hresult(WINRT_SHIM(Windows::Graphics::DirectX::Direct3D11::IDirect3DSurface)->get_Description(put_abi(value)));
    return value;
}

template <typename D>
struct produce<D, Windows::Graphics::DirectX::Direct3D11::IDirect3DDevice> : produce_base<D, Windows::Graphics::DirectX::Direct3D11::IDirect3DDevice>
{
    HRESULT __stdcall Trim() noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Trim();
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
    HRESULT __stdcall get_Description(abi_t<Windows::Graphics::DirectX::Direct3D11::Direct3DSurfaceDescription>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Description());
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

}

}

namespace std {

template<> struct hash<winrt::Windows::Graphics::DirectX::Direct3D11::IDirect3DDevice> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Graphics::DirectX::Direct3D11::IDirect3DDevice> {};

template<> struct hash<winrt::Windows::Graphics::DirectX::Direct3D11::IDirect3DSurface> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Graphics::DirectX::Direct3D11::IDirect3DSurface> {};

}

WINRT_WARNING_POP
