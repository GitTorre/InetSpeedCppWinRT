// C++/WinRT v1.0.170717.1
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "Windows.Foundation.0.h"
#include "Windows.Storage.0.h"
#include "Windows.Foundation.Diagnostics.0.h"

namespace winrt {

namespace Windows::Foundation::Diagnostics {

struct IAsyncCausalityTracerStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IAsyncCausalityTracerStatics>
{
    IAsyncCausalityTracerStatics(std::nullptr_t = nullptr) noexcept {}
};

struct IErrorDetails :
    Windows::Foundation::IInspectable,
    impl::consume_t<IErrorDetails>
{
    IErrorDetails(std::nullptr_t = nullptr) noexcept {}
};

struct IErrorDetailsStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IErrorDetailsStatics>
{
    IErrorDetailsStatics(std::nullptr_t = nullptr) noexcept {}
};

struct IErrorReportingSettings :
    Windows::Foundation::IInspectable,
    impl::consume_t<IErrorReportingSettings>
{
    IErrorReportingSettings(std::nullptr_t = nullptr) noexcept {}
};

struct IFileLoggingSession :
    Windows::Foundation::IInspectable,
    impl::consume_t<IFileLoggingSession>,
    impl::require<IFileLoggingSession, Windows::Foundation::IClosable>
{
    IFileLoggingSession(std::nullptr_t = nullptr) noexcept {}
};

struct IFileLoggingSessionFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<IFileLoggingSessionFactory>
{
    IFileLoggingSessionFactory(std::nullptr_t = nullptr) noexcept {}
};

struct ILogFileGeneratedEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<ILogFileGeneratedEventArgs>
{
    ILogFileGeneratedEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct ILoggingActivity :
    Windows::Foundation::IInspectable,
    impl::consume_t<ILoggingActivity>,
    impl::require<ILoggingActivity, Windows::Foundation::IClosable>
{
    ILoggingActivity(std::nullptr_t = nullptr) noexcept {}
};

struct ILoggingActivity2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<ILoggingActivity2>,
    impl::require<ILoggingActivity2, Windows::Foundation::Diagnostics::ILoggingActivity, Windows::Foundation::Diagnostics::ILoggingTarget, Windows::Foundation::IClosable>
{
    ILoggingActivity2(std::nullptr_t = nullptr) noexcept {}
};

struct ILoggingActivityFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<ILoggingActivityFactory>
{
    ILoggingActivityFactory(std::nullptr_t = nullptr) noexcept {}
};

struct ILoggingChannel :
    Windows::Foundation::IInspectable,
    impl::consume_t<ILoggingChannel>,
    impl::require<ILoggingChannel, Windows::Foundation::IClosable>
{
    ILoggingChannel(std::nullptr_t = nullptr) noexcept {}
};

struct ILoggingChannel2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<ILoggingChannel2>,
    impl::require<ILoggingChannel2, Windows::Foundation::Diagnostics::ILoggingChannel, Windows::Foundation::Diagnostics::ILoggingTarget, Windows::Foundation::IClosable>
{
    ILoggingChannel2(std::nullptr_t = nullptr) noexcept {}
};

struct ILoggingChannelFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<ILoggingChannelFactory>
{
    ILoggingChannelFactory(std::nullptr_t = nullptr) noexcept {}
};

struct ILoggingChannelFactory2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<ILoggingChannelFactory2>
{
    ILoggingChannelFactory2(std::nullptr_t = nullptr) noexcept {}
};

struct ILoggingChannelOptions :
    Windows::Foundation::IInspectable,
    impl::consume_t<ILoggingChannelOptions>
{
    ILoggingChannelOptions(std::nullptr_t = nullptr) noexcept {}
};

struct ILoggingChannelOptionsFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<ILoggingChannelOptionsFactory>
{
    ILoggingChannelOptionsFactory(std::nullptr_t = nullptr) noexcept {}
};

struct ILoggingFields :
    Windows::Foundation::IInspectable,
    impl::consume_t<ILoggingFields>
{
    ILoggingFields(std::nullptr_t = nullptr) noexcept {}
};

struct ILoggingOptions :
    Windows::Foundation::IInspectable,
    impl::consume_t<ILoggingOptions>
{
    ILoggingOptions(std::nullptr_t = nullptr) noexcept {}
};

struct ILoggingOptionsFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<ILoggingOptionsFactory>
{
    ILoggingOptionsFactory(std::nullptr_t = nullptr) noexcept {}
};

struct ILoggingSession :
    Windows::Foundation::IInspectable,
    impl::consume_t<ILoggingSession>,
    impl::require<ILoggingSession, Windows::Foundation::IClosable>
{
    ILoggingSession(std::nullptr_t = nullptr) noexcept {}
};

struct ILoggingSessionFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<ILoggingSessionFactory>
{
    ILoggingSessionFactory(std::nullptr_t = nullptr) noexcept {}
};

struct ILoggingTarget :
    Windows::Foundation::IInspectable,
    impl::consume_t<ILoggingTarget>
{
    ILoggingTarget(std::nullptr_t = nullptr) noexcept {}
};

struct ITracingStatusChangedEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<ITracingStatusChangedEventArgs>
{
    ITracingStatusChangedEventArgs(std::nullptr_t = nullptr) noexcept {}
};

}

}
