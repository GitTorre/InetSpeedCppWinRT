// C++ for the Windows Runtime v1.29
// Copyright (c) 2016 Microsoft Corporation

#pragma once


WINRT_EXPORT namespace winrt {

namespace ABI::Windows::Networking::XboxLive {

struct IXboxLiveDeviceAddress;
struct IXboxLiveDeviceAddressStatics;
struct IXboxLiveEndpointPair;
struct IXboxLiveEndpointPairCreationResult;
struct IXboxLiveEndpointPairStateChangedEventArgs;
struct IXboxLiveEndpointPairStatics;
struct IXboxLiveEndpointPairTemplate;
struct IXboxLiveEndpointPairTemplateStatics;
struct IXboxLiveInboundEndpointPairCreatedEventArgs;
struct IXboxLiveQualityOfServiceMeasurement;
struct IXboxLiveQualityOfServiceMeasurementStatics;
struct IXboxLiveQualityOfServiceMetricResult;
struct IXboxLiveQualityOfServicePrivatePayloadResult;
struct XboxLiveDeviceAddress;
struct XboxLiveEndpointPair;
struct XboxLiveEndpointPairCreationResult;
struct XboxLiveEndpointPairStateChangedEventArgs;
struct XboxLiveEndpointPairTemplate;
struct XboxLiveInboundEndpointPairCreatedEventArgs;
struct XboxLiveQualityOfServiceMeasurement;
struct XboxLiveQualityOfServiceMetricResult;
struct XboxLiveQualityOfServicePrivatePayloadResult;

}

namespace Windows::Networking::XboxLive {

struct IXboxLiveDeviceAddress;
struct IXboxLiveDeviceAddressStatics;
struct IXboxLiveEndpointPair;
struct IXboxLiveEndpointPairCreationResult;
struct IXboxLiveEndpointPairStateChangedEventArgs;
struct IXboxLiveEndpointPairStatics;
struct IXboxLiveEndpointPairTemplate;
struct IXboxLiveEndpointPairTemplateStatics;
struct IXboxLiveInboundEndpointPairCreatedEventArgs;
struct IXboxLiveQualityOfServiceMeasurement;
struct IXboxLiveQualityOfServiceMeasurementStatics;
struct IXboxLiveQualityOfServiceMetricResult;
struct IXboxLiveQualityOfServicePrivatePayloadResult;
struct XboxLiveDeviceAddress;
struct XboxLiveEndpointPair;
struct XboxLiveEndpointPairCreationResult;
struct XboxLiveEndpointPairStateChangedEventArgs;
struct XboxLiveEndpointPairTemplate;
struct XboxLiveInboundEndpointPairCreatedEventArgs;
struct XboxLiveQualityOfServiceMeasurement;
struct XboxLiveQualityOfServiceMetricResult;
struct XboxLiveQualityOfServicePrivatePayloadResult;

}

namespace Windows::Networking::XboxLive {

enum class XboxLiveEndpointPairCreationBehaviors : unsigned
{
    None = 0x0,
    ReevaluatePath = 0x1,
};

DEFINE_ENUM_FLAG_OPERATORS(XboxLiveEndpointPairCreationBehaviors)

enum class XboxLiveEndpointPairCreationStatus
{
    Succeeded = 0,
    NoLocalNetworks = 1,
    NoCompatibleNetworkPaths = 2,
    LocalSystemNotAuthorized = 3,
    Canceled = 4,
    TimedOut = 5,
    RemoteSystemNotAuthorized = 6,
    RefusedDueToConfiguration = 7,
    UnexpectedInternalError = 8,
};

enum class XboxLiveEndpointPairState
{
    Invalid = 0,
    CreatingOutbound = 1,
    CreatingInbound = 2,
    Ready = 3,
    DeletingLocally = 4,
    RemoteEndpointTerminating = 5,
    Deleted = 6,
};

enum class XboxLiveNetworkAccessKind
{
    Open = 0,
    Moderate = 1,
    Strict = 2,
};

enum class XboxLiveQualityOfServiceMeasurementStatus
{
    NotStarted = 0,
    InProgress = 1,
    InProgressWithProvisionalResults = 2,
    Succeeded = 3,
    NoLocalNetworks = 4,
    NoCompatibleNetworkPaths = 5,
    LocalSystemNotAuthorized = 6,
    Canceled = 7,
    TimedOut = 8,
    RemoteSystemNotAuthorized = 9,
    RefusedDueToConfiguration = 10,
    UnexpectedInternalError = 11,
};

enum class XboxLiveQualityOfServiceMetric
{
    AverageLatencyInMilliseconds = 0,
    MinLatencyInMilliseconds = 1,
    MaxLatencyInMilliseconds = 2,
    AverageOutboundBitsPerSecond = 3,
    MinOutboundBitsPerSecond = 4,
    MaxOutboundBitsPerSecond = 5,
    AverageInboundBitsPerSecond = 6,
    MinInboundBitsPerSecond = 7,
    MaxInboundBitsPerSecond = 8,
};

enum class XboxLiveSocketKind
{
    None = 0,
    Datagram = 1,
    Stream = 2,
};

}

}
