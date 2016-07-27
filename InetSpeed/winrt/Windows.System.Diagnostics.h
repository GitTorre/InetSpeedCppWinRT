// C++ for the Windows Runtime v1.29
// Copyright (c) 2016 Microsoft Corporation

#pragma once

#include "internal\Windows.Foundation.3.h"
#include "internal\Windows.Foundation.Collections.3.h"
#include "internal\Windows.System.Diagnostics.3.h"
#include "Windows.System.h"

WINRT_EXPORT namespace winrt {

namespace impl {

template <typename D>
struct produce<D, Windows::System::Diagnostics::IProcessCpuUsage> : produce_base<D, Windows::System::Diagnostics::IProcessCpuUsage>
{
    HRESULT __stdcall abi_GetReport(abi_arg_out<Windows::System::Diagnostics::IProcessCpuUsageReport> value) noexcept override
    {
        try
        {
            *value = detach(shim().GetReport());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::System::Diagnostics::IProcessCpuUsageReport> : produce_base<D, Windows::System::Diagnostics::IProcessCpuUsageReport>
{
    HRESULT __stdcall get_KernelTime(abi_arg_out<Windows::Foundation::TimeSpan> value) noexcept override
    {
        try
        {
            *value = detach(shim().KernelTime());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_UserTime(abi_arg_out<Windows::Foundation::TimeSpan> value) noexcept override
    {
        try
        {
            *value = detach(shim().UserTime());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::System::Diagnostics::IProcessDiagnosticInfo> : produce_base<D, Windows::System::Diagnostics::IProcessDiagnosticInfo>
{
    HRESULT __stdcall get_ProcessId(uint32_t * value) noexcept override
    {
        try
        {
            *value = detach(shim().ProcessId());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ExecutableFileName(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(shim().ExecutableFileName());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Parent(abi_arg_out<Windows::System::Diagnostics::IProcessDiagnosticInfo> value) noexcept override
    {
        try
        {
            *value = detach(shim().Parent());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ProcessStartTime(abi_arg_out<Windows::Foundation::DateTime> value) noexcept override
    {
        try
        {
            *value = detach(shim().ProcessStartTime());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_DiskUsage(abi_arg_out<Windows::System::Diagnostics::IProcessDiskUsage> value) noexcept override
    {
        try
        {
            *value = detach(shim().DiskUsage());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_MemoryUsage(abi_arg_out<Windows::System::Diagnostics::IProcessMemoryUsage> value) noexcept override
    {
        try
        {
            *value = detach(shim().MemoryUsage());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_CpuUsage(abi_arg_out<Windows::System::Diagnostics::IProcessCpuUsage> value) noexcept override
    {
        try
        {
            *value = detach(shim().CpuUsage());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::System::Diagnostics::IProcessDiagnosticInfoStatics> : produce_base<D, Windows::System::Diagnostics::IProcessDiagnosticInfoStatics>
{
    HRESULT __stdcall abi_GetForProcesses(abi_arg_out<Windows::Foundation::Collections::IVectorView<Windows::System::Diagnostics::ProcessDiagnosticInfo>> processes) noexcept override
    {
        try
        {
            *processes = detach(shim().GetForProcesses());
            return S_OK;
        }
        catch (...)
        {
            *processes = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_GetForCurrentProcess(abi_arg_out<Windows::System::Diagnostics::IProcessDiagnosticInfo> processes) noexcept override
    {
        try
        {
            *processes = detach(shim().GetForCurrentProcess());
            return S_OK;
        }
        catch (...)
        {
            *processes = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::System::Diagnostics::IProcessDiskUsage> : produce_base<D, Windows::System::Diagnostics::IProcessDiskUsage>
{
    HRESULT __stdcall abi_GetReport(abi_arg_out<Windows::System::Diagnostics::IProcessDiskUsageReport> value) noexcept override
    {
        try
        {
            *value = detach(shim().GetReport());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::System::Diagnostics::IProcessDiskUsageReport> : produce_base<D, Windows::System::Diagnostics::IProcessDiskUsageReport>
{
    HRESULT __stdcall get_ReadOperationCount(int64_t * value) noexcept override
    {
        try
        {
            *value = detach(shim().ReadOperationCount());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_WriteOperationCount(int64_t * value) noexcept override
    {
        try
        {
            *value = detach(shim().WriteOperationCount());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_OtherOperationCount(int64_t * value) noexcept override
    {
        try
        {
            *value = detach(shim().OtherOperationCount());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_BytesReadCount(int64_t * value) noexcept override
    {
        try
        {
            *value = detach(shim().BytesReadCount());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_BytesWrittenCount(int64_t * value) noexcept override
    {
        try
        {
            *value = detach(shim().BytesWrittenCount());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_OtherBytesCount(int64_t * value) noexcept override
    {
        try
        {
            *value = detach(shim().OtherBytesCount());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::System::Diagnostics::IProcessMemoryUsage> : produce_base<D, Windows::System::Diagnostics::IProcessMemoryUsage>
{
    HRESULT __stdcall abi_GetReport(abi_arg_out<Windows::System::Diagnostics::IProcessMemoryUsageReport> value) noexcept override
    {
        try
        {
            *value = detach(shim().GetReport());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::System::Diagnostics::IProcessMemoryUsageReport> : produce_base<D, Windows::System::Diagnostics::IProcessMemoryUsageReport>
{
    HRESULT __stdcall get_NonPagedPoolSizeInBytes(uint64_t * value) noexcept override
    {
        try
        {
            *value = detach(shim().NonPagedPoolSizeInBytes());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_PageFaultCount(uint32_t * value) noexcept override
    {
        try
        {
            *value = detach(shim().PageFaultCount());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_PageFileSizeInBytes(uint64_t * value) noexcept override
    {
        try
        {
            *value = detach(shim().PageFileSizeInBytes());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_PagedPoolSizeInBytes(uint64_t * value) noexcept override
    {
        try
        {
            *value = detach(shim().PagedPoolSizeInBytes());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_PeakNonPagedPoolSizeInBytes(uint64_t * value) noexcept override
    {
        try
        {
            *value = detach(shim().PeakNonPagedPoolSizeInBytes());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_PeakPageFileSizeInBytes(uint64_t * value) noexcept override
    {
        try
        {
            *value = detach(shim().PeakPageFileSizeInBytes());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_PeakPagedPoolSizeInBytes(uint64_t * value) noexcept override
    {
        try
        {
            *value = detach(shim().PeakPagedPoolSizeInBytes());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_PeakVirtualMemorySizeInBytes(uint64_t * value) noexcept override
    {
        try
        {
            *value = detach(shim().PeakVirtualMemorySizeInBytes());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_PeakWorkingSetSizeInBytes(uint64_t * value) noexcept override
    {
        try
        {
            *value = detach(shim().PeakWorkingSetSizeInBytes());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_PrivatePageCount(uint64_t * value) noexcept override
    {
        try
        {
            *value = detach(shim().PrivatePageCount());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_VirtualMemorySizeInBytes(uint64_t * value) noexcept override
    {
        try
        {
            *value = detach(shim().VirtualMemorySizeInBytes());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_WorkingSetSizeInBytes(uint64_t * value) noexcept override
    {
        try
        {
            *value = detach(shim().WorkingSetSizeInBytes());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

}

namespace Windows::System::Diagnostics {

template <typename D> uint32_t impl_IProcessDiagnosticInfo<D>::ProcessId() const
{
    uint32_t value {};
    check_hresult(shim()->get_ProcessId(&value));
    return value;
}

template <typename D> hstring impl_IProcessDiagnosticInfo<D>::ExecutableFileName() const
{
    hstring value;
    check_hresult(shim()->get_ExecutableFileName(put(value)));
    return value;
}

template <typename D> Windows::System::Diagnostics::ProcessDiagnosticInfo impl_IProcessDiagnosticInfo<D>::Parent() const
{
    Windows::System::Diagnostics::ProcessDiagnosticInfo value { nullptr };
    check_hresult(shim()->get_Parent(put(value)));
    return value;
}

template <typename D> Windows::Foundation::DateTime impl_IProcessDiagnosticInfo<D>::ProcessStartTime() const
{
    Windows::Foundation::DateTime value {};
    check_hresult(shim()->get_ProcessStartTime(put(value)));
    return value;
}

template <typename D> Windows::System::Diagnostics::ProcessDiskUsage impl_IProcessDiagnosticInfo<D>::DiskUsage() const
{
    Windows::System::Diagnostics::ProcessDiskUsage value { nullptr };
    check_hresult(shim()->get_DiskUsage(put(value)));
    return value;
}

template <typename D> Windows::System::Diagnostics::ProcessMemoryUsage impl_IProcessDiagnosticInfo<D>::MemoryUsage() const
{
    Windows::System::Diagnostics::ProcessMemoryUsage value { nullptr };
    check_hresult(shim()->get_MemoryUsage(put(value)));
    return value;
}

template <typename D> Windows::System::Diagnostics::ProcessCpuUsage impl_IProcessDiagnosticInfo<D>::CpuUsage() const
{
    Windows::System::Diagnostics::ProcessCpuUsage value { nullptr };
    check_hresult(shim()->get_CpuUsage(put(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVectorView<Windows::System::Diagnostics::ProcessDiagnosticInfo> impl_IProcessDiagnosticInfoStatics<D>::GetForProcesses() const
{
    Windows::Foundation::Collections::IVectorView<Windows::System::Diagnostics::ProcessDiagnosticInfo> processes;
    check_hresult(shim()->abi_GetForProcesses(put(processes)));
    return processes;
}

template <typename D> Windows::System::Diagnostics::ProcessDiagnosticInfo impl_IProcessDiagnosticInfoStatics<D>::GetForCurrentProcess() const
{
    Windows::System::Diagnostics::ProcessDiagnosticInfo processes { nullptr };
    check_hresult(shim()->abi_GetForCurrentProcess(put(processes)));
    return processes;
}

template <typename D> Windows::System::Diagnostics::ProcessMemoryUsageReport impl_IProcessMemoryUsage<D>::GetReport() const
{
    Windows::System::Diagnostics::ProcessMemoryUsageReport value { nullptr };
    check_hresult(shim()->abi_GetReport(put(value)));
    return value;
}

template <typename D> uint64_t impl_IProcessMemoryUsageReport<D>::NonPagedPoolSizeInBytes() const
{
    uint64_t value {};
    check_hresult(shim()->get_NonPagedPoolSizeInBytes(&value));
    return value;
}

template <typename D> uint32_t impl_IProcessMemoryUsageReport<D>::PageFaultCount() const
{
    uint32_t value {};
    check_hresult(shim()->get_PageFaultCount(&value));
    return value;
}

template <typename D> uint64_t impl_IProcessMemoryUsageReport<D>::PageFileSizeInBytes() const
{
    uint64_t value {};
    check_hresult(shim()->get_PageFileSizeInBytes(&value));
    return value;
}

template <typename D> uint64_t impl_IProcessMemoryUsageReport<D>::PagedPoolSizeInBytes() const
{
    uint64_t value {};
    check_hresult(shim()->get_PagedPoolSizeInBytes(&value));
    return value;
}

template <typename D> uint64_t impl_IProcessMemoryUsageReport<D>::PeakNonPagedPoolSizeInBytes() const
{
    uint64_t value {};
    check_hresult(shim()->get_PeakNonPagedPoolSizeInBytes(&value));
    return value;
}

template <typename D> uint64_t impl_IProcessMemoryUsageReport<D>::PeakPageFileSizeInBytes() const
{
    uint64_t value {};
    check_hresult(shim()->get_PeakPageFileSizeInBytes(&value));
    return value;
}

template <typename D> uint64_t impl_IProcessMemoryUsageReport<D>::PeakPagedPoolSizeInBytes() const
{
    uint64_t value {};
    check_hresult(shim()->get_PeakPagedPoolSizeInBytes(&value));
    return value;
}

template <typename D> uint64_t impl_IProcessMemoryUsageReport<D>::PeakVirtualMemorySizeInBytes() const
{
    uint64_t value {};
    check_hresult(shim()->get_PeakVirtualMemorySizeInBytes(&value));
    return value;
}

template <typename D> uint64_t impl_IProcessMemoryUsageReport<D>::PeakWorkingSetSizeInBytes() const
{
    uint64_t value {};
    check_hresult(shim()->get_PeakWorkingSetSizeInBytes(&value));
    return value;
}

template <typename D> uint64_t impl_IProcessMemoryUsageReport<D>::PrivatePageCount() const
{
    uint64_t value {};
    check_hresult(shim()->get_PrivatePageCount(&value));
    return value;
}

template <typename D> uint64_t impl_IProcessMemoryUsageReport<D>::VirtualMemorySizeInBytes() const
{
    uint64_t value {};
    check_hresult(shim()->get_VirtualMemorySizeInBytes(&value));
    return value;
}

template <typename D> uint64_t impl_IProcessMemoryUsageReport<D>::WorkingSetSizeInBytes() const
{
    uint64_t value {};
    check_hresult(shim()->get_WorkingSetSizeInBytes(&value));
    return value;
}

template <typename D> Windows::System::Diagnostics::ProcessDiskUsageReport impl_IProcessDiskUsage<D>::GetReport() const
{
    Windows::System::Diagnostics::ProcessDiskUsageReport value { nullptr };
    check_hresult(shim()->abi_GetReport(put(value)));
    return value;
}

template <typename D> int64_t impl_IProcessDiskUsageReport<D>::ReadOperationCount() const
{
    int64_t value {};
    check_hresult(shim()->get_ReadOperationCount(&value));
    return value;
}

template <typename D> int64_t impl_IProcessDiskUsageReport<D>::WriteOperationCount() const
{
    int64_t value {};
    check_hresult(shim()->get_WriteOperationCount(&value));
    return value;
}

template <typename D> int64_t impl_IProcessDiskUsageReport<D>::OtherOperationCount() const
{
    int64_t value {};
    check_hresult(shim()->get_OtherOperationCount(&value));
    return value;
}

template <typename D> int64_t impl_IProcessDiskUsageReport<D>::BytesReadCount() const
{
    int64_t value {};
    check_hresult(shim()->get_BytesReadCount(&value));
    return value;
}

template <typename D> int64_t impl_IProcessDiskUsageReport<D>::BytesWrittenCount() const
{
    int64_t value {};
    check_hresult(shim()->get_BytesWrittenCount(&value));
    return value;
}

template <typename D> int64_t impl_IProcessDiskUsageReport<D>::OtherBytesCount() const
{
    int64_t value {};
    check_hresult(shim()->get_OtherBytesCount(&value));
    return value;
}

template <typename D> Windows::System::Diagnostics::ProcessCpuUsageReport impl_IProcessCpuUsage<D>::GetReport() const
{
    Windows::System::Diagnostics::ProcessCpuUsageReport value { nullptr };
    check_hresult(shim()->abi_GetReport(put(value)));
    return value;
}

template <typename D> Windows::Foundation::TimeSpan impl_IProcessCpuUsageReport<D>::KernelTime() const
{
    Windows::Foundation::TimeSpan value {};
    check_hresult(shim()->get_KernelTime(put(value)));
    return value;
}

template <typename D> Windows::Foundation::TimeSpan impl_IProcessCpuUsageReport<D>::UserTime() const
{
    Windows::Foundation::TimeSpan value {};
    check_hresult(shim()->get_UserTime(put(value)));
    return value;
}

inline Windows::Foundation::Collections::IVectorView<Windows::System::Diagnostics::ProcessDiagnosticInfo> ProcessDiagnosticInfo::GetForProcesses()
{
    return get_activation_factory<ProcessDiagnosticInfo, IProcessDiagnosticInfoStatics>().GetForProcesses();
}

inline Windows::System::Diagnostics::ProcessDiagnosticInfo ProcessDiagnosticInfo::GetForCurrentProcess()
{
    return get_activation_factory<ProcessDiagnosticInfo, IProcessDiagnosticInfoStatics>().GetForCurrentProcess();
}

}

}
