// C++/WinRT v1.0.170717.1
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "Windows.Foundation.0.h"
#include "Windows.Networking.0.h"
#include "Windows.Networking.Sockets.0.h"
#include "Windows.Storage.Streams.0.h"
#include "Windows.Networking.Proximity.0.h"

namespace winrt {

namespace Windows::Networking::Proximity {

struct IConnectionRequestedEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<IConnectionRequestedEventArgs>
{
    IConnectionRequestedEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct IPeerFinderStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPeerFinderStatics>
{
    IPeerFinderStatics(std::nullptr_t = nullptr) noexcept {}
};

struct IPeerFinderStatics2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPeerFinderStatics2>
{
    IPeerFinderStatics2(std::nullptr_t = nullptr) noexcept {}
};

struct IPeerInformation :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPeerInformation>
{
    IPeerInformation(std::nullptr_t = nullptr) noexcept {}
};

struct IPeerInformation3 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPeerInformation3>
{
    IPeerInformation3(std::nullptr_t = nullptr) noexcept {}
};

struct IPeerInformationWithHostAndService :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPeerInformationWithHostAndService>
{
    IPeerInformationWithHostAndService(std::nullptr_t = nullptr) noexcept {}
};

struct IPeerWatcher :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPeerWatcher>
{
    IPeerWatcher(std::nullptr_t = nullptr) noexcept {}
};

struct IProximityDevice :
    Windows::Foundation::IInspectable,
    impl::consume_t<IProximityDevice>
{
    IProximityDevice(std::nullptr_t = nullptr) noexcept {}
};

struct IProximityDeviceStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IProximityDeviceStatics>
{
    IProximityDeviceStatics(std::nullptr_t = nullptr) noexcept {}
};

struct IProximityMessage :
    Windows::Foundation::IInspectable,
    impl::consume_t<IProximityMessage>
{
    IProximityMessage(std::nullptr_t = nullptr) noexcept {}
};

struct ITriggeredConnectionStateChangedEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<ITriggeredConnectionStateChangedEventArgs>
{
    ITriggeredConnectionStateChangedEventArgs(std::nullptr_t = nullptr) noexcept {}
};

}

}
