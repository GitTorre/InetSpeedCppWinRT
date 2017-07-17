// C++/WinRT v1.0.170717.1
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "Windows.Devices.Bluetooth.0.h"
#include "Windows.Devices.Enumeration.0.h"
#include "Windows.Networking.0.h"
#include "Windows.Networking.Sockets.0.h"
#include "Windows.Storage.Streams.0.h"
#include "Windows.Foundation.0.h"
#include "Windows.Devices.Bluetooth.Rfcomm.0.h"

namespace winrt {

namespace Windows::Devices::Bluetooth::Rfcomm {

struct IRfcommDeviceService :
    Windows::Foundation::IInspectable,
    impl::consume_t<IRfcommDeviceService>
{
    IRfcommDeviceService(std::nullptr_t = nullptr) noexcept {}
};

struct IRfcommDeviceService2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IRfcommDeviceService2>,
    impl::require<IRfcommDeviceService2, Windows::Devices::Bluetooth::Rfcomm::IRfcommDeviceService>
{
    IRfcommDeviceService2(std::nullptr_t = nullptr) noexcept {}
};

struct IRfcommDeviceService3 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IRfcommDeviceService3>,
    impl::require<IRfcommDeviceService3, Windows::Devices::Bluetooth::Rfcomm::IRfcommDeviceService, Windows::Devices::Bluetooth::Rfcomm::IRfcommDeviceService2>
{
    IRfcommDeviceService3(std::nullptr_t = nullptr) noexcept {}
};

struct IRfcommDeviceServiceStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IRfcommDeviceServiceStatics>
{
    IRfcommDeviceServiceStatics(std::nullptr_t = nullptr) noexcept {}
};

struct IRfcommDeviceServiceStatics2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IRfcommDeviceServiceStatics2>,
    impl::require<IRfcommDeviceServiceStatics2, Windows::Devices::Bluetooth::Rfcomm::IRfcommDeviceServiceStatics>
{
    IRfcommDeviceServiceStatics2(std::nullptr_t = nullptr) noexcept {}
};

struct IRfcommDeviceServicesResult :
    Windows::Foundation::IInspectable,
    impl::consume_t<IRfcommDeviceServicesResult>
{
    IRfcommDeviceServicesResult(std::nullptr_t = nullptr) noexcept {}
};

struct IRfcommServiceId :
    Windows::Foundation::IInspectable,
    impl::consume_t<IRfcommServiceId>
{
    IRfcommServiceId(std::nullptr_t = nullptr) noexcept {}
};

struct IRfcommServiceIdStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IRfcommServiceIdStatics>
{
    IRfcommServiceIdStatics(std::nullptr_t = nullptr) noexcept {}
};

struct IRfcommServiceProvider :
    Windows::Foundation::IInspectable,
    impl::consume_t<IRfcommServiceProvider>
{
    IRfcommServiceProvider(std::nullptr_t = nullptr) noexcept {}
};

struct IRfcommServiceProvider2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IRfcommServiceProvider2>,
    impl::require<IRfcommServiceProvider2, Windows::Devices::Bluetooth::Rfcomm::IRfcommServiceProvider>
{
    IRfcommServiceProvider2(std::nullptr_t = nullptr) noexcept {}
    using impl::consume_t<IRfcommServiceProvider2, Windows::Devices::Bluetooth::Rfcomm::IRfcommServiceProvider>::StartAdvertising;
    using impl::consume_t<IRfcommServiceProvider2, Windows::Devices::Bluetooth::Rfcomm::IRfcommServiceProvider2>::StartAdvertising;
};

struct IRfcommServiceProviderStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IRfcommServiceProviderStatics>
{
    IRfcommServiceProviderStatics(std::nullptr_t = nullptr) noexcept {}
};

}

}
