// C++/WinRT v1.0.170717.1
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "Windows.Networking.0.h"
#include "Windows.Networking.Connectivity.0.h"
#include "Windows.Networking.Sockets.0.h"
#include "Windows.Foundation.0.h"
#include "Windows.Networking.ServiceDiscovery.Dnssd.0.h"

namespace winrt {

namespace Windows::Networking::ServiceDiscovery::Dnssd {

struct IDnssdRegistrationResult :
    Windows::Foundation::IInspectable,
    impl::consume_t<IDnssdRegistrationResult>
{
    IDnssdRegistrationResult(std::nullptr_t = nullptr) noexcept {}
};

struct IDnssdServiceInstance :
    Windows::Foundation::IInspectable,
    impl::consume_t<IDnssdServiceInstance>
{
    IDnssdServiceInstance(std::nullptr_t = nullptr) noexcept {}
};

struct IDnssdServiceInstanceFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<IDnssdServiceInstanceFactory>
{
    IDnssdServiceInstanceFactory(std::nullptr_t = nullptr) noexcept {}
};

struct IDnssdServiceWatcher :
    Windows::Foundation::IInspectable,
    impl::consume_t<IDnssdServiceWatcher>
{
    IDnssdServiceWatcher(std::nullptr_t = nullptr) noexcept {}
};

}

}
