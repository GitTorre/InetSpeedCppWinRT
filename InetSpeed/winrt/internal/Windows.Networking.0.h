// C++ for the Windows Runtime v1.29
// Copyright (c) 2016 Microsoft Corporation

#pragma once


WINRT_EXPORT namespace winrt {

namespace ABI::Windows::Networking {

struct IEndpointPair;
struct IEndpointPairFactory;
struct IHostName;
struct IHostNameFactory;
struct IHostNameStatics;
struct EndpointPair;
struct HostName;

}

namespace Windows::Networking {

struct IEndpointPair;
struct IEndpointPairFactory;
struct IHostName;
struct IHostNameFactory;
struct IHostNameStatics;
struct EndpointPair;
struct HostName;

}

namespace Windows::Networking {

enum class DomainNameType
{
    Suffix = 0,
    FullyQualified = 1,
};

enum class HostNameSortOptions : unsigned
{
    None = 0x0,
    OptimizeForLongConnections = 0x2,
};

DEFINE_ENUM_FLAG_OPERATORS(HostNameSortOptions)

enum class HostNameType
{
    DomainName = 0,
    Ipv4 = 1,
    Ipv6 = 2,
    Bluetooth = 3,
};

}

}
