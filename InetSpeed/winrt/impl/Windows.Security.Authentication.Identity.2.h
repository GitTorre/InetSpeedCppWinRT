// C++/WinRT v1.0.170717.1
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "Windows.Security.Authentication.Identity.1.h"

namespace winrt {

namespace Windows::Security::Authentication::Identity {

struct EnterpriseKeyCredentialRegistrationInfo :
    Windows::Security::Authentication::Identity::IEnterpriseKeyCredentialRegistrationInfo
{
    EnterpriseKeyCredentialRegistrationInfo(std::nullptr_t) noexcept {}
};

struct EnterpriseKeyCredentialRegistrationManager :
    Windows::Security::Authentication::Identity::IEnterpriseKeyCredentialRegistrationManager
{
    EnterpriseKeyCredentialRegistrationManager(std::nullptr_t) noexcept {}
    static Windows::Security::Authentication::Identity::EnterpriseKeyCredentialRegistrationManager Current();
};

}

namespace impl {

}

}
