// C++/WinRT v1.0.170717.1
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "Windows.ApplicationModel.AppService.0.h"
#include "Windows.Web.Http.0.h"
#include "Windows.System.Diagnostics.DevicePortal.0.h"

namespace winrt {

namespace Windows::System::Diagnostics::DevicePortal {

struct IDevicePortalConnection :
    Windows::Foundation::IInspectable,
    impl::consume_t<IDevicePortalConnection>
{
    IDevicePortalConnection(std::nullptr_t = nullptr) noexcept {}
};

struct IDevicePortalConnectionClosedEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<IDevicePortalConnectionClosedEventArgs>
{
    IDevicePortalConnectionClosedEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct IDevicePortalConnectionRequestReceivedEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<IDevicePortalConnectionRequestReceivedEventArgs>
{
    IDevicePortalConnectionRequestReceivedEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct IDevicePortalConnectionStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IDevicePortalConnectionStatics>
{
    IDevicePortalConnectionStatics(std::nullptr_t = nullptr) noexcept {}
};

}

}
