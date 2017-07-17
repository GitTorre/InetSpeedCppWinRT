// C++/WinRT v1.0.170717.1
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "Windows.Security.Authentication.Identity.Core.1.h"

namespace winrt {

namespace Windows::Security::Authentication::Identity::Core {

struct MicrosoftAccountMultiFactorAuthenticationManager :
    Windows::Security::Authentication::Identity::Core::IMicrosoftAccountMultiFactorAuthenticationManager
{
    MicrosoftAccountMultiFactorAuthenticationManager(std::nullptr_t) noexcept {}
    static Windows::Security::Authentication::Identity::Core::MicrosoftAccountMultiFactorAuthenticationManager Current();
};

struct MicrosoftAccountMultiFactorGetSessionsResult :
    Windows::Security::Authentication::Identity::Core::IMicrosoftAccountMultiFactorGetSessionsResult
{
    MicrosoftAccountMultiFactorGetSessionsResult(std::nullptr_t) noexcept {}
};

struct MicrosoftAccountMultiFactorOneTimeCodedInfo :
    Windows::Security::Authentication::Identity::Core::IMicrosoftAccountMultiFactorOneTimeCodedInfo
{
    MicrosoftAccountMultiFactorOneTimeCodedInfo(std::nullptr_t) noexcept {}
};

struct MicrosoftAccountMultiFactorSessionInfo :
    Windows::Security::Authentication::Identity::Core::IMicrosoftAccountMultiFactorSessionInfo
{
    MicrosoftAccountMultiFactorSessionInfo(std::nullptr_t) noexcept {}
};

struct MicrosoftAccountMultiFactorUnregisteredAccountsAndSessionInfo :
    Windows::Security::Authentication::Identity::Core::IMicrosoftAccountMultiFactorUnregisteredAccountsAndSessionInfo
{
    MicrosoftAccountMultiFactorUnregisteredAccountsAndSessionInfo(std::nullptr_t) noexcept {}
};

}

namespace impl {

}

}
