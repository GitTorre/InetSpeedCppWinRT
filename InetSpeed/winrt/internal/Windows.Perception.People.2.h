// C++ for the Windows Runtime v1.29
// Copyright (c) 2016 Microsoft Corporation

#pragma once

#include "Windows.Perception.People.1.h"

WINRT_EXPORT namespace winrt {

namespace Windows::Perception::People {

template <typename D>
class WINRT_EBO impl_IHeadPose
{
    auto shim() const { return impl::shim<D, IHeadPose>(this); }

public:

    Windows::Foundation::Numerics::float3 Position() const;
    Windows::Foundation::Numerics::float3 ForwardDirection() const;
    Windows::Foundation::Numerics::float3 UpDirection() const;
};

struct IHeadPose :
    Windows::IInspectable,
    impl::consume<IHeadPose>
{
    IHeadPose(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IHeadPose>(m_ptr); }
};

}

}
