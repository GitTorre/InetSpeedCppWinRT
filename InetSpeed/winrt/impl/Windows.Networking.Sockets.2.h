﻿// C++/WinRT v1.0.170717.1
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "Windows.ApplicationModel.Background.1.h"
#include "Windows.Foundation.1.h"
#include "Windows.Networking.1.h"
#include "Windows.Networking.Connectivity.1.h"
#include "Windows.Security.Credentials.1.h"
#include "Windows.Security.Cryptography.Certificates.1.h"
#include "Windows.Storage.Streams.1.h"
#include "Windows.Web.1.h"
#include "Windows.Networking.Sockets.1.h"

namespace winrt {

namespace Windows::Networking::Sockets {

struct BandwidthStatistics
{
    uint64_t OutboundBitsPerSecond;
    uint64_t InboundBitsPerSecond;
    uint64_t OutboundBitsPerSecondInstability;
    uint64_t InboundBitsPerSecondInstability;
    bool OutboundBandwidthPeaked;
    bool InboundBandwidthPeaked;
};

struct RoundTripTimeStatistics
{
    uint32_t Variance;
    uint32_t Max;
    uint32_t Min;
    uint32_t Sum;
};

struct ControlChannelTrigger :
    Windows::Networking::Sockets::IControlChannelTrigger,
    impl::require<ControlChannelTrigger, Windows::Networking::Sockets::IControlChannelTrigger2>
{
    ControlChannelTrigger(std::nullptr_t) noexcept {}
    ControlChannelTrigger(param::hstring const& channelId, uint32_t serverKeepAliveIntervalInMinutes);
    ControlChannelTrigger(param::hstring const& channelId, uint32_t serverKeepAliveIntervalInMinutes, Windows::Networking::Sockets::ControlChannelTriggerResourceType const& resourceRequestType);
};

struct DatagramSocket :
    Windows::Networking::Sockets::IDatagramSocket,
    impl::require<DatagramSocket, Windows::Networking::Sockets::IDatagramSocket2, Windows::Networking::Sockets::IDatagramSocket3>
{
    DatagramSocket(std::nullptr_t) noexcept {}
    DatagramSocket();
    using impl::consume_t<DatagramSocket, Windows::Networking::Sockets::IDatagramSocket2>::BindServiceNameAsync;
    using Windows::Networking::Sockets::IDatagramSocket::BindServiceNameAsync;
    static Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Networking::EndpointPair>> GetEndpointPairsAsync(Windows::Networking::HostName const& remoteHostName, param::hstring const& remoteServiceName);
    static Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Networking::EndpointPair>> GetEndpointPairsAsync(Windows::Networking::HostName const& remoteHostName, param::hstring const& remoteServiceName, Windows::Networking::HostNameSortOptions const& sortOptions);
};

struct DatagramSocketControl :
    Windows::Networking::Sockets::IDatagramSocketControl,
    impl::require<DatagramSocketControl, Windows::Networking::Sockets::IDatagramSocketControl2, Windows::Networking::Sockets::IDatagramSocketControl3>
{
    DatagramSocketControl(std::nullptr_t) noexcept {}
};

struct DatagramSocketInformation :
    Windows::Networking::Sockets::IDatagramSocketInformation
{
    DatagramSocketInformation(std::nullptr_t) noexcept {}
};

struct DatagramSocketMessageReceivedEventArgs :
    Windows::Networking::Sockets::IDatagramSocketMessageReceivedEventArgs
{
    DatagramSocketMessageReceivedEventArgs(std::nullptr_t) noexcept {}
};

struct MessageWebSocket :
    Windows::Networking::Sockets::IMessageWebSocket,
    impl::require<MessageWebSocket, Windows::Networking::Sockets::IMessageWebSocket2>
{
    MessageWebSocket(std::nullptr_t) noexcept {}
    MessageWebSocket();
};

struct MessageWebSocketControl :
    Windows::Networking::Sockets::IMessageWebSocketControl,
    impl::require<MessageWebSocketControl, Windows::Networking::Sockets::IWebSocketControl2>
{
    MessageWebSocketControl(std::nullptr_t) noexcept {}
};

struct MessageWebSocketInformation :
    Windows::Networking::Sockets::IWebSocketInformation,
    impl::require<MessageWebSocketInformation, Windows::Networking::Sockets::IWebSocketInformation2>
{
    MessageWebSocketInformation(std::nullptr_t) noexcept {}
};

struct MessageWebSocketMessageReceivedEventArgs :
    Windows::Networking::Sockets::IMessageWebSocketMessageReceivedEventArgs
{
    MessageWebSocketMessageReceivedEventArgs(std::nullptr_t) noexcept {}
};

struct SocketActivityContext :
    Windows::Networking::Sockets::ISocketActivityContext
{
    SocketActivityContext(std::nullptr_t) noexcept {}
    SocketActivityContext(Windows::Storage::Streams::IBuffer const& data);
};

struct SocketActivityInformation :
    Windows::Networking::Sockets::ISocketActivityInformation
{
    SocketActivityInformation(std::nullptr_t) noexcept {}
    static Windows::Foundation::Collections::IMapView<hstring, Windows::Networking::Sockets::SocketActivityInformation> AllSockets();
};

struct SocketActivityTriggerDetails :
    Windows::Networking::Sockets::ISocketActivityTriggerDetails
{
    SocketActivityTriggerDetails(std::nullptr_t) noexcept {}
};

struct SocketError
{
    SocketError() = delete;
    static Windows::Networking::Sockets::SocketErrorStatus GetStatus(int32_t hresult);
};

struct StreamSocket :
    Windows::Networking::Sockets::IStreamSocket,
    impl::require<StreamSocket, Windows::Networking::Sockets::IStreamSocket2, Windows::Networking::Sockets::IStreamSocket3>
{
    StreamSocket(std::nullptr_t) noexcept {}
    StreamSocket();
    using impl::consume_t<StreamSocket, Windows::Networking::Sockets::IStreamSocket2>::ConnectAsync;
    using Windows::Networking::Sockets::IStreamSocket::ConnectAsync;
    static Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Networking::EndpointPair>> GetEndpointPairsAsync(Windows::Networking::HostName const& remoteHostName, param::hstring const& remoteServiceName);
    static Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Networking::EndpointPair>> GetEndpointPairsAsync(Windows::Networking::HostName const& remoteHostName, param::hstring const& remoteServiceName, Windows::Networking::HostNameSortOptions const& sortOptions);
};

struct StreamSocketControl :
    Windows::Networking::Sockets::IStreamSocketControl,
    impl::require<StreamSocketControl, Windows::Networking::Sockets::IStreamSocketControl2, Windows::Networking::Sockets::IStreamSocketControl3>
{
    StreamSocketControl(std::nullptr_t) noexcept {}
};

struct StreamSocketInformation :
    Windows::Networking::Sockets::IStreamSocketInformation,
    impl::require<StreamSocketInformation, Windows::Networking::Sockets::IStreamSocketInformation2>
{
    StreamSocketInformation(std::nullptr_t) noexcept {}
};

struct StreamSocketListener :
    Windows::Networking::Sockets::IStreamSocketListener,
    impl::require<StreamSocketListener, Windows::Networking::Sockets::IStreamSocketListener2, Windows::Networking::Sockets::IStreamSocketListener3>
{
    StreamSocketListener(std::nullptr_t) noexcept {}
    StreamSocketListener();
    using impl::consume_t<StreamSocketListener, Windows::Networking::Sockets::IStreamSocketListener2>::BindServiceNameAsync;
    using Windows::Networking::Sockets::IStreamSocketListener::BindServiceNameAsync;
};

struct StreamSocketListenerConnectionReceivedEventArgs :
    Windows::Networking::Sockets::IStreamSocketListenerConnectionReceivedEventArgs
{
    StreamSocketListenerConnectionReceivedEventArgs(std::nullptr_t) noexcept {}
};

struct StreamSocketListenerControl :
    Windows::Networking::Sockets::IStreamSocketListenerControl,
    impl::require<StreamSocketListenerControl, Windows::Networking::Sockets::IStreamSocketListenerControl2>
{
    StreamSocketListenerControl(std::nullptr_t) noexcept {}
};

struct StreamSocketListenerInformation :
    Windows::Networking::Sockets::IStreamSocketListenerInformation
{
    StreamSocketListenerInformation(std::nullptr_t) noexcept {}
};

struct StreamWebSocket :
    Windows::Networking::Sockets::IStreamWebSocket,
    impl::require<StreamWebSocket, Windows::Networking::Sockets::IStreamWebSocket2>
{
    StreamWebSocket(std::nullptr_t) noexcept {}
    StreamWebSocket();
};

struct StreamWebSocketControl :
    Windows::Networking::Sockets::IStreamWebSocketControl,
    impl::require<StreamWebSocketControl, Windows::Networking::Sockets::IWebSocketControl2>
{
    StreamWebSocketControl(std::nullptr_t) noexcept {}
};

struct StreamWebSocketInformation :
    Windows::Networking::Sockets::IWebSocketInformation,
    impl::require<StreamWebSocketInformation, Windows::Networking::Sockets::IWebSocketInformation2>
{
    StreamWebSocketInformation(std::nullptr_t) noexcept {}
};

struct WebSocketClosedEventArgs :
    Windows::Networking::Sockets::IWebSocketClosedEventArgs
{
    WebSocketClosedEventArgs(std::nullptr_t) noexcept {}
};

struct WebSocketError
{
    WebSocketError() = delete;
    static Windows::Web::WebErrorStatus GetStatus(int32_t hresult);
};

struct WebSocketKeepAlive :
    Windows::ApplicationModel::Background::IBackgroundTask
{
    WebSocketKeepAlive(std::nullptr_t) noexcept {}
    WebSocketKeepAlive();
};

struct WebSocketServerCustomValidationRequestedEventArgs :
    Windows::Networking::Sockets::IWebSocketServerCustomValidationRequestedEventArgs
{
    WebSocketServerCustomValidationRequestedEventArgs(std::nullptr_t) noexcept {}
};

}

namespace impl {

}

}
