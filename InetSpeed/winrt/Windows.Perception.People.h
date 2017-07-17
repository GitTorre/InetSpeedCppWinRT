﻿// C++/WinRT v1.0.170717.1
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "base.h"
#include "Windows.Foundation.h"
#include "Windows.Foundation.Collections.h"
#include "impl\complex_structs.h"

WINRT_WARNING_PUSH
#include "impl\Windows.Perception.People.2.h"
#include "Windows.Perception.h"

namespace winrt {

namespace impl {

template <typename D> Windows::Foundation::Numerics::float3 consume_Windows_Perception_People_IHeadPose<D>::Position() const
{
    Windows::Foundation::Numerics::float3 value{};
    check_hresult(WINRT_SHIM(Windows::Perception::People::IHeadPose)->get_Position(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Numerics::float3 consume_Windows_Perception_People_IHeadPose<D>::ForwardDirection() const
{
    Windows::Foundation::Numerics::float3 value{};
    check_hresult(WINRT_SHIM(Windows::Perception::People::IHeadPose)->get_ForwardDirection(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Numerics::float3 consume_Windows_Perception_People_IHeadPose<D>::UpDirection() const
{
    Windows::Foundation::Numerics::float3 value{};
    check_hresult(WINRT_SHIM(Windows::Perception::People::IHeadPose)->get_UpDirection(put_abi(value)));
    return value;
}

template <typename D>
struct produce<D, Windows::Perception::People::IHeadPose> : produce_base<D, Windows::Perception::People::IHeadPose>
{
    HRESULT __stdcall get_Position(abi_t<Windows::Foundation::Numerics::float3>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Position());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ForwardDirection(abi_t<Windows::Foundation::Numerics::float3>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ForwardDirection());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_UpDirection(abi_t<Windows::Foundation::Numerics::float3>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().UpDirection());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

}

namespace Windows::Perception::People {

}

}

namespace std {

template<> struct hash<winrt::Windows::Perception::People::IHeadPose> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Perception::People::IHeadPose> {};

template<> struct hash<winrt::Windows::Perception::People::HeadPose> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Perception::People::HeadPose> {};

}

WINRT_WARNING_POP
