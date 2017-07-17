// C++/WinRT v1.0.170717.1
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "Windows.Networking.1.h"
#include "Windows.Networking.Connectivity.1.h"
#include "Windows.Networking.Sockets.1.h"
#include "Windows.Foundation.1.h"
#include "Windows.Networking.ServiceDiscovery.Dnssd.1.h"

namespace winrt {

namespace Windows::Networking::ServiceDiscovery::Dnssd {

struct DnssdRegistrationResult :
    Windows::Networking::ServiceDiscovery::Dnssd::IDnssdRegistrationResult,
    impl::require<DnssdRegistrationResult, Windows::Foundation::IStringable>
{
    DnssdRegistrationResult(std::nullptr_t) noexcept {}
    DnssdRegistrationResult();
};

struct DnssdServiceInstance :
    Windows::Networking::ServiceDiscovery::Dnssd::IDnssdServiceInstance,
    impl::require<DnssdServiceInstance, Windows::Foundation::IStringable>
{
    DnssdServiceInstance(std::nullptr_t) noexcept {}
    DnssdServiceInstance(param::hstring const& dnssdServiceInstanceName, Windows::Networking::HostName const& hostName, uint16_t port);
};

struct DnssdServiceInstanceCollection :
    Windows::Foundation::Collections::IVectorView<Windows::Networking::ServiceDiscovery::Dnssd::DnssdServiceInstance>
{
    DnssdServiceInstanceCollection(std::nullptr_t) noexcept {}
};

struct DnssdServiceWatcher :
    Windows::Networking::ServiceDiscovery::Dnssd::IDnssdServiceWatcher
{
    DnssdServiceWatcher(std::nullptr_t) noexcept {}
};

}

namespace impl {

}

}
