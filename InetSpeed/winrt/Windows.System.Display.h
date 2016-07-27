// C++ for the Windows Runtime v1.29
// Copyright (c) 2016 Microsoft Corporation

#pragma once

#include "internal\Windows.System.Display.3.h"
#include "Windows.System.h"

WINRT_EXPORT namespace winrt {

namespace impl {

template <typename D>
struct produce<D, Windows::System::Display::IDisplayRequest> : produce_base<D, Windows::System::Display::IDisplayRequest>
{
    HRESULT __stdcall abi_RequestActive() noexcept override
    {
        try
        {
            shim().RequestActive();
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_RequestRelease() noexcept override
    {
        try
        {
            shim().RequestRelease();
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

}

namespace Windows::System::Display {

template <typename D> void impl_IDisplayRequest<D>::RequestActive() const
{
    check_hresult(shim()->abi_RequestActive());
}

template <typename D> void impl_IDisplayRequest<D>::RequestRelease() const
{
    check_hresult(shim()->abi_RequestRelease());
}

inline DisplayRequest::DisplayRequest() :
    DisplayRequest(activate_instance<DisplayRequest>())
{}

}

}
