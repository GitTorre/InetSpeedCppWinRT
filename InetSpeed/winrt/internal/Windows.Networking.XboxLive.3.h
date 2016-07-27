// C++ for the Windows Runtime v1.29
// Copyright (c) 2016 Microsoft Corporation

#pragma once

#include "Windows.Networking.XboxLive.2.h"

WINRT_EXPORT namespace winrt {

namespace Windows::Networking::XboxLive {

struct WINRT_EBO XboxLiveDeviceAddress :
    Windows::Networking::XboxLive::IXboxLiveDeviceAddress
{
    XboxLiveDeviceAddress(std::nullptr_t) noexcept {}
    static Windows::Networking::XboxLive::XboxLiveDeviceAddress CreateFromSnapshotBase64(hstring_ref base64);
    static Windows::Networking::XboxLive::XboxLiveDeviceAddress CreateFromSnapshotBuffer(const Windows::Storage::Streams::IBuffer & buffer);
    static Windows::Networking::XboxLive::XboxLiveDeviceAddress CreateFromSnapshotBytes(array_ref<const uint8_t> buffer);
    static Windows::Networking::XboxLive::XboxLiveDeviceAddress GetLocal();
    static uint32_t MaxSnapshotBytesSize();
};

struct WINRT_EBO XboxLiveEndpointPair :
    Windows::Networking::XboxLive::IXboxLiveEndpointPair
{
    XboxLiveEndpointPair(std::nullptr_t) noexcept {}
    static Windows::Networking::XboxLive::XboxLiveEndpointPair FindEndpointPairBySocketAddressBytes(array_ref<const uint8_t> localSocketAddress, array_ref<const uint8_t> remoteSocketAddress);
    static Windows::Networking::XboxLive::XboxLiveEndpointPair FindEndpointPairByHostNamesAndPorts(const Windows::Networking::HostName & localHostName, hstring_ref localPort, const Windows::Networking::HostName & remoteHostName, hstring_ref remotePort);
};

struct WINRT_EBO XboxLiveEndpointPairCreationResult :
    Windows::Networking::XboxLive::IXboxLiveEndpointPairCreationResult
{
    XboxLiveEndpointPairCreationResult(std::nullptr_t) noexcept {}
};

struct WINRT_EBO XboxLiveEndpointPairStateChangedEventArgs :
    Windows::Networking::XboxLive::IXboxLiveEndpointPairStateChangedEventArgs
{
    XboxLiveEndpointPairStateChangedEventArgs(std::nullptr_t) noexcept {}
};

struct WINRT_EBO XboxLiveEndpointPairTemplate :
    Windows::Networking::XboxLive::IXboxLiveEndpointPairTemplate
{
    XboxLiveEndpointPairTemplate(std::nullptr_t) noexcept {}
    static Windows::Networking::XboxLive::XboxLiveEndpointPairTemplate GetTemplateByName(hstring_ref name);
    static Windows::Foundation::Collections::IVectorView<Windows::Networking::XboxLive::XboxLiveEndpointPairTemplate> Templates();
};

struct WINRT_EBO XboxLiveInboundEndpointPairCreatedEventArgs :
    Windows::Networking::XboxLive::IXboxLiveInboundEndpointPairCreatedEventArgs
{
    XboxLiveInboundEndpointPairCreatedEventArgs(std::nullptr_t) noexcept {}
};

struct WINRT_EBO XboxLiveQualityOfServiceMeasurement :
    Windows::Networking::XboxLive::IXboxLiveQualityOfServiceMeasurement
{
    XboxLiveQualityOfServiceMeasurement(std::nullptr_t) noexcept {}
    XboxLiveQualityOfServiceMeasurement();
    static void PublishPrivatePayloadBytes(array_ref<const uint8_t> payload);
    static void ClearPrivatePayload();
    static uint32_t MaxSimultaneousProbeConnections();
    static void MaxSimultaneousProbeConnections(uint32_t value);
    static bool IsSystemOutboundBandwidthConstrained();
    static void IsSystemOutboundBandwidthConstrained(bool value);
    static bool IsSystemInboundBandwidthConstrained();
    static void IsSystemInboundBandwidthConstrained(bool value);
    static Windows::Storage::Streams::IBuffer PublishedPrivatePayload();
    static void PublishedPrivatePayload(const Windows::Storage::Streams::IBuffer & value);
    static uint32_t MaxPrivatePayloadSize();
};

struct WINRT_EBO XboxLiveQualityOfServiceMetricResult :
    Windows::Networking::XboxLive::IXboxLiveQualityOfServiceMetricResult
{
    XboxLiveQualityOfServiceMetricResult(std::nullptr_t) noexcept {}
};

struct WINRT_EBO XboxLiveQualityOfServicePrivatePayloadResult :
    Windows::Networking::XboxLive::IXboxLiveQualityOfServicePrivatePayloadResult
{
    XboxLiveQualityOfServicePrivatePayloadResult(std::nullptr_t) noexcept {}
};

}

}
