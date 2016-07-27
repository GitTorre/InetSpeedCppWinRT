// C++ for the Windows Runtime v1.29
// Copyright (c) 2016 Microsoft Corporation

#pragma once

#include "Windows.System.Profile.SystemManufacturers.1.h"

WINRT_EXPORT namespace winrt {

namespace Windows::System::Profile::SystemManufacturers {

template <typename D>
class WINRT_EBO impl_ISmbiosInformationStatics
{
    auto shim() const { return impl::shim<D, ISmbiosInformationStatics>(this); }

public:

    hstring SerialNumber() const;
};

struct ISmbiosInformationStatics :
    Windows::IInspectable,
    impl::consume<ISmbiosInformationStatics>
{
    ISmbiosInformationStatics(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<ISmbiosInformationStatics>(m_ptr); }
};

}

}
