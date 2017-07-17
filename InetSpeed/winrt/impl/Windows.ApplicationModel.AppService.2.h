// C++/WinRT v1.0.170717.1
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "Windows.ApplicationModel.1.h"
#include "Windows.Foundation.Collections.1.h"
#include "Windows.System.1.h"
#include "Windows.System.RemoteSystems.1.h"
#include "Windows.Foundation.1.h"
#include "Windows.ApplicationModel.AppService.1.h"

namespace winrt {

namespace Windows::ApplicationModel::AppService {

struct AppServiceCatalog
{
    AppServiceCatalog() = delete;
    static Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::AppInfo>> FindAppServiceProvidersAsync(param::hstring const& appServiceName);
};

struct AppServiceClosedEventArgs :
    Windows::ApplicationModel::AppService::IAppServiceClosedEventArgs
{
    AppServiceClosedEventArgs(std::nullptr_t) noexcept {}
};

struct AppServiceConnection :
    Windows::ApplicationModel::AppService::IAppServiceConnection,
    impl::require<AppServiceConnection, Windows::ApplicationModel::AppService::IAppServiceConnection2>
{
    AppServiceConnection(std::nullptr_t) noexcept {}
    AppServiceConnection();
};

struct AppServiceDeferral :
    Windows::ApplicationModel::AppService::IAppServiceDeferral
{
    AppServiceDeferral(std::nullptr_t) noexcept {}
};

struct AppServiceRequest :
    Windows::ApplicationModel::AppService::IAppServiceRequest
{
    AppServiceRequest(std::nullptr_t) noexcept {}
};

struct AppServiceRequestReceivedEventArgs :
    Windows::ApplicationModel::AppService::IAppServiceRequestReceivedEventArgs
{
    AppServiceRequestReceivedEventArgs(std::nullptr_t) noexcept {}
};

struct AppServiceResponse :
    Windows::ApplicationModel::AppService::IAppServiceResponse
{
    AppServiceResponse(std::nullptr_t) noexcept {}
};

struct AppServiceTriggerDetails :
    Windows::ApplicationModel::AppService::IAppServiceTriggerDetails,
    impl::require<AppServiceTriggerDetails, Windows::ApplicationModel::AppService::IAppServiceTriggerDetails2>
{
    AppServiceTriggerDetails(std::nullptr_t) noexcept {}
};

}

namespace impl {

}

}
