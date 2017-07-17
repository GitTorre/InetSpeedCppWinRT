// C++/WinRT v1.0.170717.1
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "Windows.Devices.Enumeration.0.h"
#include "Windows.Foundation.0.h"
#include "Windows.Globalization.0.h"
#include "Windows.Networking.Sockets.0.h"
#include "Windows.Security.Credentials.0.h"
#include "Windows.Security.Cryptography.Certificates.0.h"
#include "Windows.Devices.AllJoyn.0.h"

namespace winrt {

namespace Windows::Devices::AllJoyn {

struct IAllJoynAboutData :
    Windows::Foundation::IInspectable,
    impl::consume_t<IAllJoynAboutData>
{
    IAllJoynAboutData(std::nullptr_t = nullptr) noexcept {}
};

struct IAllJoynAboutDataView :
    Windows::Foundation::IInspectable,
    impl::consume_t<IAllJoynAboutDataView>
{
    IAllJoynAboutDataView(std::nullptr_t = nullptr) noexcept {}
};

struct IAllJoynAboutDataViewStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IAllJoynAboutDataViewStatics>
{
    IAllJoynAboutDataViewStatics(std::nullptr_t = nullptr) noexcept {}
};

struct IAllJoynAcceptSessionJoiner :
    Windows::Foundation::IInspectable,
    impl::consume_t<IAllJoynAcceptSessionJoiner>
{
    IAllJoynAcceptSessionJoiner(std::nullptr_t = nullptr) noexcept {}
};

struct IAllJoynAcceptSessionJoinerEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<IAllJoynAcceptSessionJoinerEventArgs>
{
    IAllJoynAcceptSessionJoinerEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct IAllJoynAcceptSessionJoinerEventArgsFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<IAllJoynAcceptSessionJoinerEventArgsFactory>
{
    IAllJoynAcceptSessionJoinerEventArgsFactory(std::nullptr_t = nullptr) noexcept {}
};

struct IAllJoynAuthenticationCompleteEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<IAllJoynAuthenticationCompleteEventArgs>
{
    IAllJoynAuthenticationCompleteEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct IAllJoynBusAttachment :
    Windows::Foundation::IInspectable,
    impl::consume_t<IAllJoynBusAttachment>
{
    IAllJoynBusAttachment(std::nullptr_t = nullptr) noexcept {}
};

struct IAllJoynBusAttachment2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IAllJoynBusAttachment2>
{
    IAllJoynBusAttachment2(std::nullptr_t = nullptr) noexcept {}
};

struct IAllJoynBusAttachmentFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<IAllJoynBusAttachmentFactory>
{
    IAllJoynBusAttachmentFactory(std::nullptr_t = nullptr) noexcept {}
};

struct IAllJoynBusAttachmentStateChangedEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<IAllJoynBusAttachmentStateChangedEventArgs>
{
    IAllJoynBusAttachmentStateChangedEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct IAllJoynBusAttachmentStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IAllJoynBusAttachmentStatics>
{
    IAllJoynBusAttachmentStatics(std::nullptr_t = nullptr) noexcept {}
};

struct IAllJoynBusObject :
    Windows::Foundation::IInspectable,
    impl::consume_t<IAllJoynBusObject>
{
    IAllJoynBusObject(std::nullptr_t = nullptr) noexcept {}
};

struct IAllJoynBusObjectFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<IAllJoynBusObjectFactory>
{
    IAllJoynBusObjectFactory(std::nullptr_t = nullptr) noexcept {}
};

struct IAllJoynBusObjectStoppedEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<IAllJoynBusObjectStoppedEventArgs>
{
    IAllJoynBusObjectStoppedEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct IAllJoynBusObjectStoppedEventArgsFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<IAllJoynBusObjectStoppedEventArgsFactory>
{
    IAllJoynBusObjectStoppedEventArgsFactory(std::nullptr_t = nullptr) noexcept {}
};

struct IAllJoynCredentials :
    Windows::Foundation::IInspectable,
    impl::consume_t<IAllJoynCredentials>
{
    IAllJoynCredentials(std::nullptr_t = nullptr) noexcept {}
};

struct IAllJoynCredentialsRequestedEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<IAllJoynCredentialsRequestedEventArgs>
{
    IAllJoynCredentialsRequestedEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct IAllJoynCredentialsVerificationRequestedEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<IAllJoynCredentialsVerificationRequestedEventArgs>
{
    IAllJoynCredentialsVerificationRequestedEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct IAllJoynMessageInfo :
    Windows::Foundation::IInspectable,
    impl::consume_t<IAllJoynMessageInfo>
{
    IAllJoynMessageInfo(std::nullptr_t = nullptr) noexcept {}
};

struct IAllJoynMessageInfoFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<IAllJoynMessageInfoFactory>
{
    IAllJoynMessageInfoFactory(std::nullptr_t = nullptr) noexcept {}
};

struct IAllJoynProducer :
    Windows::Foundation::IInspectable,
    impl::consume_t<IAllJoynProducer>
{
    IAllJoynProducer(std::nullptr_t = nullptr) noexcept {}
};

struct IAllJoynProducerStoppedEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<IAllJoynProducerStoppedEventArgs>
{
    IAllJoynProducerStoppedEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct IAllJoynProducerStoppedEventArgsFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<IAllJoynProducerStoppedEventArgsFactory>
{
    IAllJoynProducerStoppedEventArgsFactory(std::nullptr_t = nullptr) noexcept {}
};

struct IAllJoynServiceInfo :
    Windows::Foundation::IInspectable,
    impl::consume_t<IAllJoynServiceInfo>
{
    IAllJoynServiceInfo(std::nullptr_t = nullptr) noexcept {}
};

struct IAllJoynServiceInfoFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<IAllJoynServiceInfoFactory>
{
    IAllJoynServiceInfoFactory(std::nullptr_t = nullptr) noexcept {}
};

struct IAllJoynServiceInfoRemovedEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<IAllJoynServiceInfoRemovedEventArgs>
{
    IAllJoynServiceInfoRemovedEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct IAllJoynServiceInfoRemovedEventArgsFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<IAllJoynServiceInfoRemovedEventArgsFactory>
{
    IAllJoynServiceInfoRemovedEventArgsFactory(std::nullptr_t = nullptr) noexcept {}
};

struct IAllJoynServiceInfoStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IAllJoynServiceInfoStatics>
{
    IAllJoynServiceInfoStatics(std::nullptr_t = nullptr) noexcept {}
};

struct IAllJoynSession :
    Windows::Foundation::IInspectable,
    impl::consume_t<IAllJoynSession>
{
    IAllJoynSession(std::nullptr_t = nullptr) noexcept {}
};

struct IAllJoynSessionJoinedEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<IAllJoynSessionJoinedEventArgs>
{
    IAllJoynSessionJoinedEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct IAllJoynSessionJoinedEventArgsFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<IAllJoynSessionJoinedEventArgsFactory>
{
    IAllJoynSessionJoinedEventArgsFactory(std::nullptr_t = nullptr) noexcept {}
};

struct IAllJoynSessionLostEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<IAllJoynSessionLostEventArgs>
{
    IAllJoynSessionLostEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct IAllJoynSessionLostEventArgsFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<IAllJoynSessionLostEventArgsFactory>
{
    IAllJoynSessionLostEventArgsFactory(std::nullptr_t = nullptr) noexcept {}
};

struct IAllJoynSessionMemberAddedEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<IAllJoynSessionMemberAddedEventArgs>
{
    IAllJoynSessionMemberAddedEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct IAllJoynSessionMemberAddedEventArgsFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<IAllJoynSessionMemberAddedEventArgsFactory>
{
    IAllJoynSessionMemberAddedEventArgsFactory(std::nullptr_t = nullptr) noexcept {}
};

struct IAllJoynSessionMemberRemovedEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<IAllJoynSessionMemberRemovedEventArgs>
{
    IAllJoynSessionMemberRemovedEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct IAllJoynSessionMemberRemovedEventArgsFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<IAllJoynSessionMemberRemovedEventArgsFactory>
{
    IAllJoynSessionMemberRemovedEventArgsFactory(std::nullptr_t = nullptr) noexcept {}
};

struct IAllJoynSessionStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IAllJoynSessionStatics>
{
    IAllJoynSessionStatics(std::nullptr_t = nullptr) noexcept {}
};

struct IAllJoynStatusStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IAllJoynStatusStatics>
{
    IAllJoynStatusStatics(std::nullptr_t = nullptr) noexcept {}
};

struct IAllJoynWatcherStoppedEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<IAllJoynWatcherStoppedEventArgs>
{
    IAllJoynWatcherStoppedEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct IAllJoynWatcherStoppedEventArgsFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<IAllJoynWatcherStoppedEventArgsFactory>
{
    IAllJoynWatcherStoppedEventArgsFactory(std::nullptr_t = nullptr) noexcept {}
};

}

}
