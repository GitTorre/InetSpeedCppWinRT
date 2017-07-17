// C++/WinRT v1.0.170717.1
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "Windows.ApplicationModel.Appointments.0.h"
#include "Windows.Security.Cryptography.Certificates.0.h"
#include "Windows.Storage.Streams.0.h"
#include "Windows.System.0.h"
#include "Windows.ApplicationModel.Email.0.h"

namespace winrt {

namespace Windows::ApplicationModel::Email {

struct IEmailAttachment :
    Windows::Foundation::IInspectable,
    impl::consume_t<IEmailAttachment>
{
    IEmailAttachment(std::nullptr_t = nullptr) noexcept {}
};

struct IEmailAttachment2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IEmailAttachment2>
{
    IEmailAttachment2(std::nullptr_t = nullptr) noexcept {}
};

struct IEmailAttachmentFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<IEmailAttachmentFactory>
{
    IEmailAttachmentFactory(std::nullptr_t = nullptr) noexcept {}
};

struct IEmailAttachmentFactory2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IEmailAttachmentFactory2>
{
    IEmailAttachmentFactory2(std::nullptr_t = nullptr) noexcept {}
};

struct IEmailConversation :
    Windows::Foundation::IInspectable,
    impl::consume_t<IEmailConversation>
{
    IEmailConversation(std::nullptr_t = nullptr) noexcept {}
};

struct IEmailConversationBatch :
    Windows::Foundation::IInspectable,
    impl::consume_t<IEmailConversationBatch>
{
    IEmailConversationBatch(std::nullptr_t = nullptr) noexcept {}
};

struct IEmailConversationReader :
    Windows::Foundation::IInspectable,
    impl::consume_t<IEmailConversationReader>
{
    IEmailConversationReader(std::nullptr_t = nullptr) noexcept {}
};

struct IEmailFolder :
    Windows::Foundation::IInspectable,
    impl::consume_t<IEmailFolder>
{
    IEmailFolder(std::nullptr_t = nullptr) noexcept {}
};

struct IEmailIrmInfo :
    Windows::Foundation::IInspectable,
    impl::consume_t<IEmailIrmInfo>
{
    IEmailIrmInfo(std::nullptr_t = nullptr) noexcept {}
};

struct IEmailIrmInfoFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<IEmailIrmInfoFactory>
{
    IEmailIrmInfoFactory(std::nullptr_t = nullptr) noexcept {}
};

struct IEmailIrmTemplate :
    Windows::Foundation::IInspectable,
    impl::consume_t<IEmailIrmTemplate>
{
    IEmailIrmTemplate(std::nullptr_t = nullptr) noexcept {}
};

struct IEmailIrmTemplateFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<IEmailIrmTemplateFactory>
{
    IEmailIrmTemplateFactory(std::nullptr_t = nullptr) noexcept {}
};

struct IEmailItemCounts :
    Windows::Foundation::IInspectable,
    impl::consume_t<IEmailItemCounts>
{
    IEmailItemCounts(std::nullptr_t = nullptr) noexcept {}
};

struct IEmailMailbox :
    Windows::Foundation::IInspectable,
    impl::consume_t<IEmailMailbox>
{
    IEmailMailbox(std::nullptr_t = nullptr) noexcept {}
};

struct IEmailMailbox2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IEmailMailbox2>,
    impl::require<IEmailMailbox2, Windows::ApplicationModel::Email::IEmailMailbox>
{
    IEmailMailbox2(std::nullptr_t = nullptr) noexcept {}
};

struct IEmailMailbox3 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IEmailMailbox3>,
    impl::require<IEmailMailbox3, Windows::ApplicationModel::Email::IEmailMailbox, Windows::ApplicationModel::Email::IEmailMailbox2>
{
    IEmailMailbox3(std::nullptr_t = nullptr) noexcept {}
};

struct IEmailMailbox4 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IEmailMailbox4>
{
    IEmailMailbox4(std::nullptr_t = nullptr) noexcept {}
};

struct IEmailMailboxAction :
    Windows::Foundation::IInspectable,
    impl::consume_t<IEmailMailboxAction>
{
    IEmailMailboxAction(std::nullptr_t = nullptr) noexcept {}
};

struct IEmailMailboxAutoReply :
    Windows::Foundation::IInspectable,
    impl::consume_t<IEmailMailboxAutoReply>
{
    IEmailMailboxAutoReply(std::nullptr_t = nullptr) noexcept {}
};

struct IEmailMailboxAutoReplySettings :
    Windows::Foundation::IInspectable,
    impl::consume_t<IEmailMailboxAutoReplySettings>
{
    IEmailMailboxAutoReplySettings(std::nullptr_t = nullptr) noexcept {}
};

struct IEmailMailboxCapabilities :
    Windows::Foundation::IInspectable,
    impl::consume_t<IEmailMailboxCapabilities>
{
    IEmailMailboxCapabilities(std::nullptr_t = nullptr) noexcept {}
};

struct IEmailMailboxCapabilities2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IEmailMailboxCapabilities2>
{
    IEmailMailboxCapabilities2(std::nullptr_t = nullptr) noexcept {}
};

struct IEmailMailboxCapabilities3 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IEmailMailboxCapabilities3>
{
    IEmailMailboxCapabilities3(std::nullptr_t = nullptr) noexcept {}
};

struct IEmailMailboxChange :
    Windows::Foundation::IInspectable,
    impl::consume_t<IEmailMailboxChange>
{
    IEmailMailboxChange(std::nullptr_t = nullptr) noexcept {}
};

struct IEmailMailboxChangeReader :
    Windows::Foundation::IInspectable,
    impl::consume_t<IEmailMailboxChangeReader>
{
    IEmailMailboxChangeReader(std::nullptr_t = nullptr) noexcept {}
};

struct IEmailMailboxChangeTracker :
    Windows::Foundation::IInspectable,
    impl::consume_t<IEmailMailboxChangeTracker>
{
    IEmailMailboxChangeTracker(std::nullptr_t = nullptr) noexcept {}
};

struct IEmailMailboxChangedDeferral :
    Windows::Foundation::IInspectable,
    impl::consume_t<IEmailMailboxChangedDeferral>
{
    IEmailMailboxChangedDeferral(std::nullptr_t = nullptr) noexcept {}
};

struct IEmailMailboxChangedEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<IEmailMailboxChangedEventArgs>
{
    IEmailMailboxChangedEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct IEmailMailboxCreateFolderResult :
    Windows::Foundation::IInspectable,
    impl::consume_t<IEmailMailboxCreateFolderResult>
{
    IEmailMailboxCreateFolderResult(std::nullptr_t = nullptr) noexcept {}
};

struct IEmailMailboxPolicies :
    Windows::Foundation::IInspectable,
    impl::consume_t<IEmailMailboxPolicies>
{
    IEmailMailboxPolicies(std::nullptr_t = nullptr) noexcept {}
};

struct IEmailMailboxPolicies2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IEmailMailboxPolicies2>
{
    IEmailMailboxPolicies2(std::nullptr_t = nullptr) noexcept {}
};

struct IEmailMailboxPolicies3 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IEmailMailboxPolicies3>
{
    IEmailMailboxPolicies3(std::nullptr_t = nullptr) noexcept {}
};

struct IEmailMailboxSyncManager :
    Windows::Foundation::IInspectable,
    impl::consume_t<IEmailMailboxSyncManager>
{
    IEmailMailboxSyncManager(std::nullptr_t = nullptr) noexcept {}
};

struct IEmailMailboxSyncManager2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IEmailMailboxSyncManager2>
{
    IEmailMailboxSyncManager2(std::nullptr_t = nullptr) noexcept {}
};

struct IEmailManagerForUser :
    Windows::Foundation::IInspectable,
    impl::consume_t<IEmailManagerForUser>
{
    IEmailManagerForUser(std::nullptr_t = nullptr) noexcept {}
};

struct IEmailManagerStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IEmailManagerStatics>
{
    IEmailManagerStatics(std::nullptr_t = nullptr) noexcept {}
};

struct IEmailManagerStatics2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IEmailManagerStatics2>
{
    IEmailManagerStatics2(std::nullptr_t = nullptr) noexcept {}
};

struct IEmailManagerStatics3 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IEmailManagerStatics3>
{
    IEmailManagerStatics3(std::nullptr_t = nullptr) noexcept {}
};

struct IEmailMeetingInfo :
    Windows::Foundation::IInspectable,
    impl::consume_t<IEmailMeetingInfo>
{
    IEmailMeetingInfo(std::nullptr_t = nullptr) noexcept {}
};

struct IEmailMeetingInfo2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IEmailMeetingInfo2>
{
    IEmailMeetingInfo2(std::nullptr_t = nullptr) noexcept {}
};

struct IEmailMessage :
    Windows::Foundation::IInspectable,
    impl::consume_t<IEmailMessage>
{
    IEmailMessage(std::nullptr_t = nullptr) noexcept {}
};

struct IEmailMessage2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IEmailMessage2>
{
    IEmailMessage2(std::nullptr_t = nullptr) noexcept {}
};

struct IEmailMessage3 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IEmailMessage3>
{
    IEmailMessage3(std::nullptr_t = nullptr) noexcept {}
};

struct IEmailMessage4 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IEmailMessage4>
{
    IEmailMessage4(std::nullptr_t = nullptr) noexcept {}
};

struct IEmailMessageBatch :
    Windows::Foundation::IInspectable,
    impl::consume_t<IEmailMessageBatch>
{
    IEmailMessageBatch(std::nullptr_t = nullptr) noexcept {}
};

struct IEmailMessageReader :
    Windows::Foundation::IInspectable,
    impl::consume_t<IEmailMessageReader>
{
    IEmailMessageReader(std::nullptr_t = nullptr) noexcept {}
};

struct IEmailQueryOptions :
    Windows::Foundation::IInspectable,
    impl::consume_t<IEmailQueryOptions>
{
    IEmailQueryOptions(std::nullptr_t = nullptr) noexcept {}
};

struct IEmailQueryOptionsFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<IEmailQueryOptionsFactory>
{
    IEmailQueryOptionsFactory(std::nullptr_t = nullptr) noexcept {}
};

struct IEmailQueryTextSearch :
    Windows::Foundation::IInspectable,
    impl::consume_t<IEmailQueryTextSearch>
{
    IEmailQueryTextSearch(std::nullptr_t = nullptr) noexcept {}
};

struct IEmailRecipient :
    Windows::Foundation::IInspectable,
    impl::consume_t<IEmailRecipient>
{
    IEmailRecipient(std::nullptr_t = nullptr) noexcept {}
};

struct IEmailRecipientFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<IEmailRecipientFactory>
{
    IEmailRecipientFactory(std::nullptr_t = nullptr) noexcept {}
};

struct IEmailRecipientResolutionResult :
    Windows::Foundation::IInspectable,
    impl::consume_t<IEmailRecipientResolutionResult>
{
    IEmailRecipientResolutionResult(std::nullptr_t = nullptr) noexcept {}
};

struct IEmailRecipientResolutionResult2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IEmailRecipientResolutionResult2>
{
    IEmailRecipientResolutionResult2(std::nullptr_t = nullptr) noexcept {}
};

struct IEmailStore :
    Windows::Foundation::IInspectable,
    impl::consume_t<IEmailStore>
{
    IEmailStore(std::nullptr_t = nullptr) noexcept {}
};

struct IEmailStoreNotificationTriggerDetails :
    Windows::Foundation::IInspectable,
    impl::consume_t<IEmailStoreNotificationTriggerDetails>
{
    IEmailStoreNotificationTriggerDetails(std::nullptr_t = nullptr) noexcept {}
};

}

}
