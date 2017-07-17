// C++/WinRT v1.0.170717.1
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "Windows.Security.Authentication.Identity.Core.0.h"

namespace winrt {

namespace Windows::Security::Authentication::Identity::Core {

struct IMicrosoftAccountMultiFactorAuthenticationManager :
    Windows::Foundation::IInspectable,
    impl::consume_t<IMicrosoftAccountMultiFactorAuthenticationManager>
{
    IMicrosoftAccountMultiFactorAuthenticationManager(std::nullptr_t = nullptr) noexcept {}
};

struct IMicrosoftAccountMultiFactorAuthenticatorStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IMicrosoftAccountMultiFactorAuthenticatorStatics>
{
    IMicrosoftAccountMultiFactorAuthenticatorStatics(std::nullptr_t = nullptr) noexcept {}
};

struct IMicrosoftAccountMultiFactorGetSessionsResult :
    Windows::Foundation::IInspectable,
    impl::consume_t<IMicrosoftAccountMultiFactorGetSessionsResult>
{
    IMicrosoftAccountMultiFactorGetSessionsResult(std::nullptr_t = nullptr) noexcept {}
};

struct IMicrosoftAccountMultiFactorOneTimeCodedInfo :
    Windows::Foundation::IInspectable,
    impl::consume_t<IMicrosoftAccountMultiFactorOneTimeCodedInfo>
{
    IMicrosoftAccountMultiFactorOneTimeCodedInfo(std::nullptr_t = nullptr) noexcept {}
};

struct IMicrosoftAccountMultiFactorSessionInfo :
    Windows::Foundation::IInspectable,
    impl::consume_t<IMicrosoftAccountMultiFactorSessionInfo>
{
    IMicrosoftAccountMultiFactorSessionInfo(std::nullptr_t = nullptr) noexcept {}
};

struct IMicrosoftAccountMultiFactorUnregisteredAccountsAndSessionInfo :
    Windows::Foundation::IInspectable,
    impl::consume_t<IMicrosoftAccountMultiFactorUnregisteredAccountsAndSessionInfo>
{
    IMicrosoftAccountMultiFactorUnregisteredAccountsAndSessionInfo(std::nullptr_t = nullptr) noexcept {}
};

}

}
