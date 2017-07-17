// C++/WinRT v1.0.170717.1
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "base.h"
#include "Windows.Foundation.h"
#include "Windows.Foundation.Collections.h"
#include "impl\complex_structs.h"

WINRT_WARNING_PUSH
#include "impl\Windows.Phone.System.Profile.2.h"
#include "Windows.Phone.System.h"

namespace winrt {

namespace impl {

template <typename D> bool consume_Windows_Phone_System_Profile_IRetailModeStatics<D>::RetailModeEnabled() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::Phone::System::Profile::IRetailModeStatics)->get_RetailModeEnabled(&value));
    return value;
}

template <typename D>
struct produce<D, Windows::Phone::System::Profile::IRetailModeStatics> : produce_base<D, Windows::Phone::System::Profile::IRetailModeStatics>
{
    HRESULT __stdcall get_RetailModeEnabled(bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().RetailModeEnabled());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

}

namespace Windows::Phone::System::Profile {

inline bool RetailMode::RetailModeEnabled()
{
    return get_activation_factory<RetailMode, Windows::Phone::System::Profile::IRetailModeStatics>().RetailModeEnabled();
}

}

}

namespace std {

template<> struct hash<winrt::Windows::Phone::System::Profile::IRetailModeStatics> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Phone::System::Profile::IRetailModeStatics> {};

template<> struct hash<winrt::Windows::Phone::System::Profile::RetailMode> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Phone::System::Profile::RetailMode> {};

}

WINRT_WARNING_POP
