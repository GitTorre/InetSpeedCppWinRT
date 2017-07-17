// C++/WinRT v1.0.170717.1
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "Windows.System.Diagnostics.0.h"

namespace winrt {

namespace Windows::System::Diagnostics {

struct IProcessCpuUsage :
    Windows::Foundation::IInspectable,
    impl::consume_t<IProcessCpuUsage>
{
    IProcessCpuUsage(std::nullptr_t = nullptr) noexcept {}
};

struct IProcessCpuUsageReport :
    Windows::Foundation::IInspectable,
    impl::consume_t<IProcessCpuUsageReport>
{
    IProcessCpuUsageReport(std::nullptr_t = nullptr) noexcept {}
};

struct IProcessDiagnosticInfo :
    Windows::Foundation::IInspectable,
    impl::consume_t<IProcessDiagnosticInfo>
{
    IProcessDiagnosticInfo(std::nullptr_t = nullptr) noexcept {}
};

struct IProcessDiagnosticInfoStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IProcessDiagnosticInfoStatics>
{
    IProcessDiagnosticInfoStatics(std::nullptr_t = nullptr) noexcept {}
};

struct IProcessDiskUsage :
    Windows::Foundation::IInspectable,
    impl::consume_t<IProcessDiskUsage>
{
    IProcessDiskUsage(std::nullptr_t = nullptr) noexcept {}
};

struct IProcessDiskUsageReport :
    Windows::Foundation::IInspectable,
    impl::consume_t<IProcessDiskUsageReport>
{
    IProcessDiskUsageReport(std::nullptr_t = nullptr) noexcept {}
};

struct IProcessMemoryUsage :
    Windows::Foundation::IInspectable,
    impl::consume_t<IProcessMemoryUsage>
{
    IProcessMemoryUsage(std::nullptr_t = nullptr) noexcept {}
};

struct IProcessMemoryUsageReport :
    Windows::Foundation::IInspectable,
    impl::consume_t<IProcessMemoryUsageReport>
{
    IProcessMemoryUsageReport(std::nullptr_t = nullptr) noexcept {}
};

struct ISystemCpuUsage :
    Windows::Foundation::IInspectable,
    impl::consume_t<ISystemCpuUsage>
{
    ISystemCpuUsage(std::nullptr_t = nullptr) noexcept {}
};

struct ISystemCpuUsageReport :
    Windows::Foundation::IInspectable,
    impl::consume_t<ISystemCpuUsageReport>
{
    ISystemCpuUsageReport(std::nullptr_t = nullptr) noexcept {}
};

struct ISystemDiagnosticInfo :
    Windows::Foundation::IInspectable,
    impl::consume_t<ISystemDiagnosticInfo>
{
    ISystemDiagnosticInfo(std::nullptr_t = nullptr) noexcept {}
};

struct ISystemDiagnosticInfoStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<ISystemDiagnosticInfoStatics>
{
    ISystemDiagnosticInfoStatics(std::nullptr_t = nullptr) noexcept {}
};

struct ISystemMemoryUsage :
    Windows::Foundation::IInspectable,
    impl::consume_t<ISystemMemoryUsage>
{
    ISystemMemoryUsage(std::nullptr_t = nullptr) noexcept {}
};

struct ISystemMemoryUsageReport :
    Windows::Foundation::IInspectable,
    impl::consume_t<ISystemMemoryUsageReport>
{
    ISystemMemoryUsageReport(std::nullptr_t = nullptr) noexcept {}
};

}

}
