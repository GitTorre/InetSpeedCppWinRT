// C++/WinRT v1.0.170717.1
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "Windows.Security.ExchangeActiveSyncProvisioning.1.h"

namespace winrt {

namespace Windows::Security::ExchangeActiveSyncProvisioning {

struct EasClientDeviceInformation :
    Windows::Security::ExchangeActiveSyncProvisioning::IEasClientDeviceInformation,
    impl::require<EasClientDeviceInformation, Windows::Security::ExchangeActiveSyncProvisioning::IEasClientDeviceInformation2>
{
    EasClientDeviceInformation(std::nullptr_t) noexcept {}
    EasClientDeviceInformation();
};

struct EasClientSecurityPolicy :
    Windows::Security::ExchangeActiveSyncProvisioning::IEasClientSecurityPolicy
{
    EasClientSecurityPolicy(std::nullptr_t) noexcept {}
    EasClientSecurityPolicy();
};

struct EasComplianceResults :
    Windows::Security::ExchangeActiveSyncProvisioning::IEasComplianceResults,
    impl::require<EasComplianceResults, Windows::Security::ExchangeActiveSyncProvisioning::IEasComplianceResults2>
{
    EasComplianceResults(std::nullptr_t) noexcept {}
};

}

namespace impl {

}

}
