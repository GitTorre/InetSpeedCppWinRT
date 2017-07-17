// C++/WinRT v1.0.170717.1
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "Windows.Security.Authentication.Identity.0.h"

namespace winrt {

namespace Windows::Security::Authentication::Identity {

struct IEnterpriseKeyCredentialRegistrationInfo :
    Windows::Foundation::IInspectable,
    impl::consume_t<IEnterpriseKeyCredentialRegistrationInfo>
{
    IEnterpriseKeyCredentialRegistrationInfo(std::nullptr_t = nullptr) noexcept {}
};

struct IEnterpriseKeyCredentialRegistrationManager :
    Windows::Foundation::IInspectable,
    impl::consume_t<IEnterpriseKeyCredentialRegistrationManager>
{
    IEnterpriseKeyCredentialRegistrationManager(std::nullptr_t = nullptr) noexcept {}
};

struct IEnterpriseKeyCredentialRegistrationManagerStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IEnterpriseKeyCredentialRegistrationManagerStatics>
{
    IEnterpriseKeyCredentialRegistrationManagerStatics(std::nullptr_t = nullptr) noexcept {}
};

}

}
