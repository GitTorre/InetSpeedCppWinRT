// C++/WinRT v1.0.170717.1
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "Windows.Foundation.1.h"
#include "Windows.Storage.1.h"
#include "Windows.Foundation.Diagnostics.1.h"

namespace winrt {

namespace Windows::Foundation::Diagnostics {

struct AsyncCausalityTracer
{
    AsyncCausalityTracer() = delete;
    static void TraceOperationCreation(Windows::Foundation::Diagnostics::CausalityTraceLevel const& traceLevel, Windows::Foundation::Diagnostics::CausalitySource const& source, GUID const& platformId, uint64_t operationId, param::hstring const& operationName, uint64_t relatedContext);
    static void TraceOperationCompletion(Windows::Foundation::Diagnostics::CausalityTraceLevel const& traceLevel, Windows::Foundation::Diagnostics::CausalitySource const& source, GUID const& platformId, uint64_t operationId, Windows::Foundation::AsyncStatus const& status);
    static void TraceOperationRelation(Windows::Foundation::Diagnostics::CausalityTraceLevel const& traceLevel, Windows::Foundation::Diagnostics::CausalitySource const& source, GUID const& platformId, uint64_t operationId, Windows::Foundation::Diagnostics::CausalityRelation const& relation);
    static void TraceSynchronousWorkStart(Windows::Foundation::Diagnostics::CausalityTraceLevel const& traceLevel, Windows::Foundation::Diagnostics::CausalitySource const& source, GUID const& platformId, uint64_t operationId, Windows::Foundation::Diagnostics::CausalitySynchronousWork const& work);
    static void TraceSynchronousWorkCompletion(Windows::Foundation::Diagnostics::CausalityTraceLevel const& traceLevel, Windows::Foundation::Diagnostics::CausalitySource const& source, Windows::Foundation::Diagnostics::CausalitySynchronousWork const& work);
    static event_token TracingStatusChanged(Windows::Foundation::EventHandler<Windows::Foundation::Diagnostics::TracingStatusChangedEventArgs> const& handler);
    using TracingStatusChanged_revoker = factory_event_revoker<Windows::Foundation::Diagnostics::IAsyncCausalityTracerStatics>;
    static TracingStatusChanged_revoker TracingStatusChanged(auto_revoke_t, Windows::Foundation::EventHandler<Windows::Foundation::Diagnostics::TracingStatusChangedEventArgs> const& handler);
    static void TracingStatusChanged(event_token const& cookie);
};

struct ErrorDetails :
    Windows::Foundation::Diagnostics::IErrorDetails
{
    ErrorDetails(std::nullptr_t) noexcept {}
    static Windows::Foundation::IAsyncOperation<Windows::Foundation::Diagnostics::ErrorDetails> CreateFromHResultAsync(int32_t errorCode);
};

struct FileLoggingSession :
    Windows::Foundation::Diagnostics::IFileLoggingSession
{
    FileLoggingSession(std::nullptr_t) noexcept {}
    FileLoggingSession(param::hstring const& name);
};

struct LogFileGeneratedEventArgs :
    Windows::Foundation::Diagnostics::ILogFileGeneratedEventArgs
{
    LogFileGeneratedEventArgs(std::nullptr_t) noexcept {}
};

struct LoggingActivity :
    Windows::Foundation::Diagnostics::ILoggingActivity,
    impl::require<LoggingActivity, Windows::Foundation::Diagnostics::ILoggingActivity2, Windows::Foundation::Diagnostics::ILoggingTarget>
{
    LoggingActivity(std::nullptr_t) noexcept {}
    LoggingActivity(param::hstring const& activityName, Windows::Foundation::Diagnostics::ILoggingChannel const& loggingChannel);
    LoggingActivity(param::hstring const& activityName, Windows::Foundation::Diagnostics::ILoggingChannel const& loggingChannel, Windows::Foundation::Diagnostics::LoggingLevel const& level);
};

struct LoggingChannel :
    Windows::Foundation::Diagnostics::ILoggingChannel,
    impl::require<LoggingChannel, Windows::Foundation::Diagnostics::ILoggingChannel2, Windows::Foundation::Diagnostics::ILoggingTarget>
{
    LoggingChannel(std::nullptr_t) noexcept {}
    [[deprecated("This constructor creates a LoggingChannel in Windows 8.1 compatibility mode. Prefer the two-parameter constructor.")]] LoggingChannel(param::hstring const& name);
    LoggingChannel(param::hstring const& name, Windows::Foundation::Diagnostics::LoggingChannelOptions const& options);
    LoggingChannel(param::hstring const& name, Windows::Foundation::Diagnostics::LoggingChannelOptions const& options, GUID const& id);
};

struct LoggingChannelOptions :
    Windows::Foundation::Diagnostics::ILoggingChannelOptions
{
    LoggingChannelOptions(std::nullptr_t) noexcept {}
    LoggingChannelOptions();
    LoggingChannelOptions(GUID const& group);
};

struct LoggingFields :
    Windows::Foundation::Diagnostics::ILoggingFields
{
    LoggingFields(std::nullptr_t) noexcept {}
    LoggingFields();
};

struct LoggingOptions :
    Windows::Foundation::Diagnostics::ILoggingOptions
{
    LoggingOptions(std::nullptr_t) noexcept {}
    LoggingOptions();
    LoggingOptions(int64_t keywords);
};

struct LoggingSession :
    Windows::Foundation::Diagnostics::ILoggingSession
{
    LoggingSession(std::nullptr_t) noexcept {}
    LoggingSession(param::hstring const& name);
};

struct RuntimeBrokerErrorSettings :
    Windows::Foundation::Diagnostics::IErrorReportingSettings
{
    RuntimeBrokerErrorSettings(std::nullptr_t) noexcept {}
    RuntimeBrokerErrorSettings();
};

struct TracingStatusChangedEventArgs :
    Windows::Foundation::Diagnostics::ITracingStatusChangedEventArgs
{
    TracingStatusChangedEventArgs(std::nullptr_t) noexcept {}
};

}

namespace impl {

}

}
