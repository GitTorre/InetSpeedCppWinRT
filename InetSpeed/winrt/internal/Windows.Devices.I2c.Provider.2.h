// C++ for the Windows Runtime v1.29
// Copyright (c) 2016 Microsoft Corporation

#pragma once

#include "Windows.Devices.I2c.Provider.1.h"
#include "Windows.Foundation.2.h"

WINRT_EXPORT namespace winrt {

namespace ABI::Windows::Foundation::Collections {

#ifndef WINRT_GENERIC_511f8a39_98ca_550d_af25_1df2c1193c01
#define WINRT_GENERIC_511f8a39_98ca_550d_af25_1df2c1193c01
template <> struct __declspec(uuid("511f8a39-98ca-550d-af25-1df2c1193c01")) __declspec(novtable) IVectorView<Windows::Devices::I2c::Provider::II2cControllerProvider> : impl_IVectorView<Windows::Devices::I2c::Provider::II2cControllerProvider> {};
#endif


}

namespace ABI::Windows::Foundation {

#ifndef WINRT_GENERIC_5fe77838_1125_5b2c_a281_e06a3dfbb76e
#define WINRT_GENERIC_5fe77838_1125_5b2c_a281_e06a3dfbb76e
template <> struct __declspec(uuid("5fe77838-1125-5b2c-a281-e06a3dfbb76e")) __declspec(novtable) IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Devices::I2c::Provider::II2cControllerProvider>> : impl_IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Devices::I2c::Provider::II2cControllerProvider>> {};
#endif

#ifndef WINRT_GENERIC_771e22ed_da9e_50be_b730_a3bada6bfb25
#define WINRT_GENERIC_771e22ed_da9e_50be_b730_a3bada6bfb25
template <> struct __declspec(uuid("771e22ed-da9e-50be-b730-a3bada6bfb25")) __declspec(novtable) AsyncOperationCompletedHandler<Windows::Foundation::Collections::IVectorView<Windows::Devices::I2c::Provider::II2cControllerProvider>> : impl_AsyncOperationCompletedHandler<Windows::Foundation::Collections::IVectorView<Windows::Devices::I2c::Provider::II2cControllerProvider>> {};
#endif


}

namespace Windows::Devices::I2c::Provider {

template <typename D>
class WINRT_EBO impl_II2cControllerProvider
{
    auto shim() const { return impl::shim<D, II2cControllerProvider>(this); }

public:

    Windows::Devices::I2c::Provider::II2cDeviceProvider GetDeviceProvider(const Windows::Devices::I2c::Provider::ProviderI2cConnectionSettings & settings) const;
};

template <typename D>
class WINRT_EBO impl_II2cDeviceProvider
{
    auto shim() const { return impl::shim<D, II2cDeviceProvider>(this); }

public:

    hstring DeviceId() const;
    void Write(array_ref<const uint8_t> buffer) const;
    Windows::Devices::I2c::Provider::ProviderI2cTransferResult WritePartial(array_ref<const uint8_t> buffer) const;
    void Read(array_ref<uint8_t> buffer) const;
    Windows::Devices::I2c::Provider::ProviderI2cTransferResult ReadPartial(array_ref<uint8_t> buffer) const;
    void WriteRead(array_ref<const uint8_t> writeBuffer, array_ref<uint8_t> readBuffer) const;
    Windows::Devices::I2c::Provider::ProviderI2cTransferResult WriteReadPartial(array_ref<const uint8_t> writeBuffer, array_ref<uint8_t> readBuffer) const;
};

template <typename D>
class WINRT_EBO impl_II2cProvider
{
    auto shim() const { return impl::shim<D, II2cProvider>(this); }

public:

    Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Devices::I2c::Provider::II2cControllerProvider>> GetControllersAsync() const;
};

template <typename D>
class WINRT_EBO impl_IProviderI2cConnectionSettings
{
    auto shim() const { return impl::shim<D, IProviderI2cConnectionSettings>(this); }

public:

    int32_t SlaveAddress() const;
    void SlaveAddress(int32_t value) const;
    Windows::Devices::I2c::Provider::ProviderI2cBusSpeed BusSpeed() const;
    void BusSpeed(Windows::Devices::I2c::Provider::ProviderI2cBusSpeed value) const;
    Windows::Devices::I2c::Provider::ProviderI2cSharingMode SharingMode() const;
    void SharingMode(Windows::Devices::I2c::Provider::ProviderI2cSharingMode value) const;
};

struct II2cControllerProvider :
    Windows::IInspectable,
    impl::consume<II2cControllerProvider>
{
    II2cControllerProvider(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<II2cControllerProvider>(m_ptr); }
};

struct II2cDeviceProvider :
    Windows::IInspectable,
    impl::consume<II2cDeviceProvider>,
    impl::require<II2cDeviceProvider, Windows::Foundation::IClosable>
{
    II2cDeviceProvider(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<II2cDeviceProvider>(m_ptr); }
};

struct II2cProvider :
    Windows::IInspectable,
    impl::consume<II2cProvider>
{
    II2cProvider(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<II2cProvider>(m_ptr); }
};

struct IProviderI2cConnectionSettings :
    Windows::IInspectable,
    impl::consume<IProviderI2cConnectionSettings>
{
    IProviderI2cConnectionSettings(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IProviderI2cConnectionSettings>(m_ptr); }
};

}

}
