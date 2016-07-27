// C++ for the Windows Runtime v1.29
// Copyright (c) 2016 Microsoft Corporation

#pragma once

#include "internal\Windows.Storage.Streams.3.h"
#include "internal\Windows.Foundation.3.h"
#include "internal\Windows.Foundation.Collections.3.h"
#include "internal\Windows.Networking.3.h"
#include "internal\Windows.Networking.XboxLive.3.h"
#include "Windows.Networking.h"

WINRT_EXPORT namespace winrt {

namespace impl {

template <typename D>
struct produce<D, Windows::Networking::XboxLive::IXboxLiveDeviceAddress> : produce_base<D, Windows::Networking::XboxLive::IXboxLiveDeviceAddress>
{
    HRESULT __stdcall add_SnapshotChanged(abi_arg_in<Windows::Foundation::TypedEventHandler<Windows::Networking::XboxLive::XboxLiveDeviceAddress, Windows::IInspectable>> handler, event_token * token) noexcept override
    {
        try
        {
            *token = detach(shim().SnapshotChanged(*reinterpret_cast<const Windows::Foundation::TypedEventHandler<Windows::Networking::XboxLive::XboxLiveDeviceAddress, Windows::IInspectable> *>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_SnapshotChanged(event_token token) noexcept override
    {
        try
        {
            shim().SnapshotChanged(token);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_GetSnapshotAsBase64(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(shim().GetSnapshotAsBase64());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_GetSnapshotAsBuffer(abi_arg_out<Windows::Storage::Streams::IBuffer> value) noexcept override
    {
        try
        {
            *value = detach(shim().GetSnapshotAsBuffer());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_GetSnapshotAsBytes(uint32_t __bufferSize, abi_arg_out<uint8_t> buffer, uint32_t * bytesWritten) noexcept override
    {
        try
        {
            shim().GetSnapshotAsBytes(*buffer, *bytesWritten);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_Compare(abi_arg_in<Windows::Networking::XboxLive::IXboxLiveDeviceAddress> otherDeviceAddress, int32_t * result) noexcept override
    {
        try
        {
            *result = detach(shim().Compare(*reinterpret_cast<const Windows::Networking::XboxLive::XboxLiveDeviceAddress *>(&otherDeviceAddress)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_IsValid(bool * value) noexcept override
    {
        try
        {
            *value = detach(shim().IsValid());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_IsLocal(bool * value) noexcept override
    {
        try
        {
            *value = detach(shim().IsLocal());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_NetworkAccessKind(Windows::Networking::XboxLive::XboxLiveNetworkAccessKind * value) noexcept override
    {
        try
        {
            *value = detach(shim().NetworkAccessKind());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Networking::XboxLive::IXboxLiveDeviceAddressStatics> : produce_base<D, Windows::Networking::XboxLive::IXboxLiveDeviceAddressStatics>
{
    HRESULT __stdcall abi_CreateFromSnapshotBase64(abi_arg_in<hstring> base64, abi_arg_out<Windows::Networking::XboxLive::IXboxLiveDeviceAddress> value) noexcept override
    {
        try
        {
            *value = detach(shim().CreateFromSnapshotBase64(*reinterpret_cast<const hstring *>(&base64)));
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_CreateFromSnapshotBuffer(abi_arg_in<Windows::Storage::Streams::IBuffer> buffer, abi_arg_out<Windows::Networking::XboxLive::IXboxLiveDeviceAddress> value) noexcept override
    {
        try
        {
            *value = detach(shim().CreateFromSnapshotBuffer(*reinterpret_cast<const Windows::Storage::Streams::IBuffer *>(&buffer)));
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_CreateFromSnapshotBytes(uint32_t __bufferSize, abi_arg_in<uint8_t> * buffer, abi_arg_out<Windows::Networking::XboxLive::IXboxLiveDeviceAddress> value) noexcept override
    {
        try
        {
            *value = detach(shim().CreateFromSnapshotBytes(array_ref<const uint8_t>(buffer, buffer + __bufferSize)));
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_GetLocal(abi_arg_out<Windows::Networking::XboxLive::IXboxLiveDeviceAddress> value) noexcept override
    {
        try
        {
            *value = detach(shim().GetLocal());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_MaxSnapshotBytesSize(uint32_t * value) noexcept override
    {
        try
        {
            *value = detach(shim().MaxSnapshotBytesSize());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Networking::XboxLive::IXboxLiveEndpointPair> : produce_base<D, Windows::Networking::XboxLive::IXboxLiveEndpointPair>
{
    HRESULT __stdcall add_StateChanged(abi_arg_in<Windows::Foundation::TypedEventHandler<Windows::Networking::XboxLive::XboxLiveEndpointPair, Windows::Networking::XboxLive::XboxLiveEndpointPairStateChangedEventArgs>> handler, event_token * token) noexcept override
    {
        try
        {
            *token = detach(shim().StateChanged(*reinterpret_cast<const Windows::Foundation::TypedEventHandler<Windows::Networking::XboxLive::XboxLiveEndpointPair, Windows::Networking::XboxLive::XboxLiveEndpointPairStateChangedEventArgs> *>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_StateChanged(event_token token) noexcept override
    {
        try
        {
            shim().StateChanged(token);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_DeleteAsync(abi_arg_out<Windows::Foundation::IAsyncAction> action) noexcept override
    {
        try
        {
            *action = detach(shim().DeleteAsync());
            return S_OK;
        }
        catch (...)
        {
            *action = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_GetRemoteSocketAddressBytes(uint32_t __socketAddressSize, abi_arg_out<uint8_t> socketAddress) noexcept override
    {
        try
        {
            shim().GetRemoteSocketAddressBytes(*socketAddress);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_GetLocalSocketAddressBytes(uint32_t __socketAddressSize, abi_arg_out<uint8_t> socketAddress) noexcept override
    {
        try
        {
            shim().GetLocalSocketAddressBytes(*socketAddress);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_State(Windows::Networking::XboxLive::XboxLiveEndpointPairState * value) noexcept override
    {
        try
        {
            *value = detach(shim().State());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Template(abi_arg_out<Windows::Networking::XboxLive::IXboxLiveEndpointPairTemplate> value) noexcept override
    {
        try
        {
            *value = detach(shim().Template());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_RemoteDeviceAddress(abi_arg_out<Windows::Networking::XboxLive::IXboxLiveDeviceAddress> value) noexcept override
    {
        try
        {
            *value = detach(shim().RemoteDeviceAddress());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_RemoteHostName(abi_arg_out<Windows::Networking::IHostName> value) noexcept override
    {
        try
        {
            *value = detach(shim().RemoteHostName());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_RemotePort(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(shim().RemotePort());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_LocalHostName(abi_arg_out<Windows::Networking::IHostName> value) noexcept override
    {
        try
        {
            *value = detach(shim().LocalHostName());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_LocalPort(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(shim().LocalPort());
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
struct produce<D, Windows::Networking::XboxLive::IXboxLiveEndpointPairCreationResult> : produce_base<D, Windows::Networking::XboxLive::IXboxLiveEndpointPairCreationResult>
{
    HRESULT __stdcall get_DeviceAddress(abi_arg_out<Windows::Networking::XboxLive::IXboxLiveDeviceAddress> value) noexcept override
    {
        try
        {
            *value = detach(shim().DeviceAddress());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Status(Windows::Networking::XboxLive::XboxLiveEndpointPairCreationStatus * value) noexcept override
    {
        try
        {
            *value = detach(shim().Status());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_IsExistingPathEvaluation(bool * value) noexcept override
    {
        try
        {
            *value = detach(shim().IsExistingPathEvaluation());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_EndpointPair(abi_arg_out<Windows::Networking::XboxLive::IXboxLiveEndpointPair> value) noexcept override
    {
        try
        {
            *value = detach(shim().EndpointPair());
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
struct produce<D, Windows::Networking::XboxLive::IXboxLiveEndpointPairStateChangedEventArgs> : produce_base<D, Windows::Networking::XboxLive::IXboxLiveEndpointPairStateChangedEventArgs>
{
    HRESULT __stdcall get_OldState(Windows::Networking::XboxLive::XboxLiveEndpointPairState * value) noexcept override
    {
        try
        {
            *value = detach(shim().OldState());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_NewState(Windows::Networking::XboxLive::XboxLiveEndpointPairState * value) noexcept override
    {
        try
        {
            *value = detach(shim().NewState());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Networking::XboxLive::IXboxLiveEndpointPairStatics> : produce_base<D, Windows::Networking::XboxLive::IXboxLiveEndpointPairStatics>
{
    HRESULT __stdcall abi_FindEndpointPairBySocketAddressBytes(uint32_t __localSocketAddressSize, abi_arg_in<uint8_t> * localSocketAddress, uint32_t __remoteSocketAddressSize, abi_arg_in<uint8_t> * remoteSocketAddress, abi_arg_out<Windows::Networking::XboxLive::IXboxLiveEndpointPair> endpointPair) noexcept override
    {
        try
        {
            *endpointPair = detach(shim().FindEndpointPairBySocketAddressBytes(array_ref<const uint8_t>(localSocketAddress, localSocketAddress + __localSocketAddressSize), array_ref<const uint8_t>(remoteSocketAddress, remoteSocketAddress + __remoteSocketAddressSize)));
            return S_OK;
        }
        catch (...)
        {
            *endpointPair = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_FindEndpointPairByHostNamesAndPorts(abi_arg_in<Windows::Networking::IHostName> localHostName, abi_arg_in<hstring> localPort, abi_arg_in<Windows::Networking::IHostName> remoteHostName, abi_arg_in<hstring> remotePort, abi_arg_out<Windows::Networking::XboxLive::IXboxLiveEndpointPair> endpointPair) noexcept override
    {
        try
        {
            *endpointPair = detach(shim().FindEndpointPairByHostNamesAndPorts(*reinterpret_cast<const Windows::Networking::HostName *>(&localHostName), *reinterpret_cast<const hstring *>(&localPort), *reinterpret_cast<const Windows::Networking::HostName *>(&remoteHostName), *reinterpret_cast<const hstring *>(&remotePort)));
            return S_OK;
        }
        catch (...)
        {
            *endpointPair = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Networking::XboxLive::IXboxLiveEndpointPairTemplate> : produce_base<D, Windows::Networking::XboxLive::IXboxLiveEndpointPairTemplate>
{
    HRESULT __stdcall add_InboundEndpointPairCreated(abi_arg_in<Windows::Foundation::TypedEventHandler<Windows::Networking::XboxLive::XboxLiveEndpointPairTemplate, Windows::Networking::XboxLive::XboxLiveInboundEndpointPairCreatedEventArgs>> handler, event_token * token) noexcept override
    {
        try
        {
            *token = detach(shim().InboundEndpointPairCreated(*reinterpret_cast<const Windows::Foundation::TypedEventHandler<Windows::Networking::XboxLive::XboxLiveEndpointPairTemplate, Windows::Networking::XboxLive::XboxLiveInboundEndpointPairCreatedEventArgs> *>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_InboundEndpointPairCreated(event_token token) noexcept override
    {
        try
        {
            shim().InboundEndpointPairCreated(token);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_CreateEndpointPairDefaultAsync(abi_arg_in<Windows::Networking::XboxLive::IXboxLiveDeviceAddress> deviceAddress, abi_arg_out<Windows::Foundation::IAsyncOperation<Windows::Networking::XboxLive::XboxLiveEndpointPairCreationResult>> operation) noexcept override
    {
        try
        {
            *operation = detach(shim().CreateEndpointPairAsync(*reinterpret_cast<const Windows::Networking::XboxLive::XboxLiveDeviceAddress *>(&deviceAddress)));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_CreateEndpointPairWithBehaviorsAsync(abi_arg_in<Windows::Networking::XboxLive::IXboxLiveDeviceAddress> deviceAddress, Windows::Networking::XboxLive::XboxLiveEndpointPairCreationBehaviors behaviors, abi_arg_out<Windows::Foundation::IAsyncOperation<Windows::Networking::XboxLive::XboxLiveEndpointPairCreationResult>> operation) noexcept override
    {
        try
        {
            *operation = detach(shim().CreateEndpointPairAsync(*reinterpret_cast<const Windows::Networking::XboxLive::XboxLiveDeviceAddress *>(&deviceAddress), behaviors));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_CreateEndpointPairForPortsDefaultAsync(abi_arg_in<Windows::Networking::XboxLive::IXboxLiveDeviceAddress> deviceAddress, abi_arg_in<hstring> initiatorPort, abi_arg_in<hstring> acceptorPort, abi_arg_out<Windows::Foundation::IAsyncOperation<Windows::Networking::XboxLive::XboxLiveEndpointPairCreationResult>> operation) noexcept override
    {
        try
        {
            *operation = detach(shim().CreateEndpointPairForPortsAsync(*reinterpret_cast<const Windows::Networking::XboxLive::XboxLiveDeviceAddress *>(&deviceAddress), *reinterpret_cast<const hstring *>(&initiatorPort), *reinterpret_cast<const hstring *>(&acceptorPort)));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_CreateEndpointPairForPortsWithBehaviorsAsync(abi_arg_in<Windows::Networking::XboxLive::IXboxLiveDeviceAddress> deviceAddress, abi_arg_in<hstring> initiatorPort, abi_arg_in<hstring> acceptorPort, Windows::Networking::XboxLive::XboxLiveEndpointPairCreationBehaviors behaviors, abi_arg_out<Windows::Foundation::IAsyncOperation<Windows::Networking::XboxLive::XboxLiveEndpointPairCreationResult>> operation) noexcept override
    {
        try
        {
            *operation = detach(shim().CreateEndpointPairForPortsAsync(*reinterpret_cast<const Windows::Networking::XboxLive::XboxLiveDeviceAddress *>(&deviceAddress), *reinterpret_cast<const hstring *>(&initiatorPort), *reinterpret_cast<const hstring *>(&acceptorPort), behaviors));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Name(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(shim().Name());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_SocketKind(Windows::Networking::XboxLive::XboxLiveSocketKind * value) noexcept override
    {
        try
        {
            *value = detach(shim().SocketKind());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_InitiatorBoundPortRangeLower(uint16_t * value) noexcept override
    {
        try
        {
            *value = detach(shim().InitiatorBoundPortRangeLower());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_InitiatorBoundPortRangeUpper(uint16_t * value) noexcept override
    {
        try
        {
            *value = detach(shim().InitiatorBoundPortRangeUpper());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_AcceptorBoundPortRangeLower(uint16_t * value) noexcept override
    {
        try
        {
            *value = detach(shim().AcceptorBoundPortRangeLower());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_AcceptorBoundPortRangeUpper(uint16_t * value) noexcept override
    {
        try
        {
            *value = detach(shim().AcceptorBoundPortRangeUpper());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_EndpointPairs(abi_arg_out<Windows::Foundation::Collections::IVectorView<Windows::Networking::XboxLive::XboxLiveEndpointPair>> value) noexcept override
    {
        try
        {
            *value = detach(shim().EndpointPairs());
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
struct produce<D, Windows::Networking::XboxLive::IXboxLiveEndpointPairTemplateStatics> : produce_base<D, Windows::Networking::XboxLive::IXboxLiveEndpointPairTemplateStatics>
{
    HRESULT __stdcall abi_GetTemplateByName(abi_arg_in<hstring> name, abi_arg_out<Windows::Networking::XboxLive::IXboxLiveEndpointPairTemplate> namedTemplate) noexcept override
    {
        try
        {
            *namedTemplate = detach(shim().GetTemplateByName(*reinterpret_cast<const hstring *>(&name)));
            return S_OK;
        }
        catch (...)
        {
            *namedTemplate = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Templates(abi_arg_out<Windows::Foundation::Collections::IVectorView<Windows::Networking::XboxLive::XboxLiveEndpointPairTemplate>> value) noexcept override
    {
        try
        {
            *value = detach(shim().Templates());
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
struct produce<D, Windows::Networking::XboxLive::IXboxLiveInboundEndpointPairCreatedEventArgs> : produce_base<D, Windows::Networking::XboxLive::IXboxLiveInboundEndpointPairCreatedEventArgs>
{
    HRESULT __stdcall get_EndpointPair(abi_arg_out<Windows::Networking::XboxLive::IXboxLiveEndpointPair> value) noexcept override
    {
        try
        {
            *value = detach(shim().EndpointPair());
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
struct produce<D, Windows::Networking::XboxLive::IXboxLiveQualityOfServiceMeasurement> : produce_base<D, Windows::Networking::XboxLive::IXboxLiveQualityOfServiceMeasurement>
{
    HRESULT __stdcall abi_MeasureAsync(abi_arg_out<Windows::Foundation::IAsyncAction> action) noexcept override
    {
        try
        {
            *action = detach(shim().MeasureAsync());
            return S_OK;
        }
        catch (...)
        {
            *action = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_GetMetricResultsForDevice(abi_arg_in<Windows::Networking::XboxLive::IXboxLiveDeviceAddress> deviceAddress, abi_arg_out<Windows::Foundation::Collections::IVectorView<Windows::Networking::XboxLive::XboxLiveQualityOfServiceMetricResult>> value) noexcept override
    {
        try
        {
            *value = detach(shim().GetMetricResultsForDevice(*reinterpret_cast<const Windows::Networking::XboxLive::XboxLiveDeviceAddress *>(&deviceAddress)));
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_GetMetricResultsForMetric(Windows::Networking::XboxLive::XboxLiveQualityOfServiceMetric metric, abi_arg_out<Windows::Foundation::Collections::IVectorView<Windows::Networking::XboxLive::XboxLiveQualityOfServiceMetricResult>> value) noexcept override
    {
        try
        {
            *value = detach(shim().GetMetricResultsForMetric(metric));
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_GetMetricResult(abi_arg_in<Windows::Networking::XboxLive::IXboxLiveDeviceAddress> deviceAddress, Windows::Networking::XboxLive::XboxLiveQualityOfServiceMetric metric, abi_arg_out<Windows::Networking::XboxLive::IXboxLiveQualityOfServiceMetricResult> value) noexcept override
    {
        try
        {
            *value = detach(shim().GetMetricResult(*reinterpret_cast<const Windows::Networking::XboxLive::XboxLiveDeviceAddress *>(&deviceAddress), metric));
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_GetPrivatePayloadResult(abi_arg_in<Windows::Networking::XboxLive::IXboxLiveDeviceAddress> deviceAddress, abi_arg_out<Windows::Networking::XboxLive::IXboxLiveQualityOfServicePrivatePayloadResult> value) noexcept override
    {
        try
        {
            *value = detach(shim().GetPrivatePayloadResult(*reinterpret_cast<const Windows::Networking::XboxLive::XboxLiveDeviceAddress *>(&deviceAddress)));
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Metrics(abi_arg_out<Windows::Foundation::Collections::IVector<winrt::Windows::Networking::XboxLive::XboxLiveQualityOfServiceMetric>> value) noexcept override
    {
        try
        {
            *value = detach(shim().Metrics());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_DeviceAddresses(abi_arg_out<Windows::Foundation::Collections::IVector<Windows::Networking::XboxLive::XboxLiveDeviceAddress>> value) noexcept override
    {
        try
        {
            *value = detach(shim().DeviceAddresses());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ShouldRequestPrivatePayloads(bool * value) noexcept override
    {
        try
        {
            *value = detach(shim().ShouldRequestPrivatePayloads());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_ShouldRequestPrivatePayloads(bool value) noexcept override
    {
        try
        {
            shim().ShouldRequestPrivatePayloads(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_TimeoutInMilliseconds(uint32_t * value) noexcept override
    {
        try
        {
            *value = detach(shim().TimeoutInMilliseconds());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_TimeoutInMilliseconds(uint32_t value) noexcept override
    {
        try
        {
            shim().TimeoutInMilliseconds(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_NumberOfProbesToAttempt(uint32_t * value) noexcept override
    {
        try
        {
            *value = detach(shim().NumberOfProbesToAttempt());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_NumberOfProbesToAttempt(uint32_t value) noexcept override
    {
        try
        {
            shim().NumberOfProbesToAttempt(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_NumberOfResultsPending(uint32_t * value) noexcept override
    {
        try
        {
            *value = detach(shim().NumberOfResultsPending());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_MetricResults(abi_arg_out<Windows::Foundation::Collections::IVectorView<Windows::Networking::XboxLive::XboxLiveQualityOfServiceMetricResult>> value) noexcept override
    {
        try
        {
            *value = detach(shim().MetricResults());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_PrivatePayloadResults(abi_arg_out<Windows::Foundation::Collections::IVectorView<Windows::Networking::XboxLive::XboxLiveQualityOfServicePrivatePayloadResult>> value) noexcept override
    {
        try
        {
            *value = detach(shim().PrivatePayloadResults());
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
struct produce<D, Windows::Networking::XboxLive::IXboxLiveQualityOfServiceMeasurementStatics> : produce_base<D, Windows::Networking::XboxLive::IXboxLiveQualityOfServiceMeasurementStatics>
{
    HRESULT __stdcall abi_PublishPrivatePayloadBytes(uint32_t __payloadSize, abi_arg_in<uint8_t> * payload) noexcept override
    {
        try
        {
            shim().PublishPrivatePayloadBytes(array_ref<const uint8_t>(payload, payload + __payloadSize));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_ClearPrivatePayload() noexcept override
    {
        try
        {
            shim().ClearPrivatePayload();
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_MaxSimultaneousProbeConnections(uint32_t * value) noexcept override
    {
        try
        {
            *value = detach(shim().MaxSimultaneousProbeConnections());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_MaxSimultaneousProbeConnections(uint32_t value) noexcept override
    {
        try
        {
            shim().MaxSimultaneousProbeConnections(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_IsSystemOutboundBandwidthConstrained(bool * value) noexcept override
    {
        try
        {
            *value = detach(shim().IsSystemOutboundBandwidthConstrained());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_IsSystemOutboundBandwidthConstrained(bool value) noexcept override
    {
        try
        {
            shim().IsSystemOutboundBandwidthConstrained(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_IsSystemInboundBandwidthConstrained(bool * value) noexcept override
    {
        try
        {
            *value = detach(shim().IsSystemInboundBandwidthConstrained());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_IsSystemInboundBandwidthConstrained(bool value) noexcept override
    {
        try
        {
            shim().IsSystemInboundBandwidthConstrained(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_PublishedPrivatePayload(abi_arg_out<Windows::Storage::Streams::IBuffer> value) noexcept override
    {
        try
        {
            *value = detach(shim().PublishedPrivatePayload());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_PublishedPrivatePayload(abi_arg_in<Windows::Storage::Streams::IBuffer> value) noexcept override
    {
        try
        {
            shim().PublishedPrivatePayload(*reinterpret_cast<const Windows::Storage::Streams::IBuffer *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_MaxPrivatePayloadSize(uint32_t * value) noexcept override
    {
        try
        {
            *value = detach(shim().MaxPrivatePayloadSize());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Networking::XboxLive::IXboxLiveQualityOfServiceMetricResult> : produce_base<D, Windows::Networking::XboxLive::IXboxLiveQualityOfServiceMetricResult>
{
    HRESULT __stdcall get_Status(Windows::Networking::XboxLive::XboxLiveQualityOfServiceMeasurementStatus * value) noexcept override
    {
        try
        {
            *value = detach(shim().Status());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_DeviceAddress(abi_arg_out<Windows::Networking::XboxLive::IXboxLiveDeviceAddress> value) noexcept override
    {
        try
        {
            *value = detach(shim().DeviceAddress());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Metric(Windows::Networking::XboxLive::XboxLiveQualityOfServiceMetric * value) noexcept override
    {
        try
        {
            *value = detach(shim().Metric());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Value(uint64_t * value) noexcept override
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
};

template <typename D>
struct produce<D, Windows::Networking::XboxLive::IXboxLiveQualityOfServicePrivatePayloadResult> : produce_base<D, Windows::Networking::XboxLive::IXboxLiveQualityOfServicePrivatePayloadResult>
{
    HRESULT __stdcall get_Status(Windows::Networking::XboxLive::XboxLiveQualityOfServiceMeasurementStatus * value) noexcept override
    {
        try
        {
            *value = detach(shim().Status());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_DeviceAddress(abi_arg_out<Windows::Networking::XboxLive::IXboxLiveDeviceAddress> value) noexcept override
    {
        try
        {
            *value = detach(shim().DeviceAddress());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Value(abi_arg_out<Windows::Storage::Streams::IBuffer> value) noexcept override
    {
        try
        {
            *value = detach(shim().Value());
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

namespace Windows::Networking::XboxLive {

template <typename D> Windows::Networking::XboxLive::XboxLiveDeviceAddress impl_IXboxLiveDeviceAddressStatics<D>::CreateFromSnapshotBase64(hstring_ref base64) const
{
    Windows::Networking::XboxLive::XboxLiveDeviceAddress value { nullptr };
    check_hresult(shim()->abi_CreateFromSnapshotBase64(get(base64), put(value)));
    return value;
}

template <typename D> Windows::Networking::XboxLive::XboxLiveDeviceAddress impl_IXboxLiveDeviceAddressStatics<D>::CreateFromSnapshotBuffer(const Windows::Storage::Streams::IBuffer & buffer) const
{
    Windows::Networking::XboxLive::XboxLiveDeviceAddress value { nullptr };
    check_hresult(shim()->abi_CreateFromSnapshotBuffer(get(buffer), put(value)));
    return value;
}

template <typename D> Windows::Networking::XboxLive::XboxLiveDeviceAddress impl_IXboxLiveDeviceAddressStatics<D>::CreateFromSnapshotBytes(array_ref<const uint8_t> buffer) const
{
    Windows::Networking::XboxLive::XboxLiveDeviceAddress value { nullptr };
    check_hresult(shim()->abi_CreateFromSnapshotBytes(buffer.size(), get(buffer), put(value)));
    return value;
}

template <typename D> Windows::Networking::XboxLive::XboxLiveDeviceAddress impl_IXboxLiveDeviceAddressStatics<D>::GetLocal() const
{
    Windows::Networking::XboxLive::XboxLiveDeviceAddress value { nullptr };
    check_hresult(shim()->abi_GetLocal(put(value)));
    return value;
}

template <typename D> uint32_t impl_IXboxLiveDeviceAddressStatics<D>::MaxSnapshotBytesSize() const
{
    uint32_t value {};
    check_hresult(shim()->get_MaxSnapshotBytesSize(&value));
    return value;
}

template <typename D> event_token impl_IXboxLiveDeviceAddress<D>::SnapshotChanged(const Windows::Foundation::TypedEventHandler<Windows::Networking::XboxLive::XboxLiveDeviceAddress, Windows::IInspectable> & handler) const
{
    event_token token {};
    check_hresult(shim()->add_SnapshotChanged(get(handler), &token));
    return token;
}

template <typename D> event_revoker<IXboxLiveDeviceAddress> impl_IXboxLiveDeviceAddress<D>::SnapshotChanged(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::Networking::XboxLive::XboxLiveDeviceAddress, Windows::IInspectable> & handler) const
{
    return impl::make_event_revoker<D, IXboxLiveDeviceAddress>(this, &ABI::Windows::Networking::XboxLive::IXboxLiveDeviceAddress::remove_SnapshotChanged, SnapshotChanged(handler));
}

template <typename D> void impl_IXboxLiveDeviceAddress<D>::SnapshotChanged(event_token token) const
{
    check_hresult(shim()->remove_SnapshotChanged(token));
}

template <typename D> hstring impl_IXboxLiveDeviceAddress<D>::GetSnapshotAsBase64() const
{
    hstring value;
    check_hresult(shim()->abi_GetSnapshotAsBase64(put(value)));
    return value;
}

template <typename D> Windows::Storage::Streams::IBuffer impl_IXboxLiveDeviceAddress<D>::GetSnapshotAsBuffer() const
{
    Windows::Storage::Streams::IBuffer value;
    check_hresult(shim()->abi_GetSnapshotAsBuffer(put(value)));
    return value;
}

template <typename D> void impl_IXboxLiveDeviceAddress<D>::GetSnapshotAsBytes(array_ref<uint8_t> buffer, uint32_t & bytesWritten) const
{
    check_hresult(shim()->abi_GetSnapshotAsBytes(buffer.size(), get(buffer), &bytesWritten));
}

template <typename D> int32_t impl_IXboxLiveDeviceAddress<D>::Compare(const Windows::Networking::XboxLive::XboxLiveDeviceAddress & otherDeviceAddress) const
{
    int32_t result {};
    check_hresult(shim()->abi_Compare(get(otherDeviceAddress), &result));
    return result;
}

template <typename D> bool impl_IXboxLiveDeviceAddress<D>::IsValid() const
{
    bool value {};
    check_hresult(shim()->get_IsValid(&value));
    return value;
}

template <typename D> bool impl_IXboxLiveDeviceAddress<D>::IsLocal() const
{
    bool value {};
    check_hresult(shim()->get_IsLocal(&value));
    return value;
}

template <typename D> Windows::Networking::XboxLive::XboxLiveNetworkAccessKind impl_IXboxLiveDeviceAddress<D>::NetworkAccessKind() const
{
    Windows::Networking::XboxLive::XboxLiveNetworkAccessKind value {};
    check_hresult(shim()->get_NetworkAccessKind(&value));
    return value;
}

template <typename D> Windows::Networking::XboxLive::XboxLiveEndpointPair impl_IXboxLiveInboundEndpointPairCreatedEventArgs<D>::EndpointPair() const
{
    Windows::Networking::XboxLive::XboxLiveEndpointPair value { nullptr };
    check_hresult(shim()->get_EndpointPair(put(value)));
    return value;
}

template <typename D> Windows::Networking::XboxLive::XboxLiveDeviceAddress impl_IXboxLiveEndpointPairCreationResult<D>::DeviceAddress() const
{
    Windows::Networking::XboxLive::XboxLiveDeviceAddress value { nullptr };
    check_hresult(shim()->get_DeviceAddress(put(value)));
    return value;
}

template <typename D> Windows::Networking::XboxLive::XboxLiveEndpointPairCreationStatus impl_IXboxLiveEndpointPairCreationResult<D>::Status() const
{
    Windows::Networking::XboxLive::XboxLiveEndpointPairCreationStatus value {};
    check_hresult(shim()->get_Status(&value));
    return value;
}

template <typename D> bool impl_IXboxLiveEndpointPairCreationResult<D>::IsExistingPathEvaluation() const
{
    bool value {};
    check_hresult(shim()->get_IsExistingPathEvaluation(&value));
    return value;
}

template <typename D> Windows::Networking::XboxLive::XboxLiveEndpointPair impl_IXboxLiveEndpointPairCreationResult<D>::EndpointPair() const
{
    Windows::Networking::XboxLive::XboxLiveEndpointPair value { nullptr };
    check_hresult(shim()->get_EndpointPair(put(value)));
    return value;
}

template <typename D> Windows::Networking::XboxLive::XboxLiveEndpointPairTemplate impl_IXboxLiveEndpointPairTemplateStatics<D>::GetTemplateByName(hstring_ref name) const
{
    Windows::Networking::XboxLive::XboxLiveEndpointPairTemplate namedTemplate { nullptr };
    check_hresult(shim()->abi_GetTemplateByName(get(name), put(namedTemplate)));
    return namedTemplate;
}

template <typename D> Windows::Foundation::Collections::IVectorView<Windows::Networking::XboxLive::XboxLiveEndpointPairTemplate> impl_IXboxLiveEndpointPairTemplateStatics<D>::Templates() const
{
    Windows::Foundation::Collections::IVectorView<Windows::Networking::XboxLive::XboxLiveEndpointPairTemplate> value;
    check_hresult(shim()->get_Templates(put(value)));
    return value;
}

template <typename D> event_token impl_IXboxLiveEndpointPairTemplate<D>::InboundEndpointPairCreated(const Windows::Foundation::TypedEventHandler<Windows::Networking::XboxLive::XboxLiveEndpointPairTemplate, Windows::Networking::XboxLive::XboxLiveInboundEndpointPairCreatedEventArgs> & handler) const
{
    event_token token {};
    check_hresult(shim()->add_InboundEndpointPairCreated(get(handler), &token));
    return token;
}

template <typename D> event_revoker<IXboxLiveEndpointPairTemplate> impl_IXboxLiveEndpointPairTemplate<D>::InboundEndpointPairCreated(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::Networking::XboxLive::XboxLiveEndpointPairTemplate, Windows::Networking::XboxLive::XboxLiveInboundEndpointPairCreatedEventArgs> & handler) const
{
    return impl::make_event_revoker<D, IXboxLiveEndpointPairTemplate>(this, &ABI::Windows::Networking::XboxLive::IXboxLiveEndpointPairTemplate::remove_InboundEndpointPairCreated, InboundEndpointPairCreated(handler));
}

template <typename D> void impl_IXboxLiveEndpointPairTemplate<D>::InboundEndpointPairCreated(event_token token) const
{
    check_hresult(shim()->remove_InboundEndpointPairCreated(token));
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Networking::XboxLive::XboxLiveEndpointPairCreationResult> impl_IXboxLiveEndpointPairTemplate<D>::CreateEndpointPairAsync(const Windows::Networking::XboxLive::XboxLiveDeviceAddress & deviceAddress) const
{
    Windows::Foundation::IAsyncOperation<Windows::Networking::XboxLive::XboxLiveEndpointPairCreationResult> operation;
    check_hresult(shim()->abi_CreateEndpointPairDefaultAsync(get(deviceAddress), put(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Networking::XboxLive::XboxLiveEndpointPairCreationResult> impl_IXboxLiveEndpointPairTemplate<D>::CreateEndpointPairAsync(const Windows::Networking::XboxLive::XboxLiveDeviceAddress & deviceAddress, Windows::Networking::XboxLive::XboxLiveEndpointPairCreationBehaviors behaviors) const
{
    Windows::Foundation::IAsyncOperation<Windows::Networking::XboxLive::XboxLiveEndpointPairCreationResult> operation;
    check_hresult(shim()->abi_CreateEndpointPairWithBehaviorsAsync(get(deviceAddress), behaviors, put(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Networking::XboxLive::XboxLiveEndpointPairCreationResult> impl_IXboxLiveEndpointPairTemplate<D>::CreateEndpointPairForPortsAsync(const Windows::Networking::XboxLive::XboxLiveDeviceAddress & deviceAddress, hstring_ref initiatorPort, hstring_ref acceptorPort) const
{
    Windows::Foundation::IAsyncOperation<Windows::Networking::XboxLive::XboxLiveEndpointPairCreationResult> operation;
    check_hresult(shim()->abi_CreateEndpointPairForPortsDefaultAsync(get(deviceAddress), get(initiatorPort), get(acceptorPort), put(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Networking::XboxLive::XboxLiveEndpointPairCreationResult> impl_IXboxLiveEndpointPairTemplate<D>::CreateEndpointPairForPortsAsync(const Windows::Networking::XboxLive::XboxLiveDeviceAddress & deviceAddress, hstring_ref initiatorPort, hstring_ref acceptorPort, Windows::Networking::XboxLive::XboxLiveEndpointPairCreationBehaviors behaviors) const
{
    Windows::Foundation::IAsyncOperation<Windows::Networking::XboxLive::XboxLiveEndpointPairCreationResult> operation;
    check_hresult(shim()->abi_CreateEndpointPairForPortsWithBehaviorsAsync(get(deviceAddress), get(initiatorPort), get(acceptorPort), behaviors, put(operation)));
    return operation;
}

template <typename D> hstring impl_IXboxLiveEndpointPairTemplate<D>::Name() const
{
    hstring value;
    check_hresult(shim()->get_Name(put(value)));
    return value;
}

template <typename D> Windows::Networking::XboxLive::XboxLiveSocketKind impl_IXboxLiveEndpointPairTemplate<D>::SocketKind() const
{
    Windows::Networking::XboxLive::XboxLiveSocketKind value {};
    check_hresult(shim()->get_SocketKind(&value));
    return value;
}

template <typename D> uint16_t impl_IXboxLiveEndpointPairTemplate<D>::InitiatorBoundPortRangeLower() const
{
    uint16_t value {};
    check_hresult(shim()->get_InitiatorBoundPortRangeLower(&value));
    return value;
}

template <typename D> uint16_t impl_IXboxLiveEndpointPairTemplate<D>::InitiatorBoundPortRangeUpper() const
{
    uint16_t value {};
    check_hresult(shim()->get_InitiatorBoundPortRangeUpper(&value));
    return value;
}

template <typename D> uint16_t impl_IXboxLiveEndpointPairTemplate<D>::AcceptorBoundPortRangeLower() const
{
    uint16_t value {};
    check_hresult(shim()->get_AcceptorBoundPortRangeLower(&value));
    return value;
}

template <typename D> uint16_t impl_IXboxLiveEndpointPairTemplate<D>::AcceptorBoundPortRangeUpper() const
{
    uint16_t value {};
    check_hresult(shim()->get_AcceptorBoundPortRangeUpper(&value));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVectorView<Windows::Networking::XboxLive::XboxLiveEndpointPair> impl_IXboxLiveEndpointPairTemplate<D>::EndpointPairs() const
{
    Windows::Foundation::Collections::IVectorView<Windows::Networking::XboxLive::XboxLiveEndpointPair> value;
    check_hresult(shim()->get_EndpointPairs(put(value)));
    return value;
}

template <typename D> Windows::Networking::XboxLive::XboxLiveEndpointPairState impl_IXboxLiveEndpointPairStateChangedEventArgs<D>::OldState() const
{
    Windows::Networking::XboxLive::XboxLiveEndpointPairState value {};
    check_hresult(shim()->get_OldState(&value));
    return value;
}

template <typename D> Windows::Networking::XboxLive::XboxLiveEndpointPairState impl_IXboxLiveEndpointPairStateChangedEventArgs<D>::NewState() const
{
    Windows::Networking::XboxLive::XboxLiveEndpointPairState value {};
    check_hresult(shim()->get_NewState(&value));
    return value;
}

template <typename D> Windows::Networking::XboxLive::XboxLiveEndpointPair impl_IXboxLiveEndpointPairStatics<D>::FindEndpointPairBySocketAddressBytes(array_ref<const uint8_t> localSocketAddress, array_ref<const uint8_t> remoteSocketAddress) const
{
    Windows::Networking::XboxLive::XboxLiveEndpointPair endpointPair { nullptr };
    check_hresult(shim()->abi_FindEndpointPairBySocketAddressBytes(localSocketAddress.size(), get(localSocketAddress), remoteSocketAddress.size(), get(remoteSocketAddress), put(endpointPair)));
    return endpointPair;
}

template <typename D> Windows::Networking::XboxLive::XboxLiveEndpointPair impl_IXboxLiveEndpointPairStatics<D>::FindEndpointPairByHostNamesAndPorts(const Windows::Networking::HostName & localHostName, hstring_ref localPort, const Windows::Networking::HostName & remoteHostName, hstring_ref remotePort) const
{
    Windows::Networking::XboxLive::XboxLiveEndpointPair endpointPair { nullptr };
    check_hresult(shim()->abi_FindEndpointPairByHostNamesAndPorts(get(localHostName), get(localPort), get(remoteHostName), get(remotePort), put(endpointPair)));
    return endpointPair;
}

template <typename D> event_token impl_IXboxLiveEndpointPair<D>::StateChanged(const Windows::Foundation::TypedEventHandler<Windows::Networking::XboxLive::XboxLiveEndpointPair, Windows::Networking::XboxLive::XboxLiveEndpointPairStateChangedEventArgs> & handler) const
{
    event_token token {};
    check_hresult(shim()->add_StateChanged(get(handler), &token));
    return token;
}

template <typename D> event_revoker<IXboxLiveEndpointPair> impl_IXboxLiveEndpointPair<D>::StateChanged(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::Networking::XboxLive::XboxLiveEndpointPair, Windows::Networking::XboxLive::XboxLiveEndpointPairStateChangedEventArgs> & handler) const
{
    return impl::make_event_revoker<D, IXboxLiveEndpointPair>(this, &ABI::Windows::Networking::XboxLive::IXboxLiveEndpointPair::remove_StateChanged, StateChanged(handler));
}

template <typename D> void impl_IXboxLiveEndpointPair<D>::StateChanged(event_token token) const
{
    check_hresult(shim()->remove_StateChanged(token));
}

template <typename D> Windows::Foundation::IAsyncAction impl_IXboxLiveEndpointPair<D>::DeleteAsync() const
{
    Windows::Foundation::IAsyncAction action;
    check_hresult(shim()->abi_DeleteAsync(put(action)));
    return action;
}

template <typename D> void impl_IXboxLiveEndpointPair<D>::GetRemoteSocketAddressBytes(array_ref<uint8_t> socketAddress) const
{
    check_hresult(shim()->abi_GetRemoteSocketAddressBytes(socketAddress.size(), get(socketAddress)));
}

template <typename D> void impl_IXboxLiveEndpointPair<D>::GetLocalSocketAddressBytes(array_ref<uint8_t> socketAddress) const
{
    check_hresult(shim()->abi_GetLocalSocketAddressBytes(socketAddress.size(), get(socketAddress)));
}

template <typename D> Windows::Networking::XboxLive::XboxLiveEndpointPairState impl_IXboxLiveEndpointPair<D>::State() const
{
    Windows::Networking::XboxLive::XboxLiveEndpointPairState value {};
    check_hresult(shim()->get_State(&value));
    return value;
}

template <typename D> Windows::Networking::XboxLive::XboxLiveEndpointPairTemplate impl_IXboxLiveEndpointPair<D>::Template() const
{
    Windows::Networking::XboxLive::XboxLiveEndpointPairTemplate value { nullptr };
    check_hresult(shim()->get_Template(put(value)));
    return value;
}

template <typename D> Windows::Networking::XboxLive::XboxLiveDeviceAddress impl_IXboxLiveEndpointPair<D>::RemoteDeviceAddress() const
{
    Windows::Networking::XboxLive::XboxLiveDeviceAddress value { nullptr };
    check_hresult(shim()->get_RemoteDeviceAddress(put(value)));
    return value;
}

template <typename D> Windows::Networking::HostName impl_IXboxLiveEndpointPair<D>::RemoteHostName() const
{
    Windows::Networking::HostName value { nullptr };
    check_hresult(shim()->get_RemoteHostName(put(value)));
    return value;
}

template <typename D> hstring impl_IXboxLiveEndpointPair<D>::RemotePort() const
{
    hstring value;
    check_hresult(shim()->get_RemotePort(put(value)));
    return value;
}

template <typename D> Windows::Networking::HostName impl_IXboxLiveEndpointPair<D>::LocalHostName() const
{
    Windows::Networking::HostName value { nullptr };
    check_hresult(shim()->get_LocalHostName(put(value)));
    return value;
}

template <typename D> hstring impl_IXboxLiveEndpointPair<D>::LocalPort() const
{
    hstring value;
    check_hresult(shim()->get_LocalPort(put(value)));
    return value;
}

template <typename D> Windows::Networking::XboxLive::XboxLiveQualityOfServiceMeasurementStatus impl_IXboxLiveQualityOfServiceMetricResult<D>::Status() const
{
    Windows::Networking::XboxLive::XboxLiveQualityOfServiceMeasurementStatus value {};
    check_hresult(shim()->get_Status(&value));
    return value;
}

template <typename D> Windows::Networking::XboxLive::XboxLiveDeviceAddress impl_IXboxLiveQualityOfServiceMetricResult<D>::DeviceAddress() const
{
    Windows::Networking::XboxLive::XboxLiveDeviceAddress value { nullptr };
    check_hresult(shim()->get_DeviceAddress(put(value)));
    return value;
}

template <typename D> Windows::Networking::XboxLive::XboxLiveQualityOfServiceMetric impl_IXboxLiveQualityOfServiceMetricResult<D>::Metric() const
{
    Windows::Networking::XboxLive::XboxLiveQualityOfServiceMetric value {};
    check_hresult(shim()->get_Metric(&value));
    return value;
}

template <typename D> uint64_t impl_IXboxLiveQualityOfServiceMetricResult<D>::Value() const
{
    uint64_t value {};
    check_hresult(shim()->get_Value(&value));
    return value;
}

template <typename D> Windows::Networking::XboxLive::XboxLiveQualityOfServiceMeasurementStatus impl_IXboxLiveQualityOfServicePrivatePayloadResult<D>::Status() const
{
    Windows::Networking::XboxLive::XboxLiveQualityOfServiceMeasurementStatus value {};
    check_hresult(shim()->get_Status(&value));
    return value;
}

template <typename D> Windows::Networking::XboxLive::XboxLiveDeviceAddress impl_IXboxLiveQualityOfServicePrivatePayloadResult<D>::DeviceAddress() const
{
    Windows::Networking::XboxLive::XboxLiveDeviceAddress value { nullptr };
    check_hresult(shim()->get_DeviceAddress(put(value)));
    return value;
}

template <typename D> Windows::Storage::Streams::IBuffer impl_IXboxLiveQualityOfServicePrivatePayloadResult<D>::Value() const
{
    Windows::Storage::Streams::IBuffer value;
    check_hresult(shim()->get_Value(put(value)));
    return value;
}

template <typename D> void impl_IXboxLiveQualityOfServiceMeasurementStatics<D>::PublishPrivatePayloadBytes(array_ref<const uint8_t> payload) const
{
    check_hresult(shim()->abi_PublishPrivatePayloadBytes(payload.size(), get(payload)));
}

template <typename D> void impl_IXboxLiveQualityOfServiceMeasurementStatics<D>::ClearPrivatePayload() const
{
    check_hresult(shim()->abi_ClearPrivatePayload());
}

template <typename D> uint32_t impl_IXboxLiveQualityOfServiceMeasurementStatics<D>::MaxSimultaneousProbeConnections() const
{
    uint32_t value {};
    check_hresult(shim()->get_MaxSimultaneousProbeConnections(&value));
    return value;
}

template <typename D> void impl_IXboxLiveQualityOfServiceMeasurementStatics<D>::MaxSimultaneousProbeConnections(uint32_t value) const
{
    check_hresult(shim()->put_MaxSimultaneousProbeConnections(value));
}

template <typename D> bool impl_IXboxLiveQualityOfServiceMeasurementStatics<D>::IsSystemOutboundBandwidthConstrained() const
{
    bool value {};
    check_hresult(shim()->get_IsSystemOutboundBandwidthConstrained(&value));
    return value;
}

template <typename D> void impl_IXboxLiveQualityOfServiceMeasurementStatics<D>::IsSystemOutboundBandwidthConstrained(bool value) const
{
    check_hresult(shim()->put_IsSystemOutboundBandwidthConstrained(value));
}

template <typename D> bool impl_IXboxLiveQualityOfServiceMeasurementStatics<D>::IsSystemInboundBandwidthConstrained() const
{
    bool value {};
    check_hresult(shim()->get_IsSystemInboundBandwidthConstrained(&value));
    return value;
}

template <typename D> void impl_IXboxLiveQualityOfServiceMeasurementStatics<D>::IsSystemInboundBandwidthConstrained(bool value) const
{
    check_hresult(shim()->put_IsSystemInboundBandwidthConstrained(value));
}

template <typename D> Windows::Storage::Streams::IBuffer impl_IXboxLiveQualityOfServiceMeasurementStatics<D>::PublishedPrivatePayload() const
{
    Windows::Storage::Streams::IBuffer value;
    check_hresult(shim()->get_PublishedPrivatePayload(put(value)));
    return value;
}

template <typename D> void impl_IXboxLiveQualityOfServiceMeasurementStatics<D>::PublishedPrivatePayload(const Windows::Storage::Streams::IBuffer & value) const
{
    check_hresult(shim()->put_PublishedPrivatePayload(get(value)));
}

template <typename D> uint32_t impl_IXboxLiveQualityOfServiceMeasurementStatics<D>::MaxPrivatePayloadSize() const
{
    uint32_t value {};
    check_hresult(shim()->get_MaxPrivatePayloadSize(&value));
    return value;
}

template <typename D> Windows::Foundation::IAsyncAction impl_IXboxLiveQualityOfServiceMeasurement<D>::MeasureAsync() const
{
    Windows::Foundation::IAsyncAction action;
    check_hresult(shim()->abi_MeasureAsync(put(action)));
    return action;
}

template <typename D> Windows::Foundation::Collections::IVectorView<Windows::Networking::XboxLive::XboxLiveQualityOfServiceMetricResult> impl_IXboxLiveQualityOfServiceMeasurement<D>::GetMetricResultsForDevice(const Windows::Networking::XboxLive::XboxLiveDeviceAddress & deviceAddress) const
{
    Windows::Foundation::Collections::IVectorView<Windows::Networking::XboxLive::XboxLiveQualityOfServiceMetricResult> value;
    check_hresult(shim()->abi_GetMetricResultsForDevice(get(deviceAddress), put(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVectorView<Windows::Networking::XboxLive::XboxLiveQualityOfServiceMetricResult> impl_IXboxLiveQualityOfServiceMeasurement<D>::GetMetricResultsForMetric(Windows::Networking::XboxLive::XboxLiveQualityOfServiceMetric metric) const
{
    Windows::Foundation::Collections::IVectorView<Windows::Networking::XboxLive::XboxLiveQualityOfServiceMetricResult> value;
    check_hresult(shim()->abi_GetMetricResultsForMetric(metric, put(value)));
    return value;
}

template <typename D> Windows::Networking::XboxLive::XboxLiveQualityOfServiceMetricResult impl_IXboxLiveQualityOfServiceMeasurement<D>::GetMetricResult(const Windows::Networking::XboxLive::XboxLiveDeviceAddress & deviceAddress, Windows::Networking::XboxLive::XboxLiveQualityOfServiceMetric metric) const
{
    Windows::Networking::XboxLive::XboxLiveQualityOfServiceMetricResult value { nullptr };
    check_hresult(shim()->abi_GetMetricResult(get(deviceAddress), metric, put(value)));
    return value;
}

template <typename D> Windows::Networking::XboxLive::XboxLiveQualityOfServicePrivatePayloadResult impl_IXboxLiveQualityOfServiceMeasurement<D>::GetPrivatePayloadResult(const Windows::Networking::XboxLive::XboxLiveDeviceAddress & deviceAddress) const
{
    Windows::Networking::XboxLive::XboxLiveQualityOfServicePrivatePayloadResult value { nullptr };
    check_hresult(shim()->abi_GetPrivatePayloadResult(get(deviceAddress), put(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVector<winrt::Windows::Networking::XboxLive::XboxLiveQualityOfServiceMetric> impl_IXboxLiveQualityOfServiceMeasurement<D>::Metrics() const
{
    Windows::Foundation::Collections::IVector<winrt::Windows::Networking::XboxLive::XboxLiveQualityOfServiceMetric> value;
    check_hresult(shim()->get_Metrics(put(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVector<Windows::Networking::XboxLive::XboxLiveDeviceAddress> impl_IXboxLiveQualityOfServiceMeasurement<D>::DeviceAddresses() const
{
    Windows::Foundation::Collections::IVector<Windows::Networking::XboxLive::XboxLiveDeviceAddress> value;
    check_hresult(shim()->get_DeviceAddresses(put(value)));
    return value;
}

template <typename D> bool impl_IXboxLiveQualityOfServiceMeasurement<D>::ShouldRequestPrivatePayloads() const
{
    bool value {};
    check_hresult(shim()->get_ShouldRequestPrivatePayloads(&value));
    return value;
}

template <typename D> void impl_IXboxLiveQualityOfServiceMeasurement<D>::ShouldRequestPrivatePayloads(bool value) const
{
    check_hresult(shim()->put_ShouldRequestPrivatePayloads(value));
}

template <typename D> uint32_t impl_IXboxLiveQualityOfServiceMeasurement<D>::TimeoutInMilliseconds() const
{
    uint32_t value {};
    check_hresult(shim()->get_TimeoutInMilliseconds(&value));
    return value;
}

template <typename D> void impl_IXboxLiveQualityOfServiceMeasurement<D>::TimeoutInMilliseconds(uint32_t value) const
{
    check_hresult(shim()->put_TimeoutInMilliseconds(value));
}

template <typename D> uint32_t impl_IXboxLiveQualityOfServiceMeasurement<D>::NumberOfProbesToAttempt() const
{
    uint32_t value {};
    check_hresult(shim()->get_NumberOfProbesToAttempt(&value));
    return value;
}

template <typename D> void impl_IXboxLiveQualityOfServiceMeasurement<D>::NumberOfProbesToAttempt(uint32_t value) const
{
    check_hresult(shim()->put_NumberOfProbesToAttempt(value));
}

template <typename D> uint32_t impl_IXboxLiveQualityOfServiceMeasurement<D>::NumberOfResultsPending() const
{
    uint32_t value {};
    check_hresult(shim()->get_NumberOfResultsPending(&value));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVectorView<Windows::Networking::XboxLive::XboxLiveQualityOfServiceMetricResult> impl_IXboxLiveQualityOfServiceMeasurement<D>::MetricResults() const
{
    Windows::Foundation::Collections::IVectorView<Windows::Networking::XboxLive::XboxLiveQualityOfServiceMetricResult> value;
    check_hresult(shim()->get_MetricResults(put(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVectorView<Windows::Networking::XboxLive::XboxLiveQualityOfServicePrivatePayloadResult> impl_IXboxLiveQualityOfServiceMeasurement<D>::PrivatePayloadResults() const
{
    Windows::Foundation::Collections::IVectorView<Windows::Networking::XboxLive::XboxLiveQualityOfServicePrivatePayloadResult> value;
    check_hresult(shim()->get_PrivatePayloadResults(put(value)));
    return value;
}

inline Windows::Networking::XboxLive::XboxLiveDeviceAddress XboxLiveDeviceAddress::CreateFromSnapshotBase64(hstring_ref base64)
{
    return get_activation_factory<XboxLiveDeviceAddress, IXboxLiveDeviceAddressStatics>().CreateFromSnapshotBase64(base64);
}

inline Windows::Networking::XboxLive::XboxLiveDeviceAddress XboxLiveDeviceAddress::CreateFromSnapshotBuffer(const Windows::Storage::Streams::IBuffer & buffer)
{
    return get_activation_factory<XboxLiveDeviceAddress, IXboxLiveDeviceAddressStatics>().CreateFromSnapshotBuffer(buffer);
}

inline Windows::Networking::XboxLive::XboxLiveDeviceAddress XboxLiveDeviceAddress::CreateFromSnapshotBytes(array_ref<const uint8_t> buffer)
{
    return get_activation_factory<XboxLiveDeviceAddress, IXboxLiveDeviceAddressStatics>().CreateFromSnapshotBytes(buffer);
}

inline Windows::Networking::XboxLive::XboxLiveDeviceAddress XboxLiveDeviceAddress::GetLocal()
{
    return get_activation_factory<XboxLiveDeviceAddress, IXboxLiveDeviceAddressStatics>().GetLocal();
}

inline uint32_t XboxLiveDeviceAddress::MaxSnapshotBytesSize()
{
    return get_activation_factory<XboxLiveDeviceAddress, IXboxLiveDeviceAddressStatics>().MaxSnapshotBytesSize();
}

inline Windows::Networking::XboxLive::XboxLiveEndpointPair XboxLiveEndpointPair::FindEndpointPairBySocketAddressBytes(array_ref<const uint8_t> localSocketAddress, array_ref<const uint8_t> remoteSocketAddress)
{
    return get_activation_factory<XboxLiveEndpointPair, IXboxLiveEndpointPairStatics>().FindEndpointPairBySocketAddressBytes(localSocketAddress, remoteSocketAddress);
}

inline Windows::Networking::XboxLive::XboxLiveEndpointPair XboxLiveEndpointPair::FindEndpointPairByHostNamesAndPorts(const Windows::Networking::HostName & localHostName, hstring_ref localPort, const Windows::Networking::HostName & remoteHostName, hstring_ref remotePort)
{
    return get_activation_factory<XboxLiveEndpointPair, IXboxLiveEndpointPairStatics>().FindEndpointPairByHostNamesAndPorts(localHostName, localPort, remoteHostName, remotePort);
}

inline Windows::Networking::XboxLive::XboxLiveEndpointPairTemplate XboxLiveEndpointPairTemplate::GetTemplateByName(hstring_ref name)
{
    return get_activation_factory<XboxLiveEndpointPairTemplate, IXboxLiveEndpointPairTemplateStatics>().GetTemplateByName(name);
}

inline Windows::Foundation::Collections::IVectorView<Windows::Networking::XboxLive::XboxLiveEndpointPairTemplate> XboxLiveEndpointPairTemplate::Templates()
{
    return get_activation_factory<XboxLiveEndpointPairTemplate, IXboxLiveEndpointPairTemplateStatics>().Templates();
}

inline XboxLiveQualityOfServiceMeasurement::XboxLiveQualityOfServiceMeasurement() :
    XboxLiveQualityOfServiceMeasurement(activate_instance<XboxLiveQualityOfServiceMeasurement>())
{}

inline void XboxLiveQualityOfServiceMeasurement::PublishPrivatePayloadBytes(array_ref<const uint8_t> payload)
{
    get_activation_factory<XboxLiveQualityOfServiceMeasurement, IXboxLiveQualityOfServiceMeasurementStatics>().PublishPrivatePayloadBytes(payload);
}

inline void XboxLiveQualityOfServiceMeasurement::ClearPrivatePayload()
{
    get_activation_factory<XboxLiveQualityOfServiceMeasurement, IXboxLiveQualityOfServiceMeasurementStatics>().ClearPrivatePayload();
}

inline uint32_t XboxLiveQualityOfServiceMeasurement::MaxSimultaneousProbeConnections()
{
    return get_activation_factory<XboxLiveQualityOfServiceMeasurement, IXboxLiveQualityOfServiceMeasurementStatics>().MaxSimultaneousProbeConnections();
}

inline void XboxLiveQualityOfServiceMeasurement::MaxSimultaneousProbeConnections(uint32_t value)
{
    get_activation_factory<XboxLiveQualityOfServiceMeasurement, IXboxLiveQualityOfServiceMeasurementStatics>().MaxSimultaneousProbeConnections(value);
}

inline bool XboxLiveQualityOfServiceMeasurement::IsSystemOutboundBandwidthConstrained()
{
    return get_activation_factory<XboxLiveQualityOfServiceMeasurement, IXboxLiveQualityOfServiceMeasurementStatics>().IsSystemOutboundBandwidthConstrained();
}

inline void XboxLiveQualityOfServiceMeasurement::IsSystemOutboundBandwidthConstrained(bool value)
{
    get_activation_factory<XboxLiveQualityOfServiceMeasurement, IXboxLiveQualityOfServiceMeasurementStatics>().IsSystemOutboundBandwidthConstrained(value);
}

inline bool XboxLiveQualityOfServiceMeasurement::IsSystemInboundBandwidthConstrained()
{
    return get_activation_factory<XboxLiveQualityOfServiceMeasurement, IXboxLiveQualityOfServiceMeasurementStatics>().IsSystemInboundBandwidthConstrained();
}

inline void XboxLiveQualityOfServiceMeasurement::IsSystemInboundBandwidthConstrained(bool value)
{
    get_activation_factory<XboxLiveQualityOfServiceMeasurement, IXboxLiveQualityOfServiceMeasurementStatics>().IsSystemInboundBandwidthConstrained(value);
}

inline Windows::Storage::Streams::IBuffer XboxLiveQualityOfServiceMeasurement::PublishedPrivatePayload()
{
    return get_activation_factory<XboxLiveQualityOfServiceMeasurement, IXboxLiveQualityOfServiceMeasurementStatics>().PublishedPrivatePayload();
}

inline void XboxLiveQualityOfServiceMeasurement::PublishedPrivatePayload(const Windows::Storage::Streams::IBuffer & value)
{
    get_activation_factory<XboxLiveQualityOfServiceMeasurement, IXboxLiveQualityOfServiceMeasurementStatics>().PublishedPrivatePayload(value);
}

inline uint32_t XboxLiveQualityOfServiceMeasurement::MaxPrivatePayloadSize()
{
    return get_activation_factory<XboxLiveQualityOfServiceMeasurement, IXboxLiveQualityOfServiceMeasurementStatics>().MaxPrivatePayloadSize();
}

}

}
