// C++/WinRT v1.0.170717.1
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "Windows.ApplicationModel.Email.1.h"
#include "Windows.Foundation.1.h"
#include "Windows.Security.Cryptography.Certificates.1.h"
#include "Windows.ApplicationModel.Email.DataProvider.1.h"

namespace winrt {

namespace Windows::ApplicationModel::Email::DataProvider {

struct EmailDataProviderConnection :
    Windows::ApplicationModel::Email::DataProvider::IEmailDataProviderConnection
{
    EmailDataProviderConnection(std::nullptr_t) noexcept {}
};

struct EmailDataProviderTriggerDetails :
    Windows::ApplicationModel::Email::DataProvider::IEmailDataProviderTriggerDetails
{
    EmailDataProviderTriggerDetails(std::nullptr_t) noexcept {}
};

struct EmailMailboxCreateFolderRequest :
    Windows::ApplicationModel::Email::DataProvider::IEmailMailboxCreateFolderRequest
{
    EmailMailboxCreateFolderRequest(std::nullptr_t) noexcept {}
};

struct EmailMailboxCreateFolderRequestEventArgs :
    Windows::ApplicationModel::Email::DataProvider::IEmailMailboxCreateFolderRequestEventArgs
{
    EmailMailboxCreateFolderRequestEventArgs(std::nullptr_t) noexcept {}
};

struct EmailMailboxDeleteFolderRequest :
    Windows::ApplicationModel::Email::DataProvider::IEmailMailboxDeleteFolderRequest
{
    EmailMailboxDeleteFolderRequest(std::nullptr_t) noexcept {}
};

struct EmailMailboxDeleteFolderRequestEventArgs :
    Windows::ApplicationModel::Email::DataProvider::IEmailMailboxDeleteFolderRequestEventArgs
{
    EmailMailboxDeleteFolderRequestEventArgs(std::nullptr_t) noexcept {}
};

struct EmailMailboxDownloadAttachmentRequest :
    Windows::ApplicationModel::Email::DataProvider::IEmailMailboxDownloadAttachmentRequest
{
    EmailMailboxDownloadAttachmentRequest(std::nullptr_t) noexcept {}
};

struct EmailMailboxDownloadAttachmentRequestEventArgs :
    Windows::ApplicationModel::Email::DataProvider::IEmailMailboxDownloadAttachmentRequestEventArgs
{
    EmailMailboxDownloadAttachmentRequestEventArgs(std::nullptr_t) noexcept {}
};

struct EmailMailboxDownloadMessageRequest :
    Windows::ApplicationModel::Email::DataProvider::IEmailMailboxDownloadMessageRequest
{
    EmailMailboxDownloadMessageRequest(std::nullptr_t) noexcept {}
};

struct EmailMailboxDownloadMessageRequestEventArgs :
    Windows::ApplicationModel::Email::DataProvider::IEmailMailboxDownloadMessageRequestEventArgs
{
    EmailMailboxDownloadMessageRequestEventArgs(std::nullptr_t) noexcept {}
};

struct EmailMailboxEmptyFolderRequest :
    Windows::ApplicationModel::Email::DataProvider::IEmailMailboxEmptyFolderRequest
{
    EmailMailboxEmptyFolderRequest(std::nullptr_t) noexcept {}
};

struct EmailMailboxEmptyFolderRequestEventArgs :
    Windows::ApplicationModel::Email::DataProvider::IEmailMailboxEmptyFolderRequestEventArgs
{
    EmailMailboxEmptyFolderRequestEventArgs(std::nullptr_t) noexcept {}
};

struct EmailMailboxForwardMeetingRequest :
    Windows::ApplicationModel::Email::DataProvider::IEmailMailboxForwardMeetingRequest
{
    EmailMailboxForwardMeetingRequest(std::nullptr_t) noexcept {}
};

struct EmailMailboxForwardMeetingRequestEventArgs :
    Windows::ApplicationModel::Email::DataProvider::IEmailMailboxForwardMeetingRequestEventArgs
{
    EmailMailboxForwardMeetingRequestEventArgs(std::nullptr_t) noexcept {}
};

struct EmailMailboxGetAutoReplySettingsRequest :
    Windows::ApplicationModel::Email::DataProvider::IEmailMailboxGetAutoReplySettingsRequest
{
    EmailMailboxGetAutoReplySettingsRequest(std::nullptr_t) noexcept {}
};

struct EmailMailboxGetAutoReplySettingsRequestEventArgs :
    Windows::ApplicationModel::Email::DataProvider::IEmailMailboxGetAutoReplySettingsRequestEventArgs
{
    EmailMailboxGetAutoReplySettingsRequestEventArgs(std::nullptr_t) noexcept {}
};

struct EmailMailboxMoveFolderRequest :
    Windows::ApplicationModel::Email::DataProvider::IEmailMailboxMoveFolderRequest
{
    EmailMailboxMoveFolderRequest(std::nullptr_t) noexcept {}
};

struct EmailMailboxMoveFolderRequestEventArgs :
    Windows::ApplicationModel::Email::DataProvider::IEmailMailboxMoveFolderRequestEventArgs
{
    EmailMailboxMoveFolderRequestEventArgs(std::nullptr_t) noexcept {}
};

struct EmailMailboxProposeNewTimeForMeetingRequest :
    Windows::ApplicationModel::Email::DataProvider::IEmailMailboxProposeNewTimeForMeetingRequest
{
    EmailMailboxProposeNewTimeForMeetingRequest(std::nullptr_t) noexcept {}
};

struct EmailMailboxProposeNewTimeForMeetingRequestEventArgs :
    Windows::ApplicationModel::Email::DataProvider::IEmailMailboxProposeNewTimeForMeetingRequestEventArgs
{
    EmailMailboxProposeNewTimeForMeetingRequestEventArgs(std::nullptr_t) noexcept {}
};

struct EmailMailboxResolveRecipientsRequest :
    Windows::ApplicationModel::Email::DataProvider::IEmailMailboxResolveRecipientsRequest
{
    EmailMailboxResolveRecipientsRequest(std::nullptr_t) noexcept {}
};

struct EmailMailboxResolveRecipientsRequestEventArgs :
    Windows::ApplicationModel::Email::DataProvider::IEmailMailboxResolveRecipientsRequestEventArgs
{
    EmailMailboxResolveRecipientsRequestEventArgs(std::nullptr_t) noexcept {}
};

struct EmailMailboxServerSearchReadBatchRequest :
    Windows::ApplicationModel::Email::DataProvider::IEmailMailboxServerSearchReadBatchRequest
{
    EmailMailboxServerSearchReadBatchRequest(std::nullptr_t) noexcept {}
};

struct EmailMailboxServerSearchReadBatchRequestEventArgs :
    Windows::ApplicationModel::Email::DataProvider::IEmailMailboxServerSearchReadBatchRequestEventArgs
{
    EmailMailboxServerSearchReadBatchRequestEventArgs(std::nullptr_t) noexcept {}
};

struct EmailMailboxSetAutoReplySettingsRequest :
    Windows::ApplicationModel::Email::DataProvider::IEmailMailboxSetAutoReplySettingsRequest
{
    EmailMailboxSetAutoReplySettingsRequest(std::nullptr_t) noexcept {}
};

struct EmailMailboxSetAutoReplySettingsRequestEventArgs :
    Windows::ApplicationModel::Email::DataProvider::IEmailMailboxSetAutoReplySettingsRequestEventArgs
{
    EmailMailboxSetAutoReplySettingsRequestEventArgs(std::nullptr_t) noexcept {}
};

struct EmailMailboxSyncManagerSyncRequest :
    Windows::ApplicationModel::Email::DataProvider::IEmailMailboxSyncManagerSyncRequest
{
    EmailMailboxSyncManagerSyncRequest(std::nullptr_t) noexcept {}
};

struct EmailMailboxSyncManagerSyncRequestEventArgs :
    Windows::ApplicationModel::Email::DataProvider::IEmailMailboxSyncManagerSyncRequestEventArgs
{
    EmailMailboxSyncManagerSyncRequestEventArgs(std::nullptr_t) noexcept {}
};

struct EmailMailboxUpdateMeetingResponseRequest :
    Windows::ApplicationModel::Email::DataProvider::IEmailMailboxUpdateMeetingResponseRequest
{
    EmailMailboxUpdateMeetingResponseRequest(std::nullptr_t) noexcept {}
};

struct EmailMailboxUpdateMeetingResponseRequestEventArgs :
    Windows::ApplicationModel::Email::DataProvider::IEmailMailboxUpdateMeetingResponseRequestEventArgs
{
    EmailMailboxUpdateMeetingResponseRequestEventArgs(std::nullptr_t) noexcept {}
};

struct EmailMailboxValidateCertificatesRequest :
    Windows::ApplicationModel::Email::DataProvider::IEmailMailboxValidateCertificatesRequest
{
    EmailMailboxValidateCertificatesRequest(std::nullptr_t) noexcept {}
};

struct EmailMailboxValidateCertificatesRequestEventArgs :
    Windows::ApplicationModel::Email::DataProvider::IEmailMailboxValidateCertificatesRequestEventArgs
{
    EmailMailboxValidateCertificatesRequestEventArgs(std::nullptr_t) noexcept {}
};

}

namespace impl {

}

}
