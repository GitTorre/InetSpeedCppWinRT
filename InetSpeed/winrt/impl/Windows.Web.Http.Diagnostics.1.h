// C++/WinRT v1.0.170717.1
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "Windows.Foundation.0.h"
#include "Windows.System.Diagnostics.0.h"
#include "Windows.Web.Http.0.h"
#include "Windows.Web.Http.Diagnostics.0.h"

namespace winrt {

namespace Windows::Web::Http::Diagnostics {

struct IHttpDiagnosticProvider :
    Windows::Foundation::IInspectable,
    impl::consume_t<IHttpDiagnosticProvider>
{
    IHttpDiagnosticProvider(std::nullptr_t = nullptr) noexcept {}
};

struct IHttpDiagnosticProviderRequestResponseCompletedEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<IHttpDiagnosticProviderRequestResponseCompletedEventArgs>
{
    IHttpDiagnosticProviderRequestResponseCompletedEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct IHttpDiagnosticProviderRequestResponseTimestamps :
    Windows::Foundation::IInspectable,
    impl::consume_t<IHttpDiagnosticProviderRequestResponseTimestamps>
{
    IHttpDiagnosticProviderRequestResponseTimestamps(std::nullptr_t = nullptr) noexcept {}
};

struct IHttpDiagnosticProviderRequestSentEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<IHttpDiagnosticProviderRequestSentEventArgs>
{
    IHttpDiagnosticProviderRequestSentEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct IHttpDiagnosticProviderResponseReceivedEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<IHttpDiagnosticProviderResponseReceivedEventArgs>
{
    IHttpDiagnosticProviderResponseReceivedEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct IHttpDiagnosticProviderStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IHttpDiagnosticProviderStatics>
{
    IHttpDiagnosticProviderStatics(std::nullptr_t = nullptr) noexcept {}
};

struct IHttpDiagnosticSourceLocation :
    Windows::Foundation::IInspectable,
    impl::consume_t<IHttpDiagnosticSourceLocation>
{
    IHttpDiagnosticSourceLocation(std::nullptr_t = nullptr) noexcept {}
};

}

}
