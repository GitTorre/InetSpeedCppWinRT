// C++/WinRT v1.0.170717.1
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "Windows.Security.Credentials.0.h"
#include "Windows.System.0.h"
#include "Windows.Security.Authentication.Web.Core.0.h"

namespace winrt {

namespace Windows::Security::Authentication::Web::Core {

struct IWebAccountEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<IWebAccountEventArgs>
{
    IWebAccountEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct IWebAccountMonitor :
    Windows::Foundation::IInspectable,
    impl::consume_t<IWebAccountMonitor>
{
    IWebAccountMonitor(std::nullptr_t = nullptr) noexcept {}
};

struct IWebAuthenticationCoreManagerStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IWebAuthenticationCoreManagerStatics>
{
    IWebAuthenticationCoreManagerStatics(std::nullptr_t = nullptr) noexcept {}
};

struct IWebAuthenticationCoreManagerStatics2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IWebAuthenticationCoreManagerStatics2>,
    impl::require<IWebAuthenticationCoreManagerStatics2, Windows::Security::Authentication::Web::Core::IWebAuthenticationCoreManagerStatics>
{
    IWebAuthenticationCoreManagerStatics2(std::nullptr_t = nullptr) noexcept {}
    using impl::consume_t<IWebAuthenticationCoreManagerStatics2, Windows::Security::Authentication::Web::Core::IWebAuthenticationCoreManagerStatics>::FindAccountProviderAsync;
    using impl::consume_t<IWebAuthenticationCoreManagerStatics2, Windows::Security::Authentication::Web::Core::IWebAuthenticationCoreManagerStatics2>::FindAccountProviderAsync;
};

struct IWebAuthenticationCoreManagerStatics3 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IWebAuthenticationCoreManagerStatics3>,
    impl::require<IWebAuthenticationCoreManagerStatics3, Windows::Security::Authentication::Web::Core::IWebAuthenticationCoreManagerStatics>
{
    IWebAuthenticationCoreManagerStatics3(std::nullptr_t = nullptr) noexcept {}
};

struct IWebProviderError :
    Windows::Foundation::IInspectable,
    impl::consume_t<IWebProviderError>
{
    IWebProviderError(std::nullptr_t = nullptr) noexcept {}
};

struct IWebProviderErrorFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<IWebProviderErrorFactory>
{
    IWebProviderErrorFactory(std::nullptr_t = nullptr) noexcept {}
};

struct IWebTokenRequest :
    Windows::Foundation::IInspectable,
    impl::consume_t<IWebTokenRequest>
{
    IWebTokenRequest(std::nullptr_t = nullptr) noexcept {}
};

struct IWebTokenRequest2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IWebTokenRequest2>
{
    IWebTokenRequest2(std::nullptr_t = nullptr) noexcept {}
};

struct IWebTokenRequest3 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IWebTokenRequest3>
{
    IWebTokenRequest3(std::nullptr_t = nullptr) noexcept {}
};

struct IWebTokenRequestFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<IWebTokenRequestFactory>
{
    IWebTokenRequestFactory(std::nullptr_t = nullptr) noexcept {}
};

struct IWebTokenRequestResult :
    Windows::Foundation::IInspectable,
    impl::consume_t<IWebTokenRequestResult>
{
    IWebTokenRequestResult(std::nullptr_t = nullptr) noexcept {}
};

struct IWebTokenResponse :
    Windows::Foundation::IInspectable,
    impl::consume_t<IWebTokenResponse>
{
    IWebTokenResponse(std::nullptr_t = nullptr) noexcept {}
};

struct IWebTokenResponseFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<IWebTokenResponseFactory>
{
    IWebTokenResponseFactory(std::nullptr_t = nullptr) noexcept {}
};

}

}
