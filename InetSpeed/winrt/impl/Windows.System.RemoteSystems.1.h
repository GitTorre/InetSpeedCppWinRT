// C++/WinRT v1.0.170717.1
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "Windows.Foundation.0.h"
#include "Windows.Foundation.Collections.0.h"
#include "Windows.Networking.0.h"
#include "Windows.System.RemoteSystems.0.h"

namespace winrt {

namespace Windows::System::RemoteSystems {

struct IKnownRemoteSystemCapabilitiesStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IKnownRemoteSystemCapabilitiesStatics>
{
    IKnownRemoteSystemCapabilitiesStatics(std::nullptr_t = nullptr) noexcept {}
};

struct IRemoteSystem :
    Windows::Foundation::IInspectable,
    impl::consume_t<IRemoteSystem>
{
    IRemoteSystem(std::nullptr_t = nullptr) noexcept {}
};

struct IRemoteSystem2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IRemoteSystem2>
{
    IRemoteSystem2(std::nullptr_t = nullptr) noexcept {}
};

struct IRemoteSystemAddedEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<IRemoteSystemAddedEventArgs>
{
    IRemoteSystemAddedEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct IRemoteSystemAuthorizationKindFilter :
    Windows::Foundation::IInspectable,
    impl::consume_t<IRemoteSystemAuthorizationKindFilter>
{
    IRemoteSystemAuthorizationKindFilter(std::nullptr_t = nullptr) noexcept {}
};

struct IRemoteSystemAuthorizationKindFilterFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<IRemoteSystemAuthorizationKindFilterFactory>
{
    IRemoteSystemAuthorizationKindFilterFactory(std::nullptr_t = nullptr) noexcept {}
};

struct IRemoteSystemConnectionRequest :
    Windows::Foundation::IInspectable,
    impl::consume_t<IRemoteSystemConnectionRequest>
{
    IRemoteSystemConnectionRequest(std::nullptr_t = nullptr) noexcept {}
};

struct IRemoteSystemConnectionRequestFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<IRemoteSystemConnectionRequestFactory>
{
    IRemoteSystemConnectionRequestFactory(std::nullptr_t = nullptr) noexcept {}
};

struct IRemoteSystemDiscoveryTypeFilter :
    Windows::Foundation::IInspectable,
    impl::consume_t<IRemoteSystemDiscoveryTypeFilter>
{
    IRemoteSystemDiscoveryTypeFilter(std::nullptr_t = nullptr) noexcept {}
};

struct IRemoteSystemDiscoveryTypeFilterFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<IRemoteSystemDiscoveryTypeFilterFactory>
{
    IRemoteSystemDiscoveryTypeFilterFactory(std::nullptr_t = nullptr) noexcept {}
};

struct IRemoteSystemFilter :
    Windows::Foundation::IInspectable,
    impl::consume_t<IRemoteSystemFilter>
{
    IRemoteSystemFilter(std::nullptr_t = nullptr) noexcept {}
};

struct IRemoteSystemKindFilter :
    Windows::Foundation::IInspectable,
    impl::consume_t<IRemoteSystemKindFilter>
{
    IRemoteSystemKindFilter(std::nullptr_t = nullptr) noexcept {}
};

struct IRemoteSystemKindFilterFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<IRemoteSystemKindFilterFactory>
{
    IRemoteSystemKindFilterFactory(std::nullptr_t = nullptr) noexcept {}
};

struct IRemoteSystemKindStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IRemoteSystemKindStatics>
{
    IRemoteSystemKindStatics(std::nullptr_t = nullptr) noexcept {}
};

struct IRemoteSystemRemovedEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<IRemoteSystemRemovedEventArgs>
{
    IRemoteSystemRemovedEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct IRemoteSystemSession :
    Windows::Foundation::IInspectable,
    impl::consume_t<IRemoteSystemSession>,
    impl::require<IRemoteSystemSession, Windows::Foundation::IClosable>
{
    IRemoteSystemSession(std::nullptr_t = nullptr) noexcept {}
};

struct IRemoteSystemSessionAddedEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<IRemoteSystemSessionAddedEventArgs>
{
    IRemoteSystemSessionAddedEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct IRemoteSystemSessionController :
    Windows::Foundation::IInspectable,
    impl::consume_t<IRemoteSystemSessionController>
{
    IRemoteSystemSessionController(std::nullptr_t = nullptr) noexcept {}
};

struct IRemoteSystemSessionControllerFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<IRemoteSystemSessionControllerFactory>
{
    IRemoteSystemSessionControllerFactory(std::nullptr_t = nullptr) noexcept {}
};

struct IRemoteSystemSessionCreationResult :
    Windows::Foundation::IInspectable,
    impl::consume_t<IRemoteSystemSessionCreationResult>
{
    IRemoteSystemSessionCreationResult(std::nullptr_t = nullptr) noexcept {}
};

struct IRemoteSystemSessionDisconnectedEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<IRemoteSystemSessionDisconnectedEventArgs>
{
    IRemoteSystemSessionDisconnectedEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct IRemoteSystemSessionInfo :
    Windows::Foundation::IInspectable,
    impl::consume_t<IRemoteSystemSessionInfo>
{
    IRemoteSystemSessionInfo(std::nullptr_t = nullptr) noexcept {}
};

struct IRemoteSystemSessionInvitation :
    Windows::Foundation::IInspectable,
    impl::consume_t<IRemoteSystemSessionInvitation>
{
    IRemoteSystemSessionInvitation(std::nullptr_t = nullptr) noexcept {}
};

struct IRemoteSystemSessionInvitationListener :
    Windows::Foundation::IInspectable,
    impl::consume_t<IRemoteSystemSessionInvitationListener>
{
    IRemoteSystemSessionInvitationListener(std::nullptr_t = nullptr) noexcept {}
};

struct IRemoteSystemSessionInvitationReceivedEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<IRemoteSystemSessionInvitationReceivedEventArgs>
{
    IRemoteSystemSessionInvitationReceivedEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct IRemoteSystemSessionJoinRequest :
    Windows::Foundation::IInspectable,
    impl::consume_t<IRemoteSystemSessionJoinRequest>
{
    IRemoteSystemSessionJoinRequest(std::nullptr_t = nullptr) noexcept {}
};

struct IRemoteSystemSessionJoinRequestedEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<IRemoteSystemSessionJoinRequestedEventArgs>
{
    IRemoteSystemSessionJoinRequestedEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct IRemoteSystemSessionJoinResult :
    Windows::Foundation::IInspectable,
    impl::consume_t<IRemoteSystemSessionJoinResult>
{
    IRemoteSystemSessionJoinResult(std::nullptr_t = nullptr) noexcept {}
};

struct IRemoteSystemSessionMessageChannel :
    Windows::Foundation::IInspectable,
    impl::consume_t<IRemoteSystemSessionMessageChannel>
{
    IRemoteSystemSessionMessageChannel(std::nullptr_t = nullptr) noexcept {}
};

struct IRemoteSystemSessionMessageChannelFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<IRemoteSystemSessionMessageChannelFactory>
{
    IRemoteSystemSessionMessageChannelFactory(std::nullptr_t = nullptr) noexcept {}
};

struct IRemoteSystemSessionOptions :
    Windows::Foundation::IInspectable,
    impl::consume_t<IRemoteSystemSessionOptions>
{
    IRemoteSystemSessionOptions(std::nullptr_t = nullptr) noexcept {}
};

struct IRemoteSystemSessionParticipant :
    Windows::Foundation::IInspectable,
    impl::consume_t<IRemoteSystemSessionParticipant>
{
    IRemoteSystemSessionParticipant(std::nullptr_t = nullptr) noexcept {}
};

struct IRemoteSystemSessionParticipantAddedEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<IRemoteSystemSessionParticipantAddedEventArgs>
{
    IRemoteSystemSessionParticipantAddedEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct IRemoteSystemSessionParticipantRemovedEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<IRemoteSystemSessionParticipantRemovedEventArgs>
{
    IRemoteSystemSessionParticipantRemovedEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct IRemoteSystemSessionParticipantWatcher :
    Windows::Foundation::IInspectable,
    impl::consume_t<IRemoteSystemSessionParticipantWatcher>
{
    IRemoteSystemSessionParticipantWatcher(std::nullptr_t = nullptr) noexcept {}
};

struct IRemoteSystemSessionRemovedEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<IRemoteSystemSessionRemovedEventArgs>
{
    IRemoteSystemSessionRemovedEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct IRemoteSystemSessionStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IRemoteSystemSessionStatics>
{
    IRemoteSystemSessionStatics(std::nullptr_t = nullptr) noexcept {}
};

struct IRemoteSystemSessionUpdatedEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<IRemoteSystemSessionUpdatedEventArgs>
{
    IRemoteSystemSessionUpdatedEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct IRemoteSystemSessionValueSetReceivedEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<IRemoteSystemSessionValueSetReceivedEventArgs>
{
    IRemoteSystemSessionValueSetReceivedEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct IRemoteSystemSessionWatcher :
    Windows::Foundation::IInspectable,
    impl::consume_t<IRemoteSystemSessionWatcher>
{
    IRemoteSystemSessionWatcher(std::nullptr_t = nullptr) noexcept {}
};

struct IRemoteSystemStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IRemoteSystemStatics>
{
    IRemoteSystemStatics(std::nullptr_t = nullptr) noexcept {}
};

struct IRemoteSystemStatics2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IRemoteSystemStatics2>
{
    IRemoteSystemStatics2(std::nullptr_t = nullptr) noexcept {}
};

struct IRemoteSystemStatusTypeFilter :
    Windows::Foundation::IInspectable,
    impl::consume_t<IRemoteSystemStatusTypeFilter>
{
    IRemoteSystemStatusTypeFilter(std::nullptr_t = nullptr) noexcept {}
};

struct IRemoteSystemStatusTypeFilterFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<IRemoteSystemStatusTypeFilterFactory>
{
    IRemoteSystemStatusTypeFilterFactory(std::nullptr_t = nullptr) noexcept {}
};

struct IRemoteSystemUpdatedEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<IRemoteSystemUpdatedEventArgs>
{
    IRemoteSystemUpdatedEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct IRemoteSystemWatcher :
    Windows::Foundation::IInspectable,
    impl::consume_t<IRemoteSystemWatcher>
{
    IRemoteSystemWatcher(std::nullptr_t = nullptr) noexcept {}
};

}

}
