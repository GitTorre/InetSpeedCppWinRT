// C++/WinRT v1.0.170717.1
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "Windows.Media.MediaProperties.0.h"
#include "Windows.Security.Credentials.0.h"
#include "Windows.Storage.Streams.0.h"
#include "Windows.ApplicationModel.Chat.0.h"

namespace winrt {

namespace Windows::ApplicationModel::Chat {

struct IChatCapabilities :
    Windows::Foundation::IInspectable,
    impl::consume_t<IChatCapabilities>
{
    IChatCapabilities(std::nullptr_t = nullptr) noexcept {}
};

struct IChatCapabilitiesManagerStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IChatCapabilitiesManagerStatics>
{
    IChatCapabilitiesManagerStatics(std::nullptr_t = nullptr) noexcept {}
};

struct IChatConversation :
    Windows::Foundation::IInspectable,
    impl::consume_t<IChatConversation>
{
    IChatConversation(std::nullptr_t = nullptr) noexcept {}
};

struct IChatConversation2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IChatConversation2>
{
    IChatConversation2(std::nullptr_t = nullptr) noexcept {}
};

struct IChatConversationReader :
    Windows::Foundation::IInspectable,
    impl::consume_t<IChatConversationReader>
{
    IChatConversationReader(std::nullptr_t = nullptr) noexcept {}
};

struct IChatConversationThreadingInfo :
    Windows::Foundation::IInspectable,
    impl::consume_t<IChatConversationThreadingInfo>
{
    IChatConversationThreadingInfo(std::nullptr_t = nullptr) noexcept {}
};

struct IChatItem :
    Windows::Foundation::IInspectable,
    impl::consume_t<IChatItem>
{
    IChatItem(std::nullptr_t = nullptr) noexcept {}
};

struct IChatMessage :
    Windows::Foundation::IInspectable,
    impl::consume_t<IChatMessage>
{
    IChatMessage(std::nullptr_t = nullptr) noexcept {}
};

struct IChatMessage2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IChatMessage2>,
    impl::require<IChatMessage2, Windows::ApplicationModel::Chat::IChatMessage, Windows::ApplicationModel::Chat::IChatMessage3>
{
    IChatMessage2(std::nullptr_t = nullptr) noexcept {}
    using impl::consume_t<IChatMessage2, Windows::ApplicationModel::Chat::IChatMessage>::From;
    using impl::consume_t<IChatMessage2, Windows::ApplicationModel::Chat::IChatMessage2>::From;
    using impl::consume_t<IChatMessage2, Windows::ApplicationModel::Chat::IChatMessage>::IsForwardingDisabled;
    using impl::consume_t<IChatMessage2, Windows::ApplicationModel::Chat::IChatMessage2>::IsForwardingDisabled;
    using impl::consume_t<IChatMessage2, Windows::ApplicationModel::Chat::IChatMessage>::IsIncoming;
    using impl::consume_t<IChatMessage2, Windows::ApplicationModel::Chat::IChatMessage2>::IsIncoming;
    using impl::consume_t<IChatMessage2, Windows::ApplicationModel::Chat::IChatMessage>::IsRead;
    using impl::consume_t<IChatMessage2, Windows::ApplicationModel::Chat::IChatMessage2>::IsRead;
    using impl::consume_t<IChatMessage2, Windows::ApplicationModel::Chat::IChatMessage>::LocalTimestamp;
    using impl::consume_t<IChatMessage2, Windows::ApplicationModel::Chat::IChatMessage2>::LocalTimestamp;
    using impl::consume_t<IChatMessage2, Windows::ApplicationModel::Chat::IChatMessage>::NetworkTimestamp;
    using impl::consume_t<IChatMessage2, Windows::ApplicationModel::Chat::IChatMessage2>::NetworkTimestamp;
    using impl::consume_t<IChatMessage2, Windows::ApplicationModel::Chat::IChatMessage3>::RemoteId;
    using impl::consume_t<IChatMessage2, Windows::ApplicationModel::Chat::IChatMessage2>::RemoteId;
    using impl::consume_t<IChatMessage2, Windows::ApplicationModel::Chat::IChatMessage>::Status;
    using impl::consume_t<IChatMessage2, Windows::ApplicationModel::Chat::IChatMessage2>::Status;
    using impl::consume_t<IChatMessage2, Windows::ApplicationModel::Chat::IChatMessage>::Subject;
    using impl::consume_t<IChatMessage2, Windows::ApplicationModel::Chat::IChatMessage2>::Subject;
};

struct IChatMessage3 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IChatMessage3>,
    impl::require<IChatMessage3, Windows::ApplicationModel::Chat::IChatMessage>
{
    IChatMessage3(std::nullptr_t = nullptr) noexcept {}
};

struct IChatMessage4 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IChatMessage4>,
    impl::require<IChatMessage4, Windows::ApplicationModel::Chat::IChatMessage>
{
    IChatMessage4(std::nullptr_t = nullptr) noexcept {}
};

struct IChatMessageAttachment :
    Windows::Foundation::IInspectable,
    impl::consume_t<IChatMessageAttachment>
{
    IChatMessageAttachment(std::nullptr_t = nullptr) noexcept {}
};

struct IChatMessageAttachment2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IChatMessageAttachment2>,
    impl::require<IChatMessageAttachment2, Windows::ApplicationModel::Chat::IChatMessageAttachment>
{
    IChatMessageAttachment2(std::nullptr_t = nullptr) noexcept {}
};

struct IChatMessageAttachmentFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<IChatMessageAttachmentFactory>
{
    IChatMessageAttachmentFactory(std::nullptr_t = nullptr) noexcept {}
};

struct IChatMessageBlockingStatic :
    Windows::Foundation::IInspectable,
    impl::consume_t<IChatMessageBlockingStatic>
{
    IChatMessageBlockingStatic(std::nullptr_t = nullptr) noexcept {}
};

struct IChatMessageChange :
    Windows::Foundation::IInspectable,
    impl::consume_t<IChatMessageChange>
{
    IChatMessageChange(std::nullptr_t = nullptr) noexcept {}
};

struct IChatMessageChangeReader :
    Windows::Foundation::IInspectable,
    impl::consume_t<IChatMessageChangeReader>
{
    IChatMessageChangeReader(std::nullptr_t = nullptr) noexcept {}
};

struct IChatMessageChangeTracker :
    Windows::Foundation::IInspectable,
    impl::consume_t<IChatMessageChangeTracker>
{
    IChatMessageChangeTracker(std::nullptr_t = nullptr) noexcept {}
};

struct IChatMessageChangedDeferral :
    Windows::Foundation::IInspectable,
    impl::consume_t<IChatMessageChangedDeferral>
{
    IChatMessageChangedDeferral(std::nullptr_t = nullptr) noexcept {}
};

struct IChatMessageChangedEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<IChatMessageChangedEventArgs>
{
    IChatMessageChangedEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct IChatMessageManager2Statics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IChatMessageManager2Statics>,
    impl::require<IChatMessageManager2Statics, Windows::ApplicationModel::Chat::IChatMessageManagerStatic>
{
    IChatMessageManager2Statics(std::nullptr_t = nullptr) noexcept {}
};

struct IChatMessageManagerStatic :
    Windows::Foundation::IInspectable,
    impl::consume_t<IChatMessageManagerStatic>
{
    IChatMessageManagerStatic(std::nullptr_t = nullptr) noexcept {}
};

struct IChatMessageManagerStatics3 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IChatMessageManagerStatics3>,
    impl::require<IChatMessageManagerStatics3, Windows::ApplicationModel::Chat::IChatMessageManagerStatic>
{
    IChatMessageManagerStatics3(std::nullptr_t = nullptr) noexcept {}
};

struct IChatMessageNotificationTriggerDetails :
    Windows::Foundation::IInspectable,
    impl::consume_t<IChatMessageNotificationTriggerDetails>
{
    IChatMessageNotificationTriggerDetails(std::nullptr_t = nullptr) noexcept {}
};

struct IChatMessageNotificationTriggerDetails2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IChatMessageNotificationTriggerDetails2>,
    impl::require<IChatMessageNotificationTriggerDetails2, Windows::ApplicationModel::Chat::IChatMessageNotificationTriggerDetails>
{
    IChatMessageNotificationTriggerDetails2(std::nullptr_t = nullptr) noexcept {}
};

struct IChatMessageReader :
    Windows::Foundation::IInspectable,
    impl::consume_t<IChatMessageReader>
{
    IChatMessageReader(std::nullptr_t = nullptr) noexcept {}
};

struct IChatMessageReader2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IChatMessageReader2>
{
    IChatMessageReader2(std::nullptr_t = nullptr) noexcept {}
};

struct IChatMessageStore :
    Windows::Foundation::IInspectable,
    impl::consume_t<IChatMessageStore>
{
    IChatMessageStore(std::nullptr_t = nullptr) noexcept {}
};

struct IChatMessageStore2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IChatMessageStore2>,
    impl::require<IChatMessageStore2, Windows::ApplicationModel::Chat::IChatMessageStore>
{
    IChatMessageStore2(std::nullptr_t = nullptr) noexcept {}
};

struct IChatMessageStore3 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IChatMessageStore3>,
    impl::require<IChatMessageStore3, Windows::ApplicationModel::Chat::IChatMessageStore>
{
    IChatMessageStore3(std::nullptr_t = nullptr) noexcept {}
};

struct IChatMessageStoreChangedEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<IChatMessageStoreChangedEventArgs>
{
    IChatMessageStoreChangedEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct IChatMessageTransport :
    Windows::Foundation::IInspectable,
    impl::consume_t<IChatMessageTransport>
{
    IChatMessageTransport(std::nullptr_t = nullptr) noexcept {}
};

struct IChatMessageTransport2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IChatMessageTransport2>,
    impl::require<IChatMessageTransport2, Windows::ApplicationModel::Chat::IChatMessageTransport>
{
    IChatMessageTransport2(std::nullptr_t = nullptr) noexcept {}
};

struct IChatMessageTransportConfiguration :
    Windows::Foundation::IInspectable,
    impl::consume_t<IChatMessageTransportConfiguration>
{
    IChatMessageTransportConfiguration(std::nullptr_t = nullptr) noexcept {}
};

struct IChatMessageValidationResult :
    Windows::Foundation::IInspectable,
    impl::consume_t<IChatMessageValidationResult>
{
    IChatMessageValidationResult(std::nullptr_t = nullptr) noexcept {}
};

struct IChatQueryOptions :
    Windows::Foundation::IInspectable,
    impl::consume_t<IChatQueryOptions>
{
    IChatQueryOptions(std::nullptr_t = nullptr) noexcept {}
};

struct IChatRecipientDeliveryInfo :
    Windows::Foundation::IInspectable,
    impl::consume_t<IChatRecipientDeliveryInfo>
{
    IChatRecipientDeliveryInfo(std::nullptr_t = nullptr) noexcept {}
};

struct IChatSearchReader :
    Windows::Foundation::IInspectable,
    impl::consume_t<IChatSearchReader>
{
    IChatSearchReader(std::nullptr_t = nullptr) noexcept {}
};

struct IChatSyncConfiguration :
    Windows::Foundation::IInspectable,
    impl::consume_t<IChatSyncConfiguration>
{
    IChatSyncConfiguration(std::nullptr_t = nullptr) noexcept {}
};

struct IChatSyncManager :
    Windows::Foundation::IInspectable,
    impl::consume_t<IChatSyncManager>
{
    IChatSyncManager(std::nullptr_t = nullptr) noexcept {}
};

struct IRcsEndUserMessage :
    Windows::Foundation::IInspectable,
    impl::consume_t<IRcsEndUserMessage>
{
    IRcsEndUserMessage(std::nullptr_t = nullptr) noexcept {}
};

struct IRcsEndUserMessageAction :
    Windows::Foundation::IInspectable,
    impl::consume_t<IRcsEndUserMessageAction>
{
    IRcsEndUserMessageAction(std::nullptr_t = nullptr) noexcept {}
};

struct IRcsEndUserMessageAvailableEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<IRcsEndUserMessageAvailableEventArgs>
{
    IRcsEndUserMessageAvailableEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct IRcsEndUserMessageAvailableTriggerDetails :
    Windows::Foundation::IInspectable,
    impl::consume_t<IRcsEndUserMessageAvailableTriggerDetails>
{
    IRcsEndUserMessageAvailableTriggerDetails(std::nullptr_t = nullptr) noexcept {}
};

struct IRcsEndUserMessageManager :
    Windows::Foundation::IInspectable,
    impl::consume_t<IRcsEndUserMessageManager>
{
    IRcsEndUserMessageManager(std::nullptr_t = nullptr) noexcept {}
};

struct IRcsManagerStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IRcsManagerStatics>
{
    IRcsManagerStatics(std::nullptr_t = nullptr) noexcept {}
};

struct IRcsServiceKindSupportedChangedEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<IRcsServiceKindSupportedChangedEventArgs>
{
    IRcsServiceKindSupportedChangedEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct IRcsTransport :
    Windows::Foundation::IInspectable,
    impl::consume_t<IRcsTransport>
{
    IRcsTransport(std::nullptr_t = nullptr) noexcept {}
};

struct IRcsTransportConfiguration :
    Windows::Foundation::IInspectable,
    impl::consume_t<IRcsTransportConfiguration>
{
    IRcsTransportConfiguration(std::nullptr_t = nullptr) noexcept {}
};

struct IRemoteParticipantComposingChangedEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<IRemoteParticipantComposingChangedEventArgs>
{
    IRemoteParticipantComposingChangedEventArgs(std::nullptr_t = nullptr) noexcept {}
};

}

}
