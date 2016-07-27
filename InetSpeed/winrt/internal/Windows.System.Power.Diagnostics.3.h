// C++ for the Windows Runtime v1.29
// Copyright (c) 2016 Microsoft Corporation

#pragma once

#include "Windows.System.Power.Diagnostics.2.h"

WINRT_EXPORT namespace winrt {

namespace Windows::System::Power::Diagnostics {

struct BackgroundEnergyDiagnostics
{
    BackgroundEnergyDiagnostics() = delete;
    static double DeviceSpecificConversionFactor();
    static uint64_t ComputeTotalEnergyUsage();
    static void ResetTotalEnergyUsage();
};

struct ForegroundEnergyDiagnostics
{
    ForegroundEnergyDiagnostics() = delete;
    static double DeviceSpecificConversionFactor();
    static uint64_t ComputeTotalEnergyUsage();
    static void ResetTotalEnergyUsage();
};

}

}
