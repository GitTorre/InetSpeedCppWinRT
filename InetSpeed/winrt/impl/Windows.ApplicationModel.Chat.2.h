// C++/WinRT v1.0.170717.1
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "Windows.Media.MediaProperties.1.h"
#include "Windows.Security.Credentials.1.h"
#include "Windows.Storage.Streams.1.h"
#include "Windows.ApplicationModel.Chat.1.h"

namespace winrt {

namespace Windows::ApplicationModel::Chat {

struct ChatCapabilities :
    Windows::ApplicationModel::Chat::IChatCapabilities
{
    ChatCapabilities(std::nullptr_t) noexcept {}
};

struct ChatCapabilitiesManager
{
    ChatCapabilitiesManager() = delete;
    static Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Chat::ChatCapabilities> GetCachedCapabilitiesAsync(param::hstring const& address);
    static Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Chat::ChatCapabilities> GetCapabilitiesFromNetworkAsync(param::hstring const& address);
};

struct ChatConversation :
    Windows::ApplicationModel::Chat::IChatConversation,
    impl::require<ChatConversation, Windows::ApplicationModel::Chat::IChatConversation2, Windows::ApplicationModel::Chat::IChatItem>
{
    ChatConversation(std::nullptr_t) noexcept {}
};

struct ChatConversationReader :
    Windows::ApplicationModel::Chat::IChatConversationReader
{
    ChatConversationReader(std::nullptr_t) noexcept {}
};

struct ChatConversationThreadingInfo :
    Windows::ApplicationModel::Chat::IChatConversationThreadingInfo
{
    ChatConversationThreadingInfo(std::nullptr_t) noexcept {}
    ChatConversationThreadingInfo();
};

struct ChatMessage :
    Windows::ApplicationModel::Chat::IChatMessage,
    impl::require<ChatMessage, Windows::ApplicationModel::Chat::IChatItem, Windows::ApplicationModel::Chat::IChatMessage2, Windows::ApplicationModel::Chat::IChatMessage3, Windows::ApplicationModel::Chat::IChatMessage4>
{
    ChatMessage(std::nullptr_t) noexcept {}
    ChatMessage();
    using impl::consume_t<ChatMessage, Windows::ApplicationModel::Chat::IChatMessage2>::From;
    using Windows::ApplicationModel::Chat::IChatMessage::From;
    using impl::consume_t<ChatMessage, Windows::ApplicationModel::Chat::IChatMessage2>::IsForwardingDisabled;
    using Windows::ApplicationModel::Chat::IChatMessage::IsForwardingDisabled;
    using impl::consume_t<ChatMessage, Windows::ApplicationModel::Chat::IChatMessage2>::IsIncoming;
    using Windows::ApplicationModel::Chat::IChatMessage::IsIncoming;
    using impl::consume_t<ChatMessage, Windows::ApplicationModel::Chat::IChatMessage2>::IsRead;
    using Windows::ApplicationModel::Chat::IChatMessage::IsRead;
    using impl::consume_t<ChatMessage, Windows::ApplicationModel::Chat::IChatMessage2>::LocalTimestamp;
    using Windows::ApplicationModel::Chat::IChatMessage::LocalTimestamp;
    using impl::consume_t<ChatMessage, Windows::ApplicationModel::Chat::IChatMessage2>::NetworkTimestamp;
    using Windows::ApplicationModel::Chat::IChatMessage::NetworkTimestamp;
    using impl::consume_t<ChatMessage, Windows::ApplicationModel::Chat::IChatMessage2>::RemoteId;
    using impl::consume_t<ChatMessage, Windows::ApplicationModel::Chat::IChatMessage3>::RemoteId;
    using impl::consume_t<ChatMessage, Windows::ApplicationModel::Chat::IChatMessage2>::Status;
    using Windows::ApplicationModel::Chat::IChatMessage::Status;
    using impl::consume_t<ChatMessage, Windows::ApplicationModel::Chat::IChatMessage2>::Subject;
    using Windows::ApplicationModel::Chat::IChatMessage::Subject;
};

struct ChatMessageAttachment :
    Windows::ApplicationModel::Chat::IChatMessageAttachment,
    impl::require<ChatMessageAttachment, Windows::ApplicationModel::Chat::IChatMessageAttachment2>
{
    ChatMessageAttachment(std::nullptr_t) noexcept {}
    ChatMessageAttachment(param::hstring const& mimeType, Windows::Storage::Streams::IRandomAccessStreamReference const& dataStreamReference);
};

struct ChatMessageBlocking
{
    ChatMessageBlocking() = delete;
    static Windows::Foundation::IAsyncAction MarkMessageAsBlockedAsync(param::hstring const& localChatMessageId, bool blocked);
};

struct ChatMessageChange :
    Windows::ApplicationModel::Chat::IChatMessageChange
{
    ChatMessageChange(std::nullptr_t) noexcept {}
};

struct ChatMessageChangeReader :
    Windows::ApplicationModel::Chat::IChatMessageChangeReader
{
    ChatMessageChangeReader(std::nullptr_t) noexcept {}
};

struct ChatMessageChangeTracker :
    Windows::ApplicationModel::Chat::IChatMessageChangeTracker
{
    ChatMessageChangeTracker(std::nullptr_t) noexcept {}
};

struct ChatMessageChangedDeferral :
    Windows::ApplicationModel::Chat::IChatMessageChangedDeferral
{
    ChatMessageChangedDeferral(std::nullptr_t) noexcept {}
};

struct ChatMessageChangedEventArgs :
    Windows::ApplicationModel::Chat::IChatMessageChangedEventArgs
{
    ChatMessageChangedEventArgs(std::nullptr_t) noexcept {}
};

struct ChatMessageManager
{
    ChatMessageManager() = delete;
    static Windows::Foundation::IAsyncOperation<hstring> RegisterTransportAsync();
    static Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Chat::ChatMessageTransport> GetTransportAsync(param::hstring const& transportId);
    static Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Chat::ChatMessageTransport>> GetTransportsAsync();
    static Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Chat::ChatMessageStore> RequestStoreAsync();
    static Windows::Foundation::IAsyncAction ShowComposeSmsMessageAsync(Windows::ApplicationModel::Chat::ChatMessage const& message);
    static void ShowSmsSettings();
    static Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Chat::ChatSyncManager> RequestSyncManagerAsync();
};

struct ChatMessageNotificationTriggerDetails :
    Windows::ApplicationModel::Chat::IChatMessageNotificationTriggerDetails,
    impl::require<ChatMessageNotificationTriggerDetails, Windows::ApplicationModel::Chat::IChatMessageNotificationTriggerDetails2>
{
    ChatMessageNotificationTriggerDetails(std::nullptr_t) noexcept {}
};

struct ChatMessageReader :
    Windows::ApplicationModel::Chat::IChatMessageReader,
    impl::require<ChatMessageReader, Windows::ApplicationModel::Chat::IChatMessageReader2>
{
    ChatMessageReader(std::nullptr_t) noexcept {}
    using impl::consume_t<ChatMessageReader, Windows::ApplicationModel::Chat::IChatMessageReader2>::ReadBatchAsync;
    using Windows::ApplicationModel::Chat::IChatMessageReader::ReadBatchAsync;
};

struct ChatMessageStore :
    Windows::ApplicationModel::Chat::IChatMessageStore,
    impl::require<ChatMessageStore, Windows::ApplicationModel::Chat::IChatMessageStore2, Windows::ApplicationModel::Chat::IChatMessageStore3>
{
    ChatMessageStore(std::nullptr_t) noexcept {}
};

struct ChatMessageStoreChangedEventArgs :
    Windows::ApplicationModel::Chat::IChatMessageStoreChangedEventArgs
{
    ChatMessageStoreChangedEventArgs(std::nullptr_t) noexcept {}
};

struct ChatMessageTransport :
    Windows::ApplicationModel::Chat::IChatMessageTransport,
    impl::require<ChatMessageTransport, Windows::ApplicationModel::Chat::IChatMessageTransport2>
{
    ChatMessageTransport(std::nullptr_t) noexcept {}
};

struct ChatMessageTransportConfiguration :
    Windows::ApplicationModel::Chat::IChatMessageTransportConfiguration
{
    ChatMessageTransportConfiguration(std::nullptr_t) noexcept {}
};

struct ChatMessageValidationResult :
    Windows::ApplicationModel::Chat::IChatMessageValidationResult
{
    ChatMessageValidationResult(std::nullptr_t) noexcept {}
};

struct ChatQueryOptions :
    Windows::ApplicationModel::Chat::IChatQueryOptions
{
    ChatQueryOptions(std::nullptr_t) noexcept {}
    ChatQueryOptions();
};

struct ChatRecipientDeliveryInfo :
    Windows::ApplicationModel::Chat::IChatRecipientDeliveryInfo
{
    ChatRecipientDeliveryInfo(std::nullptr_t) noexcept {}
    ChatRecipientDeliveryInfo();
};

struct ChatSearchReader :
    Windows::ApplicationModel::Chat::IChatSearchReader
{
    ChatSearchReader(std::nullptr_t) noexcept {}
};

struct ChatSyncConfiguration :
    Windows::ApplicationModel::Chat::IChatSyncConfiguration
{
    ChatSyncConfiguration(std::nullptr_t) noexcept {}
};

struct ChatSyncManager :
    Windows::ApplicationModel::Chat::IChatSyncManager
{
    ChatSyncManager(std::nullptr_t) noexcept {}
};

struct RcsEndUserMessage :
    Windows::ApplicationModel::Chat::IRcsEndUserMessage
{
    RcsEndUserMessage(std::nullptr_t) noexcept {}
};

struct RcsEndUserMessageAction :
    Windows::ApplicationModel::Chat::IRcsEndUserMessageAction
{
    RcsEndUserMessageAction(std::nullptr_t) noexcept {}
};

struct RcsEndUserMessageAvailableEventArgs :
    Windows::ApplicationModel::Chat::IRcsEndUserMessageAvailableEventArgs
{
    RcsEndUserMessageAvailableEventArgs(std::nullptr_t) noexcept {}
};

struct RcsEndUserMessageAvailableTriggerDetails :
    Windows::ApplicationModel::Chat::IRcsEndUserMessageAvailableTriggerDetails
{
    RcsEndUserMessageAvailableTriggerDetails(std::nullptr_t) noexcept {}
};

struct RcsEndUserMessageManager :
    Windows::ApplicationModel::Chat::IRcsEndUserMessageManager
{
    RcsEndUserMessageManager(std::nullptr_t) noexcept {}
};

struct RcsManager
{
    RcsManager() = delete;
    static Windows::ApplicationModel::Chat::RcsEndUserMessageManager GetEndUserMessageManager();
    static Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Chat::RcsTransport>> GetTransportsAsync();
    static Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Chat::RcsTransport> GetTransportAsync(param::hstring const& transportId);
    static Windows::Foundation::IAsyncAction LeaveConversationAsync(Windows::ApplicationModel::Chat::ChatConversation const& conversation);
};

struct RcsServiceKindSupportedChangedEventArgs :
    Windows::ApplicationModel::Chat::IRcsServiceKindSupportedChangedEventArgs
{
    RcsServiceKindSupportedChangedEventArgs(std::nullptr_t) noexcept {}
};

struct RcsTransport :
    Windows::ApplicationModel::Chat::IRcsTransport
{
    RcsTransport(std::nullptr_t) noexcept {}
};

struct RcsTransportConfiguration :
    Windows::ApplicationModel::Chat::IRcsTransportConfiguration
{
    RcsTransportConfiguration(std::nullptr_t) noexcept {}
};

struct RemoteParticipantComposingChangedEventArgs :
    Windows::ApplicationModel::Chat::IRemoteParticipantComposingChangedEventArgs
{
    RemoteParticipantComposingChangedEventArgs(std::nullptr_t) noexcept {}
};

}

namespace impl {

}

}
