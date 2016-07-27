// C++ for the Windows Runtime v1.29
// Copyright (c) 2016 Microsoft Corporation

#pragma once

#include "internal\Windows.Storage.3.h"
#include "internal\Windows.Foundation.3.h"
#include "internal\Windows.Foundation.Collections.3.h"
#include "internal\Windows.Storage.Streams.3.h"
#include "internal\Windows.Devices.HumanInterfaceDevice.3.h"
#include "Windows.Devices.h"
#include "Windows.Foundation.h"

WINRT_EXPORT namespace winrt {

namespace impl {

template <typename D>
struct produce<D, Windows::Devices::HumanInterfaceDevice::IHidBooleanControl> : produce_base<D, Windows::Devices::HumanInterfaceDevice::IHidBooleanControl>
{
    HRESULT __stdcall get_Id(uint32_t * value) noexcept override
    {
        try
        {
            *value = detach(shim().Id());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_UsagePage(uint16_t * value) noexcept override
    {
        try
        {
            *value = detach(shim().UsagePage());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_UsageId(uint16_t * value) noexcept override
    {
        try
        {
            *value = detach(shim().UsageId());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_IsActive(bool * value) noexcept override
    {
        try
        {
            *value = detach(shim().IsActive());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_IsActive(bool value) noexcept override
    {
        try
        {
            shim().IsActive(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ControlDescription(abi_arg_out<Windows::Devices::HumanInterfaceDevice::IHidBooleanControlDescription> value) noexcept override
    {
        try
        {
            *value = detach(shim().ControlDescription());
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
struct produce<D, Windows::Devices::HumanInterfaceDevice::IHidBooleanControlDescription> : produce_base<D, Windows::Devices::HumanInterfaceDevice::IHidBooleanControlDescription>
{
    HRESULT __stdcall get_Id(uint32_t * value) noexcept override
    {
        try
        {
            *value = detach(shim().Id());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ReportId(uint16_t * value) noexcept override
    {
        try
        {
            *value = detach(shim().ReportId());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ReportType(Windows::Devices::HumanInterfaceDevice::HidReportType * value) noexcept override
    {
        try
        {
            *value = detach(shim().ReportType());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_UsagePage(uint16_t * value) noexcept override
    {
        try
        {
            *value = detach(shim().UsagePage());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_UsageId(uint16_t * value) noexcept override
    {
        try
        {
            *value = detach(shim().UsageId());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ParentCollections(abi_arg_out<Windows::Foundation::Collections::IVectorView<Windows::Devices::HumanInterfaceDevice::HidCollection>> value) noexcept override
    {
        try
        {
            *value = detach(shim().ParentCollections());
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
struct produce<D, Windows::Devices::HumanInterfaceDevice::IHidBooleanControlDescription2> : produce_base<D, Windows::Devices::HumanInterfaceDevice::IHidBooleanControlDescription2>
{
    HRESULT __stdcall get_IsAbsolute(bool * value) noexcept override
    {
        try
        {
            *value = detach(shim().IsAbsolute());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Devices::HumanInterfaceDevice::IHidCollection> : produce_base<D, Windows::Devices::HumanInterfaceDevice::IHidCollection>
{
    HRESULT __stdcall get_Id(uint32_t * value) noexcept override
    {
        try
        {
            *value = detach(shim().Id());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Type(Windows::Devices::HumanInterfaceDevice::HidCollectionType * value) noexcept override
    {
        try
        {
            *value = detach(shim().Type());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_UsagePage(uint32_t * value) noexcept override
    {
        try
        {
            *value = detach(shim().UsagePage());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_UsageId(uint32_t * value) noexcept override
    {
        try
        {
            *value = detach(shim().UsageId());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Devices::HumanInterfaceDevice::IHidDevice> : produce_base<D, Windows::Devices::HumanInterfaceDevice::IHidDevice>
{
    HRESULT __stdcall get_VendorId(uint16_t * value) noexcept override
    {
        try
        {
            *value = detach(shim().VendorId());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ProductId(uint16_t * value) noexcept override
    {
        try
        {
            *value = detach(shim().ProductId());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Version(uint16_t * value) noexcept override
    {
        try
        {
            *value = detach(shim().Version());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_UsagePage(uint16_t * value) noexcept override
    {
        try
        {
            *value = detach(shim().UsagePage());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_UsageId(uint16_t * value) noexcept override
    {
        try
        {
            *value = detach(shim().UsageId());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_GetInputReportAsync(abi_arg_out<Windows::Foundation::IAsyncOperation<Windows::Devices::HumanInterfaceDevice::HidInputReport>> value) noexcept override
    {
        try
        {
            *value = detach(shim().GetInputReportAsync());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_GetInputReportByIdAsync(uint16_t reportId, abi_arg_out<Windows::Foundation::IAsyncOperation<Windows::Devices::HumanInterfaceDevice::HidInputReport>> value) noexcept override
    {
        try
        {
            *value = detach(shim().GetInputReportAsync(reportId));
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_GetFeatureReportAsync(abi_arg_out<Windows::Foundation::IAsyncOperation<Windows::Devices::HumanInterfaceDevice::HidFeatureReport>> value) noexcept override
    {
        try
        {
            *value = detach(shim().GetFeatureReportAsync());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_GetFeatureReportByIdAsync(uint16_t reportId, abi_arg_out<Windows::Foundation::IAsyncOperation<Windows::Devices::HumanInterfaceDevice::HidFeatureReport>> value) noexcept override
    {
        try
        {
            *value = detach(shim().GetFeatureReportAsync(reportId));
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_CreateOutputReport(abi_arg_out<Windows::Devices::HumanInterfaceDevice::IHidOutputReport> outputReport) noexcept override
    {
        try
        {
            *outputReport = detach(shim().CreateOutputReport());
            return S_OK;
        }
        catch (...)
        {
            *outputReport = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_CreateOutputReportById(uint16_t reportId, abi_arg_out<Windows::Devices::HumanInterfaceDevice::IHidOutputReport> outputReport) noexcept override
    {
        try
        {
            *outputReport = detach(shim().CreateOutputReport(reportId));
            return S_OK;
        }
        catch (...)
        {
            *outputReport = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_CreateFeatureReport(abi_arg_out<Windows::Devices::HumanInterfaceDevice::IHidFeatureReport> featureReport) noexcept override
    {
        try
        {
            *featureReport = detach(shim().CreateFeatureReport());
            return S_OK;
        }
        catch (...)
        {
            *featureReport = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_CreateFeatureReportById(uint16_t reportId, abi_arg_out<Windows::Devices::HumanInterfaceDevice::IHidFeatureReport> featureReport) noexcept override
    {
        try
        {
            *featureReport = detach(shim().CreateFeatureReport(reportId));
            return S_OK;
        }
        catch (...)
        {
            *featureReport = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_SendOutputReportAsync(abi_arg_in<Windows::Devices::HumanInterfaceDevice::IHidOutputReport> outputReport, abi_arg_out<Windows::Foundation::IAsyncOperation<uint32_t>> operation) noexcept override
    {
        try
        {
            *operation = detach(shim().SendOutputReportAsync(*reinterpret_cast<const Windows::Devices::HumanInterfaceDevice::HidOutputReport *>(&outputReport)));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_SendFeatureReportAsync(abi_arg_in<Windows::Devices::HumanInterfaceDevice::IHidFeatureReport> featureReport, abi_arg_out<Windows::Foundation::IAsyncOperation<uint32_t>> operation) noexcept override
    {
        try
        {
            *operation = detach(shim().SendFeatureReportAsync(*reinterpret_cast<const Windows::Devices::HumanInterfaceDevice::HidFeatureReport *>(&featureReport)));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_GetBooleanControlDescriptions(Windows::Devices::HumanInterfaceDevice::HidReportType reportType, uint16_t usagePage, uint16_t usageId, abi_arg_out<Windows::Foundation::Collections::IVectorView<Windows::Devices::HumanInterfaceDevice::HidBooleanControlDescription>> value) noexcept override
    {
        try
        {
            *value = detach(shim().GetBooleanControlDescriptions(reportType, usagePage, usageId));
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_GetNumericControlDescriptions(Windows::Devices::HumanInterfaceDevice::HidReportType reportType, uint16_t usagePage, uint16_t usageId, abi_arg_out<Windows::Foundation::Collections::IVectorView<Windows::Devices::HumanInterfaceDevice::HidNumericControlDescription>> value) noexcept override
    {
        try
        {
            *value = detach(shim().GetNumericControlDescriptions(reportType, usagePage, usageId));
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_InputReportReceived(abi_arg_in<Windows::Foundation::TypedEventHandler<Windows::Devices::HumanInterfaceDevice::HidDevice, Windows::Devices::HumanInterfaceDevice::HidInputReportReceivedEventArgs>> reportHandler, event_token * token) noexcept override
    {
        try
        {
            *token = detach(shim().InputReportReceived(*reinterpret_cast<const Windows::Foundation::TypedEventHandler<Windows::Devices::HumanInterfaceDevice::HidDevice, Windows::Devices::HumanInterfaceDevice::HidInputReportReceivedEventArgs> *>(&reportHandler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_InputReportReceived(event_token token) noexcept override
    {
        try
        {
            shim().InputReportReceived(token);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Devices::HumanInterfaceDevice::IHidDeviceStatics> : produce_base<D, Windows::Devices::HumanInterfaceDevice::IHidDeviceStatics>
{
    HRESULT __stdcall abi_GetDeviceSelector(uint16_t usagePage, uint16_t usageId, abi_arg_out<hstring> selector) noexcept override
    {
        try
        {
            *selector = detach(shim().GetDeviceSelector(usagePage, usageId));
            return S_OK;
        }
        catch (...)
        {
            *selector = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_GetDeviceSelectorVidPid(uint16_t usagePage, uint16_t usageId, uint16_t vendorId, uint16_t productId, abi_arg_out<hstring> selector) noexcept override
    {
        try
        {
            *selector = detach(shim().GetDeviceSelector(usagePage, usageId, vendorId, productId));
            return S_OK;
        }
        catch (...)
        {
            *selector = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_FromIdAsync(abi_arg_in<hstring> deviceId, Windows::Storage::FileAccessMode accessMode, abi_arg_out<Windows::Foundation::IAsyncOperation<Windows::Devices::HumanInterfaceDevice::HidDevice>> hidDevice) noexcept override
    {
        try
        {
            *hidDevice = detach(shim().FromIdAsync(*reinterpret_cast<const hstring *>(&deviceId), accessMode));
            return S_OK;
        }
        catch (...)
        {
            *hidDevice = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Devices::HumanInterfaceDevice::IHidFeatureReport> : produce_base<D, Windows::Devices::HumanInterfaceDevice::IHidFeatureReport>
{
    HRESULT __stdcall get_Id(uint16_t * value) noexcept override
    {
        try
        {
            *value = detach(shim().Id());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Data(abi_arg_out<Windows::Storage::Streams::IBuffer> value) noexcept override
    {
        try
        {
            *value = detach(shim().Data());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Data(abi_arg_in<Windows::Storage::Streams::IBuffer> value) noexcept override
    {
        try
        {
            shim().Data(*reinterpret_cast<const Windows::Storage::Streams::IBuffer *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_GetBooleanControl(uint16_t usagePage, uint16_t usageId, abi_arg_out<Windows::Devices::HumanInterfaceDevice::IHidBooleanControl> value) noexcept override
    {
        try
        {
            *value = detach(shim().GetBooleanControl(usagePage, usageId));
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_GetBooleanControlByDescription(abi_arg_in<Windows::Devices::HumanInterfaceDevice::IHidBooleanControlDescription> controlDescription, abi_arg_out<Windows::Devices::HumanInterfaceDevice::IHidBooleanControl> value) noexcept override
    {
        try
        {
            *value = detach(shim().GetBooleanControlByDescription(*reinterpret_cast<const Windows::Devices::HumanInterfaceDevice::HidBooleanControlDescription *>(&controlDescription)));
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_GetNumericControl(uint16_t usagePage, uint16_t usageId, abi_arg_out<Windows::Devices::HumanInterfaceDevice::IHidNumericControl> value) noexcept override
    {
        try
        {
            *value = detach(shim().GetNumericControl(usagePage, usageId));
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_GetNumericControlByDescription(abi_arg_in<Windows::Devices::HumanInterfaceDevice::IHidNumericControlDescription> controlDescription, abi_arg_out<Windows::Devices::HumanInterfaceDevice::IHidNumericControl> value) noexcept override
    {
        try
        {
            *value = detach(shim().GetNumericControlByDescription(*reinterpret_cast<const Windows::Devices::HumanInterfaceDevice::HidNumericControlDescription *>(&controlDescription)));
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
struct produce<D, Windows::Devices::HumanInterfaceDevice::IHidInputReport> : produce_base<D, Windows::Devices::HumanInterfaceDevice::IHidInputReport>
{
    HRESULT __stdcall get_Id(uint16_t * value) noexcept override
    {
        try
        {
            *value = detach(shim().Id());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Data(abi_arg_out<Windows::Storage::Streams::IBuffer> value) noexcept override
    {
        try
        {
            *value = detach(shim().Data());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ActivatedBooleanControls(abi_arg_out<Windows::Foundation::Collections::IVectorView<Windows::Devices::HumanInterfaceDevice::HidBooleanControl>> value) noexcept override
    {
        try
        {
            *value = detach(shim().ActivatedBooleanControls());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_TransitionedBooleanControls(abi_arg_out<Windows::Foundation::Collections::IVectorView<Windows::Devices::HumanInterfaceDevice::HidBooleanControl>> value) noexcept override
    {
        try
        {
            *value = detach(shim().TransitionedBooleanControls());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_GetBooleanControl(uint16_t usagePage, uint16_t usageId, abi_arg_out<Windows::Devices::HumanInterfaceDevice::IHidBooleanControl> value) noexcept override
    {
        try
        {
            *value = detach(shim().GetBooleanControl(usagePage, usageId));
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_GetBooleanControlByDescription(abi_arg_in<Windows::Devices::HumanInterfaceDevice::IHidBooleanControlDescription> controlDescription, abi_arg_out<Windows::Devices::HumanInterfaceDevice::IHidBooleanControl> value) noexcept override
    {
        try
        {
            *value = detach(shim().GetBooleanControlByDescription(*reinterpret_cast<const Windows::Devices::HumanInterfaceDevice::HidBooleanControlDescription *>(&controlDescription)));
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_GetNumericControl(uint16_t usagePage, uint16_t usageId, abi_arg_out<Windows::Devices::HumanInterfaceDevice::IHidNumericControl> value) noexcept override
    {
        try
        {
            *value = detach(shim().GetNumericControl(usagePage, usageId));
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_GetNumericControlByDescription(abi_arg_in<Windows::Devices::HumanInterfaceDevice::IHidNumericControlDescription> controlDescription, abi_arg_out<Windows::Devices::HumanInterfaceDevice::IHidNumericControl> value) noexcept override
    {
        try
        {
            *value = detach(shim().GetNumericControlByDescription(*reinterpret_cast<const Windows::Devices::HumanInterfaceDevice::HidNumericControlDescription *>(&controlDescription)));
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
struct produce<D, Windows::Devices::HumanInterfaceDevice::IHidInputReportReceivedEventArgs> : produce_base<D, Windows::Devices::HumanInterfaceDevice::IHidInputReportReceivedEventArgs>
{
    HRESULT __stdcall get_Report(abi_arg_out<Windows::Devices::HumanInterfaceDevice::IHidInputReport> value) noexcept override
    {
        try
        {
            *value = detach(shim().Report());
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
struct produce<D, Windows::Devices::HumanInterfaceDevice::IHidNumericControl> : produce_base<D, Windows::Devices::HumanInterfaceDevice::IHidNumericControl>
{
    HRESULT __stdcall get_Id(uint32_t * value) noexcept override
    {
        try
        {
            *value = detach(shim().Id());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_IsGrouped(bool * value) noexcept override
    {
        try
        {
            *value = detach(shim().IsGrouped());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_UsagePage(uint16_t * value) noexcept override
    {
        try
        {
            *value = detach(shim().UsagePage());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_UsageId(uint16_t * value) noexcept override
    {
        try
        {
            *value = detach(shim().UsageId());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Value(int64_t * value) noexcept override
    {
        try
        {
            *value = detach(shim().Value());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Value(int64_t value) noexcept override
    {
        try
        {
            shim().Value(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ScaledValue(int64_t * value) noexcept override
    {
        try
        {
            *value = detach(shim().ScaledValue());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_ScaledValue(int64_t value) noexcept override
    {
        try
        {
            shim().ScaledValue(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ControlDescription(abi_arg_out<Windows::Devices::HumanInterfaceDevice::IHidNumericControlDescription> value) noexcept override
    {
        try
        {
            *value = detach(shim().ControlDescription());
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
struct produce<D, Windows::Devices::HumanInterfaceDevice::IHidNumericControlDescription> : produce_base<D, Windows::Devices::HumanInterfaceDevice::IHidNumericControlDescription>
{
    HRESULT __stdcall get_Id(uint32_t * value) noexcept override
    {
        try
        {
            *value = detach(shim().Id());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ReportId(uint16_t * value) noexcept override
    {
        try
        {
            *value = detach(shim().ReportId());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ReportType(Windows::Devices::HumanInterfaceDevice::HidReportType * value) noexcept override
    {
        try
        {
            *value = detach(shim().ReportType());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ReportSize(uint32_t * value) noexcept override
    {
        try
        {
            *value = detach(shim().ReportSize());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ReportCount(uint32_t * value) noexcept override
    {
        try
        {
            *value = detach(shim().ReportCount());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_UsagePage(uint16_t * value) noexcept override
    {
        try
        {
            *value = detach(shim().UsagePage());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_UsageId(uint16_t * value) noexcept override
    {
        try
        {
            *value = detach(shim().UsageId());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_LogicalMinimum(int32_t * value) noexcept override
    {
        try
        {
            *value = detach(shim().LogicalMinimum());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_LogicalMaximum(int32_t * value) noexcept override
    {
        try
        {
            *value = detach(shim().LogicalMaximum());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_PhysicalMinimum(int32_t * value) noexcept override
    {
        try
        {
            *value = detach(shim().PhysicalMinimum());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_PhysicalMaximum(int32_t * value) noexcept override
    {
        try
        {
            *value = detach(shim().PhysicalMaximum());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_UnitExponent(uint32_t * value) noexcept override
    {
        try
        {
            *value = detach(shim().UnitExponent());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Unit(uint32_t * value) noexcept override
    {
        try
        {
            *value = detach(shim().Unit());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_IsAbsolute(bool * value) noexcept override
    {
        try
        {
            *value = detach(shim().IsAbsolute());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_HasNull(bool * value) noexcept override
    {
        try
        {
            *value = detach(shim().HasNull());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ParentCollections(abi_arg_out<Windows::Foundation::Collections::IVectorView<Windows::Devices::HumanInterfaceDevice::HidCollection>> value) noexcept override
    {
        try
        {
            *value = detach(shim().ParentCollections());
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
struct produce<D, Windows::Devices::HumanInterfaceDevice::IHidOutputReport> : produce_base<D, Windows::Devices::HumanInterfaceDevice::IHidOutputReport>
{
    HRESULT __stdcall get_Id(uint16_t * value) noexcept override
    {
        try
        {
            *value = detach(shim().Id());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Data(abi_arg_out<Windows::Storage::Streams::IBuffer> value) noexcept override
    {
        try
        {
            *value = detach(shim().Data());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Data(abi_arg_in<Windows::Storage::Streams::IBuffer> value) noexcept override
    {
        try
        {
            shim().Data(*reinterpret_cast<const Windows::Storage::Streams::IBuffer *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_GetBooleanControl(uint16_t usagePage, uint16_t usageId, abi_arg_out<Windows::Devices::HumanInterfaceDevice::IHidBooleanControl> value) noexcept override
    {
        try
        {
            *value = detach(shim().GetBooleanControl(usagePage, usageId));
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_GetBooleanControlByDescription(abi_arg_in<Windows::Devices::HumanInterfaceDevice::IHidBooleanControlDescription> controlDescription, abi_arg_out<Windows::Devices::HumanInterfaceDevice::IHidBooleanControl> value) noexcept override
    {
        try
        {
            *value = detach(shim().GetBooleanControlByDescription(*reinterpret_cast<const Windows::Devices::HumanInterfaceDevice::HidBooleanControlDescription *>(&controlDescription)));
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_GetNumericControl(uint16_t usagePage, uint16_t usageId, abi_arg_out<Windows::Devices::HumanInterfaceDevice::IHidNumericControl> value) noexcept override
    {
        try
        {
            *value = detach(shim().GetNumericControl(usagePage, usageId));
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_GetNumericControlByDescription(abi_arg_in<Windows::Devices::HumanInterfaceDevice::IHidNumericControlDescription> controlDescription, abi_arg_out<Windows::Devices::HumanInterfaceDevice::IHidNumericControl> value) noexcept override
    {
        try
        {
            *value = detach(shim().GetNumericControlByDescription(*reinterpret_cast<const Windows::Devices::HumanInterfaceDevice::HidNumericControlDescription *>(&controlDescription)));
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }
};

}

namespace Windows::Devices::HumanInterfaceDevice {

template <typename D> hstring impl_IHidDeviceStatics<D>::GetDeviceSelector(uint16_t usagePage, uint16_t usageId) const
{
    hstring selector;
    check_hresult(shim()->abi_GetDeviceSelector(usagePage, usageId, put(selector)));
    return selector;
}

template <typename D> hstring impl_IHidDeviceStatics<D>::GetDeviceSelector(uint16_t usagePage, uint16_t usageId, uint16_t vendorId, uint16_t productId) const
{
    hstring selector;
    check_hresult(shim()->abi_GetDeviceSelectorVidPid(usagePage, usageId, vendorId, productId, put(selector)));
    return selector;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Devices::HumanInterfaceDevice::HidDevice> impl_IHidDeviceStatics<D>::FromIdAsync(hstring_ref deviceId, Windows::Storage::FileAccessMode accessMode) const
{
    Windows::Foundation::IAsyncOperation<Windows::Devices::HumanInterfaceDevice::HidDevice> hidDevice;
    check_hresult(shim()->abi_FromIdAsync(get(deviceId), accessMode, put(hidDevice)));
    return hidDevice;
}

template <typename D> uint32_t impl_IHidBooleanControlDescription<D>::Id() const
{
    uint32_t value {};
    check_hresult(shim()->get_Id(&value));
    return value;
}

template <typename D> uint16_t impl_IHidBooleanControlDescription<D>::ReportId() const
{
    uint16_t value {};
    check_hresult(shim()->get_ReportId(&value));
    return value;
}

template <typename D> Windows::Devices::HumanInterfaceDevice::HidReportType impl_IHidBooleanControlDescription<D>::ReportType() const
{
    Windows::Devices::HumanInterfaceDevice::HidReportType value {};
    check_hresult(shim()->get_ReportType(&value));
    return value;
}

template <typename D> uint16_t impl_IHidBooleanControlDescription<D>::UsagePage() const
{
    uint16_t value {};
    check_hresult(shim()->get_UsagePage(&value));
    return value;
}

template <typename D> uint16_t impl_IHidBooleanControlDescription<D>::UsageId() const
{
    uint16_t value {};
    check_hresult(shim()->get_UsageId(&value));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVectorView<Windows::Devices::HumanInterfaceDevice::HidCollection> impl_IHidBooleanControlDescription<D>::ParentCollections() const
{
    Windows::Foundation::Collections::IVectorView<Windows::Devices::HumanInterfaceDevice::HidCollection> value;
    check_hresult(shim()->get_ParentCollections(put(value)));
    return value;
}

template <typename D> bool impl_IHidBooleanControlDescription2<D>::IsAbsolute() const
{
    bool value {};
    check_hresult(shim()->get_IsAbsolute(&value));
    return value;
}

template <typename D> uint32_t impl_IHidNumericControlDescription<D>::Id() const
{
    uint32_t value {};
    check_hresult(shim()->get_Id(&value));
    return value;
}

template <typename D> uint16_t impl_IHidNumericControlDescription<D>::ReportId() const
{
    uint16_t value {};
    check_hresult(shim()->get_ReportId(&value));
    return value;
}

template <typename D> Windows::Devices::HumanInterfaceDevice::HidReportType impl_IHidNumericControlDescription<D>::ReportType() const
{
    Windows::Devices::HumanInterfaceDevice::HidReportType value {};
    check_hresult(shim()->get_ReportType(&value));
    return value;
}

template <typename D> uint32_t impl_IHidNumericControlDescription<D>::ReportSize() const
{
    uint32_t value {};
    check_hresult(shim()->get_ReportSize(&value));
    return value;
}

template <typename D> uint32_t impl_IHidNumericControlDescription<D>::ReportCount() const
{
    uint32_t value {};
    check_hresult(shim()->get_ReportCount(&value));
    return value;
}

template <typename D> uint16_t impl_IHidNumericControlDescription<D>::UsagePage() const
{
    uint16_t value {};
    check_hresult(shim()->get_UsagePage(&value));
    return value;
}

template <typename D> uint16_t impl_IHidNumericControlDescription<D>::UsageId() const
{
    uint16_t value {};
    check_hresult(shim()->get_UsageId(&value));
    return value;
}

template <typename D> int32_t impl_IHidNumericControlDescription<D>::LogicalMinimum() const
{
    int32_t value {};
    check_hresult(shim()->get_LogicalMinimum(&value));
    return value;
}

template <typename D> int32_t impl_IHidNumericControlDescription<D>::LogicalMaximum() const
{
    int32_t value {};
    check_hresult(shim()->get_LogicalMaximum(&value));
    return value;
}

template <typename D> int32_t impl_IHidNumericControlDescription<D>::PhysicalMinimum() const
{
    int32_t value {};
    check_hresult(shim()->get_PhysicalMinimum(&value));
    return value;
}

template <typename D> int32_t impl_IHidNumericControlDescription<D>::PhysicalMaximum() const
{
    int32_t value {};
    check_hresult(shim()->get_PhysicalMaximum(&value));
    return value;
}

template <typename D> uint32_t impl_IHidNumericControlDescription<D>::UnitExponent() const
{
    uint32_t value {};
    check_hresult(shim()->get_UnitExponent(&value));
    return value;
}

template <typename D> uint32_t impl_IHidNumericControlDescription<D>::Unit() const
{
    uint32_t value {};
    check_hresult(shim()->get_Unit(&value));
    return value;
}

template <typename D> bool impl_IHidNumericControlDescription<D>::IsAbsolute() const
{
    bool value {};
    check_hresult(shim()->get_IsAbsolute(&value));
    return value;
}

template <typename D> bool impl_IHidNumericControlDescription<D>::HasNull() const
{
    bool value {};
    check_hresult(shim()->get_HasNull(&value));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVectorView<Windows::Devices::HumanInterfaceDevice::HidCollection> impl_IHidNumericControlDescription<D>::ParentCollections() const
{
    Windows::Foundation::Collections::IVectorView<Windows::Devices::HumanInterfaceDevice::HidCollection> value;
    check_hresult(shim()->get_ParentCollections(put(value)));
    return value;
}

template <typename D> uint32_t impl_IHidCollection<D>::Id() const
{
    uint32_t value {};
    check_hresult(shim()->get_Id(&value));
    return value;
}

template <typename D> Windows::Devices::HumanInterfaceDevice::HidCollectionType impl_IHidCollection<D>::Type() const
{
    Windows::Devices::HumanInterfaceDevice::HidCollectionType value {};
    check_hresult(shim()->get_Type(&value));
    return value;
}

template <typename D> uint32_t impl_IHidCollection<D>::UsagePage() const
{
    uint32_t value {};
    check_hresult(shim()->get_UsagePage(&value));
    return value;
}

template <typename D> uint32_t impl_IHidCollection<D>::UsageId() const
{
    uint32_t value {};
    check_hresult(shim()->get_UsageId(&value));
    return value;
}

template <typename D> uint16_t impl_IHidInputReport<D>::Id() const
{
    uint16_t value {};
    check_hresult(shim()->get_Id(&value));
    return value;
}

template <typename D> Windows::Storage::Streams::IBuffer impl_IHidInputReport<D>::Data() const
{
    Windows::Storage::Streams::IBuffer value;
    check_hresult(shim()->get_Data(put(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVectorView<Windows::Devices::HumanInterfaceDevice::HidBooleanControl> impl_IHidInputReport<D>::ActivatedBooleanControls() const
{
    Windows::Foundation::Collections::IVectorView<Windows::Devices::HumanInterfaceDevice::HidBooleanControl> value;
    check_hresult(shim()->get_ActivatedBooleanControls(put(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVectorView<Windows::Devices::HumanInterfaceDevice::HidBooleanControl> impl_IHidInputReport<D>::TransitionedBooleanControls() const
{
    Windows::Foundation::Collections::IVectorView<Windows::Devices::HumanInterfaceDevice::HidBooleanControl> value;
    check_hresult(shim()->get_TransitionedBooleanControls(put(value)));
    return value;
}

template <typename D> Windows::Devices::HumanInterfaceDevice::HidBooleanControl impl_IHidInputReport<D>::GetBooleanControl(uint16_t usagePage, uint16_t usageId) const
{
    Windows::Devices::HumanInterfaceDevice::HidBooleanControl value { nullptr };
    check_hresult(shim()->abi_GetBooleanControl(usagePage, usageId, put(value)));
    return value;
}

template <typename D> Windows::Devices::HumanInterfaceDevice::HidBooleanControl impl_IHidInputReport<D>::GetBooleanControlByDescription(const Windows::Devices::HumanInterfaceDevice::HidBooleanControlDescription & controlDescription) const
{
    Windows::Devices::HumanInterfaceDevice::HidBooleanControl value { nullptr };
    check_hresult(shim()->abi_GetBooleanControlByDescription(get(controlDescription), put(value)));
    return value;
}

template <typename D> Windows::Devices::HumanInterfaceDevice::HidNumericControl impl_IHidInputReport<D>::GetNumericControl(uint16_t usagePage, uint16_t usageId) const
{
    Windows::Devices::HumanInterfaceDevice::HidNumericControl value { nullptr };
    check_hresult(shim()->abi_GetNumericControl(usagePage, usageId, put(value)));
    return value;
}

template <typename D> Windows::Devices::HumanInterfaceDevice::HidNumericControl impl_IHidInputReport<D>::GetNumericControlByDescription(const Windows::Devices::HumanInterfaceDevice::HidNumericControlDescription & controlDescription) const
{
    Windows::Devices::HumanInterfaceDevice::HidNumericControl value { nullptr };
    check_hresult(shim()->abi_GetNumericControlByDescription(get(controlDescription), put(value)));
    return value;
}

template <typename D> uint16_t impl_IHidOutputReport<D>::Id() const
{
    uint16_t value {};
    check_hresult(shim()->get_Id(&value));
    return value;
}

template <typename D> Windows::Storage::Streams::IBuffer impl_IHidOutputReport<D>::Data() const
{
    Windows::Storage::Streams::IBuffer value;
    check_hresult(shim()->get_Data(put(value)));
    return value;
}

template <typename D> void impl_IHidOutputReport<D>::Data(const Windows::Storage::Streams::IBuffer & value) const
{
    check_hresult(shim()->put_Data(get(value)));
}

template <typename D> Windows::Devices::HumanInterfaceDevice::HidBooleanControl impl_IHidOutputReport<D>::GetBooleanControl(uint16_t usagePage, uint16_t usageId) const
{
    Windows::Devices::HumanInterfaceDevice::HidBooleanControl value { nullptr };
    check_hresult(shim()->abi_GetBooleanControl(usagePage, usageId, put(value)));
    return value;
}

template <typename D> Windows::Devices::HumanInterfaceDevice::HidBooleanControl impl_IHidOutputReport<D>::GetBooleanControlByDescription(const Windows::Devices::HumanInterfaceDevice::HidBooleanControlDescription & controlDescription) const
{
    Windows::Devices::HumanInterfaceDevice::HidBooleanControl value { nullptr };
    check_hresult(shim()->abi_GetBooleanControlByDescription(get(controlDescription), put(value)));
    return value;
}

template <typename D> Windows::Devices::HumanInterfaceDevice::HidNumericControl impl_IHidOutputReport<D>::GetNumericControl(uint16_t usagePage, uint16_t usageId) const
{
    Windows::Devices::HumanInterfaceDevice::HidNumericControl value { nullptr };
    check_hresult(shim()->abi_GetNumericControl(usagePage, usageId, put(value)));
    return value;
}

template <typename D> Windows::Devices::HumanInterfaceDevice::HidNumericControl impl_IHidOutputReport<D>::GetNumericControlByDescription(const Windows::Devices::HumanInterfaceDevice::HidNumericControlDescription & controlDescription) const
{
    Windows::Devices::HumanInterfaceDevice::HidNumericControl value { nullptr };
    check_hresult(shim()->abi_GetNumericControlByDescription(get(controlDescription), put(value)));
    return value;
}

template <typename D> uint16_t impl_IHidFeatureReport<D>::Id() const
{
    uint16_t value {};
    check_hresult(shim()->get_Id(&value));
    return value;
}

template <typename D> Windows::Storage::Streams::IBuffer impl_IHidFeatureReport<D>::Data() const
{
    Windows::Storage::Streams::IBuffer value;
    check_hresult(shim()->get_Data(put(value)));
    return value;
}

template <typename D> void impl_IHidFeatureReport<D>::Data(const Windows::Storage::Streams::IBuffer & value) const
{
    check_hresult(shim()->put_Data(get(value)));
}

template <typename D> Windows::Devices::HumanInterfaceDevice::HidBooleanControl impl_IHidFeatureReport<D>::GetBooleanControl(uint16_t usagePage, uint16_t usageId) const
{
    Windows::Devices::HumanInterfaceDevice::HidBooleanControl value { nullptr };
    check_hresult(shim()->abi_GetBooleanControl(usagePage, usageId, put(value)));
    return value;
}

template <typename D> Windows::Devices::HumanInterfaceDevice::HidBooleanControl impl_IHidFeatureReport<D>::GetBooleanControlByDescription(const Windows::Devices::HumanInterfaceDevice::HidBooleanControlDescription & controlDescription) const
{
    Windows::Devices::HumanInterfaceDevice::HidBooleanControl value { nullptr };
    check_hresult(shim()->abi_GetBooleanControlByDescription(get(controlDescription), put(value)));
    return value;
}

template <typename D> Windows::Devices::HumanInterfaceDevice::HidNumericControl impl_IHidFeatureReport<D>::GetNumericControl(uint16_t usagePage, uint16_t usageId) const
{
    Windows::Devices::HumanInterfaceDevice::HidNumericControl value { nullptr };
    check_hresult(shim()->abi_GetNumericControl(usagePage, usageId, put(value)));
    return value;
}

template <typename D> Windows::Devices::HumanInterfaceDevice::HidNumericControl impl_IHidFeatureReport<D>::GetNumericControlByDescription(const Windows::Devices::HumanInterfaceDevice::HidNumericControlDescription & controlDescription) const
{
    Windows::Devices::HumanInterfaceDevice::HidNumericControl value { nullptr };
    check_hresult(shim()->abi_GetNumericControlByDescription(get(controlDescription), put(value)));
    return value;
}

template <typename D> Windows::Devices::HumanInterfaceDevice::HidInputReport impl_IHidInputReportReceivedEventArgs<D>::Report() const
{
    Windows::Devices::HumanInterfaceDevice::HidInputReport value { nullptr };
    check_hresult(shim()->get_Report(put(value)));
    return value;
}

template <typename D> uint32_t impl_IHidBooleanControl<D>::Id() const
{
    uint32_t value {};
    check_hresult(shim()->get_Id(&value));
    return value;
}

template <typename D> uint16_t impl_IHidBooleanControl<D>::UsagePage() const
{
    uint16_t value {};
    check_hresult(shim()->get_UsagePage(&value));
    return value;
}

template <typename D> uint16_t impl_IHidBooleanControl<D>::UsageId() const
{
    uint16_t value {};
    check_hresult(shim()->get_UsageId(&value));
    return value;
}

template <typename D> bool impl_IHidBooleanControl<D>::IsActive() const
{
    bool value {};
    check_hresult(shim()->get_IsActive(&value));
    return value;
}

template <typename D> void impl_IHidBooleanControl<D>::IsActive(bool value) const
{
    check_hresult(shim()->put_IsActive(value));
}

template <typename D> Windows::Devices::HumanInterfaceDevice::HidBooleanControlDescription impl_IHidBooleanControl<D>::ControlDescription() const
{
    Windows::Devices::HumanInterfaceDevice::HidBooleanControlDescription value { nullptr };
    check_hresult(shim()->get_ControlDescription(put(value)));
    return value;
}

template <typename D> uint32_t impl_IHidNumericControl<D>::Id() const
{
    uint32_t value {};
    check_hresult(shim()->get_Id(&value));
    return value;
}

template <typename D> bool impl_IHidNumericControl<D>::IsGrouped() const
{
    bool value {};
    check_hresult(shim()->get_IsGrouped(&value));
    return value;
}

template <typename D> uint16_t impl_IHidNumericControl<D>::UsagePage() const
{
    uint16_t value {};
    check_hresult(shim()->get_UsagePage(&value));
    return value;
}

template <typename D> uint16_t impl_IHidNumericControl<D>::UsageId() const
{
    uint16_t value {};
    check_hresult(shim()->get_UsageId(&value));
    return value;
}

template <typename D> int64_t impl_IHidNumericControl<D>::Value() const
{
    int64_t value {};
    check_hresult(shim()->get_Value(&value));
    return value;
}

template <typename D> void impl_IHidNumericControl<D>::Value(int64_t value) const
{
    check_hresult(shim()->put_Value(value));
}

template <typename D> int64_t impl_IHidNumericControl<D>::ScaledValue() const
{
    int64_t value {};
    check_hresult(shim()->get_ScaledValue(&value));
    return value;
}

template <typename D> void impl_IHidNumericControl<D>::ScaledValue(int64_t value) const
{
    check_hresult(shim()->put_ScaledValue(value));
}

template <typename D> Windows::Devices::HumanInterfaceDevice::HidNumericControlDescription impl_IHidNumericControl<D>::ControlDescription() const
{
    Windows::Devices::HumanInterfaceDevice::HidNumericControlDescription value { nullptr };
    check_hresult(shim()->get_ControlDescription(put(value)));
    return value;
}

template <typename D> uint16_t impl_IHidDevice<D>::VendorId() const
{
    uint16_t value {};
    check_hresult(shim()->get_VendorId(&value));
    return value;
}

template <typename D> uint16_t impl_IHidDevice<D>::ProductId() const
{
    uint16_t value {};
    check_hresult(shim()->get_ProductId(&value));
    return value;
}

template <typename D> uint16_t impl_IHidDevice<D>::Version() const
{
    uint16_t value {};
    check_hresult(shim()->get_Version(&value));
    return value;
}

template <typename D> uint16_t impl_IHidDevice<D>::UsagePage() const
{
    uint16_t value {};
    check_hresult(shim()->get_UsagePage(&value));
    return value;
}

template <typename D> uint16_t impl_IHidDevice<D>::UsageId() const
{
    uint16_t value {};
    check_hresult(shim()->get_UsageId(&value));
    return value;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Devices::HumanInterfaceDevice::HidInputReport> impl_IHidDevice<D>::GetInputReportAsync() const
{
    Windows::Foundation::IAsyncOperation<Windows::Devices::HumanInterfaceDevice::HidInputReport> value;
    check_hresult(shim()->abi_GetInputReportAsync(put(value)));
    return value;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Devices::HumanInterfaceDevice::HidInputReport> impl_IHidDevice<D>::GetInputReportAsync(uint16_t reportId) const
{
    Windows::Foundation::IAsyncOperation<Windows::Devices::HumanInterfaceDevice::HidInputReport> value;
    check_hresult(shim()->abi_GetInputReportByIdAsync(reportId, put(value)));
    return value;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Devices::HumanInterfaceDevice::HidFeatureReport> impl_IHidDevice<D>::GetFeatureReportAsync() const
{
    Windows::Foundation::IAsyncOperation<Windows::Devices::HumanInterfaceDevice::HidFeatureReport> value;
    check_hresult(shim()->abi_GetFeatureReportAsync(put(value)));
    return value;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Devices::HumanInterfaceDevice::HidFeatureReport> impl_IHidDevice<D>::GetFeatureReportAsync(uint16_t reportId) const
{
    Windows::Foundation::IAsyncOperation<Windows::Devices::HumanInterfaceDevice::HidFeatureReport> value;
    check_hresult(shim()->abi_GetFeatureReportByIdAsync(reportId, put(value)));
    return value;
}

template <typename D> Windows::Devices::HumanInterfaceDevice::HidOutputReport impl_IHidDevice<D>::CreateOutputReport() const
{
    Windows::Devices::HumanInterfaceDevice::HidOutputReport outputReport { nullptr };
    check_hresult(shim()->abi_CreateOutputReport(put(outputReport)));
    return outputReport;
}

template <typename D> Windows::Devices::HumanInterfaceDevice::HidOutputReport impl_IHidDevice<D>::CreateOutputReport(uint16_t reportId) const
{
    Windows::Devices::HumanInterfaceDevice::HidOutputReport outputReport { nullptr };
    check_hresult(shim()->abi_CreateOutputReportById(reportId, put(outputReport)));
    return outputReport;
}

template <typename D> Windows::Devices::HumanInterfaceDevice::HidFeatureReport impl_IHidDevice<D>::CreateFeatureReport() const
{
    Windows::Devices::HumanInterfaceDevice::HidFeatureReport featureReport { nullptr };
    check_hresult(shim()->abi_CreateFeatureReport(put(featureReport)));
    return featureReport;
}

template <typename D> Windows::Devices::HumanInterfaceDevice::HidFeatureReport impl_IHidDevice<D>::CreateFeatureReport(uint16_t reportId) const
{
    Windows::Devices::HumanInterfaceDevice::HidFeatureReport featureReport { nullptr };
    check_hresult(shim()->abi_CreateFeatureReportById(reportId, put(featureReport)));
    return featureReport;
}

template <typename D> Windows::Foundation::IAsyncOperation<uint32_t> impl_IHidDevice<D>::SendOutputReportAsync(const Windows::Devices::HumanInterfaceDevice::HidOutputReport & outputReport) const
{
    Windows::Foundation::IAsyncOperation<uint32_t> operation;
    check_hresult(shim()->abi_SendOutputReportAsync(get(outputReport), put(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperation<uint32_t> impl_IHidDevice<D>::SendFeatureReportAsync(const Windows::Devices::HumanInterfaceDevice::HidFeatureReport & featureReport) const
{
    Windows::Foundation::IAsyncOperation<uint32_t> operation;
    check_hresult(shim()->abi_SendFeatureReportAsync(get(featureReport), put(operation)));
    return operation;
}

template <typename D> Windows::Foundation::Collections::IVectorView<Windows::Devices::HumanInterfaceDevice::HidBooleanControlDescription> impl_IHidDevice<D>::GetBooleanControlDescriptions(Windows::Devices::HumanInterfaceDevice::HidReportType reportType, uint16_t usagePage, uint16_t usageId) const
{
    Windows::Foundation::Collections::IVectorView<Windows::Devices::HumanInterfaceDevice::HidBooleanControlDescription> value;
    check_hresult(shim()->abi_GetBooleanControlDescriptions(reportType, usagePage, usageId, put(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVectorView<Windows::Devices::HumanInterfaceDevice::HidNumericControlDescription> impl_IHidDevice<D>::GetNumericControlDescriptions(Windows::Devices::HumanInterfaceDevice::HidReportType reportType, uint16_t usagePage, uint16_t usageId) const
{
    Windows::Foundation::Collections::IVectorView<Windows::Devices::HumanInterfaceDevice::HidNumericControlDescription> value;
    check_hresult(shim()->abi_GetNumericControlDescriptions(reportType, usagePage, usageId, put(value)));
    return value;
}

template <typename D> event_token impl_IHidDevice<D>::InputReportReceived(const Windows::Foundation::TypedEventHandler<Windows::Devices::HumanInterfaceDevice::HidDevice, Windows::Devices::HumanInterfaceDevice::HidInputReportReceivedEventArgs> & reportHandler) const
{
    event_token token {};
    check_hresult(shim()->add_InputReportReceived(get(reportHandler), &token));
    return token;
}

template <typename D> event_revoker<IHidDevice> impl_IHidDevice<D>::InputReportReceived(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::Devices::HumanInterfaceDevice::HidDevice, Windows::Devices::HumanInterfaceDevice::HidInputReportReceivedEventArgs> & reportHandler) const
{
    return impl::make_event_revoker<D, IHidDevice>(this, &ABI::Windows::Devices::HumanInterfaceDevice::IHidDevice::remove_InputReportReceived, InputReportReceived(reportHandler));
}

template <typename D> void impl_IHidDevice<D>::InputReportReceived(event_token token) const
{
    check_hresult(shim()->remove_InputReportReceived(token));
}

inline hstring HidDevice::GetDeviceSelector(uint16_t usagePage, uint16_t usageId)
{
    return get_activation_factory<HidDevice, IHidDeviceStatics>().GetDeviceSelector(usagePage, usageId);
}

inline hstring HidDevice::GetDeviceSelector(uint16_t usagePage, uint16_t usageId, uint16_t vendorId, uint16_t productId)
{
    return get_activation_factory<HidDevice, IHidDeviceStatics>().GetDeviceSelector(usagePage, usageId, vendorId, productId);
}

inline Windows::Foundation::IAsyncOperation<Windows::Devices::HumanInterfaceDevice::HidDevice> HidDevice::FromIdAsync(hstring_ref deviceId, Windows::Storage::FileAccessMode accessMode)
{
    return get_activation_factory<HidDevice, IHidDeviceStatics>().FromIdAsync(deviceId, accessMode);
}

}

}
