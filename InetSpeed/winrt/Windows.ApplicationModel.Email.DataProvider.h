// C++ for the Windows Runtime v1.29
// Copyright (c) 2016 Microsoft Corporation

#pragma once

#include "internal\Windows.Foundation.3.h"
#include "internal\Windows.ApplicationModel.Email.3.h"
#include "internal\Windows.Foundation.Collections.3.h"
#include "internal\Windows.ApplicationModel.Email.DataProvider.3.h"
#include "Windows.ApplicationModel.Email.h"

WINRT_EXPORT namespace winrt {

namespace impl {

template <typename D>
struct produce<D, Windows::ApplicationModel::Email::DataProvider::IEmailDataProviderConnection> : produce_base<D, Windows::ApplicationModel::Email::DataProvider::IEmailDataProviderConnection>
{
    HRESULT __stdcall add_MailboxSyncRequested(abi_arg_in<Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::Email::DataProvider::EmailDataProviderConnection, Windows::ApplicationModel::Email::DataProvider::EmailMailboxSyncManagerSyncRequestEventArgs>> handler, event_token * token) noexcept override
    {
        try
        {
            *token = detach(shim().MailboxSyncRequested(*reinterpret_cast<const Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::Email::DataProvider::EmailDataProviderConnection, Windows::ApplicationModel::Email::DataProvider::EmailMailboxSyncManagerSyncRequestEventArgs> *>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_MailboxSyncRequested(event_token token) noexcept override
    {
        try
        {
            shim().MailboxSyncRequested(token);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_DownloadMessageRequested(abi_arg_in<Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::Email::DataProvider::EmailDataProviderConnection, Windows::ApplicationModel::Email::DataProvider::EmailMailboxDownloadMessageRequestEventArgs>> handler, event_token * token) noexcept override
    {
        try
        {
            *token = detach(shim().DownloadMessageRequested(*reinterpret_cast<const Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::Email::DataProvider::EmailDataProviderConnection, Windows::ApplicationModel::Email::DataProvider::EmailMailboxDownloadMessageRequestEventArgs> *>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_DownloadMessageRequested(event_token token) noexcept override
    {
        try
        {
            shim().DownloadMessageRequested(token);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_DownloadAttachmentRequested(abi_arg_in<Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::Email::DataProvider::EmailDataProviderConnection, Windows::ApplicationModel::Email::DataProvider::EmailMailboxDownloadAttachmentRequestEventArgs>> handler, event_token * token) noexcept override
    {
        try
        {
            *token = detach(shim().DownloadAttachmentRequested(*reinterpret_cast<const Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::Email::DataProvider::EmailDataProviderConnection, Windows::ApplicationModel::Email::DataProvider::EmailMailboxDownloadAttachmentRequestEventArgs> *>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_DownloadAttachmentRequested(event_token token) noexcept override
    {
        try
        {
            shim().DownloadAttachmentRequested(token);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_CreateFolderRequested(abi_arg_in<Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::Email::DataProvider::EmailDataProviderConnection, Windows::ApplicationModel::Email::DataProvider::EmailMailboxCreateFolderRequestEventArgs>> handler, event_token * token) noexcept override
    {
        try
        {
            *token = detach(shim().CreateFolderRequested(*reinterpret_cast<const Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::Email::DataProvider::EmailDataProviderConnection, Windows::ApplicationModel::Email::DataProvider::EmailMailboxCreateFolderRequestEventArgs> *>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_CreateFolderRequested(event_token token) noexcept override
    {
        try
        {
            shim().CreateFolderRequested(token);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_DeleteFolderRequested(abi_arg_in<Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::Email::DataProvider::EmailDataProviderConnection, Windows::ApplicationModel::Email::DataProvider::EmailMailboxDeleteFolderRequestEventArgs>> handler, event_token * token) noexcept override
    {
        try
        {
            *token = detach(shim().DeleteFolderRequested(*reinterpret_cast<const Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::Email::DataProvider::EmailDataProviderConnection, Windows::ApplicationModel::Email::DataProvider::EmailMailboxDeleteFolderRequestEventArgs> *>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_DeleteFolderRequested(event_token token) noexcept override
    {
        try
        {
            shim().DeleteFolderRequested(token);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_EmptyFolderRequested(abi_arg_in<Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::Email::DataProvider::EmailDataProviderConnection, Windows::ApplicationModel::Email::DataProvider::EmailMailboxEmptyFolderRequestEventArgs>> handler, event_token * token) noexcept override
    {
        try
        {
            *token = detach(shim().EmptyFolderRequested(*reinterpret_cast<const Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::Email::DataProvider::EmailDataProviderConnection, Windows::ApplicationModel::Email::DataProvider::EmailMailboxEmptyFolderRequestEventArgs> *>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_EmptyFolderRequested(event_token token) noexcept override
    {
        try
        {
            shim().EmptyFolderRequested(token);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_MoveFolderRequested(abi_arg_in<Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::Email::DataProvider::EmailDataProviderConnection, Windows::ApplicationModel::Email::DataProvider::EmailMailboxMoveFolderRequestEventArgs>> handler, event_token * token) noexcept override
    {
        try
        {
            *token = detach(shim().MoveFolderRequested(*reinterpret_cast<const Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::Email::DataProvider::EmailDataProviderConnection, Windows::ApplicationModel::Email::DataProvider::EmailMailboxMoveFolderRequestEventArgs> *>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_MoveFolderRequested(event_token token) noexcept override
    {
        try
        {
            shim().MoveFolderRequested(token);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_UpdateMeetingResponseRequested(abi_arg_in<Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::Email::DataProvider::EmailDataProviderConnection, Windows::ApplicationModel::Email::DataProvider::EmailMailboxUpdateMeetingResponseRequestEventArgs>> handler, event_token * token) noexcept override
    {
        try
        {
            *token = detach(shim().UpdateMeetingResponseRequested(*reinterpret_cast<const Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::Email::DataProvider::EmailDataProviderConnection, Windows::ApplicationModel::Email::DataProvider::EmailMailboxUpdateMeetingResponseRequestEventArgs> *>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_UpdateMeetingResponseRequested(event_token token) noexcept override
    {
        try
        {
            shim().UpdateMeetingResponseRequested(token);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_ForwardMeetingRequested(abi_arg_in<Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::Email::DataProvider::EmailDataProviderConnection, Windows::ApplicationModel::Email::DataProvider::EmailMailboxForwardMeetingRequestEventArgs>> handler, event_token * token) noexcept override
    {
        try
        {
            *token = detach(shim().ForwardMeetingRequested(*reinterpret_cast<const Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::Email::DataProvider::EmailDataProviderConnection, Windows::ApplicationModel::Email::DataProvider::EmailMailboxForwardMeetingRequestEventArgs> *>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_ForwardMeetingRequested(event_token token) noexcept override
    {
        try
        {
            shim().ForwardMeetingRequested(token);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_ProposeNewTimeForMeetingRequested(abi_arg_in<Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::Email::DataProvider::EmailDataProviderConnection, Windows::ApplicationModel::Email::DataProvider::EmailMailboxProposeNewTimeForMeetingRequestEventArgs>> handler, event_token * token) noexcept override
    {
        try
        {
            *token = detach(shim().ProposeNewTimeForMeetingRequested(*reinterpret_cast<const Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::Email::DataProvider::EmailDataProviderConnection, Windows::ApplicationModel::Email::DataProvider::EmailMailboxProposeNewTimeForMeetingRequestEventArgs> *>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_ProposeNewTimeForMeetingRequested(event_token token) noexcept override
    {
        try
        {
            shim().ProposeNewTimeForMeetingRequested(token);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_SetAutoReplySettingsRequested(abi_arg_in<Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::Email::DataProvider::EmailDataProviderConnection, Windows::ApplicationModel::Email::DataProvider::EmailMailboxSetAutoReplySettingsRequestEventArgs>> handler, event_token * token) noexcept override
    {
        try
        {
            *token = detach(shim().SetAutoReplySettingsRequested(*reinterpret_cast<const Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::Email::DataProvider::EmailDataProviderConnection, Windows::ApplicationModel::Email::DataProvider::EmailMailboxSetAutoReplySettingsRequestEventArgs> *>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_SetAutoReplySettingsRequested(event_token token) noexcept override
    {
        try
        {
            shim().SetAutoReplySettingsRequested(token);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_GetAutoReplySettingsRequested(abi_arg_in<Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::Email::DataProvider::EmailDataProviderConnection, Windows::ApplicationModel::Email::DataProvider::EmailMailboxGetAutoReplySettingsRequestEventArgs>> handler, event_token * token) noexcept override
    {
        try
        {
            *token = detach(shim().GetAutoReplySettingsRequested(*reinterpret_cast<const Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::Email::DataProvider::EmailDataProviderConnection, Windows::ApplicationModel::Email::DataProvider::EmailMailboxGetAutoReplySettingsRequestEventArgs> *>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_GetAutoReplySettingsRequested(event_token token) noexcept override
    {
        try
        {
            shim().GetAutoReplySettingsRequested(token);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_ResolveRecipientsRequested(abi_arg_in<Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::Email::DataProvider::EmailDataProviderConnection, Windows::ApplicationModel::Email::DataProvider::EmailMailboxResolveRecipientsRequestEventArgs>> handler, event_token * token) noexcept override
    {
        try
        {
            *token = detach(shim().ResolveRecipientsRequested(*reinterpret_cast<const Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::Email::DataProvider::EmailDataProviderConnection, Windows::ApplicationModel::Email::DataProvider::EmailMailboxResolveRecipientsRequestEventArgs> *>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_ResolveRecipientsRequested(event_token token) noexcept override
    {
        try
        {
            shim().ResolveRecipientsRequested(token);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_ValidateCertificatesRequested(abi_arg_in<Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::Email::DataProvider::EmailDataProviderConnection, Windows::ApplicationModel::Email::DataProvider::EmailMailboxValidateCertificatesRequestEventArgs>> handler, event_token * token) noexcept override
    {
        try
        {
            *token = detach(shim().ValidateCertificatesRequested(*reinterpret_cast<const Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::Email::DataProvider::EmailDataProviderConnection, Windows::ApplicationModel::Email::DataProvider::EmailMailboxValidateCertificatesRequestEventArgs> *>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_ValidateCertificatesRequested(event_token token) noexcept override
    {
        try
        {
            shim().ValidateCertificatesRequested(token);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_ServerSearchReadBatchRequested(abi_arg_in<Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::Email::DataProvider::EmailDataProviderConnection, Windows::ApplicationModel::Email::DataProvider::EmailMailboxServerSearchReadBatchRequestEventArgs>> handler, event_token * token) noexcept override
    {
        try
        {
            *token = detach(shim().ServerSearchReadBatchRequested(*reinterpret_cast<const Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::Email::DataProvider::EmailDataProviderConnection, Windows::ApplicationModel::Email::DataProvider::EmailMailboxServerSearchReadBatchRequestEventArgs> *>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_ServerSearchReadBatchRequested(event_token token) noexcept override
    {
        try
        {
            shim().ServerSearchReadBatchRequested(token);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_Start() noexcept override
    {
        try
        {
            shim().Start();
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::Email::DataProvider::IEmailDataProviderTriggerDetails> : produce_base<D, Windows::ApplicationModel::Email::DataProvider::IEmailDataProviderTriggerDetails>
{
    HRESULT __stdcall get_Connection(abi_arg_out<Windows::ApplicationModel::Email::DataProvider::IEmailDataProviderConnection> value) noexcept override
    {
        try
        {
            *value = detach(shim().Connection());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::Email::DataProvider::IEmailMailboxCreateFolderRequest> : produce_base<D, Windows::ApplicationModel::Email::DataProvider::IEmailMailboxCreateFolderRequest>
{
    HRESULT __stdcall get_EmailMailboxId(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(shim().EmailMailboxId());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ParentFolderId(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(shim().ParentFolderId());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Name(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(shim().Name());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_ReportCompletedAsync(abi_arg_in<Windows::ApplicationModel::Email::IEmailFolder> folder, abi_arg_out<Windows::Foundation::IAsyncAction> result) noexcept override
    {
        try
        {
            *result = detach(shim().ReportCompletedAsync(*reinterpret_cast<const Windows::ApplicationModel::Email::EmailFolder *>(&folder)));
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_ReportFailedAsync(Windows::ApplicationModel::Email::EmailMailboxCreateFolderStatus status, abi_arg_out<Windows::Foundation::IAsyncAction> result) noexcept override
    {
        try
        {
            *result = detach(shim().ReportFailedAsync(status));
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::Email::DataProvider::IEmailMailboxCreateFolderRequestEventArgs> : produce_base<D, Windows::ApplicationModel::Email::DataProvider::IEmailMailboxCreateFolderRequestEventArgs>
{
    HRESULT __stdcall get_Request(abi_arg_out<Windows::ApplicationModel::Email::DataProvider::IEmailMailboxCreateFolderRequest> value) noexcept override
    {
        try
        {
            *value = detach(shim().Request());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_GetDeferral(abi_arg_out<Windows::Foundation::IDeferral> value) noexcept override
    {
        try
        {
            *value = detach(shim().GetDeferral());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::Email::DataProvider::IEmailMailboxDeleteFolderRequest> : produce_base<D, Windows::ApplicationModel::Email::DataProvider::IEmailMailboxDeleteFolderRequest>
{
    HRESULT __stdcall get_EmailMailboxId(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(shim().EmailMailboxId());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_EmailFolderId(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(shim().EmailFolderId());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_ReportCompletedAsync(abi_arg_out<Windows::Foundation::IAsyncAction> result) noexcept override
    {
        try
        {
            *result = detach(shim().ReportCompletedAsync());
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_ReportFailedAsync(Windows::ApplicationModel::Email::EmailMailboxDeleteFolderStatus status, abi_arg_out<Windows::Foundation::IAsyncAction> result) noexcept override
    {
        try
        {
            *result = detach(shim().ReportFailedAsync(status));
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::Email::DataProvider::IEmailMailboxDeleteFolderRequestEventArgs> : produce_base<D, Windows::ApplicationModel::Email::DataProvider::IEmailMailboxDeleteFolderRequestEventArgs>
{
    HRESULT __stdcall get_Request(abi_arg_out<Windows::ApplicationModel::Email::DataProvider::IEmailMailboxDeleteFolderRequest> value) noexcept override
    {
        try
        {
            *value = detach(shim().Request());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_GetDeferral(abi_arg_out<Windows::Foundation::IDeferral> value) noexcept override
    {
        try
        {
            *value = detach(shim().GetDeferral());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::Email::DataProvider::IEmailMailboxDownloadAttachmentRequest> : produce_base<D, Windows::ApplicationModel::Email::DataProvider::IEmailMailboxDownloadAttachmentRequest>
{
    HRESULT __stdcall get_EmailMailboxId(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(shim().EmailMailboxId());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_EmailMessageId(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(shim().EmailMessageId());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_EmailAttachmentId(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(shim().EmailAttachmentId());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_ReportCompletedAsync(abi_arg_out<Windows::Foundation::IAsyncAction> result) noexcept override
    {
        try
        {
            *result = detach(shim().ReportCompletedAsync());
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_ReportFailedAsync(abi_arg_out<Windows::Foundation::IAsyncAction> result) noexcept override
    {
        try
        {
            *result = detach(shim().ReportFailedAsync());
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::Email::DataProvider::IEmailMailboxDownloadAttachmentRequestEventArgs> : produce_base<D, Windows::ApplicationModel::Email::DataProvider::IEmailMailboxDownloadAttachmentRequestEventArgs>
{
    HRESULT __stdcall get_Request(abi_arg_out<Windows::ApplicationModel::Email::DataProvider::IEmailMailboxDownloadAttachmentRequest> value) noexcept override
    {
        try
        {
            *value = detach(shim().Request());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_GetDeferral(abi_arg_out<Windows::Foundation::IDeferral> value) noexcept override
    {
        try
        {
            *value = detach(shim().GetDeferral());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::Email::DataProvider::IEmailMailboxDownloadMessageRequest> : produce_base<D, Windows::ApplicationModel::Email::DataProvider::IEmailMailboxDownloadMessageRequest>
{
    HRESULT __stdcall get_EmailMailboxId(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(shim().EmailMailboxId());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_EmailMessageId(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(shim().EmailMessageId());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_ReportCompletedAsync(abi_arg_out<Windows::Foundation::IAsyncAction> result) noexcept override
    {
        try
        {
            *result = detach(shim().ReportCompletedAsync());
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_ReportFailedAsync(abi_arg_out<Windows::Foundation::IAsyncAction> result) noexcept override
    {
        try
        {
            *result = detach(shim().ReportFailedAsync());
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::Email::DataProvider::IEmailMailboxDownloadMessageRequestEventArgs> : produce_base<D, Windows::ApplicationModel::Email::DataProvider::IEmailMailboxDownloadMessageRequestEventArgs>
{
    HRESULT __stdcall get_Request(abi_arg_out<Windows::ApplicationModel::Email::DataProvider::IEmailMailboxDownloadMessageRequest> value) noexcept override
    {
        try
        {
            *value = detach(shim().Request());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_GetDeferral(abi_arg_out<Windows::Foundation::IDeferral> value) noexcept override
    {
        try
        {
            *value = detach(shim().GetDeferral());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::Email::DataProvider::IEmailMailboxEmptyFolderRequest> : produce_base<D, Windows::ApplicationModel::Email::DataProvider::IEmailMailboxEmptyFolderRequest>
{
    HRESULT __stdcall get_EmailMailboxId(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(shim().EmailMailboxId());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_EmailFolderId(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(shim().EmailFolderId());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_ReportCompletedAsync(abi_arg_out<Windows::Foundation::IAsyncAction> result) noexcept override
    {
        try
        {
            *result = detach(shim().ReportCompletedAsync());
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_ReportFailedAsync(Windows::ApplicationModel::Email::EmailMailboxEmptyFolderStatus status, abi_arg_out<Windows::Foundation::IAsyncAction> result) noexcept override
    {
        try
        {
            *result = detach(shim().ReportFailedAsync(status));
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::Email::DataProvider::IEmailMailboxEmptyFolderRequestEventArgs> : produce_base<D, Windows::ApplicationModel::Email::DataProvider::IEmailMailboxEmptyFolderRequestEventArgs>
{
    HRESULT __stdcall get_Request(abi_arg_out<Windows::ApplicationModel::Email::DataProvider::IEmailMailboxEmptyFolderRequest> value) noexcept override
    {
        try
        {
            *value = detach(shim().Request());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_GetDeferral(abi_arg_out<Windows::Foundation::IDeferral> value) noexcept override
    {
        try
        {
            *value = detach(shim().GetDeferral());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::Email::DataProvider::IEmailMailboxForwardMeetingRequest> : produce_base<D, Windows::ApplicationModel::Email::DataProvider::IEmailMailboxForwardMeetingRequest>
{
    HRESULT __stdcall get_EmailMailboxId(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(shim().EmailMailboxId());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_EmailMessageId(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(shim().EmailMessageId());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Recipients(abi_arg_out<Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Email::EmailRecipient>> value) noexcept override
    {
        try
        {
            *value = detach(shim().Recipients());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Subject(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(shim().Subject());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ForwardHeaderType(Windows::ApplicationModel::Email::EmailMessageBodyKind * value) noexcept override
    {
        try
        {
            *value = detach(shim().ForwardHeaderType());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ForwardHeader(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(shim().ForwardHeader());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Comment(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(shim().Comment());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_ReportCompletedAsync(abi_arg_out<Windows::Foundation::IAsyncAction> result) noexcept override
    {
        try
        {
            *result = detach(shim().ReportCompletedAsync());
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_ReportFailedAsync(abi_arg_out<Windows::Foundation::IAsyncAction> result) noexcept override
    {
        try
        {
            *result = detach(shim().ReportFailedAsync());
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::Email::DataProvider::IEmailMailboxForwardMeetingRequestEventArgs> : produce_base<D, Windows::ApplicationModel::Email::DataProvider::IEmailMailboxForwardMeetingRequestEventArgs>
{
    HRESULT __stdcall get_Request(abi_arg_out<Windows::ApplicationModel::Email::DataProvider::IEmailMailboxForwardMeetingRequest> value) noexcept override
    {
        try
        {
            *value = detach(shim().Request());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_GetDeferral(abi_arg_out<Windows::Foundation::IDeferral> value) noexcept override
    {
        try
        {
            *value = detach(shim().GetDeferral());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::Email::DataProvider::IEmailMailboxGetAutoReplySettingsRequest> : produce_base<D, Windows::ApplicationModel::Email::DataProvider::IEmailMailboxGetAutoReplySettingsRequest>
{
    HRESULT __stdcall get_EmailMailboxId(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(shim().EmailMailboxId());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_RequestedFormat(Windows::ApplicationModel::Email::EmailMailboxAutoReplyMessageResponseKind * value) noexcept override
    {
        try
        {
            *value = detach(shim().RequestedFormat());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_ReportCompletedAsync(abi_arg_in<Windows::ApplicationModel::Email::IEmailMailboxAutoReplySettings> autoReplySettings, abi_arg_out<Windows::Foundation::IAsyncAction> result) noexcept override
    {
        try
        {
            *result = detach(shim().ReportCompletedAsync(*reinterpret_cast<const Windows::ApplicationModel::Email::EmailMailboxAutoReplySettings *>(&autoReplySettings)));
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_ReportFailedAsync(abi_arg_out<Windows::Foundation::IAsyncAction> result) noexcept override
    {
        try
        {
            *result = detach(shim().ReportFailedAsync());
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::Email::DataProvider::IEmailMailboxGetAutoReplySettingsRequestEventArgs> : produce_base<D, Windows::ApplicationModel::Email::DataProvider::IEmailMailboxGetAutoReplySettingsRequestEventArgs>
{
    HRESULT __stdcall get_Request(abi_arg_out<Windows::ApplicationModel::Email::DataProvider::IEmailMailboxGetAutoReplySettingsRequest> value) noexcept override
    {
        try
        {
            *value = detach(shim().Request());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_GetDeferral(abi_arg_out<Windows::Foundation::IDeferral> value) noexcept override
    {
        try
        {
            *value = detach(shim().GetDeferral());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::Email::DataProvider::IEmailMailboxMoveFolderRequest> : produce_base<D, Windows::ApplicationModel::Email::DataProvider::IEmailMailboxMoveFolderRequest>
{
    HRESULT __stdcall get_EmailMailboxId(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(shim().EmailMailboxId());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_EmailFolderId(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(shim().EmailFolderId());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_NewParentFolderId(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(shim().NewParentFolderId());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_NewFolderName(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(shim().NewFolderName());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_ReportCompletedAsync(abi_arg_out<Windows::Foundation::IAsyncAction> result) noexcept override
    {
        try
        {
            *result = detach(shim().ReportCompletedAsync());
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_ReportFailedAsync(abi_arg_out<Windows::Foundation::IAsyncAction> result) noexcept override
    {
        try
        {
            *result = detach(shim().ReportFailedAsync());
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::Email::DataProvider::IEmailMailboxMoveFolderRequestEventArgs> : produce_base<D, Windows::ApplicationModel::Email::DataProvider::IEmailMailboxMoveFolderRequestEventArgs>
{
    HRESULT __stdcall get_Request(abi_arg_out<Windows::ApplicationModel::Email::DataProvider::IEmailMailboxMoveFolderRequest> value) noexcept override
    {
        try
        {
            *value = detach(shim().Request());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_GetDeferral(abi_arg_out<Windows::Foundation::IDeferral> value) noexcept override
    {
        try
        {
            *value = detach(shim().GetDeferral());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::Email::DataProvider::IEmailMailboxProposeNewTimeForMeetingRequest> : produce_base<D, Windows::ApplicationModel::Email::DataProvider::IEmailMailboxProposeNewTimeForMeetingRequest>
{
    HRESULT __stdcall get_EmailMailboxId(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(shim().EmailMailboxId());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_EmailMessageId(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(shim().EmailMessageId());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_NewStartTime(abi_arg_out<Windows::Foundation::DateTime> value) noexcept override
    {
        try
        {
            *value = detach(shim().NewStartTime());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_NewDuration(abi_arg_out<Windows::Foundation::TimeSpan> value) noexcept override
    {
        try
        {
            *value = detach(shim().NewDuration());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Subject(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(shim().Subject());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Comment(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(shim().Comment());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_ReportCompletedAsync(abi_arg_out<Windows::Foundation::IAsyncAction> result) noexcept override
    {
        try
        {
            *result = detach(shim().ReportCompletedAsync());
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_ReportFailedAsync(abi_arg_out<Windows::Foundation::IAsyncAction> result) noexcept override
    {
        try
        {
            *result = detach(shim().ReportFailedAsync());
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::Email::DataProvider::IEmailMailboxProposeNewTimeForMeetingRequestEventArgs> : produce_base<D, Windows::ApplicationModel::Email::DataProvider::IEmailMailboxProposeNewTimeForMeetingRequestEventArgs>
{
    HRESULT __stdcall get_Request(abi_arg_out<Windows::ApplicationModel::Email::DataProvider::IEmailMailboxProposeNewTimeForMeetingRequest> value) noexcept override
    {
        try
        {
            *value = detach(shim().Request());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_GetDeferral(abi_arg_out<Windows::Foundation::IDeferral> value) noexcept override
    {
        try
        {
            *value = detach(shim().GetDeferral());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::Email::DataProvider::IEmailMailboxResolveRecipientsRequest> : produce_base<D, Windows::ApplicationModel::Email::DataProvider::IEmailMailboxResolveRecipientsRequest>
{
    HRESULT __stdcall get_EmailMailboxId(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(shim().EmailMailboxId());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Recipients(abi_arg_out<Windows::Foundation::Collections::IVectorView<hstring>> value) noexcept override
    {
        try
        {
            *value = detach(shim().Recipients());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_ReportCompletedAsync(abi_arg_in<Windows::Foundation::Collections::IIterable<Windows::ApplicationModel::Email::EmailRecipientResolutionResult>> resolutionResults, abi_arg_out<Windows::Foundation::IAsyncAction> result) noexcept override
    {
        try
        {
            *result = detach(shim().ReportCompletedAsync(*reinterpret_cast<const Windows::Foundation::Collections::IIterable<Windows::ApplicationModel::Email::EmailRecipientResolutionResult> *>(&resolutionResults)));
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_ReportFailedAsync(abi_arg_out<Windows::Foundation::IAsyncAction> result) noexcept override
    {
        try
        {
            *result = detach(shim().ReportFailedAsync());
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::Email::DataProvider::IEmailMailboxResolveRecipientsRequestEventArgs> : produce_base<D, Windows::ApplicationModel::Email::DataProvider::IEmailMailboxResolveRecipientsRequestEventArgs>
{
    HRESULT __stdcall get_Request(abi_arg_out<Windows::ApplicationModel::Email::DataProvider::IEmailMailboxResolveRecipientsRequest> value) noexcept override
    {
        try
        {
            *value = detach(shim().Request());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_GetDeferral(abi_arg_out<Windows::Foundation::IDeferral> value) noexcept override
    {
        try
        {
            *value = detach(shim().GetDeferral());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::Email::DataProvider::IEmailMailboxServerSearchReadBatchRequest> : produce_base<D, Windows::ApplicationModel::Email::DataProvider::IEmailMailboxServerSearchReadBatchRequest>
{
    HRESULT __stdcall get_SessionId(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(shim().SessionId());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_EmailMailboxId(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(shim().EmailMailboxId());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_EmailFolderId(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(shim().EmailFolderId());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Options(abi_arg_out<Windows::ApplicationModel::Email::IEmailQueryOptions> value) noexcept override
    {
        try
        {
            *value = detach(shim().Options());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_SuggestedBatchSize(uint32_t * value) noexcept override
    {
        try
        {
            *value = detach(shim().SuggestedBatchSize());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_SaveMessageAsync(abi_arg_in<Windows::ApplicationModel::Email::IEmailMessage> message, abi_arg_out<Windows::Foundation::IAsyncAction> result) noexcept override
    {
        try
        {
            *result = detach(shim().SaveMessageAsync(*reinterpret_cast<const Windows::ApplicationModel::Email::EmailMessage *>(&message)));
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_ReportCompletedAsync(abi_arg_out<Windows::Foundation::IAsyncAction> result) noexcept override
    {
        try
        {
            *result = detach(shim().ReportCompletedAsync());
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_ReportFailedAsync(Windows::ApplicationModel::Email::EmailBatchStatus batchStatus, abi_arg_out<Windows::Foundation::IAsyncAction> result) noexcept override
    {
        try
        {
            *result = detach(shim().ReportFailedAsync(batchStatus));
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::Email::DataProvider::IEmailMailboxServerSearchReadBatchRequestEventArgs> : produce_base<D, Windows::ApplicationModel::Email::DataProvider::IEmailMailboxServerSearchReadBatchRequestEventArgs>
{
    HRESULT __stdcall get_Request(abi_arg_out<Windows::ApplicationModel::Email::DataProvider::IEmailMailboxServerSearchReadBatchRequest> value) noexcept override
    {
        try
        {
            *value = detach(shim().Request());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_GetDeferral(abi_arg_out<Windows::Foundation::IDeferral> value) noexcept override
    {
        try
        {
            *value = detach(shim().GetDeferral());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::Email::DataProvider::IEmailMailboxSetAutoReplySettingsRequest> : produce_base<D, Windows::ApplicationModel::Email::DataProvider::IEmailMailboxSetAutoReplySettingsRequest>
{
    HRESULT __stdcall get_EmailMailboxId(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(shim().EmailMailboxId());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_AutoReplySettings(abi_arg_out<Windows::ApplicationModel::Email::IEmailMailboxAutoReplySettings> value) noexcept override
    {
        try
        {
            *value = detach(shim().AutoReplySettings());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_ReportCompletedAsync(abi_arg_out<Windows::Foundation::IAsyncAction> result) noexcept override
    {
        try
        {
            *result = detach(shim().ReportCompletedAsync());
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_ReportFailedAsync(abi_arg_out<Windows::Foundation::IAsyncAction> result) noexcept override
    {
        try
        {
            *result = detach(shim().ReportFailedAsync());
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::Email::DataProvider::IEmailMailboxSetAutoReplySettingsRequestEventArgs> : produce_base<D, Windows::ApplicationModel::Email::DataProvider::IEmailMailboxSetAutoReplySettingsRequestEventArgs>
{
    HRESULT __stdcall get_Request(abi_arg_out<Windows::ApplicationModel::Email::DataProvider::IEmailMailboxSetAutoReplySettingsRequest> value) noexcept override
    {
        try
        {
            *value = detach(shim().Request());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_GetDeferral(abi_arg_out<Windows::Foundation::IDeferral> value) noexcept override
    {
        try
        {
            *value = detach(shim().GetDeferral());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::Email::DataProvider::IEmailMailboxSyncManagerSyncRequest> : produce_base<D, Windows::ApplicationModel::Email::DataProvider::IEmailMailboxSyncManagerSyncRequest>
{
    HRESULT __stdcall get_EmailMailboxId(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(shim().EmailMailboxId());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_ReportCompletedAsync(abi_arg_out<Windows::Foundation::IAsyncAction> result) noexcept override
    {
        try
        {
            *result = detach(shim().ReportCompletedAsync());
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_ReportFailedAsync(abi_arg_out<Windows::Foundation::IAsyncAction> result) noexcept override
    {
        try
        {
            *result = detach(shim().ReportFailedAsync());
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::Email::DataProvider::IEmailMailboxSyncManagerSyncRequestEventArgs> : produce_base<D, Windows::ApplicationModel::Email::DataProvider::IEmailMailboxSyncManagerSyncRequestEventArgs>
{
    HRESULT __stdcall get_Request(abi_arg_out<Windows::ApplicationModel::Email::DataProvider::IEmailMailboxSyncManagerSyncRequest> value) noexcept override
    {
        try
        {
            *value = detach(shim().Request());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_GetDeferral(abi_arg_out<Windows::Foundation::IDeferral> value) noexcept override
    {
        try
        {
            *value = detach(shim().GetDeferral());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::Email::DataProvider::IEmailMailboxUpdateMeetingResponseRequest> : produce_base<D, Windows::ApplicationModel::Email::DataProvider::IEmailMailboxUpdateMeetingResponseRequest>
{
    HRESULT __stdcall get_EmailMailboxId(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(shim().EmailMailboxId());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_EmailMessageId(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(shim().EmailMessageId());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Response(Windows::ApplicationModel::Email::EmailMeetingResponseType * response) noexcept override
    {
        try
        {
            *response = detach(shim().Response());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Subject(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(shim().Subject());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Comment(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(shim().Comment());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_SendUpdate(bool * value) noexcept override
    {
        try
        {
            *value = detach(shim().SendUpdate());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_ReportCompletedAsync(abi_arg_out<Windows::Foundation::IAsyncAction> result) noexcept override
    {
        try
        {
            *result = detach(shim().ReportCompletedAsync());
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_ReportFailedAsync(abi_arg_out<Windows::Foundation::IAsyncAction> result) noexcept override
    {
        try
        {
            *result = detach(shim().ReportFailedAsync());
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::Email::DataProvider::IEmailMailboxUpdateMeetingResponseRequestEventArgs> : produce_base<D, Windows::ApplicationModel::Email::DataProvider::IEmailMailboxUpdateMeetingResponseRequestEventArgs>
{
    HRESULT __stdcall get_Request(abi_arg_out<Windows::ApplicationModel::Email::DataProvider::IEmailMailboxUpdateMeetingResponseRequest> value) noexcept override
    {
        try
        {
            *value = detach(shim().Request());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_GetDeferral(abi_arg_out<Windows::Foundation::IDeferral> value) noexcept override
    {
        try
        {
            *value = detach(shim().GetDeferral());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::Email::DataProvider::IEmailMailboxValidateCertificatesRequest> : produce_base<D, Windows::ApplicationModel::Email::DataProvider::IEmailMailboxValidateCertificatesRequest>
{
    HRESULT __stdcall get_EmailMailboxId(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(shim().EmailMailboxId());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Certificates(abi_arg_out<Windows::Foundation::Collections::IVectorView<Windows::Security::Cryptography::Certificates::Certificate>> value) noexcept override
    {
        try
        {
            *value = detach(shim().Certificates());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_ReportCompletedAsync(abi_arg_in<Windows::Foundation::Collections::IIterable<winrt::Windows::ApplicationModel::Email::EmailCertificateValidationStatus>> validationStatuses, abi_arg_out<Windows::Foundation::IAsyncAction> result) noexcept override
    {
        try
        {
            *result = detach(shim().ReportCompletedAsync(*reinterpret_cast<const Windows::Foundation::Collections::IIterable<winrt::Windows::ApplicationModel::Email::EmailCertificateValidationStatus> *>(&validationStatuses)));
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_ReportFailedAsync(abi_arg_out<Windows::Foundation::IAsyncAction> result) noexcept override
    {
        try
        {
            *result = detach(shim().ReportFailedAsync());
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::Email::DataProvider::IEmailMailboxValidateCertificatesRequestEventArgs> : produce_base<D, Windows::ApplicationModel::Email::DataProvider::IEmailMailboxValidateCertificatesRequestEventArgs>
{
    HRESULT __stdcall get_Request(abi_arg_out<Windows::ApplicationModel::Email::DataProvider::IEmailMailboxValidateCertificatesRequest> value) noexcept override
    {
        try
        {
            *value = detach(shim().Request());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_GetDeferral(abi_arg_out<Windows::Foundation::IDeferral> value) noexcept override
    {
        try
        {
            *value = detach(shim().GetDeferral());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }
};

}

namespace Windows::ApplicationModel::Email::DataProvider {

template <typename D> Windows::ApplicationModel::Email::DataProvider::EmailDataProviderConnection impl_IEmailDataProviderTriggerDetails<D>::Connection() const
{
    Windows::ApplicationModel::Email::DataProvider::EmailDataProviderConnection value { nullptr };
    check_hresult(shim()->get_Connection(put(value)));
    return value;
}

template <typename D> event_token impl_IEmailDataProviderConnection<D>::MailboxSyncRequested(const Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::Email::DataProvider::EmailDataProviderConnection, Windows::ApplicationModel::Email::DataProvider::EmailMailboxSyncManagerSyncRequestEventArgs> & handler) const
{
    event_token token {};
    check_hresult(shim()->add_MailboxSyncRequested(get(handler), &token));
    return token;
}

template <typename D> event_revoker<IEmailDataProviderConnection> impl_IEmailDataProviderConnection<D>::MailboxSyncRequested(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::Email::DataProvider::EmailDataProviderConnection, Windows::ApplicationModel::Email::DataProvider::EmailMailboxSyncManagerSyncRequestEventArgs> & handler) const
{
    return impl::make_event_revoker<D, IEmailDataProviderConnection>(this, &ABI::Windows::ApplicationModel::Email::DataProvider::IEmailDataProviderConnection::remove_MailboxSyncRequested, MailboxSyncRequested(handler));
}

template <typename D> void impl_IEmailDataProviderConnection<D>::MailboxSyncRequested(event_token token) const
{
    check_hresult(shim()->remove_MailboxSyncRequested(token));
}

template <typename D> event_token impl_IEmailDataProviderConnection<D>::DownloadMessageRequested(const Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::Email::DataProvider::EmailDataProviderConnection, Windows::ApplicationModel::Email::DataProvider::EmailMailboxDownloadMessageRequestEventArgs> & handler) const
{
    event_token token {};
    check_hresult(shim()->add_DownloadMessageRequested(get(handler), &token));
    return token;
}

template <typename D> event_revoker<IEmailDataProviderConnection> impl_IEmailDataProviderConnection<D>::DownloadMessageRequested(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::Email::DataProvider::EmailDataProviderConnection, Windows::ApplicationModel::Email::DataProvider::EmailMailboxDownloadMessageRequestEventArgs> & handler) const
{
    return impl::make_event_revoker<D, IEmailDataProviderConnection>(this, &ABI::Windows::ApplicationModel::Email::DataProvider::IEmailDataProviderConnection::remove_DownloadMessageRequested, DownloadMessageRequested(handler));
}

template <typename D> void impl_IEmailDataProviderConnection<D>::DownloadMessageRequested(event_token token) const
{
    check_hresult(shim()->remove_DownloadMessageRequested(token));
}

template <typename D> event_token impl_IEmailDataProviderConnection<D>::DownloadAttachmentRequested(const Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::Email::DataProvider::EmailDataProviderConnection, Windows::ApplicationModel::Email::DataProvider::EmailMailboxDownloadAttachmentRequestEventArgs> & handler) const
{
    event_token token {};
    check_hresult(shim()->add_DownloadAttachmentRequested(get(handler), &token));
    return token;
}

template <typename D> event_revoker<IEmailDataProviderConnection> impl_IEmailDataProviderConnection<D>::DownloadAttachmentRequested(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::Email::DataProvider::EmailDataProviderConnection, Windows::ApplicationModel::Email::DataProvider::EmailMailboxDownloadAttachmentRequestEventArgs> & handler) const
{
    return impl::make_event_revoker<D, IEmailDataProviderConnection>(this, &ABI::Windows::ApplicationModel::Email::DataProvider::IEmailDataProviderConnection::remove_DownloadAttachmentRequested, DownloadAttachmentRequested(handler));
}

template <typename D> void impl_IEmailDataProviderConnection<D>::DownloadAttachmentRequested(event_token token) const
{
    check_hresult(shim()->remove_DownloadAttachmentRequested(token));
}

template <typename D> event_token impl_IEmailDataProviderConnection<D>::CreateFolderRequested(const Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::Email::DataProvider::EmailDataProviderConnection, Windows::ApplicationModel::Email::DataProvider::EmailMailboxCreateFolderRequestEventArgs> & handler) const
{
    event_token token {};
    check_hresult(shim()->add_CreateFolderRequested(get(handler), &token));
    return token;
}

template <typename D> event_revoker<IEmailDataProviderConnection> impl_IEmailDataProviderConnection<D>::CreateFolderRequested(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::Email::DataProvider::EmailDataProviderConnection, Windows::ApplicationModel::Email::DataProvider::EmailMailboxCreateFolderRequestEventArgs> & handler) const
{
    return impl::make_event_revoker<D, IEmailDataProviderConnection>(this, &ABI::Windows::ApplicationModel::Email::DataProvider::IEmailDataProviderConnection::remove_CreateFolderRequested, CreateFolderRequested(handler));
}

template <typename D> void impl_IEmailDataProviderConnection<D>::CreateFolderRequested(event_token token) const
{
    check_hresult(shim()->remove_CreateFolderRequested(token));
}

template <typename D> event_token impl_IEmailDataProviderConnection<D>::DeleteFolderRequested(const Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::Email::DataProvider::EmailDataProviderConnection, Windows::ApplicationModel::Email::DataProvider::EmailMailboxDeleteFolderRequestEventArgs> & handler) const
{
    event_token token {};
    check_hresult(shim()->add_DeleteFolderRequested(get(handler), &token));
    return token;
}

template <typename D> event_revoker<IEmailDataProviderConnection> impl_IEmailDataProviderConnection<D>::DeleteFolderRequested(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::Email::DataProvider::EmailDataProviderConnection, Windows::ApplicationModel::Email::DataProvider::EmailMailboxDeleteFolderRequestEventArgs> & handler) const
{
    return impl::make_event_revoker<D, IEmailDataProviderConnection>(this, &ABI::Windows::ApplicationModel::Email::DataProvider::IEmailDataProviderConnection::remove_DeleteFolderRequested, DeleteFolderRequested(handler));
}

template <typename D> void impl_IEmailDataProviderConnection<D>::DeleteFolderRequested(event_token token) const
{
    check_hresult(shim()->remove_DeleteFolderRequested(token));
}

template <typename D> event_token impl_IEmailDataProviderConnection<D>::EmptyFolderRequested(const Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::Email::DataProvider::EmailDataProviderConnection, Windows::ApplicationModel::Email::DataProvider::EmailMailboxEmptyFolderRequestEventArgs> & handler) const
{
    event_token token {};
    check_hresult(shim()->add_EmptyFolderRequested(get(handler), &token));
    return token;
}

template <typename D> event_revoker<IEmailDataProviderConnection> impl_IEmailDataProviderConnection<D>::EmptyFolderRequested(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::Email::DataProvider::EmailDataProviderConnection, Windows::ApplicationModel::Email::DataProvider::EmailMailboxEmptyFolderRequestEventArgs> & handler) const
{
    return impl::make_event_revoker<D, IEmailDataProviderConnection>(this, &ABI::Windows::ApplicationModel::Email::DataProvider::IEmailDataProviderConnection::remove_EmptyFolderRequested, EmptyFolderRequested(handler));
}

template <typename D> void impl_IEmailDataProviderConnection<D>::EmptyFolderRequested(event_token token) const
{
    check_hresult(shim()->remove_EmptyFolderRequested(token));
}

template <typename D> event_token impl_IEmailDataProviderConnection<D>::MoveFolderRequested(const Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::Email::DataProvider::EmailDataProviderConnection, Windows::ApplicationModel::Email::DataProvider::EmailMailboxMoveFolderRequestEventArgs> & handler) const
{
    event_token token {};
    check_hresult(shim()->add_MoveFolderRequested(get(handler), &token));
    return token;
}

template <typename D> event_revoker<IEmailDataProviderConnection> impl_IEmailDataProviderConnection<D>::MoveFolderRequested(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::Email::DataProvider::EmailDataProviderConnection, Windows::ApplicationModel::Email::DataProvider::EmailMailboxMoveFolderRequestEventArgs> & handler) const
{
    return impl::make_event_revoker<D, IEmailDataProviderConnection>(this, &ABI::Windows::ApplicationModel::Email::DataProvider::IEmailDataProviderConnection::remove_MoveFolderRequested, MoveFolderRequested(handler));
}

template <typename D> void impl_IEmailDataProviderConnection<D>::MoveFolderRequested(event_token token) const
{
    check_hresult(shim()->remove_MoveFolderRequested(token));
}

template <typename D> event_token impl_IEmailDataProviderConnection<D>::UpdateMeetingResponseRequested(const Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::Email::DataProvider::EmailDataProviderConnection, Windows::ApplicationModel::Email::DataProvider::EmailMailboxUpdateMeetingResponseRequestEventArgs> & handler) const
{
    event_token token {};
    check_hresult(shim()->add_UpdateMeetingResponseRequested(get(handler), &token));
    return token;
}

template <typename D> event_revoker<IEmailDataProviderConnection> impl_IEmailDataProviderConnection<D>::UpdateMeetingResponseRequested(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::Email::DataProvider::EmailDataProviderConnection, Windows::ApplicationModel::Email::DataProvider::EmailMailboxUpdateMeetingResponseRequestEventArgs> & handler) const
{
    return impl::make_event_revoker<D, IEmailDataProviderConnection>(this, &ABI::Windows::ApplicationModel::Email::DataProvider::IEmailDataProviderConnection::remove_UpdateMeetingResponseRequested, UpdateMeetingResponseRequested(handler));
}

template <typename D> void impl_IEmailDataProviderConnection<D>::UpdateMeetingResponseRequested(event_token token) const
{
    check_hresult(shim()->remove_UpdateMeetingResponseRequested(token));
}

template <typename D> event_token impl_IEmailDataProviderConnection<D>::ForwardMeetingRequested(const Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::Email::DataProvider::EmailDataProviderConnection, Windows::ApplicationModel::Email::DataProvider::EmailMailboxForwardMeetingRequestEventArgs> & handler) const
{
    event_token token {};
    check_hresult(shim()->add_ForwardMeetingRequested(get(handler), &token));
    return token;
}

template <typename D> event_revoker<IEmailDataProviderConnection> impl_IEmailDataProviderConnection<D>::ForwardMeetingRequested(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::Email::DataProvider::EmailDataProviderConnection, Windows::ApplicationModel::Email::DataProvider::EmailMailboxForwardMeetingRequestEventArgs> & handler) const
{
    return impl::make_event_revoker<D, IEmailDataProviderConnection>(this, &ABI::Windows::ApplicationModel::Email::DataProvider::IEmailDataProviderConnection::remove_ForwardMeetingRequested, ForwardMeetingRequested(handler));
}

template <typename D> void impl_IEmailDataProviderConnection<D>::ForwardMeetingRequested(event_token token) const
{
    check_hresult(shim()->remove_ForwardMeetingRequested(token));
}

template <typename D> event_token impl_IEmailDataProviderConnection<D>::ProposeNewTimeForMeetingRequested(const Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::Email::DataProvider::EmailDataProviderConnection, Windows::ApplicationModel::Email::DataProvider::EmailMailboxProposeNewTimeForMeetingRequestEventArgs> & handler) const
{
    event_token token {};
    check_hresult(shim()->add_ProposeNewTimeForMeetingRequested(get(handler), &token));
    return token;
}

template <typename D> event_revoker<IEmailDataProviderConnection> impl_IEmailDataProviderConnection<D>::ProposeNewTimeForMeetingRequested(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::Email::DataProvider::EmailDataProviderConnection, Windows::ApplicationModel::Email::DataProvider::EmailMailboxProposeNewTimeForMeetingRequestEventArgs> & handler) const
{
    return impl::make_event_revoker<D, IEmailDataProviderConnection>(this, &ABI::Windows::ApplicationModel::Email::DataProvider::IEmailDataProviderConnection::remove_ProposeNewTimeForMeetingRequested, ProposeNewTimeForMeetingRequested(handler));
}

template <typename D> void impl_IEmailDataProviderConnection<D>::ProposeNewTimeForMeetingRequested(event_token token) const
{
    check_hresult(shim()->remove_ProposeNewTimeForMeetingRequested(token));
}

template <typename D> event_token impl_IEmailDataProviderConnection<D>::SetAutoReplySettingsRequested(const Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::Email::DataProvider::EmailDataProviderConnection, Windows::ApplicationModel::Email::DataProvider::EmailMailboxSetAutoReplySettingsRequestEventArgs> & handler) const
{
    event_token token {};
    check_hresult(shim()->add_SetAutoReplySettingsRequested(get(handler), &token));
    return token;
}

template <typename D> event_revoker<IEmailDataProviderConnection> impl_IEmailDataProviderConnection<D>::SetAutoReplySettingsRequested(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::Email::DataProvider::EmailDataProviderConnection, Windows::ApplicationModel::Email::DataProvider::EmailMailboxSetAutoReplySettingsRequestEventArgs> & handler) const
{
    return impl::make_event_revoker<D, IEmailDataProviderConnection>(this, &ABI::Windows::ApplicationModel::Email::DataProvider::IEmailDataProviderConnection::remove_SetAutoReplySettingsRequested, SetAutoReplySettingsRequested(handler));
}

template <typename D> void impl_IEmailDataProviderConnection<D>::SetAutoReplySettingsRequested(event_token token) const
{
    check_hresult(shim()->remove_SetAutoReplySettingsRequested(token));
}

template <typename D> event_token impl_IEmailDataProviderConnection<D>::GetAutoReplySettingsRequested(const Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::Email::DataProvider::EmailDataProviderConnection, Windows::ApplicationModel::Email::DataProvider::EmailMailboxGetAutoReplySettingsRequestEventArgs> & handler) const
{
    event_token token {};
    check_hresult(shim()->add_GetAutoReplySettingsRequested(get(handler), &token));
    return token;
}

template <typename D> event_revoker<IEmailDataProviderConnection> impl_IEmailDataProviderConnection<D>::GetAutoReplySettingsRequested(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::Email::DataProvider::EmailDataProviderConnection, Windows::ApplicationModel::Email::DataProvider::EmailMailboxGetAutoReplySettingsRequestEventArgs> & handler) const
{
    return impl::make_event_revoker<D, IEmailDataProviderConnection>(this, &ABI::Windows::ApplicationModel::Email::DataProvider::IEmailDataProviderConnection::remove_GetAutoReplySettingsRequested, GetAutoReplySettingsRequested(handler));
}

template <typename D> void impl_IEmailDataProviderConnection<D>::GetAutoReplySettingsRequested(event_token token) const
{
    check_hresult(shim()->remove_GetAutoReplySettingsRequested(token));
}

template <typename D> event_token impl_IEmailDataProviderConnection<D>::ResolveRecipientsRequested(const Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::Email::DataProvider::EmailDataProviderConnection, Windows::ApplicationModel::Email::DataProvider::EmailMailboxResolveRecipientsRequestEventArgs> & handler) const
{
    event_token token {};
    check_hresult(shim()->add_ResolveRecipientsRequested(get(handler), &token));
    return token;
}

template <typename D> event_revoker<IEmailDataProviderConnection> impl_IEmailDataProviderConnection<D>::ResolveRecipientsRequested(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::Email::DataProvider::EmailDataProviderConnection, Windows::ApplicationModel::Email::DataProvider::EmailMailboxResolveRecipientsRequestEventArgs> & handler) const
{
    return impl::make_event_revoker<D, IEmailDataProviderConnection>(this, &ABI::Windows::ApplicationModel::Email::DataProvider::IEmailDataProviderConnection::remove_ResolveRecipientsRequested, ResolveRecipientsRequested(handler));
}

template <typename D> void impl_IEmailDataProviderConnection<D>::ResolveRecipientsRequested(event_token token) const
{
    check_hresult(shim()->remove_ResolveRecipientsRequested(token));
}

template <typename D> event_token impl_IEmailDataProviderConnection<D>::ValidateCertificatesRequested(const Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::Email::DataProvider::EmailDataProviderConnection, Windows::ApplicationModel::Email::DataProvider::EmailMailboxValidateCertificatesRequestEventArgs> & handler) const
{
    event_token token {};
    check_hresult(shim()->add_ValidateCertificatesRequested(get(handler), &token));
    return token;
}

template <typename D> event_revoker<IEmailDataProviderConnection> impl_IEmailDataProviderConnection<D>::ValidateCertificatesRequested(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::Email::DataProvider::EmailDataProviderConnection, Windows::ApplicationModel::Email::DataProvider::EmailMailboxValidateCertificatesRequestEventArgs> & handler) const
{
    return impl::make_event_revoker<D, IEmailDataProviderConnection>(this, &ABI::Windows::ApplicationModel::Email::DataProvider::IEmailDataProviderConnection::remove_ValidateCertificatesRequested, ValidateCertificatesRequested(handler));
}

template <typename D> void impl_IEmailDataProviderConnection<D>::ValidateCertificatesRequested(event_token token) const
{
    check_hresult(shim()->remove_ValidateCertificatesRequested(token));
}

template <typename D> event_token impl_IEmailDataProviderConnection<D>::ServerSearchReadBatchRequested(const Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::Email::DataProvider::EmailDataProviderConnection, Windows::ApplicationModel::Email::DataProvider::EmailMailboxServerSearchReadBatchRequestEventArgs> & handler) const
{
    event_token token {};
    check_hresult(shim()->add_ServerSearchReadBatchRequested(get(handler), &token));
    return token;
}

template <typename D> event_revoker<IEmailDataProviderConnection> impl_IEmailDataProviderConnection<D>::ServerSearchReadBatchRequested(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::Email::DataProvider::EmailDataProviderConnection, Windows::ApplicationModel::Email::DataProvider::EmailMailboxServerSearchReadBatchRequestEventArgs> & handler) const
{
    return impl::make_event_revoker<D, IEmailDataProviderConnection>(this, &ABI::Windows::ApplicationModel::Email::DataProvider::IEmailDataProviderConnection::remove_ServerSearchReadBatchRequested, ServerSearchReadBatchRequested(handler));
}

template <typename D> void impl_IEmailDataProviderConnection<D>::ServerSearchReadBatchRequested(event_token token) const
{
    check_hresult(shim()->remove_ServerSearchReadBatchRequested(token));
}

template <typename D> void impl_IEmailDataProviderConnection<D>::Start() const
{
    check_hresult(shim()->abi_Start());
}

template <typename D> hstring impl_IEmailMailboxSyncManagerSyncRequest<D>::EmailMailboxId() const
{
    hstring value;
    check_hresult(shim()->get_EmailMailboxId(put(value)));
    return value;
}

template <typename D> Windows::Foundation::IAsyncAction impl_IEmailMailboxSyncManagerSyncRequest<D>::ReportCompletedAsync() const
{
    Windows::Foundation::IAsyncAction result;
    check_hresult(shim()->abi_ReportCompletedAsync(put(result)));
    return result;
}

template <typename D> Windows::Foundation::IAsyncAction impl_IEmailMailboxSyncManagerSyncRequest<D>::ReportFailedAsync() const
{
    Windows::Foundation::IAsyncAction result;
    check_hresult(shim()->abi_ReportFailedAsync(put(result)));
    return result;
}

template <typename D> hstring impl_IEmailMailboxDownloadMessageRequest<D>::EmailMailboxId() const
{
    hstring value;
    check_hresult(shim()->get_EmailMailboxId(put(value)));
    return value;
}

template <typename D> hstring impl_IEmailMailboxDownloadMessageRequest<D>::EmailMessageId() const
{
    hstring value;
    check_hresult(shim()->get_EmailMessageId(put(value)));
    return value;
}

template <typename D> Windows::Foundation::IAsyncAction impl_IEmailMailboxDownloadMessageRequest<D>::ReportCompletedAsync() const
{
    Windows::Foundation::IAsyncAction result;
    check_hresult(shim()->abi_ReportCompletedAsync(put(result)));
    return result;
}

template <typename D> Windows::Foundation::IAsyncAction impl_IEmailMailboxDownloadMessageRequest<D>::ReportFailedAsync() const
{
    Windows::Foundation::IAsyncAction result;
    check_hresult(shim()->abi_ReportFailedAsync(put(result)));
    return result;
}

template <typename D> hstring impl_IEmailMailboxDownloadAttachmentRequest<D>::EmailMailboxId() const
{
    hstring value;
    check_hresult(shim()->get_EmailMailboxId(put(value)));
    return value;
}

template <typename D> hstring impl_IEmailMailboxDownloadAttachmentRequest<D>::EmailMessageId() const
{
    hstring value;
    check_hresult(shim()->get_EmailMessageId(put(value)));
    return value;
}

template <typename D> hstring impl_IEmailMailboxDownloadAttachmentRequest<D>::EmailAttachmentId() const
{
    hstring value;
    check_hresult(shim()->get_EmailAttachmentId(put(value)));
    return value;
}

template <typename D> Windows::Foundation::IAsyncAction impl_IEmailMailboxDownloadAttachmentRequest<D>::ReportCompletedAsync() const
{
    Windows::Foundation::IAsyncAction result;
    check_hresult(shim()->abi_ReportCompletedAsync(put(result)));
    return result;
}

template <typename D> Windows::Foundation::IAsyncAction impl_IEmailMailboxDownloadAttachmentRequest<D>::ReportFailedAsync() const
{
    Windows::Foundation::IAsyncAction result;
    check_hresult(shim()->abi_ReportFailedAsync(put(result)));
    return result;
}

template <typename D> hstring impl_IEmailMailboxCreateFolderRequest<D>::EmailMailboxId() const
{
    hstring value;
    check_hresult(shim()->get_EmailMailboxId(put(value)));
    return value;
}

template <typename D> hstring impl_IEmailMailboxCreateFolderRequest<D>::ParentFolderId() const
{
    hstring value;
    check_hresult(shim()->get_ParentFolderId(put(value)));
    return value;
}

template <typename D> hstring impl_IEmailMailboxCreateFolderRequest<D>::Name() const
{
    hstring value;
    check_hresult(shim()->get_Name(put(value)));
    return value;
}

template <typename D> Windows::Foundation::IAsyncAction impl_IEmailMailboxCreateFolderRequest<D>::ReportCompletedAsync(const Windows::ApplicationModel::Email::EmailFolder & folder) const
{
    Windows::Foundation::IAsyncAction result;
    check_hresult(shim()->abi_ReportCompletedAsync(get(folder), put(result)));
    return result;
}

template <typename D> Windows::Foundation::IAsyncAction impl_IEmailMailboxCreateFolderRequest<D>::ReportFailedAsync(Windows::ApplicationModel::Email::EmailMailboxCreateFolderStatus status) const
{
    Windows::Foundation::IAsyncAction result;
    check_hresult(shim()->abi_ReportFailedAsync(status, put(result)));
    return result;
}

template <typename D> hstring impl_IEmailMailboxDeleteFolderRequest<D>::EmailMailboxId() const
{
    hstring value;
    check_hresult(shim()->get_EmailMailboxId(put(value)));
    return value;
}

template <typename D> hstring impl_IEmailMailboxDeleteFolderRequest<D>::EmailFolderId() const
{
    hstring value;
    check_hresult(shim()->get_EmailFolderId(put(value)));
    return value;
}

template <typename D> Windows::Foundation::IAsyncAction impl_IEmailMailboxDeleteFolderRequest<D>::ReportCompletedAsync() const
{
    Windows::Foundation::IAsyncAction result;
    check_hresult(shim()->abi_ReportCompletedAsync(put(result)));
    return result;
}

template <typename D> Windows::Foundation::IAsyncAction impl_IEmailMailboxDeleteFolderRequest<D>::ReportFailedAsync(Windows::ApplicationModel::Email::EmailMailboxDeleteFolderStatus status) const
{
    Windows::Foundation::IAsyncAction result;
    check_hresult(shim()->abi_ReportFailedAsync(status, put(result)));
    return result;
}

template <typename D> hstring impl_IEmailMailboxEmptyFolderRequest<D>::EmailMailboxId() const
{
    hstring value;
    check_hresult(shim()->get_EmailMailboxId(put(value)));
    return value;
}

template <typename D> hstring impl_IEmailMailboxEmptyFolderRequest<D>::EmailFolderId() const
{
    hstring value;
    check_hresult(shim()->get_EmailFolderId(put(value)));
    return value;
}

template <typename D> Windows::Foundation::IAsyncAction impl_IEmailMailboxEmptyFolderRequest<D>::ReportCompletedAsync() const
{
    Windows::Foundation::IAsyncAction result;
    check_hresult(shim()->abi_ReportCompletedAsync(put(result)));
    return result;
}

template <typename D> Windows::Foundation::IAsyncAction impl_IEmailMailboxEmptyFolderRequest<D>::ReportFailedAsync(Windows::ApplicationModel::Email::EmailMailboxEmptyFolderStatus status) const
{
    Windows::Foundation::IAsyncAction result;
    check_hresult(shim()->abi_ReportFailedAsync(status, put(result)));
    return result;
}

template <typename D> hstring impl_IEmailMailboxMoveFolderRequest<D>::EmailMailboxId() const
{
    hstring value;
    check_hresult(shim()->get_EmailMailboxId(put(value)));
    return value;
}

template <typename D> hstring impl_IEmailMailboxMoveFolderRequest<D>::EmailFolderId() const
{
    hstring value;
    check_hresult(shim()->get_EmailFolderId(put(value)));
    return value;
}

template <typename D> hstring impl_IEmailMailboxMoveFolderRequest<D>::NewParentFolderId() const
{
    hstring value;
    check_hresult(shim()->get_NewParentFolderId(put(value)));
    return value;
}

template <typename D> hstring impl_IEmailMailboxMoveFolderRequest<D>::NewFolderName() const
{
    hstring value;
    check_hresult(shim()->get_NewFolderName(put(value)));
    return value;
}

template <typename D> Windows::Foundation::IAsyncAction impl_IEmailMailboxMoveFolderRequest<D>::ReportCompletedAsync() const
{
    Windows::Foundation::IAsyncAction result;
    check_hresult(shim()->abi_ReportCompletedAsync(put(result)));
    return result;
}

template <typename D> Windows::Foundation::IAsyncAction impl_IEmailMailboxMoveFolderRequest<D>::ReportFailedAsync() const
{
    Windows::Foundation::IAsyncAction result;
    check_hresult(shim()->abi_ReportFailedAsync(put(result)));
    return result;
}

template <typename D> hstring impl_IEmailMailboxUpdateMeetingResponseRequest<D>::EmailMailboxId() const
{
    hstring value;
    check_hresult(shim()->get_EmailMailboxId(put(value)));
    return value;
}

template <typename D> hstring impl_IEmailMailboxUpdateMeetingResponseRequest<D>::EmailMessageId() const
{
    hstring value;
    check_hresult(shim()->get_EmailMessageId(put(value)));
    return value;
}

template <typename D> Windows::ApplicationModel::Email::EmailMeetingResponseType impl_IEmailMailboxUpdateMeetingResponseRequest<D>::Response() const
{
    Windows::ApplicationModel::Email::EmailMeetingResponseType response {};
    check_hresult(shim()->get_Response(&response));
    return response;
}

template <typename D> hstring impl_IEmailMailboxUpdateMeetingResponseRequest<D>::Subject() const
{
    hstring value;
    check_hresult(shim()->get_Subject(put(value)));
    return value;
}

template <typename D> hstring impl_IEmailMailboxUpdateMeetingResponseRequest<D>::Comment() const
{
    hstring value;
    check_hresult(shim()->get_Comment(put(value)));
    return value;
}

template <typename D> bool impl_IEmailMailboxUpdateMeetingResponseRequest<D>::SendUpdate() const
{
    bool value {};
    check_hresult(shim()->get_SendUpdate(&value));
    return value;
}

template <typename D> Windows::Foundation::IAsyncAction impl_IEmailMailboxUpdateMeetingResponseRequest<D>::ReportCompletedAsync() const
{
    Windows::Foundation::IAsyncAction result;
    check_hresult(shim()->abi_ReportCompletedAsync(put(result)));
    return result;
}

template <typename D> Windows::Foundation::IAsyncAction impl_IEmailMailboxUpdateMeetingResponseRequest<D>::ReportFailedAsync() const
{
    Windows::Foundation::IAsyncAction result;
    check_hresult(shim()->abi_ReportFailedAsync(put(result)));
    return result;
}

template <typename D> hstring impl_IEmailMailboxForwardMeetingRequest<D>::EmailMailboxId() const
{
    hstring value;
    check_hresult(shim()->get_EmailMailboxId(put(value)));
    return value;
}

template <typename D> hstring impl_IEmailMailboxForwardMeetingRequest<D>::EmailMessageId() const
{
    hstring value;
    check_hresult(shim()->get_EmailMessageId(put(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Email::EmailRecipient> impl_IEmailMailboxForwardMeetingRequest<D>::Recipients() const
{
    Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Email::EmailRecipient> value;
    check_hresult(shim()->get_Recipients(put(value)));
    return value;
}

template <typename D> hstring impl_IEmailMailboxForwardMeetingRequest<D>::Subject() const
{
    hstring value;
    check_hresult(shim()->get_Subject(put(value)));
    return value;
}

template <typename D> Windows::ApplicationModel::Email::EmailMessageBodyKind impl_IEmailMailboxForwardMeetingRequest<D>::ForwardHeaderType() const
{
    Windows::ApplicationModel::Email::EmailMessageBodyKind value {};
    check_hresult(shim()->get_ForwardHeaderType(&value));
    return value;
}

template <typename D> hstring impl_IEmailMailboxForwardMeetingRequest<D>::ForwardHeader() const
{
    hstring value;
    check_hresult(shim()->get_ForwardHeader(put(value)));
    return value;
}

template <typename D> hstring impl_IEmailMailboxForwardMeetingRequest<D>::Comment() const
{
    hstring value;
    check_hresult(shim()->get_Comment(put(value)));
    return value;
}

template <typename D> Windows::Foundation::IAsyncAction impl_IEmailMailboxForwardMeetingRequest<D>::ReportCompletedAsync() const
{
    Windows::Foundation::IAsyncAction result;
    check_hresult(shim()->abi_ReportCompletedAsync(put(result)));
    return result;
}

template <typename D> Windows::Foundation::IAsyncAction impl_IEmailMailboxForwardMeetingRequest<D>::ReportFailedAsync() const
{
    Windows::Foundation::IAsyncAction result;
    check_hresult(shim()->abi_ReportFailedAsync(put(result)));
    return result;
}

template <typename D> hstring impl_IEmailMailboxProposeNewTimeForMeetingRequest<D>::EmailMailboxId() const
{
    hstring value;
    check_hresult(shim()->get_EmailMailboxId(put(value)));
    return value;
}

template <typename D> hstring impl_IEmailMailboxProposeNewTimeForMeetingRequest<D>::EmailMessageId() const
{
    hstring value;
    check_hresult(shim()->get_EmailMessageId(put(value)));
    return value;
}

template <typename D> Windows::Foundation::DateTime impl_IEmailMailboxProposeNewTimeForMeetingRequest<D>::NewStartTime() const
{
    Windows::Foundation::DateTime value {};
    check_hresult(shim()->get_NewStartTime(put(value)));
    return value;
}

template <typename D> Windows::Foundation::TimeSpan impl_IEmailMailboxProposeNewTimeForMeetingRequest<D>::NewDuration() const
{
    Windows::Foundation::TimeSpan value {};
    check_hresult(shim()->get_NewDuration(put(value)));
    return value;
}

template <typename D> hstring impl_IEmailMailboxProposeNewTimeForMeetingRequest<D>::Subject() const
{
    hstring value;
    check_hresult(shim()->get_Subject(put(value)));
    return value;
}

template <typename D> hstring impl_IEmailMailboxProposeNewTimeForMeetingRequest<D>::Comment() const
{
    hstring value;
    check_hresult(shim()->get_Comment(put(value)));
    return value;
}

template <typename D> Windows::Foundation::IAsyncAction impl_IEmailMailboxProposeNewTimeForMeetingRequest<D>::ReportCompletedAsync() const
{
    Windows::Foundation::IAsyncAction result;
    check_hresult(shim()->abi_ReportCompletedAsync(put(result)));
    return result;
}

template <typename D> Windows::Foundation::IAsyncAction impl_IEmailMailboxProposeNewTimeForMeetingRequest<D>::ReportFailedAsync() const
{
    Windows::Foundation::IAsyncAction result;
    check_hresult(shim()->abi_ReportFailedAsync(put(result)));
    return result;
}

template <typename D> hstring impl_IEmailMailboxSetAutoReplySettingsRequest<D>::EmailMailboxId() const
{
    hstring value;
    check_hresult(shim()->get_EmailMailboxId(put(value)));
    return value;
}

template <typename D> Windows::ApplicationModel::Email::EmailMailboxAutoReplySettings impl_IEmailMailboxSetAutoReplySettingsRequest<D>::AutoReplySettings() const
{
    Windows::ApplicationModel::Email::EmailMailboxAutoReplySettings value { nullptr };
    check_hresult(shim()->get_AutoReplySettings(put(value)));
    return value;
}

template <typename D> Windows::Foundation::IAsyncAction impl_IEmailMailboxSetAutoReplySettingsRequest<D>::ReportCompletedAsync() const
{
    Windows::Foundation::IAsyncAction result;
    check_hresult(shim()->abi_ReportCompletedAsync(put(result)));
    return result;
}

template <typename D> Windows::Foundation::IAsyncAction impl_IEmailMailboxSetAutoReplySettingsRequest<D>::ReportFailedAsync() const
{
    Windows::Foundation::IAsyncAction result;
    check_hresult(shim()->abi_ReportFailedAsync(put(result)));
    return result;
}

template <typename D> hstring impl_IEmailMailboxGetAutoReplySettingsRequest<D>::EmailMailboxId() const
{
    hstring value;
    check_hresult(shim()->get_EmailMailboxId(put(value)));
    return value;
}

template <typename D> Windows::ApplicationModel::Email::EmailMailboxAutoReplyMessageResponseKind impl_IEmailMailboxGetAutoReplySettingsRequest<D>::RequestedFormat() const
{
    Windows::ApplicationModel::Email::EmailMailboxAutoReplyMessageResponseKind value {};
    check_hresult(shim()->get_RequestedFormat(&value));
    return value;
}

template <typename D> Windows::Foundation::IAsyncAction impl_IEmailMailboxGetAutoReplySettingsRequest<D>::ReportCompletedAsync(const Windows::ApplicationModel::Email::EmailMailboxAutoReplySettings & autoReplySettings) const
{
    Windows::Foundation::IAsyncAction result;
    check_hresult(shim()->abi_ReportCompletedAsync(get(autoReplySettings), put(result)));
    return result;
}

template <typename D> Windows::Foundation::IAsyncAction impl_IEmailMailboxGetAutoReplySettingsRequest<D>::ReportFailedAsync() const
{
    Windows::Foundation::IAsyncAction result;
    check_hresult(shim()->abi_ReportFailedAsync(put(result)));
    return result;
}

template <typename D> hstring impl_IEmailMailboxResolveRecipientsRequest<D>::EmailMailboxId() const
{
    hstring value;
    check_hresult(shim()->get_EmailMailboxId(put(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVectorView<hstring> impl_IEmailMailboxResolveRecipientsRequest<D>::Recipients() const
{
    Windows::Foundation::Collections::IVectorView<hstring> value;
    check_hresult(shim()->get_Recipients(put(value)));
    return value;
}

template <typename D> Windows::Foundation::IAsyncAction impl_IEmailMailboxResolveRecipientsRequest<D>::ReportCompletedAsync(const Windows::Foundation::Collections::IIterable<Windows::ApplicationModel::Email::EmailRecipientResolutionResult> & resolutionResults) const
{
    Windows::Foundation::IAsyncAction result;
    check_hresult(shim()->abi_ReportCompletedAsync(get(resolutionResults), put(result)));
    return result;
}

template <typename D> Windows::Foundation::IAsyncAction impl_IEmailMailboxResolveRecipientsRequest<D>::ReportFailedAsync() const
{
    Windows::Foundation::IAsyncAction result;
    check_hresult(shim()->abi_ReportFailedAsync(put(result)));
    return result;
}

template <typename D> hstring impl_IEmailMailboxValidateCertificatesRequest<D>::EmailMailboxId() const
{
    hstring value;
    check_hresult(shim()->get_EmailMailboxId(put(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVectorView<Windows::Security::Cryptography::Certificates::Certificate> impl_IEmailMailboxValidateCertificatesRequest<D>::Certificates() const
{
    Windows::Foundation::Collections::IVectorView<Windows::Security::Cryptography::Certificates::Certificate> value;
    check_hresult(shim()->get_Certificates(put(value)));
    return value;
}

template <typename D> Windows::Foundation::IAsyncAction impl_IEmailMailboxValidateCertificatesRequest<D>::ReportCompletedAsync(const Windows::Foundation::Collections::IIterable<winrt::Windows::ApplicationModel::Email::EmailCertificateValidationStatus> & validationStatuses) const
{
    Windows::Foundation::IAsyncAction result;
    check_hresult(shim()->abi_ReportCompletedAsync(get(validationStatuses), put(result)));
    return result;
}

template <typename D> Windows::Foundation::IAsyncAction impl_IEmailMailboxValidateCertificatesRequest<D>::ReportFailedAsync() const
{
    Windows::Foundation::IAsyncAction result;
    check_hresult(shim()->abi_ReportFailedAsync(put(result)));
    return result;
}

template <typename D> hstring impl_IEmailMailboxServerSearchReadBatchRequest<D>::SessionId() const
{
    hstring value;
    check_hresult(shim()->get_SessionId(put(value)));
    return value;
}

template <typename D> hstring impl_IEmailMailboxServerSearchReadBatchRequest<D>::EmailMailboxId() const
{
    hstring value;
    check_hresult(shim()->get_EmailMailboxId(put(value)));
    return value;
}

template <typename D> hstring impl_IEmailMailboxServerSearchReadBatchRequest<D>::EmailFolderId() const
{
    hstring value;
    check_hresult(shim()->get_EmailFolderId(put(value)));
    return value;
}

template <typename D> Windows::ApplicationModel::Email::EmailQueryOptions impl_IEmailMailboxServerSearchReadBatchRequest<D>::Options() const
{
    Windows::ApplicationModel::Email::EmailQueryOptions value { nullptr };
    check_hresult(shim()->get_Options(put(value)));
    return value;
}

template <typename D> uint32_t impl_IEmailMailboxServerSearchReadBatchRequest<D>::SuggestedBatchSize() const
{
    uint32_t value {};
    check_hresult(shim()->get_SuggestedBatchSize(&value));
    return value;
}

template <typename D> Windows::Foundation::IAsyncAction impl_IEmailMailboxServerSearchReadBatchRequest<D>::SaveMessageAsync(const Windows::ApplicationModel::Email::EmailMessage & message) const
{
    Windows::Foundation::IAsyncAction result;
    check_hresult(shim()->abi_SaveMessageAsync(get(message), put(result)));
    return result;
}

template <typename D> Windows::Foundation::IAsyncAction impl_IEmailMailboxServerSearchReadBatchRequest<D>::ReportCompletedAsync() const
{
    Windows::Foundation::IAsyncAction result;
    check_hresult(shim()->abi_ReportCompletedAsync(put(result)));
    return result;
}

template <typename D> Windows::Foundation::IAsyncAction impl_IEmailMailboxServerSearchReadBatchRequest<D>::ReportFailedAsync(Windows::ApplicationModel::Email::EmailBatchStatus batchStatus) const
{
    Windows::Foundation::IAsyncAction result;
    check_hresult(shim()->abi_ReportFailedAsync(batchStatus, put(result)));
    return result;
}

template <typename D> Windows::ApplicationModel::Email::DataProvider::EmailMailboxSyncManagerSyncRequest impl_IEmailMailboxSyncManagerSyncRequestEventArgs<D>::Request() const
{
    Windows::ApplicationModel::Email::DataProvider::EmailMailboxSyncManagerSyncRequest value { nullptr };
    check_hresult(shim()->get_Request(put(value)));
    return value;
}

template <typename D> Windows::Foundation::Deferral impl_IEmailMailboxSyncManagerSyncRequestEventArgs<D>::GetDeferral() const
{
    Windows::Foundation::Deferral value { nullptr };
    check_hresult(shim()->abi_GetDeferral(put(value)));
    return value;
}

template <typename D> Windows::ApplicationModel::Email::DataProvider::EmailMailboxDownloadMessageRequest impl_IEmailMailboxDownloadMessageRequestEventArgs<D>::Request() const
{
    Windows::ApplicationModel::Email::DataProvider::EmailMailboxDownloadMessageRequest value { nullptr };
    check_hresult(shim()->get_Request(put(value)));
    return value;
}

template <typename D> Windows::Foundation::Deferral impl_IEmailMailboxDownloadMessageRequestEventArgs<D>::GetDeferral() const
{
    Windows::Foundation::Deferral value { nullptr };
    check_hresult(shim()->abi_GetDeferral(put(value)));
    return value;
}

template <typename D> Windows::ApplicationModel::Email::DataProvider::EmailMailboxDownloadAttachmentRequest impl_IEmailMailboxDownloadAttachmentRequestEventArgs<D>::Request() const
{
    Windows::ApplicationModel::Email::DataProvider::EmailMailboxDownloadAttachmentRequest value { nullptr };
    check_hresult(shim()->get_Request(put(value)));
    return value;
}

template <typename D> Windows::Foundation::Deferral impl_IEmailMailboxDownloadAttachmentRequestEventArgs<D>::GetDeferral() const
{
    Windows::Foundation::Deferral value { nullptr };
    check_hresult(shim()->abi_GetDeferral(put(value)));
    return value;
}

template <typename D> Windows::ApplicationModel::Email::DataProvider::EmailMailboxCreateFolderRequest impl_IEmailMailboxCreateFolderRequestEventArgs<D>::Request() const
{
    Windows::ApplicationModel::Email::DataProvider::EmailMailboxCreateFolderRequest value { nullptr };
    check_hresult(shim()->get_Request(put(value)));
    return value;
}

template <typename D> Windows::Foundation::Deferral impl_IEmailMailboxCreateFolderRequestEventArgs<D>::GetDeferral() const
{
    Windows::Foundation::Deferral value { nullptr };
    check_hresult(shim()->abi_GetDeferral(put(value)));
    return value;
}

template <typename D> Windows::ApplicationModel::Email::DataProvider::EmailMailboxDeleteFolderRequest impl_IEmailMailboxDeleteFolderRequestEventArgs<D>::Request() const
{
    Windows::ApplicationModel::Email::DataProvider::EmailMailboxDeleteFolderRequest value { nullptr };
    check_hresult(shim()->get_Request(put(value)));
    return value;
}

template <typename D> Windows::Foundation::Deferral impl_IEmailMailboxDeleteFolderRequestEventArgs<D>::GetDeferral() const
{
    Windows::Foundation::Deferral value { nullptr };
    check_hresult(shim()->abi_GetDeferral(put(value)));
    return value;
}

template <typename D> Windows::ApplicationModel::Email::DataProvider::EmailMailboxEmptyFolderRequest impl_IEmailMailboxEmptyFolderRequestEventArgs<D>::Request() const
{
    Windows::ApplicationModel::Email::DataProvider::EmailMailboxEmptyFolderRequest value { nullptr };
    check_hresult(shim()->get_Request(put(value)));
    return value;
}

template <typename D> Windows::Foundation::Deferral impl_IEmailMailboxEmptyFolderRequestEventArgs<D>::GetDeferral() const
{
    Windows::Foundation::Deferral value { nullptr };
    check_hresult(shim()->abi_GetDeferral(put(value)));
    return value;
}

template <typename D> Windows::ApplicationModel::Email::DataProvider::EmailMailboxMoveFolderRequest impl_IEmailMailboxMoveFolderRequestEventArgs<D>::Request() const
{
    Windows::ApplicationModel::Email::DataProvider::EmailMailboxMoveFolderRequest value { nullptr };
    check_hresult(shim()->get_Request(put(value)));
    return value;
}

template <typename D> Windows::Foundation::Deferral impl_IEmailMailboxMoveFolderRequestEventArgs<D>::GetDeferral() const
{
    Windows::Foundation::Deferral value { nullptr };
    check_hresult(shim()->abi_GetDeferral(put(value)));
    return value;
}

template <typename D> Windows::ApplicationModel::Email::DataProvider::EmailMailboxUpdateMeetingResponseRequest impl_IEmailMailboxUpdateMeetingResponseRequestEventArgs<D>::Request() const
{
    Windows::ApplicationModel::Email::DataProvider::EmailMailboxUpdateMeetingResponseRequest value { nullptr };
    check_hresult(shim()->get_Request(put(value)));
    return value;
}

template <typename D> Windows::Foundation::Deferral impl_IEmailMailboxUpdateMeetingResponseRequestEventArgs<D>::GetDeferral() const
{
    Windows::Foundation::Deferral value { nullptr };
    check_hresult(shim()->abi_GetDeferral(put(value)));
    return value;
}

template <typename D> Windows::ApplicationModel::Email::DataProvider::EmailMailboxForwardMeetingRequest impl_IEmailMailboxForwardMeetingRequestEventArgs<D>::Request() const
{
    Windows::ApplicationModel::Email::DataProvider::EmailMailboxForwardMeetingRequest value { nullptr };
    check_hresult(shim()->get_Request(put(value)));
    return value;
}

template <typename D> Windows::Foundation::Deferral impl_IEmailMailboxForwardMeetingRequestEventArgs<D>::GetDeferral() const
{
    Windows::Foundation::Deferral value { nullptr };
    check_hresult(shim()->abi_GetDeferral(put(value)));
    return value;
}

template <typename D> Windows::ApplicationModel::Email::DataProvider::EmailMailboxProposeNewTimeForMeetingRequest impl_IEmailMailboxProposeNewTimeForMeetingRequestEventArgs<D>::Request() const
{
    Windows::ApplicationModel::Email::DataProvider::EmailMailboxProposeNewTimeForMeetingRequest value { nullptr };
    check_hresult(shim()->get_Request(put(value)));
    return value;
}

template <typename D> Windows::Foundation::Deferral impl_IEmailMailboxProposeNewTimeForMeetingRequestEventArgs<D>::GetDeferral() const
{
    Windows::Foundation::Deferral value { nullptr };
    check_hresult(shim()->abi_GetDeferral(put(value)));
    return value;
}

template <typename D> Windows::ApplicationModel::Email::DataProvider::EmailMailboxSetAutoReplySettingsRequest impl_IEmailMailboxSetAutoReplySettingsRequestEventArgs<D>::Request() const
{
    Windows::ApplicationModel::Email::DataProvider::EmailMailboxSetAutoReplySettingsRequest value { nullptr };
    check_hresult(shim()->get_Request(put(value)));
    return value;
}

template <typename D> Windows::Foundation::Deferral impl_IEmailMailboxSetAutoReplySettingsRequestEventArgs<D>::GetDeferral() const
{
    Windows::Foundation::Deferral value { nullptr };
    check_hresult(shim()->abi_GetDeferral(put(value)));
    return value;
}

template <typename D> Windows::ApplicationModel::Email::DataProvider::EmailMailboxGetAutoReplySettingsRequest impl_IEmailMailboxGetAutoReplySettingsRequestEventArgs<D>::Request() const
{
    Windows::ApplicationModel::Email::DataProvider::EmailMailboxGetAutoReplySettingsRequest value { nullptr };
    check_hresult(shim()->get_Request(put(value)));
    return value;
}

template <typename D> Windows::Foundation::Deferral impl_IEmailMailboxGetAutoReplySettingsRequestEventArgs<D>::GetDeferral() const
{
    Windows::Foundation::Deferral value { nullptr };
    check_hresult(shim()->abi_GetDeferral(put(value)));
    return value;
}

template <typename D> Windows::ApplicationModel::Email::DataProvider::EmailMailboxResolveRecipientsRequest impl_IEmailMailboxResolveRecipientsRequestEventArgs<D>::Request() const
{
    Windows::ApplicationModel::Email::DataProvider::EmailMailboxResolveRecipientsRequest value { nullptr };
    check_hresult(shim()->get_Request(put(value)));
    return value;
}

template <typename D> Windows::Foundation::Deferral impl_IEmailMailboxResolveRecipientsRequestEventArgs<D>::GetDeferral() const
{
    Windows::Foundation::Deferral value { nullptr };
    check_hresult(shim()->abi_GetDeferral(put(value)));
    return value;
}

template <typename D> Windows::ApplicationModel::Email::DataProvider::EmailMailboxValidateCertificatesRequest impl_IEmailMailboxValidateCertificatesRequestEventArgs<D>::Request() const
{
    Windows::ApplicationModel::Email::DataProvider::EmailMailboxValidateCertificatesRequest value { nullptr };
    check_hresult(shim()->get_Request(put(value)));
    return value;
}

template <typename D> Windows::Foundation::Deferral impl_IEmailMailboxValidateCertificatesRequestEventArgs<D>::GetDeferral() const
{
    Windows::Foundation::Deferral value { nullptr };
    check_hresult(shim()->abi_GetDeferral(put(value)));
    return value;
}

template <typename D> Windows::ApplicationModel::Email::DataProvider::EmailMailboxServerSearchReadBatchRequest impl_IEmailMailboxServerSearchReadBatchRequestEventArgs<D>::Request() const
{
    Windows::ApplicationModel::Email::DataProvider::EmailMailboxServerSearchReadBatchRequest value { nullptr };
    check_hresult(shim()->get_Request(put(value)));
    return value;
}

template <typename D> Windows::Foundation::Deferral impl_IEmailMailboxServerSearchReadBatchRequestEventArgs<D>::GetDeferral() const
{
    Windows::Foundation::Deferral value { nullptr };
    check_hresult(shim()->abi_GetDeferral(put(value)));
    return value;
}

}

}
