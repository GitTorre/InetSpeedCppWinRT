// C++/WinRT v1.0.170717.1
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "Windows.ApplicationModel.0.h"
#include "Windows.Foundation.Collections.0.h"
#include "Windows.System.0.h"
#include "Windows.System.RemoteSystems.0.h"
#include "Windows.Foundation.0.h"
#include "Windows.ApplicationModel.AppService.0.h"

namespace winrt {

namespace Windows::ApplicationModel::AppService {

struct IAppServiceCatalogStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IAppServiceCatalogStatics>
{
    IAppServiceCatalogStatics(std::nullptr_t = nullptr) noexcept {}
};

struct IAppServiceClosedEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<IAppServiceClosedEventArgs>
{
    IAppServiceClosedEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct IAppServiceConnection :
    Windows::Foundation::IInspectable,
    impl::consume_t<IAppServiceConnection>,
    impl::require<IAppServiceConnection, Windows::Foundation::IClosable>
{
    IAppServiceConnection(std::nullptr_t = nullptr) noexcept {}
};

struct IAppServiceConnection2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IAppServiceConnection2>
{
    IAppServiceConnection2(std::nullptr_t = nullptr) noexcept {}
};

struct IAppServiceDeferral :
    Windows::Foundation::IInspectable,
    impl::consume_t<IAppServiceDeferral>
{
    IAppServiceDeferral(std::nullptr_t = nullptr) noexcept {}
};

struct IAppServiceRequest :
    Windows::Foundation::IInspectable,
    impl::consume_t<IAppServiceRequest>
{
    IAppServiceRequest(std::nullptr_t = nullptr) noexcept {}
};

struct IAppServiceRequestReceivedEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<IAppServiceRequestReceivedEventArgs>
{
    IAppServiceRequestReceivedEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct IAppServiceResponse :
    Windows::Foundation::IInspectable,
    impl::consume_t<IAppServiceResponse>
{
    IAppServiceResponse(std::nullptr_t = nullptr) noexcept {}
};

struct IAppServiceTriggerDetails :
    Windows::Foundation::IInspectable,
    impl::consume_t<IAppServiceTriggerDetails>
{
    IAppServiceTriggerDetails(std::nullptr_t = nullptr) noexcept {}
};

struct IAppServiceTriggerDetails2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IAppServiceTriggerDetails2>
{
    IAppServiceTriggerDetails2(std::nullptr_t = nullptr) noexcept {}
};

}

}
