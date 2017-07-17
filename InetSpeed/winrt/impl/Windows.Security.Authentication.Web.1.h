// C++/WinRT v1.0.170717.1
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "Windows.Foundation.0.h"
#include "Windows.Foundation.Collections.0.h"
#include "Windows.Security.Authentication.Web.0.h"

namespace winrt {

namespace Windows::Security::Authentication::Web {

struct IWebAuthenticationBrokerStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IWebAuthenticationBrokerStatics>
{
    IWebAuthenticationBrokerStatics(std::nullptr_t = nullptr) noexcept {}
};

struct IWebAuthenticationBrokerStatics2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IWebAuthenticationBrokerStatics2>
{
    IWebAuthenticationBrokerStatics2(std::nullptr_t = nullptr) noexcept {}
};

struct IWebAuthenticationResult :
    Windows::Foundation::IInspectable,
    impl::consume_t<IWebAuthenticationResult>
{
    IWebAuthenticationResult(std::nullptr_t = nullptr) noexcept {}
};

}

}
