// C++/WinRT v1.0.170717.1
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "Windows.Networking.Connectivity.0.h"
#include "Windows.Foundation.0.h"
#include "Windows.Networking.0.h"

namespace winrt {

namespace Windows::Networking {

struct IEndpointPair :
    Windows::Foundation::IInspectable,
    impl::consume_t<IEndpointPair>
{
    IEndpointPair(std::nullptr_t = nullptr) noexcept {}
};

struct IEndpointPairFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<IEndpointPairFactory>
{
    IEndpointPairFactory(std::nullptr_t = nullptr) noexcept {}
};

struct IHostName :
    Windows::Foundation::IInspectable,
    impl::consume_t<IHostName>
{
    IHostName(std::nullptr_t = nullptr) noexcept {}
};

struct IHostNameFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<IHostNameFactory>
{
    IHostNameFactory(std::nullptr_t = nullptr) noexcept {}
};

struct IHostNameStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IHostNameStatics>
{
    IHostNameStatics(std::nullptr_t = nullptr) noexcept {}
};

}

}
