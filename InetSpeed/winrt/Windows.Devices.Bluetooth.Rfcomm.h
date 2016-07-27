// C++ for the Windows Runtime v1.29
// Copyright (c) 2016 Microsoft Corporation

#pragma once

#include "internal\Windows.Devices.Bluetooth.3.h"
#include "internal\Windows.Foundation.Collections.3.h"
#include "internal\Windows.Foundation.3.h"
#include "internal\Windows.Networking.3.h"
#include "internal\Windows.Networking.Sockets.3.h"
#include "internal\Windows.Devices.Enumeration.3.h"
#include "internal\Windows.Devices.Bluetooth.Rfcomm.3.h"
#include "Windows.Devices.Bluetooth.h"
#include "Windows.Foundation.h"

WINRT_EXPORT namespace winrt {

namespace impl {

template <typename D>
struct produce<D, Windows::Devices::Bluetooth::Rfcomm::IRfcommDeviceService> : produce_base<D, Windows::Devices::Bluetooth::Rfcomm::IRfcommDeviceService>
{
    HRESULT __stdcall get_ConnectionHostName(abi_arg_out<Windows::Networking::IHostName> value) noexcept override
    {
        try
        {
            *value = detach(shim().ConnectionHostName());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ConnectionServiceName(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(shim().ConnectionServiceName());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ServiceId(abi_arg_out<Windows::Devices::Bluetooth::Rfcomm::IRfcommServiceId> value) noexcept override
    {
        try
        {
            *value = detach(shim().ServiceId());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ProtectionLevel(Windows::Networking::Sockets::SocketProtectionLevel * value) noexcept override
    {
        try
        {
            *value = detach(shim().ProtectionLevel());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_MaxProtectionLevel(Windows::Networking::Sockets::SocketProtectionLevel * value) noexcept override
    {
        try
        {
            *value = detach(shim().MaxProtectionLevel());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_GetSdpRawAttributesAsync(abi_arg_out<Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IMapView<uint32_t, Windows::Storage::Streams::IBuffer>>> asyncOp) noexcept override
    {
        try
        {
            *asyncOp = detach(shim().GetSdpRawAttributesAsync());
            return S_OK;
        }
        catch (...)
        {
            *asyncOp = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_GetSdpRawAttributesWithCacheModeAsync(Windows::Devices::Bluetooth::BluetoothCacheMode cacheMode, abi_arg_out<Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IMapView<uint32_t, Windows::Storage::Streams::IBuffer>>> asyncOp) noexcept override
    {
        try
        {
            *asyncOp = detach(shim().GetSdpRawAttributesAsync(cacheMode));
            return S_OK;
        }
        catch (...)
        {
            *asyncOp = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Devices::Bluetooth::Rfcomm::IRfcommDeviceService2> : produce_base<D, Windows::Devices::Bluetooth::Rfcomm::IRfcommDeviceService2>
{
    HRESULT __stdcall get_Device(abi_arg_out<Windows::Devices::Bluetooth::IBluetoothDevice> value) noexcept override
    {
        try
        {
            *value = detach(shim().Device());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Devices::Bluetooth::Rfcomm::IRfcommDeviceService3> : produce_base<D, Windows::Devices::Bluetooth::Rfcomm::IRfcommDeviceService3>
{
    HRESULT __stdcall get_DeviceAccessInformation(abi_arg_out<Windows::Devices::Enumeration::IDeviceAccessInformation> value) noexcept override
    {
        try
        {
            *value = detach(shim().DeviceAccessInformation());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_RequestAccessAsync(abi_arg_out<Windows::Foundation::IAsyncOperation<winrt::Windows::Devices::Enumeration::DeviceAccessStatus>> value) noexcept override
    {
        try
        {
            *value = detach(shim().RequestAccessAsync());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Devices::Bluetooth::Rfcomm::IRfcommDeviceServiceStatics> : produce_base<D, Windows::Devices::Bluetooth::Rfcomm::IRfcommDeviceServiceStatics>
{
    HRESULT __stdcall abi_FromIdAsync(abi_arg_in<hstring> deviceId, abi_arg_out<Windows::Foundation::IAsyncOperation<Windows::Devices::Bluetooth::Rfcomm::RfcommDeviceService>> asyncOp) noexcept override
    {
        try
        {
            *asyncOp = detach(shim().FromIdAsync(*reinterpret_cast<const hstring *>(&deviceId)));
            return S_OK;
        }
        catch (...)
        {
            *asyncOp = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_GetDeviceSelector(abi_arg_in<Windows::Devices::Bluetooth::Rfcomm::IRfcommServiceId> serviceId, abi_arg_out<hstring> selector) noexcept override
    {
        try
        {
            *selector = detach(shim().GetDeviceSelector(*reinterpret_cast<const Windows::Devices::Bluetooth::Rfcomm::RfcommServiceId *>(&serviceId)));
            return S_OK;
        }
        catch (...)
        {
            *selector = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Devices::Bluetooth::Rfcomm::IRfcommDeviceServiceStatics2> : produce_base<D, Windows::Devices::Bluetooth::Rfcomm::IRfcommDeviceServiceStatics2>
{
    HRESULT __stdcall abi_GetDeviceSelectorForBluetoothDevice(abi_arg_in<Windows::Devices::Bluetooth::IBluetoothDevice> bluetoothDevice, abi_arg_out<hstring> selector) noexcept override
    {
        try
        {
            *selector = detach(shim().GetDeviceSelectorForBluetoothDevice(*reinterpret_cast<const Windows::Devices::Bluetooth::BluetoothDevice *>(&bluetoothDevice)));
            return S_OK;
        }
        catch (...)
        {
            *selector = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_GetDeviceSelectorForBluetoothDeviceWithCacheMode(abi_arg_in<Windows::Devices::Bluetooth::IBluetoothDevice> bluetoothDevice, Windows::Devices::Bluetooth::BluetoothCacheMode cacheMode, abi_arg_out<hstring> selector) noexcept override
    {
        try
        {
            *selector = detach(shim().GetDeviceSelectorForBluetoothDevice(*reinterpret_cast<const Windows::Devices::Bluetooth::BluetoothDevice *>(&bluetoothDevice), cacheMode));
            return S_OK;
        }
        catch (...)
        {
            *selector = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_GetDeviceSelectorForBluetoothDeviceAndServiceId(abi_arg_in<Windows::Devices::Bluetooth::IBluetoothDevice> bluetoothDevice, abi_arg_in<Windows::Devices::Bluetooth::Rfcomm::IRfcommServiceId> serviceId, abi_arg_out<hstring> selector) noexcept override
    {
        try
        {
            *selector = detach(shim().GetDeviceSelectorForBluetoothDeviceAndServiceId(*reinterpret_cast<const Windows::Devices::Bluetooth::BluetoothDevice *>(&bluetoothDevice), *reinterpret_cast<const Windows::Devices::Bluetooth::Rfcomm::RfcommServiceId *>(&serviceId)));
            return S_OK;
        }
        catch (...)
        {
            *selector = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_GetDeviceSelectorForBluetoothDeviceAndServiceIdWithCacheMode(abi_arg_in<Windows::Devices::Bluetooth::IBluetoothDevice> bluetoothDevice, abi_arg_in<Windows::Devices::Bluetooth::Rfcomm::IRfcommServiceId> serviceId, Windows::Devices::Bluetooth::BluetoothCacheMode cacheMode, abi_arg_out<hstring> selector) noexcept override
    {
        try
        {
            *selector = detach(shim().GetDeviceSelectorForBluetoothDeviceAndServiceId(*reinterpret_cast<const Windows::Devices::Bluetooth::BluetoothDevice *>(&bluetoothDevice), *reinterpret_cast<const Windows::Devices::Bluetooth::Rfcomm::RfcommServiceId *>(&serviceId), cacheMode));
            return S_OK;
        }
        catch (...)
        {
            *selector = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Devices::Bluetooth::Rfcomm::IRfcommDeviceServicesResult> : produce_base<D, Windows::Devices::Bluetooth::Rfcomm::IRfcommDeviceServicesResult>
{
    HRESULT __stdcall get_Error(Windows::Devices::Bluetooth::BluetoothError * value) noexcept override
    {
        try
        {
            *value = detach(shim().Error());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Services(abi_arg_out<Windows::Foundation::Collections::IVectorView<Windows::Devices::Bluetooth::Rfcomm::RfcommDeviceService>> services) noexcept override
    {
        try
        {
            *services = detach(shim().Services());
            return S_OK;
        }
        catch (...)
        {
            *services = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Devices::Bluetooth::Rfcomm::IRfcommServiceId> : produce_base<D, Windows::Devices::Bluetooth::Rfcomm::IRfcommServiceId>
{
    HRESULT __stdcall get_Uuid(GUID * value) noexcept override
    {
        try
        {
            *value = detach(shim().Uuid());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_AsShortId(uint32_t * shortId) noexcept override
    {
        try
        {
            *shortId = detach(shim().AsShortId());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_AsString(abi_arg_out<hstring> id) noexcept override
    {
        try
        {
            *id = detach(shim().AsString());
            return S_OK;
        }
        catch (...)
        {
            *id = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Devices::Bluetooth::Rfcomm::IRfcommServiceIdStatics> : produce_base<D, Windows::Devices::Bluetooth::Rfcomm::IRfcommServiceIdStatics>
{
    HRESULT __stdcall abi_FromUuid(GUID uuid, abi_arg_out<Windows::Devices::Bluetooth::Rfcomm::IRfcommServiceId> serviceId) noexcept override
    {
        try
        {
            *serviceId = detach(shim().FromUuid(uuid));
            return S_OK;
        }
        catch (...)
        {
            *serviceId = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_FromShortId(uint32_t shortId, abi_arg_out<Windows::Devices::Bluetooth::Rfcomm::IRfcommServiceId> serviceId) noexcept override
    {
        try
        {
            *serviceId = detach(shim().FromShortId(shortId));
            return S_OK;
        }
        catch (...)
        {
            *serviceId = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_SerialPort(abi_arg_out<Windows::Devices::Bluetooth::Rfcomm::IRfcommServiceId> serviceId) noexcept override
    {
        try
        {
            *serviceId = detach(shim().SerialPort());
            return S_OK;
        }
        catch (...)
        {
            *serviceId = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ObexObjectPush(abi_arg_out<Windows::Devices::Bluetooth::Rfcomm::IRfcommServiceId> serviceId) noexcept override
    {
        try
        {
            *serviceId = detach(shim().ObexObjectPush());
            return S_OK;
        }
        catch (...)
        {
            *serviceId = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ObexFileTransfer(abi_arg_out<Windows::Devices::Bluetooth::Rfcomm::IRfcommServiceId> serviceId) noexcept override
    {
        try
        {
            *serviceId = detach(shim().ObexFileTransfer());
            return S_OK;
        }
        catch (...)
        {
            *serviceId = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_PhoneBookAccessPce(abi_arg_out<Windows::Devices::Bluetooth::Rfcomm::IRfcommServiceId> serviceId) noexcept override
    {
        try
        {
            *serviceId = detach(shim().PhoneBookAccessPce());
            return S_OK;
        }
        catch (...)
        {
            *serviceId = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_PhoneBookAccessPse(abi_arg_out<Windows::Devices::Bluetooth::Rfcomm::IRfcommServiceId> serviceId) noexcept override
    {
        try
        {
            *serviceId = detach(shim().PhoneBookAccessPse());
            return S_OK;
        }
        catch (...)
        {
            *serviceId = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_GenericFileTransfer(abi_arg_out<Windows::Devices::Bluetooth::Rfcomm::IRfcommServiceId> serviceId) noexcept override
    {
        try
        {
            *serviceId = detach(shim().GenericFileTransfer());
            return S_OK;
        }
        catch (...)
        {
            *serviceId = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Devices::Bluetooth::Rfcomm::IRfcommServiceProvider> : produce_base<D, Windows::Devices::Bluetooth::Rfcomm::IRfcommServiceProvider>
{
    HRESULT __stdcall get_ServiceId(abi_arg_out<Windows::Devices::Bluetooth::Rfcomm::IRfcommServiceId> value) noexcept override
    {
        try
        {
            *value = detach(shim().ServiceId());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_SdpRawAttributes(abi_arg_out<Windows::Foundation::Collections::IMap<uint32_t, Windows::Storage::Streams::IBuffer>> value) noexcept override
    {
        try
        {
            *value = detach(shim().SdpRawAttributes());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_StartAdvertising(abi_arg_in<Windows::Networking::Sockets::IStreamSocketListener> listener) noexcept override
    {
        try
        {
            shim().StartAdvertising(*reinterpret_cast<const Windows::Networking::Sockets::StreamSocketListener *>(&listener));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_StopAdvertising() noexcept override
    {
        try
        {
            shim().StopAdvertising();
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Devices::Bluetooth::Rfcomm::IRfcommServiceProvider2> : produce_base<D, Windows::Devices::Bluetooth::Rfcomm::IRfcommServiceProvider2>
{
    HRESULT __stdcall abi_StartAdvertisingWithRadioDiscoverability(abi_arg_in<Windows::Networking::Sockets::IStreamSocketListener> listener, bool radioDiscoverable) noexcept override
    {
        try
        {
            shim().StartAdvertising(*reinterpret_cast<const Windows::Networking::Sockets::StreamSocketListener *>(&listener), radioDiscoverable);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Devices::Bluetooth::Rfcomm::IRfcommServiceProviderStatics> : produce_base<D, Windows::Devices::Bluetooth::Rfcomm::IRfcommServiceProviderStatics>
{
    HRESULT __stdcall abi_CreateAsync(abi_arg_in<Windows::Devices::Bluetooth::Rfcomm::IRfcommServiceId> serviceId, abi_arg_out<Windows::Foundation::IAsyncOperation<Windows::Devices::Bluetooth::Rfcomm::RfcommServiceProvider>> asyncOp) noexcept override
    {
        try
        {
            *asyncOp = detach(shim().CreateAsync(*reinterpret_cast<const Windows::Devices::Bluetooth::Rfcomm::RfcommServiceId *>(&serviceId)));
            return S_OK;
        }
        catch (...)
        {
            *asyncOp = nullptr;
            return impl::to_hresult();
        }
    }
};

}

namespace Windows::Devices::Bluetooth::Rfcomm {

template <typename D> Windows::Devices::Bluetooth::Rfcomm::RfcommServiceId impl_IRfcommServiceIdStatics<D>::FromUuid(GUID uuid) const
{
    Windows::Devices::Bluetooth::Rfcomm::RfcommServiceId serviceId { nullptr };
    check_hresult(shim()->abi_FromUuid(uuid, put(serviceId)));
    return serviceId;
}

template <typename D> Windows::Devices::Bluetooth::Rfcomm::RfcommServiceId impl_IRfcommServiceIdStatics<D>::FromShortId(uint32_t shortId) const
{
    Windows::Devices::Bluetooth::Rfcomm::RfcommServiceId serviceId { nullptr };
    check_hresult(shim()->abi_FromShortId(shortId, put(serviceId)));
    return serviceId;
}

template <typename D> Windows::Devices::Bluetooth::Rfcomm::RfcommServiceId impl_IRfcommServiceIdStatics<D>::SerialPort() const
{
    Windows::Devices::Bluetooth::Rfcomm::RfcommServiceId serviceId { nullptr };
    check_hresult(shim()->get_SerialPort(put(serviceId)));
    return serviceId;
}

template <typename D> Windows::Devices::Bluetooth::Rfcomm::RfcommServiceId impl_IRfcommServiceIdStatics<D>::ObexObjectPush() const
{
    Windows::Devices::Bluetooth::Rfcomm::RfcommServiceId serviceId { nullptr };
    check_hresult(shim()->get_ObexObjectPush(put(serviceId)));
    return serviceId;
}

template <typename D> Windows::Devices::Bluetooth::Rfcomm::RfcommServiceId impl_IRfcommServiceIdStatics<D>::ObexFileTransfer() const
{
    Windows::Devices::Bluetooth::Rfcomm::RfcommServiceId serviceId { nullptr };
    check_hresult(shim()->get_ObexFileTransfer(put(serviceId)));
    return serviceId;
}

template <typename D> Windows::Devices::Bluetooth::Rfcomm::RfcommServiceId impl_IRfcommServiceIdStatics<D>::PhoneBookAccessPce() const
{
    Windows::Devices::Bluetooth::Rfcomm::RfcommServiceId serviceId { nullptr };
    check_hresult(shim()->get_PhoneBookAccessPce(put(serviceId)));
    return serviceId;
}

template <typename D> Windows::Devices::Bluetooth::Rfcomm::RfcommServiceId impl_IRfcommServiceIdStatics<D>::PhoneBookAccessPse() const
{
    Windows::Devices::Bluetooth::Rfcomm::RfcommServiceId serviceId { nullptr };
    check_hresult(shim()->get_PhoneBookAccessPse(put(serviceId)));
    return serviceId;
}

template <typename D> Windows::Devices::Bluetooth::Rfcomm::RfcommServiceId impl_IRfcommServiceIdStatics<D>::GenericFileTransfer() const
{
    Windows::Devices::Bluetooth::Rfcomm::RfcommServiceId serviceId { nullptr };
    check_hresult(shim()->get_GenericFileTransfer(put(serviceId)));
    return serviceId;
}

template <typename D> GUID impl_IRfcommServiceId<D>::Uuid() const
{
    GUID value {};
    check_hresult(shim()->get_Uuid(&value));
    return value;
}

template <typename D> uint32_t impl_IRfcommServiceId<D>::AsShortId() const
{
    uint32_t shortId {};
    check_hresult(shim()->abi_AsShortId(&shortId));
    return shortId;
}

template <typename D> hstring impl_IRfcommServiceId<D>::AsString() const
{
    hstring id;
    check_hresult(shim()->abi_AsString(put(id)));
    return id;
}

template <typename D> Windows::Devices::Bluetooth::BluetoothError impl_IRfcommDeviceServicesResult<D>::Error() const
{
    Windows::Devices::Bluetooth::BluetoothError value {};
    check_hresult(shim()->get_Error(&value));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVectorView<Windows::Devices::Bluetooth::Rfcomm::RfcommDeviceService> impl_IRfcommDeviceServicesResult<D>::Services() const
{
    Windows::Foundation::Collections::IVectorView<Windows::Devices::Bluetooth::Rfcomm::RfcommDeviceService> services;
    check_hresult(shim()->get_Services(put(services)));
    return services;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Devices::Bluetooth::Rfcomm::RfcommDeviceService> impl_IRfcommDeviceServiceStatics<D>::FromIdAsync(hstring_ref deviceId) const
{
    Windows::Foundation::IAsyncOperation<Windows::Devices::Bluetooth::Rfcomm::RfcommDeviceService> asyncOp;
    check_hresult(shim()->abi_FromIdAsync(get(deviceId), put(asyncOp)));
    return asyncOp;
}

template <typename D> hstring impl_IRfcommDeviceServiceStatics<D>::GetDeviceSelector(const Windows::Devices::Bluetooth::Rfcomm::RfcommServiceId & serviceId) const
{
    hstring selector;
    check_hresult(shim()->abi_GetDeviceSelector(get(serviceId), put(selector)));
    return selector;
}

template <typename D> hstring impl_IRfcommDeviceServiceStatics2<D>::GetDeviceSelectorForBluetoothDevice(const Windows::Devices::Bluetooth::BluetoothDevice & bluetoothDevice) const
{
    hstring selector;
    check_hresult(shim()->abi_GetDeviceSelectorForBluetoothDevice(get(bluetoothDevice), put(selector)));
    return selector;
}

template <typename D> hstring impl_IRfcommDeviceServiceStatics2<D>::GetDeviceSelectorForBluetoothDevice(const Windows::Devices::Bluetooth::BluetoothDevice & bluetoothDevice, Windows::Devices::Bluetooth::BluetoothCacheMode cacheMode) const
{
    hstring selector;
    check_hresult(shim()->abi_GetDeviceSelectorForBluetoothDeviceWithCacheMode(get(bluetoothDevice), cacheMode, put(selector)));
    return selector;
}

template <typename D> hstring impl_IRfcommDeviceServiceStatics2<D>::GetDeviceSelectorForBluetoothDeviceAndServiceId(const Windows::Devices::Bluetooth::BluetoothDevice & bluetoothDevice, const Windows::Devices::Bluetooth::Rfcomm::RfcommServiceId & serviceId) const
{
    hstring selector;
    check_hresult(shim()->abi_GetDeviceSelectorForBluetoothDeviceAndServiceId(get(bluetoothDevice), get(serviceId), put(selector)));
    return selector;
}

template <typename D> hstring impl_IRfcommDeviceServiceStatics2<D>::GetDeviceSelectorForBluetoothDeviceAndServiceId(const Windows::Devices::Bluetooth::BluetoothDevice & bluetoothDevice, const Windows::Devices::Bluetooth::Rfcomm::RfcommServiceId & serviceId, Windows::Devices::Bluetooth::BluetoothCacheMode cacheMode) const
{
    hstring selector;
    check_hresult(shim()->abi_GetDeviceSelectorForBluetoothDeviceAndServiceIdWithCacheMode(get(bluetoothDevice), get(serviceId), cacheMode, put(selector)));
    return selector;
}

template <typename D> Windows::Networking::HostName impl_IRfcommDeviceService<D>::ConnectionHostName() const
{
    Windows::Networking::HostName value { nullptr };
    check_hresult(shim()->get_ConnectionHostName(put(value)));
    return value;
}

template <typename D> hstring impl_IRfcommDeviceService<D>::ConnectionServiceName() const
{
    hstring value;
    check_hresult(shim()->get_ConnectionServiceName(put(value)));
    return value;
}

template <typename D> Windows::Devices::Bluetooth::Rfcomm::RfcommServiceId impl_IRfcommDeviceService<D>::ServiceId() const
{
    Windows::Devices::Bluetooth::Rfcomm::RfcommServiceId value { nullptr };
    check_hresult(shim()->get_ServiceId(put(value)));
    return value;
}

template <typename D> Windows::Networking::Sockets::SocketProtectionLevel impl_IRfcommDeviceService<D>::ProtectionLevel() const
{
    Windows::Networking::Sockets::SocketProtectionLevel value {};
    check_hresult(shim()->get_ProtectionLevel(&value));
    return value;
}

template <typename D> Windows::Networking::Sockets::SocketProtectionLevel impl_IRfcommDeviceService<D>::MaxProtectionLevel() const
{
    Windows::Networking::Sockets::SocketProtectionLevel value {};
    check_hresult(shim()->get_MaxProtectionLevel(&value));
    return value;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IMapView<uint32_t, Windows::Storage::Streams::IBuffer>> impl_IRfcommDeviceService<D>::GetSdpRawAttributesAsync() const
{
    Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IMapView<uint32_t, Windows::Storage::Streams::IBuffer>> asyncOp;
    check_hresult(shim()->abi_GetSdpRawAttributesAsync(put(asyncOp)));
    return asyncOp;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IMapView<uint32_t, Windows::Storage::Streams::IBuffer>> impl_IRfcommDeviceService<D>::GetSdpRawAttributesAsync(Windows::Devices::Bluetooth::BluetoothCacheMode cacheMode) const
{
    Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IMapView<uint32_t, Windows::Storage::Streams::IBuffer>> asyncOp;
    check_hresult(shim()->abi_GetSdpRawAttributesWithCacheModeAsync(cacheMode, put(asyncOp)));
    return asyncOp;
}

template <typename D> Windows::Devices::Bluetooth::BluetoothDevice impl_IRfcommDeviceService2<D>::Device() const
{
    Windows::Devices::Bluetooth::BluetoothDevice value { nullptr };
    check_hresult(shim()->get_Device(put(value)));
    return value;
}

template <typename D> Windows::Devices::Enumeration::DeviceAccessInformation impl_IRfcommDeviceService3<D>::DeviceAccessInformation() const
{
    Windows::Devices::Enumeration::DeviceAccessInformation value { nullptr };
    check_hresult(shim()->get_DeviceAccessInformation(put(value)));
    return value;
}

template <typename D> Windows::Foundation::IAsyncOperation<winrt::Windows::Devices::Enumeration::DeviceAccessStatus> impl_IRfcommDeviceService3<D>::RequestAccessAsync() const
{
    Windows::Foundation::IAsyncOperation<winrt::Windows::Devices::Enumeration::DeviceAccessStatus> value;
    check_hresult(shim()->abi_RequestAccessAsync(put(value)));
    return value;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Devices::Bluetooth::Rfcomm::RfcommServiceProvider> impl_IRfcommServiceProviderStatics<D>::CreateAsync(const Windows::Devices::Bluetooth::Rfcomm::RfcommServiceId & serviceId) const
{
    Windows::Foundation::IAsyncOperation<Windows::Devices::Bluetooth::Rfcomm::RfcommServiceProvider> asyncOp;
    check_hresult(shim()->abi_CreateAsync(get(serviceId), put(asyncOp)));
    return asyncOp;
}

template <typename D> Windows::Devices::Bluetooth::Rfcomm::RfcommServiceId impl_IRfcommServiceProvider<D>::ServiceId() const
{
    Windows::Devices::Bluetooth::Rfcomm::RfcommServiceId value { nullptr };
    check_hresult(shim()->get_ServiceId(put(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IMap<uint32_t, Windows::Storage::Streams::IBuffer> impl_IRfcommServiceProvider<D>::SdpRawAttributes() const
{
    Windows::Foundation::Collections::IMap<uint32_t, Windows::Storage::Streams::IBuffer> value;
    check_hresult(shim()->get_SdpRawAttributes(put(value)));
    return value;
}

template <typename D> void impl_IRfcommServiceProvider<D>::StartAdvertising(const Windows::Networking::Sockets::StreamSocketListener & listener) const
{
    check_hresult(shim()->abi_StartAdvertising(get(listener)));
}

template <typename D> void impl_IRfcommServiceProvider<D>::StopAdvertising() const
{
    check_hresult(shim()->abi_StopAdvertising());
}

template <typename D> void impl_IRfcommServiceProvider2<D>::StartAdvertising(const Windows::Networking::Sockets::StreamSocketListener & listener, bool radioDiscoverable) const
{
    check_hresult(shim()->abi_StartAdvertisingWithRadioDiscoverability(get(listener), radioDiscoverable));
}

inline Windows::Foundation::IAsyncOperation<Windows::Devices::Bluetooth::Rfcomm::RfcommDeviceService> RfcommDeviceService::FromIdAsync(hstring_ref deviceId)
{
    return get_activation_factory<RfcommDeviceService, IRfcommDeviceServiceStatics>().FromIdAsync(deviceId);
}

inline hstring RfcommDeviceService::GetDeviceSelector(const Windows::Devices::Bluetooth::Rfcomm::RfcommServiceId & serviceId)
{
    return get_activation_factory<RfcommDeviceService, IRfcommDeviceServiceStatics>().GetDeviceSelector(serviceId);
}

inline hstring RfcommDeviceService::GetDeviceSelectorForBluetoothDevice(const Windows::Devices::Bluetooth::BluetoothDevice & bluetoothDevice)
{
    return get_activation_factory<RfcommDeviceService, IRfcommDeviceServiceStatics2>().GetDeviceSelectorForBluetoothDevice(bluetoothDevice);
}

inline hstring RfcommDeviceService::GetDeviceSelectorForBluetoothDevice(const Windows::Devices::Bluetooth::BluetoothDevice & bluetoothDevice, Windows::Devices::Bluetooth::BluetoothCacheMode cacheMode)
{
    return get_activation_factory<RfcommDeviceService, IRfcommDeviceServiceStatics2>().GetDeviceSelectorForBluetoothDevice(bluetoothDevice, cacheMode);
}

inline hstring RfcommDeviceService::GetDeviceSelectorForBluetoothDeviceAndServiceId(const Windows::Devices::Bluetooth::BluetoothDevice & bluetoothDevice, const Windows::Devices::Bluetooth::Rfcomm::RfcommServiceId & serviceId)
{
    return get_activation_factory<RfcommDeviceService, IRfcommDeviceServiceStatics2>().GetDeviceSelectorForBluetoothDeviceAndServiceId(bluetoothDevice, serviceId);
}

inline hstring RfcommDeviceService::GetDeviceSelectorForBluetoothDeviceAndServiceId(const Windows::Devices::Bluetooth::BluetoothDevice & bluetoothDevice, const Windows::Devices::Bluetooth::Rfcomm::RfcommServiceId & serviceId, Windows::Devices::Bluetooth::BluetoothCacheMode cacheMode)
{
    return get_activation_factory<RfcommDeviceService, IRfcommDeviceServiceStatics2>().GetDeviceSelectorForBluetoothDeviceAndServiceId(bluetoothDevice, serviceId, cacheMode);
}

inline Windows::Devices::Bluetooth::Rfcomm::RfcommServiceId RfcommServiceId::FromUuid(GUID uuid)
{
    return get_activation_factory<RfcommServiceId, IRfcommServiceIdStatics>().FromUuid(uuid);
}

inline Windows::Devices::Bluetooth::Rfcomm::RfcommServiceId RfcommServiceId::FromShortId(uint32_t shortId)
{
    return get_activation_factory<RfcommServiceId, IRfcommServiceIdStatics>().FromShortId(shortId);
}

inline Windows::Devices::Bluetooth::Rfcomm::RfcommServiceId RfcommServiceId::SerialPort()
{
    return get_activation_factory<RfcommServiceId, IRfcommServiceIdStatics>().SerialPort();
}

inline Windows::Devices::Bluetooth::Rfcomm::RfcommServiceId RfcommServiceId::ObexObjectPush()
{
    return get_activation_factory<RfcommServiceId, IRfcommServiceIdStatics>().ObexObjectPush();
}

inline Windows::Devices::Bluetooth::Rfcomm::RfcommServiceId RfcommServiceId::ObexFileTransfer()
{
    return get_activation_factory<RfcommServiceId, IRfcommServiceIdStatics>().ObexFileTransfer();
}

inline Windows::Devices::Bluetooth::Rfcomm::RfcommServiceId RfcommServiceId::PhoneBookAccessPce()
{
    return get_activation_factory<RfcommServiceId, IRfcommServiceIdStatics>().PhoneBookAccessPce();
}

inline Windows::Devices::Bluetooth::Rfcomm::RfcommServiceId RfcommServiceId::PhoneBookAccessPse()
{
    return get_activation_factory<RfcommServiceId, IRfcommServiceIdStatics>().PhoneBookAccessPse();
}

inline Windows::Devices::Bluetooth::Rfcomm::RfcommServiceId RfcommServiceId::GenericFileTransfer()
{
    return get_activation_factory<RfcommServiceId, IRfcommServiceIdStatics>().GenericFileTransfer();
}

inline Windows::Foundation::IAsyncOperation<Windows::Devices::Bluetooth::Rfcomm::RfcommServiceProvider> RfcommServiceProvider::CreateAsync(const Windows::Devices::Bluetooth::Rfcomm::RfcommServiceId & serviceId)
{
    return get_activation_factory<RfcommServiceProvider, IRfcommServiceProviderStatics>().CreateAsync(serviceId);
}

}

}
