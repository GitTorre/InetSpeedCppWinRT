// C++ for the Windows Runtime v1.29
// Copyright (c) 2016 Microsoft Corporation

#pragma once

#include "Windows.System.Power.Diagnostics.1.h"

WINRT_EXPORT namespace winrt {

namespace Windows::System::Power::Diagnostics {

template <typename D>
class WINRT_EBO impl_IBackgroundEnergyDiagnosticsStatics
{
    auto shim() const { return impl::shim<D, IBackgroundEnergyDiagnosticsStatics>(this); }

public:

    double DeviceSpecificConversionFactor() const;
    uint64_t ComputeTotalEnergyUsage() const;
    void ResetTotalEnergyUsage() const;
};

template <typename D>
class WINRT_EBO impl_IForegroundEnergyDiagnosticsStatics
{
    auto shim() const { return impl::shim<D, IForegroundEnergyDiagnosticsStatics>(this); }

public:

    double DeviceSpecificConversionFactor() const;
    uint64_t ComputeTotalEnergyUsage() const;
    void ResetTotalEnergyUsage() const;
};

struct IBackgroundEnergyDiagnosticsStatics :
    Windows::IInspectable,
    impl::consume<IBackgroundEnergyDiagnosticsStatics>
{
    IBackgroundEnergyDiagnosticsStatics(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IBackgroundEnergyDiagnosticsStatics>(m_ptr); }
};

struct IForegroundEnergyDiagnosticsStatics :
    Windows::IInspectable,
    impl::consume<IForegroundEnergyDiagnosticsStatics>
{
    IForegroundEnergyDiagnosticsStatics(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IForegroundEnergyDiagnosticsStatics>(m_ptr); }
};

}

}
