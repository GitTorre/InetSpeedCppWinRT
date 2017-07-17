// C++/WinRT v1.0.170717.1
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "Windows.System.Diagnostics.Telemetry.0.h"

namespace winrt {

namespace Windows::System::Diagnostics::Telemetry {

struct IPlatformTelemetryClientStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPlatformTelemetryClientStatics>
{
    IPlatformTelemetryClientStatics(std::nullptr_t = nullptr) noexcept {}
};

struct IPlatformTelemetryRegistrationResult :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPlatformTelemetryRegistrationResult>
{
    IPlatformTelemetryRegistrationResult(std::nullptr_t = nullptr) noexcept {}
};

struct IPlatformTelemetryRegistrationSettings :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPlatformTelemetryRegistrationSettings>
{
    IPlatformTelemetryRegistrationSettings(std::nullptr_t = nullptr) noexcept {}
};

}

}
