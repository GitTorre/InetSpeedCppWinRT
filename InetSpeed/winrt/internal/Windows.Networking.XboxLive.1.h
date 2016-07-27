// C++ for the Windows Runtime v1.29
// Copyright (c) 2016 Microsoft Corporation

#pragma once

#include "base.h"
#include "Windows.Networking.XboxLive.0.h"
#include "Windows.Foundation.0.h"
#include "Windows.Networking.0.h"
#include "Windows.Storage.Streams.0.h"
#include "Windows.Foundation.1.h"
#include "Windows.Foundation.Collections.1.h"

WINRT_EXPORT namespace winrt {

namespace ABI::Windows::Networking::XboxLive {

struct __declspec(uuid("f5bbd279-3c86-4b57-a31a-b9462408fd01")) __declspec(novtable) IXboxLiveDeviceAddress : Windows::IInspectable
{
    virtual HRESULT __stdcall add_SnapshotChanged(Windows::Foundation::TypedEventHandler<Windows::Networking::XboxLive::XboxLiveDeviceAddress, Windows::IInspectable> * handler, event_token * token) = 0;
    virtual HRESULT __stdcall remove_SnapshotChanged(event_token token) = 0;
    virtual HRESULT __stdcall abi_GetSnapshotAsBase64(hstring * value) = 0;
    virtual HRESULT __stdcall abi_GetSnapshotAsBuffer(Windows::Storage::Streams::IBuffer ** value) = 0;
    virtual HRESULT __stdcall abi_GetSnapshotAsBytes(uint32_t __bufferSize, uint8_t * buffer, uint32_t * bytesWritten) = 0;
    virtual HRESULT __stdcall abi_Compare(Windows::Networking::XboxLive::IXboxLiveDeviceAddress * otherDeviceAddress, int32_t * result) = 0;
    virtual HRESULT __stdcall get_IsValid(bool * value) = 0;
    virtual HRESULT __stdcall get_IsLocal(bool * value) = 0;
    virtual HRESULT __stdcall get_NetworkAccessKind(winrt::Windows::Networking::XboxLive::XboxLiveNetworkAccessKind * value) = 0;
};

struct __declspec(uuid("5954a819-4a79-4931-827c-7f503e963263")) __declspec(novtable) IXboxLiveDeviceAddressStatics : Windows::IInspectable
{
    virtual HRESULT __stdcall abi_CreateFromSnapshotBase64(hstring base64, Windows::Networking::XboxLive::IXboxLiveDeviceAddress ** value) = 0;
    virtual HRESULT __stdcall abi_CreateFromSnapshotBuffer(Windows::Storage::Streams::IBuffer * buffer, Windows::Networking::XboxLive::IXboxLiveDeviceAddress ** value) = 0;
    virtual HRESULT __stdcall abi_CreateFromSnapshotBytes(uint32_t __bufferSize, uint8_t * buffer, Windows::Networking::XboxLive::IXboxLiveDeviceAddress ** value) = 0;
    virtual HRESULT __stdcall abi_GetLocal(Windows::Networking::XboxLive::IXboxLiveDeviceAddress ** value) = 0;
    virtual HRESULT __stdcall get_MaxSnapshotBytesSize(uint32_t * value) = 0;
};

struct __declspec(uuid("1e9a839b-813e-44e0-b87f-c87a093475e4")) __declspec(novtable) IXboxLiveEndpointPair : Windows::IInspectable
{
    virtual HRESULT __stdcall add_StateChanged(Windows::Foundation::TypedEventHandler<Windows::Networking::XboxLive::XboxLiveEndpointPair, Windows::Networking::XboxLive::XboxLiveEndpointPairStateChangedEventArgs> * handler, event_token * token) = 0;
    virtual HRESULT __stdcall remove_StateChanged(event_token token) = 0;
    virtual HRESULT __stdcall abi_DeleteAsync(Windows::Foundation::IAsyncAction ** action) = 0;
    virtual HRESULT __stdcall abi_GetRemoteSocketAddressBytes(uint32_t __socketAddressSize, uint8_t * socketAddress) = 0;
    virtual HRESULT __stdcall abi_GetLocalSocketAddressBytes(uint32_t __socketAddressSize, uint8_t * socketAddress) = 0;
    virtual HRESULT __stdcall get_State(winrt::Windows::Networking::XboxLive::XboxLiveEndpointPairState * value) = 0;
    virtual HRESULT __stdcall get_Template(Windows::Networking::XboxLive::IXboxLiveEndpointPairTemplate ** value) = 0;
    virtual HRESULT __stdcall get_RemoteDeviceAddress(Windows::Networking::XboxLive::IXboxLiveDeviceAddress ** value) = 0;
    virtual HRESULT __stdcall get_RemoteHostName(Windows::Networking::IHostName ** value) = 0;
    virtual HRESULT __stdcall get_RemotePort(hstring * value) = 0;
    virtual HRESULT __stdcall get_LocalHostName(Windows::Networking::IHostName ** value) = 0;
    virtual HRESULT __stdcall get_LocalPort(hstring * value) = 0;
};

struct __declspec(uuid("d9a8bb95-2aab-4d1e-9794-33ecc0dcf0fe")) __declspec(novtable) IXboxLiveEndpointPairCreationResult : Windows::IInspectable
{
    virtual HRESULT __stdcall get_DeviceAddress(Windows::Networking::XboxLive::IXboxLiveDeviceAddress ** value) = 0;
    virtual HRESULT __stdcall get_Status(winrt::Windows::Networking::XboxLive::XboxLiveEndpointPairCreationStatus * value) = 0;
    virtual HRESULT __stdcall get_IsExistingPathEvaluation(bool * value) = 0;
    virtual HRESULT __stdcall get_EndpointPair(Windows::Networking::XboxLive::IXboxLiveEndpointPair ** value) = 0;
};

struct __declspec(uuid("592e3b55-de08-44e7-ac3b-b9b9a169583a")) __declspec(novtable) IXboxLiveEndpointPairStateChangedEventArgs : Windows::IInspectable
{
    virtual HRESULT __stdcall get_OldState(winrt::Windows::Networking::XboxLive::XboxLiveEndpointPairState * value) = 0;
    virtual HRESULT __stdcall get_NewState(winrt::Windows::Networking::XboxLive::XboxLiveEndpointPairState * value) = 0;
};

struct __declspec(uuid("64316b30-217a-4243-8ee1-6729281d27db")) __declspec(novtable) IXboxLiveEndpointPairStatics : Windows::IInspectable
{
    virtual HRESULT __stdcall abi_FindEndpointPairBySocketAddressBytes(uint32_t __localSocketAddressSize, uint8_t * localSocketAddress, uint32_t __remoteSocketAddressSize, uint8_t * remoteSocketAddress, Windows::Networking::XboxLive::IXboxLiveEndpointPair ** endpointPair) = 0;
    virtual HRESULT __stdcall abi_FindEndpointPairByHostNamesAndPorts(Windows::Networking::IHostName * localHostName, hstring localPort, Windows::Networking::IHostName * remoteHostName, hstring remotePort, Windows::Networking::XboxLive::IXboxLiveEndpointPair ** endpointPair) = 0;
};

struct __declspec(uuid("6b286ecf-3457-40ce-b9a1-c0cfe0213ea7")) __declspec(novtable) IXboxLiveEndpointPairTemplate : Windows::IInspectable
{
    virtual HRESULT __stdcall add_InboundEndpointPairCreated(Windows::Foundation::TypedEventHandler<Windows::Networking::XboxLive::XboxLiveEndpointPairTemplate, Windows::Networking::XboxLive::XboxLiveInboundEndpointPairCreatedEventArgs> * handler, event_token * token) = 0;
    virtual HRESULT __stdcall remove_InboundEndpointPairCreated(event_token token) = 0;
    virtual HRESULT __stdcall abi_CreateEndpointPairDefaultAsync(Windows::Networking::XboxLive::IXboxLiveDeviceAddress * deviceAddress, Windows::Foundation::IAsyncOperation<Windows::Networking::XboxLive::XboxLiveEndpointPairCreationResult> ** operation) = 0;
    virtual HRESULT __stdcall abi_CreateEndpointPairWithBehaviorsAsync(Windows::Networking::XboxLive::IXboxLiveDeviceAddress * deviceAddress, winrt::Windows::Networking::XboxLive::XboxLiveEndpointPairCreationBehaviors behaviors, Windows::Foundation::IAsyncOperation<Windows::Networking::XboxLive::XboxLiveEndpointPairCreationResult> ** operation) = 0;
    virtual HRESULT __stdcall abi_CreateEndpointPairForPortsDefaultAsync(Windows::Networking::XboxLive::IXboxLiveDeviceAddress * deviceAddress, hstring initiatorPort, hstring acceptorPort, Windows::Foundation::IAsyncOperation<Windows::Networking::XboxLive::XboxLiveEndpointPairCreationResult> ** operation) = 0;
    virtual HRESULT __stdcall abi_CreateEndpointPairForPortsWithBehaviorsAsync(Windows::Networking::XboxLive::IXboxLiveDeviceAddress * deviceAddress, hstring initiatorPort, hstring acceptorPort, winrt::Windows::Networking::XboxLive::XboxLiveEndpointPairCreationBehaviors behaviors, Windows::Foundation::IAsyncOperation<Windows::Networking::XboxLive::XboxLiveEndpointPairCreationResult> ** operation) = 0;
    virtual HRESULT __stdcall get_Name(hstring * value) = 0;
    virtual HRESULT __stdcall get_SocketKind(winrt::Windows::Networking::XboxLive::XboxLiveSocketKind * value) = 0;
    virtual HRESULT __stdcall get_InitiatorBoundPortRangeLower(uint16_t * value) = 0;
    virtual HRESULT __stdcall get_InitiatorBoundPortRangeUpper(uint16_t * value) = 0;
    virtual HRESULT __stdcall get_AcceptorBoundPortRangeLower(uint16_t * value) = 0;
    virtual HRESULT __stdcall get_AcceptorBoundPortRangeUpper(uint16_t * value) = 0;
    virtual HRESULT __stdcall get_EndpointPairs(Windows::Foundation::Collections::IVectorView<Windows::Networking::XboxLive::XboxLiveEndpointPair> ** value) = 0;
};

struct __declspec(uuid("1e13137b-737b-4a23-bc64-0870f75655ba")) __declspec(novtable) IXboxLiveEndpointPairTemplateStatics : Windows::IInspectable
{
    virtual HRESULT __stdcall abi_GetTemplateByName(hstring name, Windows::Networking::XboxLive::IXboxLiveEndpointPairTemplate ** namedTemplate) = 0;
    virtual HRESULT __stdcall get_Templates(Windows::Foundation::Collections::IVectorView<Windows::Networking::XboxLive::XboxLiveEndpointPairTemplate> ** value) = 0;
};

struct __declspec(uuid("dc183b62-22ba-48d2-80de-c23968bd198b")) __declspec(novtable) IXboxLiveInboundEndpointPairCreatedEventArgs : Windows::IInspectable
{
    virtual HRESULT __stdcall get_EndpointPair(Windows::Networking::XboxLive::IXboxLiveEndpointPair ** value) = 0;
};

struct __declspec(uuid("4d682bce-a5d6-47e6-a236-cfde5fbdf2ed")) __declspec(novtable) IXboxLiveQualityOfServiceMeasurement : Windows::IInspectable
{
    virtual HRESULT __stdcall abi_MeasureAsync(Windows::Foundation::IAsyncAction ** action) = 0;
    virtual HRESULT __stdcall abi_GetMetricResultsForDevice(Windows::Networking::XboxLive::IXboxLiveDeviceAddress * deviceAddress, Windows::Foundation::Collections::IVectorView<Windows::Networking::XboxLive::XboxLiveQualityOfServiceMetricResult> ** value) = 0;
    virtual HRESULT __stdcall abi_GetMetricResultsForMetric(winrt::Windows::Networking::XboxLive::XboxLiveQualityOfServiceMetric metric, Windows::Foundation::Collections::IVectorView<Windows::Networking::XboxLive::XboxLiveQualityOfServiceMetricResult> ** value) = 0;
    virtual HRESULT __stdcall abi_GetMetricResult(Windows::Networking::XboxLive::IXboxLiveDeviceAddress * deviceAddress, winrt::Windows::Networking::XboxLive::XboxLiveQualityOfServiceMetric metric, Windows::Networking::XboxLive::IXboxLiveQualityOfServiceMetricResult ** value) = 0;
    virtual HRESULT __stdcall abi_GetPrivatePayloadResult(Windows::Networking::XboxLive::IXboxLiveDeviceAddress * deviceAddress, Windows::Networking::XboxLive::IXboxLiveQualityOfServicePrivatePayloadResult ** value) = 0;
    virtual HRESULT __stdcall get_Metrics(Windows::Foundation::Collections::IVector<winrt::Windows::Networking::XboxLive::XboxLiveQualityOfServiceMetric> ** value) = 0;
    virtual HRESULT __stdcall get_DeviceAddresses(Windows::Foundation::Collections::IVector<Windows::Networking::XboxLive::XboxLiveDeviceAddress> ** value) = 0;
    virtual HRESULT __stdcall get_ShouldRequestPrivatePayloads(bool * value) = 0;
    virtual HRESULT __stdcall put_ShouldRequestPrivatePayloads(bool value) = 0;
    virtual HRESULT __stdcall get_TimeoutInMilliseconds(uint32_t * value) = 0;
    virtual HRESULT __stdcall put_TimeoutInMilliseconds(uint32_t value) = 0;
    virtual HRESULT __stdcall get_NumberOfProbesToAttempt(uint32_t * value) = 0;
    virtual HRESULT __stdcall put_NumberOfProbesToAttempt(uint32_t value) = 0;
    virtual HRESULT __stdcall get_NumberOfResultsPending(uint32_t * value) = 0;
    virtual HRESULT __stdcall get_MetricResults(Windows::Foundation::Collections::IVectorView<Windows::Networking::XboxLive::XboxLiveQualityOfServiceMetricResult> ** value) = 0;
    virtual HRESULT __stdcall get_PrivatePayloadResults(Windows::Foundation::Collections::IVectorView<Windows::Networking::XboxLive::XboxLiveQualityOfServicePrivatePayloadResult> ** value) = 0;
};

struct __declspec(uuid("6e352dca-23cf-440a-b077-5e30857a8234")) __declspec(novtable) IXboxLiveQualityOfServiceMeasurementStatics : Windows::IInspectable
{
    virtual HRESULT __stdcall abi_PublishPrivatePayloadBytes(uint32_t __payloadSize, uint8_t * payload) = 0;
    virtual HRESULT __stdcall abi_ClearPrivatePayload() = 0;
    virtual HRESULT __stdcall get_MaxSimultaneousProbeConnections(uint32_t * value) = 0;
    virtual HRESULT __stdcall put_MaxSimultaneousProbeConnections(uint32_t value) = 0;
    virtual HRESULT __stdcall get_IsSystemOutboundBandwidthConstrained(bool * value) = 0;
    virtual HRESULT __stdcall put_IsSystemOutboundBandwidthConstrained(bool value) = 0;
    virtual HRESULT __stdcall get_IsSystemInboundBandwidthConstrained(bool * value) = 0;
    virtual HRESULT __stdcall put_IsSystemInboundBandwidthConstrained(bool value) = 0;
    virtual HRESULT __stdcall get_PublishedPrivatePayload(Windows::Storage::Streams::IBuffer ** value) = 0;
    virtual HRESULT __stdcall put_PublishedPrivatePayload(Windows::Storage::Streams::IBuffer * value) = 0;
    virtual HRESULT __stdcall get_MaxPrivatePayloadSize(uint32_t * value) = 0;
};

struct __declspec(uuid("aeec53d1-3561-4782-b0cf-d3ae29d9fa87")) __declspec(novtable) IXboxLiveQualityOfServiceMetricResult : Windows::IInspectable
{
    virtual HRESULT __stdcall get_Status(winrt::Windows::Networking::XboxLive::XboxLiveQualityOfServiceMeasurementStatus * value) = 0;
    virtual HRESULT __stdcall get_DeviceAddress(Windows::Networking::XboxLive::IXboxLiveDeviceAddress ** value) = 0;
    virtual HRESULT __stdcall get_Metric(winrt::Windows::Networking::XboxLive::XboxLiveQualityOfServiceMetric * value) = 0;
    virtual HRESULT __stdcall get_Value(uint64_t * value) = 0;
};

struct __declspec(uuid("5a6302ae-6f38-41c0-9fcc-ea6cb978cafc")) __declspec(novtable) IXboxLiveQualityOfServicePrivatePayloadResult : Windows::IInspectable
{
    virtual HRESULT __stdcall get_Status(winrt::Windows::Networking::XboxLive::XboxLiveQualityOfServiceMeasurementStatus * value) = 0;
    virtual HRESULT __stdcall get_DeviceAddress(Windows::Networking::XboxLive::IXboxLiveDeviceAddress ** value) = 0;
    virtual HRESULT __stdcall get_Value(Windows::Storage::Streams::IBuffer ** value) = 0;
};

}

namespace ABI {

template <> struct traits<Windows::Networking::XboxLive::XboxLiveDeviceAddress> { using default_interface = Windows::Networking::XboxLive::IXboxLiveDeviceAddress; };
template <> struct traits<Windows::Networking::XboxLive::XboxLiveEndpointPair> { using default_interface = Windows::Networking::XboxLive::IXboxLiveEndpointPair; };
template <> struct traits<Windows::Networking::XboxLive::XboxLiveEndpointPairCreationResult> { using default_interface = Windows::Networking::XboxLive::IXboxLiveEndpointPairCreationResult; };
template <> struct traits<Windows::Networking::XboxLive::XboxLiveEndpointPairStateChangedEventArgs> { using default_interface = Windows::Networking::XboxLive::IXboxLiveEndpointPairStateChangedEventArgs; };
template <> struct traits<Windows::Networking::XboxLive::XboxLiveEndpointPairTemplate> { using default_interface = Windows::Networking::XboxLive::IXboxLiveEndpointPairTemplate; };
template <> struct traits<Windows::Networking::XboxLive::XboxLiveInboundEndpointPairCreatedEventArgs> { using default_interface = Windows::Networking::XboxLive::IXboxLiveInboundEndpointPairCreatedEventArgs; };
template <> struct traits<Windows::Networking::XboxLive::XboxLiveQualityOfServiceMeasurement> { using default_interface = Windows::Networking::XboxLive::IXboxLiveQualityOfServiceMeasurement; };
template <> struct traits<Windows::Networking::XboxLive::XboxLiveQualityOfServiceMetricResult> { using default_interface = Windows::Networking::XboxLive::IXboxLiveQualityOfServiceMetricResult; };
template <> struct traits<Windows::Networking::XboxLive::XboxLiveQualityOfServicePrivatePayloadResult> { using default_interface = Windows::Networking::XboxLive::IXboxLiveQualityOfServicePrivatePayloadResult; };

}

namespace Windows::Networking::XboxLive {

template <typename T> class impl_IXboxLiveDeviceAddress;
template <typename T> class impl_IXboxLiveDeviceAddressStatics;
template <typename T> class impl_IXboxLiveEndpointPair;
template <typename T> class impl_IXboxLiveEndpointPairCreationResult;
template <typename T> class impl_IXboxLiveEndpointPairStateChangedEventArgs;
template <typename T> class impl_IXboxLiveEndpointPairStatics;
template <typename T> class impl_IXboxLiveEndpointPairTemplate;
template <typename T> class impl_IXboxLiveEndpointPairTemplateStatics;
template <typename T> class impl_IXboxLiveInboundEndpointPairCreatedEventArgs;
template <typename T> class impl_IXboxLiveQualityOfServiceMeasurement;
template <typename T> class impl_IXboxLiveQualityOfServiceMeasurementStatics;
template <typename T> class impl_IXboxLiveQualityOfServiceMetricResult;
template <typename T> class impl_IXboxLiveQualityOfServicePrivatePayloadResult;

}

namespace impl {

template <> struct traits<Windows::Networking::XboxLive::IXboxLiveDeviceAddress>
{
    using abi = ABI::Windows::Networking::XboxLive::IXboxLiveDeviceAddress;
    template <typename D> using consume = Windows::Networking::XboxLive::impl_IXboxLiveDeviceAddress<D>;
};

template <> struct traits<Windows::Networking::XboxLive::IXboxLiveDeviceAddressStatics>
{
    using abi = ABI::Windows::Networking::XboxLive::IXboxLiveDeviceAddressStatics;
    template <typename D> using consume = Windows::Networking::XboxLive::impl_IXboxLiveDeviceAddressStatics<D>;
};

template <> struct traits<Windows::Networking::XboxLive::IXboxLiveEndpointPair>
{
    using abi = ABI::Windows::Networking::XboxLive::IXboxLiveEndpointPair;
    template <typename D> using consume = Windows::Networking::XboxLive::impl_IXboxLiveEndpointPair<D>;
};

template <> struct traits<Windows::Networking::XboxLive::IXboxLiveEndpointPairCreationResult>
{
    using abi = ABI::Windows::Networking::XboxLive::IXboxLiveEndpointPairCreationResult;
    template <typename D> using consume = Windows::Networking::XboxLive::impl_IXboxLiveEndpointPairCreationResult<D>;
};

template <> struct traits<Windows::Networking::XboxLive::IXboxLiveEndpointPairStateChangedEventArgs>
{
    using abi = ABI::Windows::Networking::XboxLive::IXboxLiveEndpointPairStateChangedEventArgs;
    template <typename D> using consume = Windows::Networking::XboxLive::impl_IXboxLiveEndpointPairStateChangedEventArgs<D>;
};

template <> struct traits<Windows::Networking::XboxLive::IXboxLiveEndpointPairStatics>
{
    using abi = ABI::Windows::Networking::XboxLive::IXboxLiveEndpointPairStatics;
    template <typename D> using consume = Windows::Networking::XboxLive::impl_IXboxLiveEndpointPairStatics<D>;
};

template <> struct traits<Windows::Networking::XboxLive::IXboxLiveEndpointPairTemplate>
{
    using abi = ABI::Windows::Networking::XboxLive::IXboxLiveEndpointPairTemplate;
    template <typename D> using consume = Windows::Networking::XboxLive::impl_IXboxLiveEndpointPairTemplate<D>;
};

template <> struct traits<Windows::Networking::XboxLive::IXboxLiveEndpointPairTemplateStatics>
{
    using abi = ABI::Windows::Networking::XboxLive::IXboxLiveEndpointPairTemplateStatics;
    template <typename D> using consume = Windows::Networking::XboxLive::impl_IXboxLiveEndpointPairTemplateStatics<D>;
};

template <> struct traits<Windows::Networking::XboxLive::IXboxLiveInboundEndpointPairCreatedEventArgs>
{
    using abi = ABI::Windows::Networking::XboxLive::IXboxLiveInboundEndpointPairCreatedEventArgs;
    template <typename D> using consume = Windows::Networking::XboxLive::impl_IXboxLiveInboundEndpointPairCreatedEventArgs<D>;
};

template <> struct traits<Windows::Networking::XboxLive::IXboxLiveQualityOfServiceMeasurement>
{
    using abi = ABI::Windows::Networking::XboxLive::IXboxLiveQualityOfServiceMeasurement;
    template <typename D> using consume = Windows::Networking::XboxLive::impl_IXboxLiveQualityOfServiceMeasurement<D>;
};

template <> struct traits<Windows::Networking::XboxLive::IXboxLiveQualityOfServiceMeasurementStatics>
{
    using abi = ABI::Windows::Networking::XboxLive::IXboxLiveQualityOfServiceMeasurementStatics;
    template <typename D> using consume = Windows::Networking::XboxLive::impl_IXboxLiveQualityOfServiceMeasurementStatics<D>;
};

template <> struct traits<Windows::Networking::XboxLive::IXboxLiveQualityOfServiceMetricResult>
{
    using abi = ABI::Windows::Networking::XboxLive::IXboxLiveQualityOfServiceMetricResult;
    template <typename D> using consume = Windows::Networking::XboxLive::impl_IXboxLiveQualityOfServiceMetricResult<D>;
};

template <> struct traits<Windows::Networking::XboxLive::IXboxLiveQualityOfServicePrivatePayloadResult>
{
    using abi = ABI::Windows::Networking::XboxLive::IXboxLiveQualityOfServicePrivatePayloadResult;
    template <typename D> using consume = Windows::Networking::XboxLive::impl_IXboxLiveQualityOfServicePrivatePayloadResult<D>;
};

template <> struct traits<Windows::Networking::XboxLive::XboxLiveDeviceAddress>
{
    using abi = ABI::Windows::Networking::XboxLive::XboxLiveDeviceAddress;
    using default_interface = Windows::Networking::XboxLive::IXboxLiveDeviceAddress;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Networking.XboxLive.XboxLiveDeviceAddress"; }
};

template <> struct traits<Windows::Networking::XboxLive::XboxLiveEndpointPair>
{
    using abi = ABI::Windows::Networking::XboxLive::XboxLiveEndpointPair;
    using default_interface = Windows::Networking::XboxLive::IXboxLiveEndpointPair;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Networking.XboxLive.XboxLiveEndpointPair"; }
};

template <> struct traits<Windows::Networking::XboxLive::XboxLiveEndpointPairCreationResult>
{
    using abi = ABI::Windows::Networking::XboxLive::XboxLiveEndpointPairCreationResult;
    using default_interface = Windows::Networking::XboxLive::IXboxLiveEndpointPairCreationResult;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Networking.XboxLive.XboxLiveEndpointPairCreationResult"; }
};

template <> struct traits<Windows::Networking::XboxLive::XboxLiveEndpointPairStateChangedEventArgs>
{
    using abi = ABI::Windows::Networking::XboxLive::XboxLiveEndpointPairStateChangedEventArgs;
    using default_interface = Windows::Networking::XboxLive::IXboxLiveEndpointPairStateChangedEventArgs;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Networking.XboxLive.XboxLiveEndpointPairStateChangedEventArgs"; }
};

template <> struct traits<Windows::Networking::XboxLive::XboxLiveEndpointPairTemplate>
{
    using abi = ABI::Windows::Networking::XboxLive::XboxLiveEndpointPairTemplate;
    using default_interface = Windows::Networking::XboxLive::IXboxLiveEndpointPairTemplate;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Networking.XboxLive.XboxLiveEndpointPairTemplate"; }
};

template <> struct traits<Windows::Networking::XboxLive::XboxLiveInboundEndpointPairCreatedEventArgs>
{
    using abi = ABI::Windows::Networking::XboxLive::XboxLiveInboundEndpointPairCreatedEventArgs;
    using default_interface = Windows::Networking::XboxLive::IXboxLiveInboundEndpointPairCreatedEventArgs;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Networking.XboxLive.XboxLiveInboundEndpointPairCreatedEventArgs"; }
};

template <> struct traits<Windows::Networking::XboxLive::XboxLiveQualityOfServiceMeasurement>
{
    using abi = ABI::Windows::Networking::XboxLive::XboxLiveQualityOfServiceMeasurement;
    using default_interface = Windows::Networking::XboxLive::IXboxLiveQualityOfServiceMeasurement;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Networking.XboxLive.XboxLiveQualityOfServiceMeasurement"; }
};

template <> struct traits<Windows::Networking::XboxLive::XboxLiveQualityOfServiceMetricResult>
{
    using abi = ABI::Windows::Networking::XboxLive::XboxLiveQualityOfServiceMetricResult;
    using default_interface = Windows::Networking::XboxLive::IXboxLiveQualityOfServiceMetricResult;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Networking.XboxLive.XboxLiveQualityOfServiceMetricResult"; }
};

template <> struct traits<Windows::Networking::XboxLive::XboxLiveQualityOfServicePrivatePayloadResult>
{
    using abi = ABI::Windows::Networking::XboxLive::XboxLiveQualityOfServicePrivatePayloadResult;
    using default_interface = Windows::Networking::XboxLive::IXboxLiveQualityOfServicePrivatePayloadResult;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Networking.XboxLive.XboxLiveQualityOfServicePrivatePayloadResult"; }
};

}

}
