// C++/WinRT v1.0.170717.1
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "Windows.ApplicationModel.AppService.1.h"
#include "Windows.Web.Http.1.h"
#include "Windows.System.Diagnostics.DevicePortal.1.h"

namespace winrt {

namespace Windows::System::Diagnostics::DevicePortal {

struct DevicePortalConnection :
    Windows::System::Diagnostics::DevicePortal::IDevicePortalConnection
{
    DevicePortalConnection(std::nullptr_t) noexcept {}
    static Windows::System::Diagnostics::DevicePortal::DevicePortalConnection GetForAppServiceConnection(Windows::ApplicationModel::AppService::AppServiceConnection const& appServiceConnection);
};

struct DevicePortalConnectionClosedEventArgs :
    Windows::System::Diagnostics::DevicePortal::IDevicePortalConnectionClosedEventArgs
{
    DevicePortalConnectionClosedEventArgs(std::nullptr_t) noexcept {}
};

struct DevicePortalConnectionRequestReceivedEventArgs :
    Windows::System::Diagnostics::DevicePortal::IDevicePortalConnectionRequestReceivedEventArgs
{
    DevicePortalConnectionRequestReceivedEventArgs(std::nullptr_t) noexcept {}
};

}

namespace impl {

}

}
