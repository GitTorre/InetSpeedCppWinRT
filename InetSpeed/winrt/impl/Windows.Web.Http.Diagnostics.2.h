// C++/WinRT v1.0.170717.1
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "Windows.Foundation.1.h"
#include "Windows.System.Diagnostics.1.h"
#include "Windows.Web.Http.1.h"
#include "Windows.Web.Http.Diagnostics.1.h"

namespace winrt {

namespace Windows::Web::Http::Diagnostics {

struct HttpDiagnosticProvider :
    Windows::Web::Http::Diagnostics::IHttpDiagnosticProvider
{
    HttpDiagnosticProvider(std::nullptr_t) noexcept {}
    static Windows::Web::Http::Diagnostics::HttpDiagnosticProvider CreateFromProcessDiagnosticInfo(Windows::System::Diagnostics::ProcessDiagnosticInfo const& processDiagnosticInfo);
};

struct HttpDiagnosticProviderRequestResponseCompletedEventArgs :
    Windows::Web::Http::Diagnostics::IHttpDiagnosticProviderRequestResponseCompletedEventArgs
{
    HttpDiagnosticProviderRequestResponseCompletedEventArgs(std::nullptr_t) noexcept {}
};

struct HttpDiagnosticProviderRequestResponseTimestamps :
    Windows::Web::Http::Diagnostics::IHttpDiagnosticProviderRequestResponseTimestamps
{
    HttpDiagnosticProviderRequestResponseTimestamps(std::nullptr_t) noexcept {}
};

struct HttpDiagnosticProviderRequestSentEventArgs :
    Windows::Web::Http::Diagnostics::IHttpDiagnosticProviderRequestSentEventArgs
{
    HttpDiagnosticProviderRequestSentEventArgs(std::nullptr_t) noexcept {}
};

struct HttpDiagnosticProviderResponseReceivedEventArgs :
    Windows::Web::Http::Diagnostics::IHttpDiagnosticProviderResponseReceivedEventArgs
{
    HttpDiagnosticProviderResponseReceivedEventArgs(std::nullptr_t) noexcept {}
};

struct HttpDiagnosticSourceLocation :
    Windows::Web::Http::Diagnostics::IHttpDiagnosticSourceLocation
{
    HttpDiagnosticSourceLocation(std::nullptr_t) noexcept {}
};

}

namespace impl {

}

}
