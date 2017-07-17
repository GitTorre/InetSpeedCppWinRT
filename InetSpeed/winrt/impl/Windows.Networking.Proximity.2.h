// C++/WinRT v1.0.170717.1
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "Windows.Foundation.1.h"
#include "Windows.Networking.1.h"
#include "Windows.Networking.Sockets.1.h"
#include "Windows.Storage.Streams.1.h"
#include "Windows.Networking.Proximity.1.h"

namespace winrt {

namespace Windows::Networking::Proximity {

struct DeviceArrivedEventHandler : Windows::Foundation::IUnknown
{
    DeviceArrivedEventHandler(std::nullptr_t = nullptr) noexcept {}
    template <typename L> DeviceArrivedEventHandler(L lambda);
    template <typename F> DeviceArrivedEventHandler(F* function);
    template <typename O, typename M> DeviceArrivedEventHandler(O* object, M method);
    void operator()(Windows::Networking::Proximity::ProximityDevice const& sender) const;
};

struct DeviceDepartedEventHandler : Windows::Foundation::IUnknown
{
    DeviceDepartedEventHandler(std::nullptr_t = nullptr) noexcept {}
    template <typename L> DeviceDepartedEventHandler(L lambda);
    template <typename F> DeviceDepartedEventHandler(F* function);
    template <typename O, typename M> DeviceDepartedEventHandler(O* object, M method);
    void operator()(Windows::Networking::Proximity::ProximityDevice const& sender) const;
};

struct MessageReceivedHandler : Windows::Foundation::IUnknown
{
    MessageReceivedHandler(std::nullptr_t = nullptr) noexcept {}
    template <typename L> MessageReceivedHandler(L lambda);
    template <typename F> MessageReceivedHandler(F* function);
    template <typename O, typename M> MessageReceivedHandler(O* object, M method);
    void operator()(Windows::Networking::Proximity::ProximityDevice const& sender, Windows::Networking::Proximity::ProximityMessage const& message) const;
};

struct MessageTransmittedHandler : Windows::Foundation::IUnknown
{
    MessageTransmittedHandler(std::nullptr_t = nullptr) noexcept {}
    template <typename L> MessageTransmittedHandler(L lambda);
    template <typename F> MessageTransmittedHandler(F* function);
    template <typename O, typename M> MessageTransmittedHandler(O* object, M method);
    void operator()(Windows::Networking::Proximity::ProximityDevice const& sender, int64_t messageId) const;
};

struct ConnectionRequestedEventArgs :
    Windows::Networking::Proximity::IConnectionRequestedEventArgs
{
    ConnectionRequestedEventArgs(std::nullptr_t) noexcept {}
};

struct PeerFinder
{
    PeerFinder() = delete;
    static bool AllowBluetooth();
    static void AllowBluetooth(bool value);
    static bool AllowInfrastructure();
    static void AllowInfrastructure(bool value);
    static bool AllowWiFiDirect();
    static void AllowWiFiDirect(bool value);
    static hstring DisplayName();
    static void DisplayName(param::hstring const& value);
    static Windows::Networking::Proximity::PeerDiscoveryTypes SupportedDiscoveryTypes();
    static Windows::Foundation::Collections::IMap<hstring, hstring> AlternateIdentities();
    static void Start();
    static void Start(param::hstring const& peerMessage);
    static void Stop();
    static event_token TriggeredConnectionStateChanged(Windows::Foundation::TypedEventHandler<Windows::Foundation::IInspectable, Windows::Networking::Proximity::TriggeredConnectionStateChangedEventArgs> const& handler);
    using TriggeredConnectionStateChanged_revoker = factory_event_revoker<Windows::Networking::Proximity::IPeerFinderStatics>;
    static TriggeredConnectionStateChanged_revoker TriggeredConnectionStateChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Foundation::IInspectable, Windows::Networking::Proximity::TriggeredConnectionStateChangedEventArgs> const& handler);
    static void TriggeredConnectionStateChanged(event_token const& cookie);
    static event_token ConnectionRequested(Windows::Foundation::TypedEventHandler<Windows::Foundation::IInspectable, Windows::Networking::Proximity::ConnectionRequestedEventArgs> const& handler);
    using ConnectionRequested_revoker = factory_event_revoker<Windows::Networking::Proximity::IPeerFinderStatics>;
    static ConnectionRequested_revoker ConnectionRequested(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Foundation::IInspectable, Windows::Networking::Proximity::ConnectionRequestedEventArgs> const& handler);
    static void ConnectionRequested(event_token const& cookie);
    static Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Networking::Proximity::PeerInformation>> FindAllPeersAsync();
    static Windows::Foundation::IAsyncOperation<Windows::Networking::Sockets::StreamSocket> ConnectAsync(Windows::Networking::Proximity::PeerInformation const& peerInformation);
    static Windows::Networking::Proximity::PeerRole Role();
    static void Role(Windows::Networking::Proximity::PeerRole const& value);
    static Windows::Storage::Streams::IBuffer DiscoveryData();
    static void DiscoveryData(Windows::Storage::Streams::IBuffer const& value);
    static Windows::Networking::Proximity::PeerWatcher CreateWatcher();
};

struct PeerInformation :
    Windows::Networking::Proximity::IPeerInformation,
    impl::require<PeerInformation, Windows::Networking::Proximity::IPeerInformation3, Windows::Networking::Proximity::IPeerInformationWithHostAndService>
{
    PeerInformation(std::nullptr_t) noexcept {}
};

struct PeerWatcher :
    Windows::Networking::Proximity::IPeerWatcher
{
    PeerWatcher(std::nullptr_t) noexcept {}
};

struct ProximityDevice :
    Windows::Networking::Proximity::IProximityDevice
{
    ProximityDevice(std::nullptr_t) noexcept {}
    static hstring GetDeviceSelector();
    static Windows::Networking::Proximity::ProximityDevice GetDefault();
    static Windows::Networking::Proximity::ProximityDevice FromId(param::hstring const& deviceId);
};

struct ProximityMessage :
    Windows::Networking::Proximity::IProximityMessage
{
    ProximityMessage(std::nullptr_t) noexcept {}
};

struct TriggeredConnectionStateChangedEventArgs :
    Windows::Networking::Proximity::ITriggeredConnectionStateChangedEventArgs
{
    TriggeredConnectionStateChangedEventArgs(std::nullptr_t) noexcept {}
};

}

namespace impl {

}

}
