// C++/WinRT v1.0.170717.1
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "Windows.Foundation.1.h"
#include "Windows.Foundation.Collections.1.h"
#include "Windows.Security.Authentication.Web.1.h"

namespace winrt {

namespace Windows::Security::Authentication::Web {

struct WebAuthenticationBroker
{
    WebAuthenticationBroker() = delete;
    static Windows::Foundation::IAsyncOperation<Windows::Security::Authentication::Web::WebAuthenticationResult> AuthenticateAsync(Windows::Security::Authentication::Web::WebAuthenticationOptions const& options, Windows::Foundation::Uri const& requestUri, Windows::Foundation::Uri const& callbackUri);
    static Windows::Foundation::IAsyncOperation<Windows::Security::Authentication::Web::WebAuthenticationResult> AuthenticateAsync(Windows::Security::Authentication::Web::WebAuthenticationOptions const& options, Windows::Foundation::Uri const& requestUri);
    static Windows::Foundation::Uri GetCurrentApplicationCallbackUri();
    static void AuthenticateAndContinue(Windows::Foundation::Uri const& requestUri);
    static void AuthenticateAndContinue(Windows::Foundation::Uri const& requestUri, Windows::Foundation::Uri const& callbackUri);
    static void AuthenticateAndContinue(Windows::Foundation::Uri const& requestUri, Windows::Foundation::Uri const& callbackUri, Windows::Foundation::Collections::ValueSet const& continuationData, Windows::Security::Authentication::Web::WebAuthenticationOptions const& options);
    static Windows::Foundation::IAsyncOperation<Windows::Security::Authentication::Web::WebAuthenticationResult> AuthenticateSilentlyAsync(Windows::Foundation::Uri const& requestUri);
    static Windows::Foundation::IAsyncOperation<Windows::Security::Authentication::Web::WebAuthenticationResult> AuthenticateSilentlyAsync(Windows::Foundation::Uri const& requestUri, Windows::Security::Authentication::Web::WebAuthenticationOptions const& options);
};

struct WebAuthenticationResult :
    Windows::Security::Authentication::Web::IWebAuthenticationResult
{
    WebAuthenticationResult(std::nullptr_t) noexcept {}
};

}

namespace impl {

}

}
