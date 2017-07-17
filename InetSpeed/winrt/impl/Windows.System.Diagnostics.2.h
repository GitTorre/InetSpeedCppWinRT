// C++/WinRT v1.0.170717.1
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "Windows.System.Diagnostics.1.h"

namespace winrt {

namespace Windows::System::Diagnostics {

struct ProcessCpuUsage :
    Windows::System::Diagnostics::IProcessCpuUsage
{
    ProcessCpuUsage(std::nullptr_t) noexcept {}
};

struct ProcessCpuUsageReport :
    Windows::System::Diagnostics::IProcessCpuUsageReport
{
    ProcessCpuUsageReport(std::nullptr_t) noexcept {}
};

struct ProcessDiagnosticInfo :
    Windows::System::Diagnostics::IProcessDiagnosticInfo
{
    ProcessDiagnosticInfo(std::nullptr_t) noexcept {}
    static Windows::Foundation::Collections::IVectorView<Windows::System::Diagnostics::ProcessDiagnosticInfo> GetForProcesses();
    static Windows::System::Diagnostics::ProcessDiagnosticInfo GetForCurrentProcess();
};

struct ProcessDiskUsage :
    Windows::System::Diagnostics::IProcessDiskUsage
{
    ProcessDiskUsage(std::nullptr_t) noexcept {}
};

struct ProcessDiskUsageReport :
    Windows::System::Diagnostics::IProcessDiskUsageReport
{
    ProcessDiskUsageReport(std::nullptr_t) noexcept {}
};

struct ProcessMemoryUsage :
    Windows::System::Diagnostics::IProcessMemoryUsage
{
    ProcessMemoryUsage(std::nullptr_t) noexcept {}
};

struct ProcessMemoryUsageReport :
    Windows::System::Diagnostics::IProcessMemoryUsageReport
{
    ProcessMemoryUsageReport(std::nullptr_t) noexcept {}
};

struct SystemCpuUsage :
    Windows::System::Diagnostics::ISystemCpuUsage
{
    SystemCpuUsage(std::nullptr_t) noexcept {}
};

struct SystemCpuUsageReport :
    Windows::System::Diagnostics::ISystemCpuUsageReport
{
    SystemCpuUsageReport(std::nullptr_t) noexcept {}
};

struct SystemDiagnosticInfo :
    Windows::System::Diagnostics::ISystemDiagnosticInfo
{
    SystemDiagnosticInfo(std::nullptr_t) noexcept {}
    static Windows::System::Diagnostics::SystemDiagnosticInfo GetForCurrentSystem();
};

struct SystemMemoryUsage :
    Windows::System::Diagnostics::ISystemMemoryUsage
{
    SystemMemoryUsage(std::nullptr_t) noexcept {}
};

struct SystemMemoryUsageReport :
    Windows::System::Diagnostics::ISystemMemoryUsageReport
{
    SystemMemoryUsageReport(std::nullptr_t) noexcept {}
};

}

namespace impl {

}

}
