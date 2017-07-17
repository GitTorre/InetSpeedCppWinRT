// C++/WinRT v1.0.170717.1
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "Windows.System.Diagnostics.Telemetry.1.h"

namespace winrt {

namespace Windows::System::Diagnostics::Telemetry {

struct PlatformTelemetryClient
{
    PlatformTelemetryClient() = delete;
    static Windows::System::Diagnostics::Telemetry::PlatformTelemetryRegistrationResult Register(param::hstring const& id);
    static Windows::System::Diagnostics::Telemetry::PlatformTelemetryRegistrationResult Register(param::hstring const& id, Windows::System::Diagnostics::Telemetry::PlatformTelemetryRegistrationSettings const& settings);
};

struct PlatformTelemetryRegistrationResult :
    Windows::System::Diagnostics::Telemetry::IPlatformTelemetryRegistrationResult
{
    PlatformTelemetryRegistrationResult(std::nullptr_t) noexcept {}
};

struct PlatformTelemetryRegistrationSettings :
    Windows::System::Diagnostics::Telemetry::IPlatformTelemetryRegistrationSettings
{
    PlatformTelemetryRegistrationSettings(std::nullptr_t) noexcept {}
    PlatformTelemetryRegistrationSettings();
};

}

namespace impl {

}

}
