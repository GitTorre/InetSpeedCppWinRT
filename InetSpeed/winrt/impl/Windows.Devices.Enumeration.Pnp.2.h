// C++/WinRT v1.0.170717.1
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "Windows.Devices.Enumeration.1.h"
#include "Windows.Devices.Enumeration.Pnp.1.h"

namespace winrt {

namespace Windows::Devices::Enumeration::Pnp {

struct PnpObject :
    Windows::Devices::Enumeration::Pnp::IPnpObject
{
    PnpObject(std::nullptr_t) noexcept {}
    static Windows::Foundation::IAsyncOperation<Windows::Devices::Enumeration::Pnp::PnpObject> CreateFromIdAsync(Windows::Devices::Enumeration::Pnp::PnpObjectType const& type, param::hstring const& id, param::async_iterable<hstring> const& requestedProperties);
    static Windows::Foundation::IAsyncOperation<Windows::Devices::Enumeration::Pnp::PnpObjectCollection> FindAllAsync(Windows::Devices::Enumeration::Pnp::PnpObjectType const& type, param::async_iterable<hstring> const& requestedProperties);
    static Windows::Foundation::IAsyncOperation<Windows::Devices::Enumeration::Pnp::PnpObjectCollection> FindAllAsync(Windows::Devices::Enumeration::Pnp::PnpObjectType const& type, param::async_iterable<hstring> const& requestedProperties, param::hstring const& aqsFilter);
    static Windows::Devices::Enumeration::Pnp::PnpObjectWatcher CreateWatcher(Windows::Devices::Enumeration::Pnp::PnpObjectType const& type, param::iterable<hstring> const& requestedProperties);
    static Windows::Devices::Enumeration::Pnp::PnpObjectWatcher CreateWatcher(Windows::Devices::Enumeration::Pnp::PnpObjectType const& type, param::iterable<hstring> const& requestedProperties, param::hstring const& aqsFilter);
};

struct PnpObjectCollection :
    Windows::Foundation::Collections::IVectorView<Windows::Devices::Enumeration::Pnp::PnpObject>
{
    PnpObjectCollection(std::nullptr_t) noexcept {}
};

struct PnpObjectUpdate :
    Windows::Devices::Enumeration::Pnp::IPnpObjectUpdate
{
    PnpObjectUpdate(std::nullptr_t) noexcept {}
};

struct PnpObjectWatcher :
    Windows::Devices::Enumeration::Pnp::IPnpObjectWatcher
{
    PnpObjectWatcher(std::nullptr_t) noexcept {}
};

}

namespace impl {

}

}
