// C++/WinRT v1.0.170717.1
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "Windows.Devices.Enumeration.0.h"
#include "Windows.Devices.Enumeration.Pnp.0.h"

namespace winrt {

namespace Windows::Devices::Enumeration::Pnp {

struct IPnpObject :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPnpObject>
{
    IPnpObject(std::nullptr_t = nullptr) noexcept {}
};

struct IPnpObjectStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPnpObjectStatics>
{
    IPnpObjectStatics(std::nullptr_t = nullptr) noexcept {}
};

struct IPnpObjectUpdate :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPnpObjectUpdate>
{
    IPnpObjectUpdate(std::nullptr_t = nullptr) noexcept {}
};

struct IPnpObjectWatcher :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPnpObjectWatcher>
{
    IPnpObjectWatcher(std::nullptr_t = nullptr) noexcept {}
};

}

}
