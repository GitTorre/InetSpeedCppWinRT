// C++/WinRT v1.0.170717.1
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "Windows.Foundation.0.h"
#include "Windows.Security.Authentication.Web.0.h"
#include "Windows.Security.Authentication.Web.Core.0.h"
#include "Windows.Security.Credentials.0.h"
#include "Windows.Security.Cryptography.Core.0.h"
#include "Windows.Storage.Streams.0.h"
#include "Windows.System.0.h"
#include "Windows.Web.Http.0.h"
#include "Windows.Security.Authentication.Web.Provider.0.h"

namespace winrt {

namespace Windows::Security::Authentication::Web::Provider {

struct IWebAccountClientView :
    Windows::Foundation::IInspectable,
    impl::consume_t<IWebAccountClientView>
{
    IWebAccountClientView(std::nullptr_t = nullptr) noexcept {}
};

struct IWebAccountClientViewFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<IWebAccountClientViewFactory>
{
    IWebAccountClientViewFactory(std::nullptr_t = nullptr) noexcept {}
};

struct IWebAccountManagerStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IWebAccountManagerStatics>
{
    IWebAccountManagerStatics(std::nullptr_t = nullptr) noexcept {}
};

struct IWebAccountManagerStatics2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IWebAccountManagerStatics2>
{
    IWebAccountManagerStatics2(std::nullptr_t = nullptr) noexcept {}
};

struct IWebAccountManagerStatics3 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IWebAccountManagerStatics3>
{
    IWebAccountManagerStatics3(std::nullptr_t = nullptr) noexcept {}
};

struct IWebAccountMapManagerStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IWebAccountMapManagerStatics>
{
    IWebAccountMapManagerStatics(std::nullptr_t = nullptr) noexcept {}
};

struct IWebAccountProviderAddAccountOperation :
    Windows::Foundation::IInspectable,
    impl::consume_t<IWebAccountProviderAddAccountOperation>,
    impl::require<IWebAccountProviderAddAccountOperation, Windows::Security::Authentication::Web::Provider::IWebAccountProviderOperation>
{
    IWebAccountProviderAddAccountOperation(std::nullptr_t = nullptr) noexcept {}
};

struct IWebAccountProviderBaseReportOperation :
    Windows::Foundation::IInspectable,
    impl::consume_t<IWebAccountProviderBaseReportOperation>
{
    IWebAccountProviderBaseReportOperation(std::nullptr_t = nullptr) noexcept {}
};

struct IWebAccountProviderDeleteAccountOperation :
    Windows::Foundation::IInspectable,
    impl::consume_t<IWebAccountProviderDeleteAccountOperation>,
    impl::require<IWebAccountProviderDeleteAccountOperation, Windows::Security::Authentication::Web::Provider::IWebAccountProviderOperation>
{
    IWebAccountProviderDeleteAccountOperation(std::nullptr_t = nullptr) noexcept {}
};

struct IWebAccountProviderManageAccountOperation :
    Windows::Foundation::IInspectable,
    impl::consume_t<IWebAccountProviderManageAccountOperation>,
    impl::require<IWebAccountProviderManageAccountOperation, Windows::Security::Authentication::Web::Provider::IWebAccountProviderOperation>
{
    IWebAccountProviderManageAccountOperation(std::nullptr_t = nullptr) noexcept {}
};

struct IWebAccountProviderOperation :
    Windows::Foundation::IInspectable,
    impl::consume_t<IWebAccountProviderOperation>
{
    IWebAccountProviderOperation(std::nullptr_t = nullptr) noexcept {}
};

struct IWebAccountProviderRetrieveCookiesOperation :
    Windows::Foundation::IInspectable,
    impl::consume_t<IWebAccountProviderRetrieveCookiesOperation>,
    impl::require<IWebAccountProviderRetrieveCookiesOperation, Windows::Security::Authentication::Web::Provider::IWebAccountProviderOperation>
{
    IWebAccountProviderRetrieveCookiesOperation(std::nullptr_t = nullptr) noexcept {}
};

struct IWebAccountProviderSignOutAccountOperation :
    Windows::Foundation::IInspectable,
    impl::consume_t<IWebAccountProviderSignOutAccountOperation>,
    impl::require<IWebAccountProviderSignOutAccountOperation, Windows::Security::Authentication::Web::Provider::IWebAccountProviderOperation>
{
    IWebAccountProviderSignOutAccountOperation(std::nullptr_t = nullptr) noexcept {}
};

struct IWebAccountProviderSilentReportOperation :
    Windows::Foundation::IInspectable,
    impl::consume_t<IWebAccountProviderSilentReportOperation>,
    impl::require<IWebAccountProviderSilentReportOperation, Windows::Security::Authentication::Web::Provider::IWebAccountProviderBaseReportOperation>
{
    IWebAccountProviderSilentReportOperation(std::nullptr_t = nullptr) noexcept {}
};

struct IWebAccountProviderTokenObjects :
    Windows::Foundation::IInspectable,
    impl::consume_t<IWebAccountProviderTokenObjects>
{
    IWebAccountProviderTokenObjects(std::nullptr_t = nullptr) noexcept {}
};

struct IWebAccountProviderTokenObjects2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IWebAccountProviderTokenObjects2>,
    impl::require<IWebAccountProviderTokenObjects2, Windows::Security::Authentication::Web::Provider::IWebAccountProviderTokenObjects>
{
    IWebAccountProviderTokenObjects2(std::nullptr_t = nullptr) noexcept {}
};

struct IWebAccountProviderTokenOperation :
    Windows::Foundation::IInspectable,
    impl::consume_t<IWebAccountProviderTokenOperation>,
    impl::require<IWebAccountProviderTokenOperation, Windows::Security::Authentication::Web::Provider::IWebAccountProviderOperation>
{
    IWebAccountProviderTokenOperation(std::nullptr_t = nullptr) noexcept {}
};

struct IWebAccountProviderUIReportOperation :
    Windows::Foundation::IInspectable,
    impl::consume_t<IWebAccountProviderUIReportOperation>,
    impl::require<IWebAccountProviderUIReportOperation, Windows::Security::Authentication::Web::Provider::IWebAccountProviderBaseReportOperation>
{
    IWebAccountProviderUIReportOperation(std::nullptr_t = nullptr) noexcept {}
};

struct IWebAccountScopeManagerStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IWebAccountScopeManagerStatics>
{
    IWebAccountScopeManagerStatics(std::nullptr_t = nullptr) noexcept {}
};

struct IWebProviderTokenRequest :
    Windows::Foundation::IInspectable,
    impl::consume_t<IWebProviderTokenRequest>
{
    IWebProviderTokenRequest(std::nullptr_t = nullptr) noexcept {}
};

struct IWebProviderTokenRequest2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IWebProviderTokenRequest2>
{
    IWebProviderTokenRequest2(std::nullptr_t = nullptr) noexcept {}
};

struct IWebProviderTokenResponse :
    Windows::Foundation::IInspectable,
    impl::consume_t<IWebProviderTokenResponse>
{
    IWebProviderTokenResponse(std::nullptr_t = nullptr) noexcept {}
};

struct IWebProviderTokenResponseFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<IWebProviderTokenResponseFactory>
{
    IWebProviderTokenResponseFactory(std::nullptr_t = nullptr) noexcept {}
};

}

}
