// C++/WinRT v1.0.170717.1
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "Windows.System.1.h"
#include "Windows.Security.Authentication.OnlineId.1.h"

namespace winrt {

namespace Windows::Security::Authentication::OnlineId {

struct OnlineIdAuthenticator :
    Windows::Security::Authentication::OnlineId::IOnlineIdAuthenticator
{
    OnlineIdAuthenticator(std::nullptr_t) noexcept {}
    OnlineIdAuthenticator();
};

struct OnlineIdServiceTicket :
    Windows::Security::Authentication::OnlineId::IOnlineIdServiceTicket
{
    OnlineIdServiceTicket(std::nullptr_t) noexcept {}
};

struct OnlineIdServiceTicketRequest :
    Windows::Security::Authentication::OnlineId::IOnlineIdServiceTicketRequest
{
    OnlineIdServiceTicketRequest(std::nullptr_t) noexcept {}
    OnlineIdServiceTicketRequest(param::hstring const& service, param::hstring const& policy);
    OnlineIdServiceTicketRequest(param::hstring const& service);
};

struct OnlineIdSystemAuthenticator
{
    OnlineIdSystemAuthenticator() = delete;
    static Windows::Security::Authentication::OnlineId::OnlineIdSystemAuthenticatorForUser Default();
    static Windows::Security::Authentication::OnlineId::OnlineIdSystemAuthenticatorForUser GetForUser(Windows::System::User const& user);
};

struct OnlineIdSystemAuthenticatorForUser :
    Windows::Security::Authentication::OnlineId::IOnlineIdSystemAuthenticatorForUser
{
    OnlineIdSystemAuthenticatorForUser(std::nullptr_t) noexcept {}
};

struct OnlineIdSystemIdentity :
    Windows::Security::Authentication::OnlineId::IOnlineIdSystemIdentity
{
    OnlineIdSystemIdentity(std::nullptr_t) noexcept {}
};

struct OnlineIdSystemTicketResult :
    Windows::Security::Authentication::OnlineId::IOnlineIdSystemTicketResult
{
    OnlineIdSystemTicketResult(std::nullptr_t) noexcept {}
};

struct SignOutUserOperation :
    Windows::Foundation::IAsyncAction
{
    SignOutUserOperation(std::nullptr_t) noexcept {}
};

struct UserAuthenticationOperation :
    Windows::Foundation::IAsyncOperation<Windows::Security::Authentication::OnlineId::UserIdentity>
{
    UserAuthenticationOperation(std::nullptr_t) noexcept {}
};

struct UserIdentity :
    Windows::Security::Authentication::OnlineId::IUserIdentity
{
    UserIdentity(std::nullptr_t) noexcept {}
};

}

namespace impl {

}

}
