// C++ for the Windows Runtime v1.29
// Copyright (c) 2016 Microsoft Corporation

#pragma once

#include "Windows.Devices.Portable.1.h"

WINRT_EXPORT namespace winrt {

namespace Windows::Devices::Portable {

template <typename D>
class WINRT_EBO impl_IServiceDeviceStatics
{
    auto shim() const { return impl::shim<D, IServiceDeviceStatics>(this); }

public:

    hstring GetDeviceSelector(Windows::Devices::Portable::ServiceDeviceType serviceType) const;
    hstring GetDeviceSelectorFromServiceId(GUID serviceId) const;
};

template <typename D>
class WINRT_EBO impl_IStorageDeviceStatics
{
    auto shim() const { return impl::shim<D, IStorageDeviceStatics>(this); }

public:

    Windows::Storage::StorageFolder FromId(hstring_ref deviceId) const;
    hstring GetDeviceSelector() const;
};

struct IServiceDeviceStatics :
    Windows::IInspectable,
    impl::consume<IServiceDeviceStatics>
{
    IServiceDeviceStatics(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IServiceDeviceStatics>(m_ptr); }
};

struct IStorageDeviceStatics :
    Windows::IInspectable,
    impl::consume<IStorageDeviceStatics>
{
    IStorageDeviceStatics(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IStorageDeviceStatics>(m_ptr); }
};

}

}
