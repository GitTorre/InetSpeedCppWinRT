// C++/WinRT v1.0.170717.1
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "Windows.System.Diagnostics.TraceReporting.0.h"

namespace winrt {

namespace Windows::System::Diagnostics::TraceReporting {

struct IPlatformDiagnosticActionsStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPlatformDiagnosticActionsStatics>
{
    IPlatformDiagnosticActionsStatics(std::nullptr_t = nullptr) noexcept {}
};

struct IPlatformDiagnosticTraceInfo :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPlatformDiagnosticTraceInfo>
{
    IPlatformDiagnosticTraceInfo(std::nullptr_t = nullptr) noexcept {}
};

struct IPlatformDiagnosticTraceRuntimeInfo :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPlatformDiagnosticTraceRuntimeInfo>
{
    IPlatformDiagnosticTraceRuntimeInfo(std::nullptr_t = nullptr) noexcept {}
};

}

}
