// C++/WinRT v1.0.170717.1
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "Windows.ApplicationModel.Email.0.h"
#include "Windows.Foundation.0.h"
#include "Windows.Security.Cryptography.Certificates.0.h"
#include "Windows.ApplicationModel.Email.DataProvider.0.h"

namespace winrt {

namespace Windows::ApplicationModel::Email::DataProvider {

struct IEmailDataProviderConnection :
    Windows::Foundation::IInspectable,
    impl::consume_t<IEmailDataProviderConnection>
{
    IEmailDataProviderConnection(std::nullptr_t = nullptr) noexcept {}
};

struct IEmailDataProviderTriggerDetails :
    Windows::Foundation::IInspectable,
    impl::consume_t<IEmailDataProviderTriggerDetails>
{
    IEmailDataProviderTriggerDetails(std::nullptr_t = nullptr) noexcept {}
};

struct IEmailMailboxCreateFolderRequest :
    Windows::Foundation::IInspectable,
    impl::consume_t<IEmailMailboxCreateFolderRequest>
{
    IEmailMailboxCreateFolderRequest(std::nullptr_t = nullptr) noexcept {}
};

struct IEmailMailboxCreateFolderRequestEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<IEmailMailboxCreateFolderRequestEventArgs>
{
    IEmailMailboxCreateFolderRequestEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct IEmailMailboxDeleteFolderRequest :
    Windows::Foundation::IInspectable,
    impl::consume_t<IEmailMailboxDeleteFolderRequest>
{
    IEmailMailboxDeleteFolderRequest(std::nullptr_t = nullptr) noexcept {}
};

struct IEmailMailboxDeleteFolderRequestEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<IEmailMailboxDeleteFolderRequestEventArgs>
{
    IEmailMailboxDeleteFolderRequestEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct IEmailMailboxDownloadAttachmentRequest :
    Windows::Foundation::IInspectable,
    impl::consume_t<IEmailMailboxDownloadAttachmentRequest>
{
    IEmailMailboxDownloadAttachmentRequest(std::nullptr_t = nullptr) noexcept {}
};

struct IEmailMailboxDownloadAttachmentRequestEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<IEmailMailboxDownloadAttachmentRequestEventArgs>
{
    IEmailMailboxDownloadAttachmentRequestEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct IEmailMailboxDownloadMessageRequest :
    Windows::Foundation::IInspectable,
    impl::consume_t<IEmailMailboxDownloadMessageRequest>
{
    IEmailMailboxDownloadMessageRequest(std::nullptr_t = nullptr) noexcept {}
};

struct IEmailMailboxDownloadMessageRequestEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<IEmailMailboxDownloadMessageRequestEventArgs>
{
    IEmailMailboxDownloadMessageRequestEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct IEmailMailboxEmptyFolderRequest :
    Windows::Foundation::IInspectable,
    impl::consume_t<IEmailMailboxEmptyFolderRequest>
{
    IEmailMailboxEmptyFolderRequest(std::nullptr_t = nullptr) noexcept {}
};

struct IEmailMailboxEmptyFolderRequestEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<IEmailMailboxEmptyFolderRequestEventArgs>
{
    IEmailMailboxEmptyFolderRequestEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct IEmailMailboxForwardMeetingRequest :
    Windows::Foundation::IInspectable,
    impl::consume_t<IEmailMailboxForwardMeetingRequest>
{
    IEmailMailboxForwardMeetingRequest(std::nullptr_t = nullptr) noexcept {}
};

struct IEmailMailboxForwardMeetingRequestEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<IEmailMailboxForwardMeetingRequestEventArgs>
{
    IEmailMailboxForwardMeetingRequestEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct IEmailMailboxGetAutoReplySettingsRequest :
    Windows::Foundation::IInspectable,
    impl::consume_t<IEmailMailboxGetAutoReplySettingsRequest>
{
    IEmailMailboxGetAutoReplySettingsRequest(std::nullptr_t = nullptr) noexcept {}
};

struct IEmailMailboxGetAutoReplySettingsRequestEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<IEmailMailboxGetAutoReplySettingsRequestEventArgs>
{
    IEmailMailboxGetAutoReplySettingsRequestEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct IEmailMailboxMoveFolderRequest :
    Windows::Foundation::IInspectable,
    impl::consume_t<IEmailMailboxMoveFolderRequest>
{
    IEmailMailboxMoveFolderRequest(std::nullptr_t = nullptr) noexcept {}
};

struct IEmailMailboxMoveFolderRequestEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<IEmailMailboxMoveFolderRequestEventArgs>
{
    IEmailMailboxMoveFolderRequestEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct IEmailMailboxProposeNewTimeForMeetingRequest :
    Windows::Foundation::IInspectable,
    impl::consume_t<IEmailMailboxProposeNewTimeForMeetingRequest>
{
    IEmailMailboxProposeNewTimeForMeetingRequest(std::nullptr_t = nullptr) noexcept {}
};

struct IEmailMailboxProposeNewTimeForMeetingRequestEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<IEmailMailboxProposeNewTimeForMeetingRequestEventArgs>
{
    IEmailMailboxProposeNewTimeForMeetingRequestEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct IEmailMailboxResolveRecipientsRequest :
    Windows::Foundation::IInspectable,
    impl::consume_t<IEmailMailboxResolveRecipientsRequest>
{
    IEmailMailboxResolveRecipientsRequest(std::nullptr_t = nullptr) noexcept {}
};

struct IEmailMailboxResolveRecipientsRequestEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<IEmailMailboxResolveRecipientsRequestEventArgs>
{
    IEmailMailboxResolveRecipientsRequestEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct IEmailMailboxServerSearchReadBatchRequest :
    Windows::Foundation::IInspectable,
    impl::consume_t<IEmailMailboxServerSearchReadBatchRequest>
{
    IEmailMailboxServerSearchReadBatchRequest(std::nullptr_t = nullptr) noexcept {}
};

struct IEmailMailboxServerSearchReadBatchRequestEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<IEmailMailboxServerSearchReadBatchRequestEventArgs>
{
    IEmailMailboxServerSearchReadBatchRequestEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct IEmailMailboxSetAutoReplySettingsRequest :
    Windows::Foundation::IInspectable,
    impl::consume_t<IEmailMailboxSetAutoReplySettingsRequest>
{
    IEmailMailboxSetAutoReplySettingsRequest(std::nullptr_t = nullptr) noexcept {}
};

struct IEmailMailboxSetAutoReplySettingsRequestEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<IEmailMailboxSetAutoReplySettingsRequestEventArgs>
{
    IEmailMailboxSetAutoReplySettingsRequestEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct IEmailMailboxSyncManagerSyncRequest :
    Windows::Foundation::IInspectable,
    impl::consume_t<IEmailMailboxSyncManagerSyncRequest>
{
    IEmailMailboxSyncManagerSyncRequest(std::nullptr_t = nullptr) noexcept {}
};

struct IEmailMailboxSyncManagerSyncRequestEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<IEmailMailboxSyncManagerSyncRequestEventArgs>
{
    IEmailMailboxSyncManagerSyncRequestEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct IEmailMailboxUpdateMeetingResponseRequest :
    Windows::Foundation::IInspectable,
    impl::consume_t<IEmailMailboxUpdateMeetingResponseRequest>
{
    IEmailMailboxUpdateMeetingResponseRequest(std::nullptr_t = nullptr) noexcept {}
};

struct IEmailMailboxUpdateMeetingResponseRequestEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<IEmailMailboxUpdateMeetingResponseRequestEventArgs>
{
    IEmailMailboxUpdateMeetingResponseRequestEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct IEmailMailboxValidateCertificatesRequest :
    Windows::Foundation::IInspectable,
    impl::consume_t<IEmailMailboxValidateCertificatesRequest>
{
    IEmailMailboxValidateCertificatesRequest(std::nullptr_t = nullptr) noexcept {}
};

struct IEmailMailboxValidateCertificatesRequestEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<IEmailMailboxValidateCertificatesRequestEventArgs>
{
    IEmailMailboxValidateCertificatesRequestEventArgs(std::nullptr_t = nullptr) noexcept {}
};

}

}
