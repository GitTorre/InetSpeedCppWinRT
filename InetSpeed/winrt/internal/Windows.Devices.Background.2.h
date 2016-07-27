// C++ for the Windows Runtime v1.29
// Copyright (c) 2016 Microsoft Corporation

#pragma once

#include "Windows.Devices.Background.1.h"

WINRT_EXPORT namespace winrt {

namespace Windows::Devices::Background {

template <typename D>
class WINRT_EBO impl_IDeviceServicingDetails
{
    auto shim() const { return impl::shim<D, IDeviceServicingDetails>(this); }

public:

    hstring DeviceId() const;
    hstring Arguments() const;
    Windows::Foundation::TimeSpan ExpectedDuration() const;
};

template <typename D>
class WINRT_EBO impl_IDeviceUseDetails
{
    auto shim() const { return impl::shim<D, IDeviceUseDetails>(this); }

public:

    hstring DeviceId() const;
    hstring Arguments() const;
};

struct IDeviceServicingDetails :
    Windows::IInspectable,
    impl::consume<IDeviceServicingDetails>
{
    IDeviceServicingDetails(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IDeviceServicingDetails>(m_ptr); }
};

struct IDeviceUseDetails :
    Windows::IInspectable,
    impl::consume<IDeviceUseDetails>
{
    IDeviceUseDetails(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IDeviceUseDetails>(m_ptr); }
};

}

}
