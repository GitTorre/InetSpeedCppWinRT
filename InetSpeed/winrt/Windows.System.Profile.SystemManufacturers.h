// C++ for the Windows Runtime v1.29
// Copyright (c) 2016 Microsoft Corporation

#pragma once

#include "internal\Windows.System.Profile.SystemManufacturers.3.h"
#include "Windows.System.Profile.h"

WINRT_EXPORT namespace winrt {

namespace impl {

template <typename D>
struct produce<D, Windows::System::Profile::SystemManufacturers::ISmbiosInformationStatics> : produce_base<D, Windows::System::Profile::SystemManufacturers::ISmbiosInformationStatics>
{
    HRESULT __stdcall get_SerialNumber(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(shim().SerialNumber());
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

namespace Windows::System::Profile::SystemManufacturers {

template <typename D> hstring impl_ISmbiosInformationStatics<D>::SerialNumber() const
{
    hstring value;
    check_hresult(shim()->get_SerialNumber(put(value)));
    return value;
}

inline hstring SmbiosInformation::SerialNumber()
{
    return get_activation_factory<SmbiosInformation, ISmbiosInformationStatics>().SerialNumber();
}

}

}
