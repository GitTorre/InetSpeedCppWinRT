// C++ for the Windows Runtime v1.29
// Copyright (c) 2016 Microsoft Corporation

#pragma once

#include "internal\Windows.Foundation.3.h"
#include "internal\Windows.Devices.I2c.Provider.3.h"
#include "Windows.Devices.I2c.h"

WINRT_EXPORT namespace winrt {

namespace impl {

template <typename D>
struct produce<D, Windows::Devices::I2c::Provider::II2cControllerProvider> : produce_base<D, Windows::Devices::I2c::Provider::II2cControllerProvider>
{
    HRESULT __stdcall abi_GetDeviceProvider(abi_arg_in<Windows::Devices::I2c::Provider::IProviderI2cConnectionSettings> settings, abi_arg_out<Windows::Devices::I2c::Provider::II2cDeviceProvider> device) noexcept override
    {
        try
        {
            *device = detach(shim().GetDeviceProvider(*reinterpret_cast<const Windows::Devices::I2c::Provider::ProviderI2cConnectionSettings *>(&settings)));
            return S_OK;
        }
        catch (...)
        {
            *device = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Devices::I2c::Provider::II2cDeviceProvider> : produce_base<D, Windows::Devices::I2c::Provider::II2cDeviceProvider>
{
    HRESULT __stdcall get_DeviceId(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(shim().DeviceId());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_Write(uint32_t __bufferSize, abi_arg_in<uint8_t> * buffer) noexcept override
    {
        try
        {
            shim().Write(array_ref<const uint8_t>(buffer, buffer + __bufferSize));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_WritePartial(uint32_t __bufferSize, abi_arg_in<uint8_t> * buffer, abi_arg_out<Windows::Devices::I2c::Provider::ProviderI2cTransferResult> result) noexcept override
    {
        try
        {
            *result = detach(shim().WritePartial(array_ref<const uint8_t>(buffer, buffer + __bufferSize)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_Read(uint32_t __bufferSize, abi_arg_out<uint8_t> buffer) noexcept override
    {
        try
        {
            shim().Read(*buffer);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_ReadPartial(uint32_t __bufferSize, abi_arg_out<uint8_t> buffer, abi_arg_out<Windows::Devices::I2c::Provider::ProviderI2cTransferResult> result) noexcept override
    {
        try
        {
            *result = detach(shim().ReadPartial(*buffer));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_WriteRead(uint32_t __writeBufferSize, abi_arg_in<uint8_t> * writeBuffer, uint32_t __readBufferSize, abi_arg_out<uint8_t> readBuffer) noexcept override
    {
        try
        {
            shim().WriteRead(array_ref<const uint8_t>(writeBuffer, writeBuffer + __writeBufferSize), *readBuffer);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_WriteReadPartial(uint32_t __writeBufferSize, abi_arg_in<uint8_t> * writeBuffer, uint32_t __readBufferSize, abi_arg_out<uint8_t> readBuffer, abi_arg_out<Windows::Devices::I2c::Provider::ProviderI2cTransferResult> result) noexcept override
    {
        try
        {
            *result = detach(shim().WriteReadPartial(array_ref<const uint8_t>(writeBuffer, writeBuffer + __writeBufferSize), *readBuffer));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Devices::I2c::Provider::II2cProvider> : produce_base<D, Windows::Devices::I2c::Provider::II2cProvider>
{
    HRESULT __stdcall abi_GetControllersAsync(abi_arg_out<Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Devices::I2c::Provider::II2cControllerProvider>>> operation) noexcept override
    {
        try
        {
            *operation = detach(shim().GetControllersAsync());
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Devices::I2c::Provider::IProviderI2cConnectionSettings> : produce_base<D, Windows::Devices::I2c::Provider::IProviderI2cConnectionSettings>
{
    HRESULT __stdcall get_SlaveAddress(int32_t * value) noexcept override
    {
        try
        {
            *value = detach(shim().SlaveAddress());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_SlaveAddress(int32_t value) noexcept override
    {
        try
        {
            shim().SlaveAddress(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_BusSpeed(Windows::Devices::I2c::Provider::ProviderI2cBusSpeed * value) noexcept override
    {
        try
        {
            *value = detach(shim().BusSpeed());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_BusSpeed(Windows::Devices::I2c::Provider::ProviderI2cBusSpeed value) noexcept override
    {
        try
        {
            shim().BusSpeed(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_SharingMode(Windows::Devices::I2c::Provider::ProviderI2cSharingMode * value) noexcept override
    {
        try
        {
            *value = detach(shim().SharingMode());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_SharingMode(Windows::Devices::I2c::Provider::ProviderI2cSharingMode value) noexcept override
    {
        try
        {
            shim().SharingMode(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

}

namespace Windows::Devices::I2c::Provider {

template <typename D> int32_t impl_IProviderI2cConnectionSettings<D>::SlaveAddress() const
{
    int32_t value {};
    check_hresult(shim()->get_SlaveAddress(&value));
    return value;
}

template <typename D> void impl_IProviderI2cConnectionSettings<D>::SlaveAddress(int32_t value) const
{
    check_hresult(shim()->put_SlaveAddress(value));
}

template <typename D> Windows::Devices::I2c::Provider::ProviderI2cBusSpeed impl_IProviderI2cConnectionSettings<D>::BusSpeed() const
{
    Windows::Devices::I2c::Provider::ProviderI2cBusSpeed value {};
    check_hresult(shim()->get_BusSpeed(&value));
    return value;
}

template <typename D> void impl_IProviderI2cConnectionSettings<D>::BusSpeed(Windows::Devices::I2c::Provider::ProviderI2cBusSpeed value) const
{
    check_hresult(shim()->put_BusSpeed(value));
}

template <typename D> Windows::Devices::I2c::Provider::ProviderI2cSharingMode impl_IProviderI2cConnectionSettings<D>::SharingMode() const
{
    Windows::Devices::I2c::Provider::ProviderI2cSharingMode value {};
    check_hresult(shim()->get_SharingMode(&value));
    return value;
}

template <typename D> void impl_IProviderI2cConnectionSettings<D>::SharingMode(Windows::Devices::I2c::Provider::ProviderI2cSharingMode value) const
{
    check_hresult(shim()->put_SharingMode(value));
}

template <typename D> Windows::Devices::I2c::Provider::II2cDeviceProvider impl_II2cControllerProvider<D>::GetDeviceProvider(const Windows::Devices::I2c::Provider::ProviderI2cConnectionSettings & settings) const
{
    Windows::Devices::I2c::Provider::II2cDeviceProvider device;
    check_hresult(shim()->abi_GetDeviceProvider(get(settings), put(device)));
    return device;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Devices::I2c::Provider::II2cControllerProvider>> impl_II2cProvider<D>::GetControllersAsync() const
{
    Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Devices::I2c::Provider::II2cControllerProvider>> operation;
    check_hresult(shim()->abi_GetControllersAsync(put(operation)));
    return operation;
}

template <typename D> hstring impl_II2cDeviceProvider<D>::DeviceId() const
{
    hstring value;
    check_hresult(shim()->get_DeviceId(put(value)));
    return value;
}

template <typename D> void impl_II2cDeviceProvider<D>::Write(array_ref<const uint8_t> buffer) const
{
    check_hresult(shim()->abi_Write(buffer.size(), get(buffer)));
}

template <typename D> Windows::Devices::I2c::Provider::ProviderI2cTransferResult impl_II2cDeviceProvider<D>::WritePartial(array_ref<const uint8_t> buffer) const
{
    Windows::Devices::I2c::Provider::ProviderI2cTransferResult result {};
    check_hresult(shim()->abi_WritePartial(buffer.size(), get(buffer), put(result)));
    return result;
}

template <typename D> void impl_II2cDeviceProvider<D>::Read(array_ref<uint8_t> buffer) const
{
    check_hresult(shim()->abi_Read(buffer.size(), get(buffer)));
}

template <typename D> Windows::Devices::I2c::Provider::ProviderI2cTransferResult impl_II2cDeviceProvider<D>::ReadPartial(array_ref<uint8_t> buffer) const
{
    Windows::Devices::I2c::Provider::ProviderI2cTransferResult result {};
    check_hresult(shim()->abi_ReadPartial(buffer.size(), get(buffer), put(result)));
    return result;
}

template <typename D> void impl_II2cDeviceProvider<D>::WriteRead(array_ref<const uint8_t> writeBuffer, array_ref<uint8_t> readBuffer) const
{
    check_hresult(shim()->abi_WriteRead(writeBuffer.size(), get(writeBuffer), readBuffer.size(), get(readBuffer)));
}

template <typename D> Windows::Devices::I2c::Provider::ProviderI2cTransferResult impl_II2cDeviceProvider<D>::WriteReadPartial(array_ref<const uint8_t> writeBuffer, array_ref<uint8_t> readBuffer) const
{
    Windows::Devices::I2c::Provider::ProviderI2cTransferResult result {};
    check_hresult(shim()->abi_WriteReadPartial(writeBuffer.size(), get(writeBuffer), readBuffer.size(), get(readBuffer), put(result)));
    return result;
}

}

}
