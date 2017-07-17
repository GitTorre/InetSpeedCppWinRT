// C++/WinRT v1.0.170717.1
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "Windows.System.0.h"
#include "Windows.Security.Authentication.OnlineId.0.h"

namespace winrt {

namespace Windows::Security::Authentication::OnlineId {

struct IOnlineIdAuthenticator :
    Windows::Foundation::IInspectable,
    impl::consume_t<IOnlineIdAuthenticator>
{
    IOnlineIdAuthenticator(std::nullptr_t = nullptr) noexcept {}
};

struct IOnlineIdServiceTicket :
    Windows::Foundation::IInspectable,
    impl::consume_t<IOnlineIdServiceTicket>
{
    IOnlineIdServiceTicket(std::nullptr_t = nullptr) noexcept {}
};

struct IOnlineIdServiceTicketRequest :
    Windows::Foundation::IInspectable,
    impl::consume_t<IOnlineIdServiceTicketRequest>
{
    IOnlineIdServiceTicketRequest(std::nullptr_t = nullptr) noexcept {}
};

struct IOnlineIdServiceTicketRequestFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<IOnlineIdServiceTicketRequestFactory>
{
    IOnlineIdServiceTicketRequestFactory(std::nullptr_t = nullptr) noexcept {}
};

struct IOnlineIdSystemAuthenticatorForUser :
    Windows::Foundation::IInspectable,
    impl::consume_t<IOnlineIdSystemAuthenticatorForUser>
{
    IOnlineIdSystemAuthenticatorForUser(std::nullptr_t = nullptr) noexcept {}
};

struct IOnlineIdSystemAuthenticatorStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IOnlineIdSystemAuthenticatorStatics>
{
    IOnlineIdSystemAuthenticatorStatics(std::nullptr_t = nullptr) noexcept {}
};

struct IOnlineIdSystemIdentity :
    Windows::Foundation::IInspectable,
    impl::consume_t<IOnlineIdSystemIdentity>
{
    IOnlineIdSystemIdentity(std::nullptr_t = nullptr) noexcept {}
};

struct IOnlineIdSystemTicketResult :
    Windows::Foundation::IInspectable,
    impl::consume_t<IOnlineIdSystemTicketResult>
{
    IOnlineIdSystemTicketResult(std::nullptr_t = nullptr) noexcept {}
};

struct IUserIdentity :
    Windows::Foundation::IInspectable,
    impl::consume_t<IUserIdentity>
{
    IUserIdentity(std::nullptr_t = nullptr) noexcept {}
};

}

}
