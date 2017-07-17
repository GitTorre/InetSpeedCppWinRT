// C++/WinRT v1.0.170717.1
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "Windows.Security.ExchangeActiveSyncProvisioning.0.h"

namespace winrt {

namespace Windows::Security::ExchangeActiveSyncProvisioning {

struct IEasClientDeviceInformation :
    Windows::Foundation::IInspectable,
    impl::consume_t<IEasClientDeviceInformation>
{
    IEasClientDeviceInformation(std::nullptr_t = nullptr) noexcept {}
};

struct IEasClientDeviceInformation2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IEasClientDeviceInformation2>,
    impl::require<IEasClientDeviceInformation2, Windows::Security::ExchangeActiveSyncProvisioning::IEasClientDeviceInformation>
{
    IEasClientDeviceInformation2(std::nullptr_t = nullptr) noexcept {}
};

struct IEasClientSecurityPolicy :
    Windows::Foundation::IInspectable,
    impl::consume_t<IEasClientSecurityPolicy>
{
    IEasClientSecurityPolicy(std::nullptr_t = nullptr) noexcept {}
};

struct IEasComplianceResults :
    Windows::Foundation::IInspectable,
    impl::consume_t<IEasComplianceResults>
{
    IEasComplianceResults(std::nullptr_t = nullptr) noexcept {}
};

struct IEasComplianceResults2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IEasComplianceResults2>,
    impl::require<IEasComplianceResults2, Windows::Security::ExchangeActiveSyncProvisioning::IEasComplianceResults>
{
    IEasComplianceResults2(std::nullptr_t = nullptr) noexcept {}
};

}

}
