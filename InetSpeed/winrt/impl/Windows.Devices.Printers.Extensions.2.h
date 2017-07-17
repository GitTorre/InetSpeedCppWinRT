// C++/WinRT v1.0.170717.1
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "Windows.Devices.Printers.Extensions.1.h"

namespace winrt {

namespace Windows::Devices::Printers::Extensions {

struct Print3DWorkflow :
    Windows::Devices::Printers::Extensions::IPrint3DWorkflow,
    impl::require<Print3DWorkflow, Windows::Devices::Printers::Extensions::IPrint3DWorkflow2>
{
    Print3DWorkflow(std::nullptr_t) noexcept {}
};

struct Print3DWorkflowPrintRequestedEventArgs :
    Windows::Devices::Printers::Extensions::IPrint3DWorkflowPrintRequestedEventArgs
{
    Print3DWorkflowPrintRequestedEventArgs(std::nullptr_t) noexcept {}
};

struct Print3DWorkflowPrinterChangedEventArgs :
    Windows::Devices::Printers::Extensions::IPrint3DWorkflowPrinterChangedEventArgs
{
    Print3DWorkflowPrinterChangedEventArgs(std::nullptr_t) noexcept {}
};

struct PrintExtensionContext
{
    PrintExtensionContext() = delete;
    static Windows::Foundation::IInspectable FromDeviceId(param::hstring const& deviceId);
};

struct PrintNotificationEventDetails :
    Windows::Devices::Printers::Extensions::IPrintNotificationEventDetails
{
    PrintNotificationEventDetails(std::nullptr_t) noexcept {}
};

struct PrintTaskConfiguration :
    Windows::Devices::Printers::Extensions::IPrintTaskConfiguration
{
    PrintTaskConfiguration(std::nullptr_t) noexcept {}
};

struct PrintTaskConfigurationSaveRequest :
    Windows::Devices::Printers::Extensions::IPrintTaskConfigurationSaveRequest
{
    PrintTaskConfigurationSaveRequest(std::nullptr_t) noexcept {}
};

struct PrintTaskConfigurationSaveRequestedDeferral :
    Windows::Devices::Printers::Extensions::IPrintTaskConfigurationSaveRequestedDeferral
{
    PrintTaskConfigurationSaveRequestedDeferral(std::nullptr_t) noexcept {}
};

struct PrintTaskConfigurationSaveRequestedEventArgs :
    Windows::Devices::Printers::Extensions::IPrintTaskConfigurationSaveRequestedEventArgs
{
    PrintTaskConfigurationSaveRequestedEventArgs(std::nullptr_t) noexcept {}
};

}

namespace impl {

}

}
