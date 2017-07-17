// C++/WinRT v1.0.170717.1
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "Windows.Foundation.1.h"
#include "Windows.Foundation.Collections.1.h"
#include "Windows.Networking.1.h"
#include "Windows.System.RemoteSystems.1.h"

namespace winrt {

namespace Windows::System::RemoteSystems {

struct KnownRemoteSystemCapabilities
{
    KnownRemoteSystemCapabilities() = delete;
    static hstring AppService();
    static hstring LaunchUri();
    static hstring RemoteSession();
    static hstring SpatialEntity();
};

struct RemoteSystem :
    Windows::System::RemoteSystems::IRemoteSystem,
    impl::require<RemoteSystem, Windows::System::RemoteSystems::IRemoteSystem2>
{
    RemoteSystem(std::nullptr_t) noexcept {}
    static Windows::Foundation::IAsyncOperation<Windows::System::RemoteSystems::RemoteSystem> FindByHostNameAsync(Windows::Networking::HostName const& hostName);
    static Windows::System::RemoteSystems::RemoteSystemWatcher CreateWatcher();
    static Windows::System::RemoteSystems::RemoteSystemWatcher CreateWatcher(param::iterable<Windows::System::RemoteSystems::IRemoteSystemFilter> const& filters);
    static Windows::Foundation::IAsyncOperation<Windows::System::RemoteSystems::RemoteSystemAccessStatus> RequestAccessAsync();
    static bool IsAuthorizationKindEnabled(Windows::System::RemoteSystems::RemoteSystemAuthorizationKind const& kind);
};

struct RemoteSystemAddedEventArgs :
    Windows::System::RemoteSystems::IRemoteSystemAddedEventArgs
{
    RemoteSystemAddedEventArgs(std::nullptr_t) noexcept {}
};

struct RemoteSystemAuthorizationKindFilter :
    Windows::System::RemoteSystems::IRemoteSystemAuthorizationKindFilter,
    impl::require<RemoteSystemAuthorizationKindFilter, Windows::System::RemoteSystems::IRemoteSystemFilter>
{
    RemoteSystemAuthorizationKindFilter(std::nullptr_t) noexcept {}
    RemoteSystemAuthorizationKindFilter(Windows::System::RemoteSystems::RemoteSystemAuthorizationKind const& remoteSystemAuthorizationKind);
};

struct RemoteSystemConnectionRequest :
    Windows::System::RemoteSystems::IRemoteSystemConnectionRequest
{
    RemoteSystemConnectionRequest(std::nullptr_t) noexcept {}
    RemoteSystemConnectionRequest(Windows::System::RemoteSystems::RemoteSystem const& remoteSystem);
};

struct RemoteSystemDiscoveryTypeFilter :
    Windows::System::RemoteSystems::IRemoteSystemDiscoveryTypeFilter,
    impl::require<RemoteSystemDiscoveryTypeFilter, Windows::System::RemoteSystems::IRemoteSystemFilter>
{
    RemoteSystemDiscoveryTypeFilter(std::nullptr_t) noexcept {}
    RemoteSystemDiscoveryTypeFilter(Windows::System::RemoteSystems::RemoteSystemDiscoveryType const& discoveryType);
};

struct RemoteSystemKindFilter :
    Windows::System::RemoteSystems::IRemoteSystemKindFilter,
    impl::require<RemoteSystemKindFilter, Windows::System::RemoteSystems::IRemoteSystemFilter>
{
    RemoteSystemKindFilter(std::nullptr_t) noexcept {}
    RemoteSystemKindFilter(param::iterable<hstring> const& remoteSystemKinds);
};

struct RemoteSystemKinds
{
    RemoteSystemKinds() = delete;
    static hstring Phone();
    static hstring Hub();
    static hstring Holographic();
    static hstring Desktop();
    static hstring Xbox();
};

struct RemoteSystemRemovedEventArgs :
    Windows::System::RemoteSystems::IRemoteSystemRemovedEventArgs
{
    RemoteSystemRemovedEventArgs(std::nullptr_t) noexcept {}
};

struct RemoteSystemSession :
    Windows::System::RemoteSystems::IRemoteSystemSession
{
    RemoteSystemSession(std::nullptr_t) noexcept {}
    static Windows::System::RemoteSystems::RemoteSystemSessionWatcher CreateWatcher();
};

struct RemoteSystemSessionAddedEventArgs :
    Windows::System::RemoteSystems::IRemoteSystemSessionAddedEventArgs
{
    RemoteSystemSessionAddedEventArgs(std::nullptr_t) noexcept {}
};

struct RemoteSystemSessionController :
    Windows::System::RemoteSystems::IRemoteSystemSessionController
{
    RemoteSystemSessionController(std::nullptr_t) noexcept {}
    RemoteSystemSessionController(param::hstring const& displayName);
    RemoteSystemSessionController(param::hstring const& displayName, Windows::System::RemoteSystems::RemoteSystemSessionOptions const& options);
};

struct RemoteSystemSessionCreationResult :
    Windows::System::RemoteSystems::IRemoteSystemSessionCreationResult
{
    RemoteSystemSessionCreationResult(std::nullptr_t) noexcept {}
};

struct RemoteSystemSessionDisconnectedEventArgs :
    Windows::System::RemoteSystems::IRemoteSystemSessionDisconnectedEventArgs
{
    RemoteSystemSessionDisconnectedEventArgs(std::nullptr_t) noexcept {}
};

struct RemoteSystemSessionInfo :
    Windows::System::RemoteSystems::IRemoteSystemSessionInfo
{
    RemoteSystemSessionInfo(std::nullptr_t) noexcept {}
};

struct RemoteSystemSessionInvitation :
    Windows::System::RemoteSystems::IRemoteSystemSessionInvitation
{
    RemoteSystemSessionInvitation(std::nullptr_t) noexcept {}
};

struct RemoteSystemSessionInvitationListener :
    Windows::System::RemoteSystems::IRemoteSystemSessionInvitationListener
{
    RemoteSystemSessionInvitationListener(std::nullptr_t) noexcept {}
    RemoteSystemSessionInvitationListener();
};

struct RemoteSystemSessionInvitationReceivedEventArgs :
    Windows::System::RemoteSystems::IRemoteSystemSessionInvitationReceivedEventArgs
{
    RemoteSystemSessionInvitationReceivedEventArgs(std::nullptr_t) noexcept {}
};

struct RemoteSystemSessionJoinRequest :
    Windows::System::RemoteSystems::IRemoteSystemSessionJoinRequest
{
    RemoteSystemSessionJoinRequest(std::nullptr_t) noexcept {}
};

struct RemoteSystemSessionJoinRequestedEventArgs :
    Windows::System::RemoteSystems::IRemoteSystemSessionJoinRequestedEventArgs
{
    RemoteSystemSessionJoinRequestedEventArgs(std::nullptr_t) noexcept {}
};

struct RemoteSystemSessionJoinResult :
    Windows::System::RemoteSystems::IRemoteSystemSessionJoinResult
{
    RemoteSystemSessionJoinResult(std::nullptr_t) noexcept {}
};

struct RemoteSystemSessionMessageChannel :
    Windows::System::RemoteSystems::IRemoteSystemSessionMessageChannel
{
    RemoteSystemSessionMessageChannel(std::nullptr_t) noexcept {}
    RemoteSystemSessionMessageChannel(Windows::System::RemoteSystems::RemoteSystemSession const& session, param::hstring const& channelName);
    RemoteSystemSessionMessageChannel(Windows::System::RemoteSystems::RemoteSystemSession const& session, param::hstring const& channelName, Windows::System::RemoteSystems::RemoteSystemSessionMessageChannelReliability const& reliability);
};

struct RemoteSystemSessionOptions :
    Windows::System::RemoteSystems::IRemoteSystemSessionOptions
{
    RemoteSystemSessionOptions(std::nullptr_t) noexcept {}
    RemoteSystemSessionOptions();
};

struct RemoteSystemSessionParticipant :
    Windows::System::RemoteSystems::IRemoteSystemSessionParticipant
{
    RemoteSystemSessionParticipant(std::nullptr_t) noexcept {}
};

struct RemoteSystemSessionParticipantAddedEventArgs :
    Windows::System::RemoteSystems::IRemoteSystemSessionParticipantAddedEventArgs
{
    RemoteSystemSessionParticipantAddedEventArgs(std::nullptr_t) noexcept {}
};

struct RemoteSystemSessionParticipantRemovedEventArgs :
    Windows::System::RemoteSystems::IRemoteSystemSessionParticipantRemovedEventArgs
{
    RemoteSystemSessionParticipantRemovedEventArgs(std::nullptr_t) noexcept {}
};

struct RemoteSystemSessionParticipantWatcher :
    Windows::System::RemoteSystems::IRemoteSystemSessionParticipantWatcher
{
    RemoteSystemSessionParticipantWatcher(std::nullptr_t) noexcept {}
};

struct RemoteSystemSessionRemovedEventArgs :
    Windows::System::RemoteSystems::IRemoteSystemSessionRemovedEventArgs
{
    RemoteSystemSessionRemovedEventArgs(std::nullptr_t) noexcept {}
};

struct RemoteSystemSessionUpdatedEventArgs :
    Windows::System::RemoteSystems::IRemoteSystemSessionUpdatedEventArgs
{
    RemoteSystemSessionUpdatedEventArgs(std::nullptr_t) noexcept {}
};

struct RemoteSystemSessionValueSetReceivedEventArgs :
    Windows::System::RemoteSystems::IRemoteSystemSessionValueSetReceivedEventArgs
{
    RemoteSystemSessionValueSetReceivedEventArgs(std::nullptr_t) noexcept {}
};

struct RemoteSystemSessionWatcher :
    Windows::System::RemoteSystems::IRemoteSystemSessionWatcher
{
    RemoteSystemSessionWatcher(std::nullptr_t) noexcept {}
};

struct RemoteSystemStatusTypeFilter :
    Windows::System::RemoteSystems::IRemoteSystemStatusTypeFilter,
    impl::require<RemoteSystemStatusTypeFilter, Windows::System::RemoteSystems::IRemoteSystemFilter>
{
    RemoteSystemStatusTypeFilter(std::nullptr_t) noexcept {}
    RemoteSystemStatusTypeFilter(Windows::System::RemoteSystems::RemoteSystemStatusType const& remoteSystemStatusType);
};

struct RemoteSystemUpdatedEventArgs :
    Windows::System::RemoteSystems::IRemoteSystemUpdatedEventArgs
{
    RemoteSystemUpdatedEventArgs(std::nullptr_t) noexcept {}
};

struct RemoteSystemWatcher :
    Windows::System::RemoteSystems::IRemoteSystemWatcher
{
    RemoteSystemWatcher(std::nullptr_t) noexcept {}
};

}

namespace impl {

}

}
