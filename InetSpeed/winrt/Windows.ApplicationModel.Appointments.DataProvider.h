// C++ for the Windows Runtime v1.29
// Copyright (c) 2016 Microsoft Corporation

#pragma once

#include "internal\Windows.Foundation.3.h"
#include "internal\Windows.ApplicationModel.Appointments.3.h"
#include "internal\Windows.Foundation.Collections.3.h"
#include "internal\Windows.ApplicationModel.Appointments.DataProvider.3.h"
#include "Windows.ApplicationModel.Appointments.h"

WINRT_EXPORT namespace winrt {

namespace impl {

template <typename D>
struct produce<D, Windows::ApplicationModel::Appointments::DataProvider::IAppointmentCalendarCancelMeetingRequest> : produce_base<D, Windows::ApplicationModel::Appointments::DataProvider::IAppointmentCalendarCancelMeetingRequest>
{
    HRESULT __stdcall get_AppointmentCalendarLocalId(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(shim().AppointmentCalendarLocalId());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_AppointmentLocalId(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(shim().AppointmentLocalId());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_AppointmentOriginalStartTime(abi_arg_out<Windows::Foundation::IReference<Windows::Foundation::DateTime>> value) noexcept override
    {
        try
        {
            *value = detach(shim().AppointmentOriginalStartTime());
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

    HRESULT __stdcall get_NotifyInvitees(bool * value) noexcept override
    {
        try
        {
            *value = detach(shim().NotifyInvitees());
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
struct produce<D, Windows::ApplicationModel::Appointments::DataProvider::IAppointmentCalendarCancelMeetingRequestEventArgs> : produce_base<D, Windows::ApplicationModel::Appointments::DataProvider::IAppointmentCalendarCancelMeetingRequestEventArgs>
{
    HRESULT __stdcall get_Request(abi_arg_out<Windows::ApplicationModel::Appointments::DataProvider::IAppointmentCalendarCancelMeetingRequest> value) noexcept override
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
struct produce<D, Windows::ApplicationModel::Appointments::DataProvider::IAppointmentCalendarCreateOrUpdateAppointmentRequest> : produce_base<D, Windows::ApplicationModel::Appointments::DataProvider::IAppointmentCalendarCreateOrUpdateAppointmentRequest>
{
    HRESULT __stdcall get_AppointmentCalendarLocalId(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(shim().AppointmentCalendarLocalId());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Appointment(abi_arg_out<Windows::ApplicationModel::Appointments::IAppointment> value) noexcept override
    {
        try
        {
            *value = detach(shim().Appointment());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_NotifyInvitees(bool * value) noexcept override
    {
        try
        {
            *value = detach(shim().NotifyInvitees());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ChangedProperties(abi_arg_out<Windows::Foundation::Collections::IVectorView<hstring>> value) noexcept override
    {
        try
        {
            *value = detach(shim().ChangedProperties());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_ReportCompletedAsync(abi_arg_in<Windows::ApplicationModel::Appointments::IAppointment> createdOrUpdatedAppointment, abi_arg_out<Windows::Foundation::IAsyncAction> result) noexcept override
    {
        try
        {
            *result = detach(shim().ReportCompletedAsync(*reinterpret_cast<const Windows::ApplicationModel::Appointments::Appointment *>(&createdOrUpdatedAppointment)));
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
struct produce<D, Windows::ApplicationModel::Appointments::DataProvider::IAppointmentCalendarCreateOrUpdateAppointmentRequestEventArgs> : produce_base<D, Windows::ApplicationModel::Appointments::DataProvider::IAppointmentCalendarCreateOrUpdateAppointmentRequestEventArgs>
{
    HRESULT __stdcall get_Request(abi_arg_out<Windows::ApplicationModel::Appointments::DataProvider::IAppointmentCalendarCreateOrUpdateAppointmentRequest> value) noexcept override
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
struct produce<D, Windows::ApplicationModel::Appointments::DataProvider::IAppointmentCalendarForwardMeetingRequest> : produce_base<D, Windows::ApplicationModel::Appointments::DataProvider::IAppointmentCalendarForwardMeetingRequest>
{
    HRESULT __stdcall get_AppointmentCalendarLocalId(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(shim().AppointmentCalendarLocalId());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_AppointmentLocalId(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(shim().AppointmentLocalId());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_AppointmentOriginalStartTime(abi_arg_out<Windows::Foundation::IReference<Windows::Foundation::DateTime>> value) noexcept override
    {
        try
        {
            *value = detach(shim().AppointmentOriginalStartTime());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Invitees(abi_arg_out<Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Appointments::AppointmentInvitee>> value) noexcept override
    {
        try
        {
            *value = detach(shim().Invitees());
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
struct produce<D, Windows::ApplicationModel::Appointments::DataProvider::IAppointmentCalendarForwardMeetingRequestEventArgs> : produce_base<D, Windows::ApplicationModel::Appointments::DataProvider::IAppointmentCalendarForwardMeetingRequestEventArgs>
{
    HRESULT __stdcall get_Request(abi_arg_out<Windows::ApplicationModel::Appointments::DataProvider::IAppointmentCalendarForwardMeetingRequest> value) noexcept override
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
struct produce<D, Windows::ApplicationModel::Appointments::DataProvider::IAppointmentCalendarProposeNewTimeForMeetingRequest> : produce_base<D, Windows::ApplicationModel::Appointments::DataProvider::IAppointmentCalendarProposeNewTimeForMeetingRequest>
{
    HRESULT __stdcall get_AppointmentCalendarLocalId(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(shim().AppointmentCalendarLocalId());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_AppointmentLocalId(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(shim().AppointmentLocalId());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_AppointmentOriginalStartTime(abi_arg_out<Windows::Foundation::IReference<Windows::Foundation::DateTime>> value) noexcept override
    {
        try
        {
            *value = detach(shim().AppointmentOriginalStartTime());
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
struct produce<D, Windows::ApplicationModel::Appointments::DataProvider::IAppointmentCalendarProposeNewTimeForMeetingRequestEventArgs> : produce_base<D, Windows::ApplicationModel::Appointments::DataProvider::IAppointmentCalendarProposeNewTimeForMeetingRequestEventArgs>
{
    HRESULT __stdcall get_Request(abi_arg_out<Windows::ApplicationModel::Appointments::DataProvider::IAppointmentCalendarProposeNewTimeForMeetingRequest> value) noexcept override
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
struct produce<D, Windows::ApplicationModel::Appointments::DataProvider::IAppointmentCalendarSyncManagerSyncRequest> : produce_base<D, Windows::ApplicationModel::Appointments::DataProvider::IAppointmentCalendarSyncManagerSyncRequest>
{
    HRESULT __stdcall get_AppointmentCalendarLocalId(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(shim().AppointmentCalendarLocalId());
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
struct produce<D, Windows::ApplicationModel::Appointments::DataProvider::IAppointmentCalendarSyncManagerSyncRequestEventArgs> : produce_base<D, Windows::ApplicationModel::Appointments::DataProvider::IAppointmentCalendarSyncManagerSyncRequestEventArgs>
{
    HRESULT __stdcall get_Request(abi_arg_out<Windows::ApplicationModel::Appointments::DataProvider::IAppointmentCalendarSyncManagerSyncRequest> value) noexcept override
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
struct produce<D, Windows::ApplicationModel::Appointments::DataProvider::IAppointmentCalendarUpdateMeetingResponseRequest> : produce_base<D, Windows::ApplicationModel::Appointments::DataProvider::IAppointmentCalendarUpdateMeetingResponseRequest>
{
    HRESULT __stdcall get_AppointmentCalendarLocalId(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(shim().AppointmentCalendarLocalId());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_AppointmentLocalId(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(shim().AppointmentLocalId());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_AppointmentOriginalStartTime(abi_arg_out<Windows::Foundation::IReference<Windows::Foundation::DateTime>> value) noexcept override
    {
        try
        {
            *value = detach(shim().AppointmentOriginalStartTime());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Response(Windows::ApplicationModel::Appointments::AppointmentParticipantResponse * response) noexcept override
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
struct produce<D, Windows::ApplicationModel::Appointments::DataProvider::IAppointmentCalendarUpdateMeetingResponseRequestEventArgs> : produce_base<D, Windows::ApplicationModel::Appointments::DataProvider::IAppointmentCalendarUpdateMeetingResponseRequestEventArgs>
{
    HRESULT __stdcall get_Request(abi_arg_out<Windows::ApplicationModel::Appointments::DataProvider::IAppointmentCalendarUpdateMeetingResponseRequest> value) noexcept override
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
struct produce<D, Windows::ApplicationModel::Appointments::DataProvider::IAppointmentDataProviderConnection> : produce_base<D, Windows::ApplicationModel::Appointments::DataProvider::IAppointmentDataProviderConnection>
{
    HRESULT __stdcall add_SyncRequested(abi_arg_in<Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::Appointments::DataProvider::AppointmentDataProviderConnection, Windows::ApplicationModel::Appointments::DataProvider::AppointmentCalendarSyncManagerSyncRequestEventArgs>> handler, event_token * token) noexcept override
    {
        try
        {
            *token = detach(shim().SyncRequested(*reinterpret_cast<const Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::Appointments::DataProvider::AppointmentDataProviderConnection, Windows::ApplicationModel::Appointments::DataProvider::AppointmentCalendarSyncManagerSyncRequestEventArgs> *>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_SyncRequested(event_token token) noexcept override
    {
        try
        {
            shim().SyncRequested(token);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_CreateOrUpdateAppointmentRequested(abi_arg_in<Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::Appointments::DataProvider::AppointmentDataProviderConnection, Windows::ApplicationModel::Appointments::DataProvider::AppointmentCalendarCreateOrUpdateAppointmentRequestEventArgs>> handler, event_token * token) noexcept override
    {
        try
        {
            *token = detach(shim().CreateOrUpdateAppointmentRequested(*reinterpret_cast<const Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::Appointments::DataProvider::AppointmentDataProviderConnection, Windows::ApplicationModel::Appointments::DataProvider::AppointmentCalendarCreateOrUpdateAppointmentRequestEventArgs> *>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_CreateOrUpdateAppointmentRequested(event_token token) noexcept override
    {
        try
        {
            shim().CreateOrUpdateAppointmentRequested(token);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_CancelMeetingRequested(abi_arg_in<Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::Appointments::DataProvider::AppointmentDataProviderConnection, Windows::ApplicationModel::Appointments::DataProvider::AppointmentCalendarCancelMeetingRequestEventArgs>> handler, event_token * token) noexcept override
    {
        try
        {
            *token = detach(shim().CancelMeetingRequested(*reinterpret_cast<const Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::Appointments::DataProvider::AppointmentDataProviderConnection, Windows::ApplicationModel::Appointments::DataProvider::AppointmentCalendarCancelMeetingRequestEventArgs> *>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_CancelMeetingRequested(event_token token) noexcept override
    {
        try
        {
            shim().CancelMeetingRequested(token);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_ForwardMeetingRequested(abi_arg_in<Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::Appointments::DataProvider::AppointmentDataProviderConnection, Windows::ApplicationModel::Appointments::DataProvider::AppointmentCalendarForwardMeetingRequestEventArgs>> handler, event_token * token) noexcept override
    {
        try
        {
            *token = detach(shim().ForwardMeetingRequested(*reinterpret_cast<const Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::Appointments::DataProvider::AppointmentDataProviderConnection, Windows::ApplicationModel::Appointments::DataProvider::AppointmentCalendarForwardMeetingRequestEventArgs> *>(&handler)));
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

    HRESULT __stdcall add_ProposeNewTimeForMeetingRequested(abi_arg_in<Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::Appointments::DataProvider::AppointmentDataProviderConnection, Windows::ApplicationModel::Appointments::DataProvider::AppointmentCalendarProposeNewTimeForMeetingRequestEventArgs>> handler, event_token * token) noexcept override
    {
        try
        {
            *token = detach(shim().ProposeNewTimeForMeetingRequested(*reinterpret_cast<const Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::Appointments::DataProvider::AppointmentDataProviderConnection, Windows::ApplicationModel::Appointments::DataProvider::AppointmentCalendarProposeNewTimeForMeetingRequestEventArgs> *>(&handler)));
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

    HRESULT __stdcall add_UpdateMeetingResponseRequested(abi_arg_in<Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::Appointments::DataProvider::AppointmentDataProviderConnection, Windows::ApplicationModel::Appointments::DataProvider::AppointmentCalendarUpdateMeetingResponseRequestEventArgs>> handler, event_token * token) noexcept override
    {
        try
        {
            *token = detach(shim().UpdateMeetingResponseRequested(*reinterpret_cast<const Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::Appointments::DataProvider::AppointmentDataProviderConnection, Windows::ApplicationModel::Appointments::DataProvider::AppointmentCalendarUpdateMeetingResponseRequestEventArgs> *>(&handler)));
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
struct produce<D, Windows::ApplicationModel::Appointments::DataProvider::IAppointmentDataProviderTriggerDetails> : produce_base<D, Windows::ApplicationModel::Appointments::DataProvider::IAppointmentDataProviderTriggerDetails>
{
    HRESULT __stdcall get_Connection(abi_arg_out<Windows::ApplicationModel::Appointments::DataProvider::IAppointmentDataProviderConnection> value) noexcept override
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

}

namespace Windows::ApplicationModel::Appointments::DataProvider {

template <typename D> Windows::ApplicationModel::Appointments::DataProvider::AppointmentDataProviderConnection impl_IAppointmentDataProviderTriggerDetails<D>::Connection() const
{
    Windows::ApplicationModel::Appointments::DataProvider::AppointmentDataProviderConnection value { nullptr };
    check_hresult(shim()->get_Connection(put(value)));
    return value;
}

template <typename D> event_token impl_IAppointmentDataProviderConnection<D>::SyncRequested(const Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::Appointments::DataProvider::AppointmentDataProviderConnection, Windows::ApplicationModel::Appointments::DataProvider::AppointmentCalendarSyncManagerSyncRequestEventArgs> & handler) const
{
    event_token token {};
    check_hresult(shim()->add_SyncRequested(get(handler), &token));
    return token;
}

template <typename D> event_revoker<IAppointmentDataProviderConnection> impl_IAppointmentDataProviderConnection<D>::SyncRequested(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::Appointments::DataProvider::AppointmentDataProviderConnection, Windows::ApplicationModel::Appointments::DataProvider::AppointmentCalendarSyncManagerSyncRequestEventArgs> & handler) const
{
    return impl::make_event_revoker<D, IAppointmentDataProviderConnection>(this, &ABI::Windows::ApplicationModel::Appointments::DataProvider::IAppointmentDataProviderConnection::remove_SyncRequested, SyncRequested(handler));
}

template <typename D> void impl_IAppointmentDataProviderConnection<D>::SyncRequested(event_token token) const
{
    check_hresult(shim()->remove_SyncRequested(token));
}

template <typename D> event_token impl_IAppointmentDataProviderConnection<D>::CreateOrUpdateAppointmentRequested(const Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::Appointments::DataProvider::AppointmentDataProviderConnection, Windows::ApplicationModel::Appointments::DataProvider::AppointmentCalendarCreateOrUpdateAppointmentRequestEventArgs> & handler) const
{
    event_token token {};
    check_hresult(shim()->add_CreateOrUpdateAppointmentRequested(get(handler), &token));
    return token;
}

template <typename D> event_revoker<IAppointmentDataProviderConnection> impl_IAppointmentDataProviderConnection<D>::CreateOrUpdateAppointmentRequested(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::Appointments::DataProvider::AppointmentDataProviderConnection, Windows::ApplicationModel::Appointments::DataProvider::AppointmentCalendarCreateOrUpdateAppointmentRequestEventArgs> & handler) const
{
    return impl::make_event_revoker<D, IAppointmentDataProviderConnection>(this, &ABI::Windows::ApplicationModel::Appointments::DataProvider::IAppointmentDataProviderConnection::remove_CreateOrUpdateAppointmentRequested, CreateOrUpdateAppointmentRequested(handler));
}

template <typename D> void impl_IAppointmentDataProviderConnection<D>::CreateOrUpdateAppointmentRequested(event_token token) const
{
    check_hresult(shim()->remove_CreateOrUpdateAppointmentRequested(token));
}

template <typename D> event_token impl_IAppointmentDataProviderConnection<D>::CancelMeetingRequested(const Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::Appointments::DataProvider::AppointmentDataProviderConnection, Windows::ApplicationModel::Appointments::DataProvider::AppointmentCalendarCancelMeetingRequestEventArgs> & handler) const
{
    event_token token {};
    check_hresult(shim()->add_CancelMeetingRequested(get(handler), &token));
    return token;
}

template <typename D> event_revoker<IAppointmentDataProviderConnection> impl_IAppointmentDataProviderConnection<D>::CancelMeetingRequested(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::Appointments::DataProvider::AppointmentDataProviderConnection, Windows::ApplicationModel::Appointments::DataProvider::AppointmentCalendarCancelMeetingRequestEventArgs> & handler) const
{
    return impl::make_event_revoker<D, IAppointmentDataProviderConnection>(this, &ABI::Windows::ApplicationModel::Appointments::DataProvider::IAppointmentDataProviderConnection::remove_CancelMeetingRequested, CancelMeetingRequested(handler));
}

template <typename D> void impl_IAppointmentDataProviderConnection<D>::CancelMeetingRequested(event_token token) const
{
    check_hresult(shim()->remove_CancelMeetingRequested(token));
}

template <typename D> event_token impl_IAppointmentDataProviderConnection<D>::ForwardMeetingRequested(const Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::Appointments::DataProvider::AppointmentDataProviderConnection, Windows::ApplicationModel::Appointments::DataProvider::AppointmentCalendarForwardMeetingRequestEventArgs> & handler) const
{
    event_token token {};
    check_hresult(shim()->add_ForwardMeetingRequested(get(handler), &token));
    return token;
}

template <typename D> event_revoker<IAppointmentDataProviderConnection> impl_IAppointmentDataProviderConnection<D>::ForwardMeetingRequested(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::Appointments::DataProvider::AppointmentDataProviderConnection, Windows::ApplicationModel::Appointments::DataProvider::AppointmentCalendarForwardMeetingRequestEventArgs> & handler) const
{
    return impl::make_event_revoker<D, IAppointmentDataProviderConnection>(this, &ABI::Windows::ApplicationModel::Appointments::DataProvider::IAppointmentDataProviderConnection::remove_ForwardMeetingRequested, ForwardMeetingRequested(handler));
}

template <typename D> void impl_IAppointmentDataProviderConnection<D>::ForwardMeetingRequested(event_token token) const
{
    check_hresult(shim()->remove_ForwardMeetingRequested(token));
}

template <typename D> event_token impl_IAppointmentDataProviderConnection<D>::ProposeNewTimeForMeetingRequested(const Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::Appointments::DataProvider::AppointmentDataProviderConnection, Windows::ApplicationModel::Appointments::DataProvider::AppointmentCalendarProposeNewTimeForMeetingRequestEventArgs> & handler) const
{
    event_token token {};
    check_hresult(shim()->add_ProposeNewTimeForMeetingRequested(get(handler), &token));
    return token;
}

template <typename D> event_revoker<IAppointmentDataProviderConnection> impl_IAppointmentDataProviderConnection<D>::ProposeNewTimeForMeetingRequested(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::Appointments::DataProvider::AppointmentDataProviderConnection, Windows::ApplicationModel::Appointments::DataProvider::AppointmentCalendarProposeNewTimeForMeetingRequestEventArgs> & handler) const
{
    return impl::make_event_revoker<D, IAppointmentDataProviderConnection>(this, &ABI::Windows::ApplicationModel::Appointments::DataProvider::IAppointmentDataProviderConnection::remove_ProposeNewTimeForMeetingRequested, ProposeNewTimeForMeetingRequested(handler));
}

template <typename D> void impl_IAppointmentDataProviderConnection<D>::ProposeNewTimeForMeetingRequested(event_token token) const
{
    check_hresult(shim()->remove_ProposeNewTimeForMeetingRequested(token));
}

template <typename D> event_token impl_IAppointmentDataProviderConnection<D>::UpdateMeetingResponseRequested(const Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::Appointments::DataProvider::AppointmentDataProviderConnection, Windows::ApplicationModel::Appointments::DataProvider::AppointmentCalendarUpdateMeetingResponseRequestEventArgs> & handler) const
{
    event_token token {};
    check_hresult(shim()->add_UpdateMeetingResponseRequested(get(handler), &token));
    return token;
}

template <typename D> event_revoker<IAppointmentDataProviderConnection> impl_IAppointmentDataProviderConnection<D>::UpdateMeetingResponseRequested(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::Appointments::DataProvider::AppointmentDataProviderConnection, Windows::ApplicationModel::Appointments::DataProvider::AppointmentCalendarUpdateMeetingResponseRequestEventArgs> & handler) const
{
    return impl::make_event_revoker<D, IAppointmentDataProviderConnection>(this, &ABI::Windows::ApplicationModel::Appointments::DataProvider::IAppointmentDataProviderConnection::remove_UpdateMeetingResponseRequested, UpdateMeetingResponseRequested(handler));
}

template <typename D> void impl_IAppointmentDataProviderConnection<D>::UpdateMeetingResponseRequested(event_token token) const
{
    check_hresult(shim()->remove_UpdateMeetingResponseRequested(token));
}

template <typename D> void impl_IAppointmentDataProviderConnection<D>::Start() const
{
    check_hresult(shim()->abi_Start());
}

template <typename D> hstring impl_IAppointmentCalendarSyncManagerSyncRequest<D>::AppointmentCalendarLocalId() const
{
    hstring value;
    check_hresult(shim()->get_AppointmentCalendarLocalId(put(value)));
    return value;
}

template <typename D> Windows::Foundation::IAsyncAction impl_IAppointmentCalendarSyncManagerSyncRequest<D>::ReportCompletedAsync() const
{
    Windows::Foundation::IAsyncAction result;
    check_hresult(shim()->abi_ReportCompletedAsync(put(result)));
    return result;
}

template <typename D> Windows::Foundation::IAsyncAction impl_IAppointmentCalendarSyncManagerSyncRequest<D>::ReportFailedAsync() const
{
    Windows::Foundation::IAsyncAction result;
    check_hresult(shim()->abi_ReportFailedAsync(put(result)));
    return result;
}

template <typename D> hstring impl_IAppointmentCalendarCreateOrUpdateAppointmentRequest<D>::AppointmentCalendarLocalId() const
{
    hstring value;
    check_hresult(shim()->get_AppointmentCalendarLocalId(put(value)));
    return value;
}

template <typename D> Windows::ApplicationModel::Appointments::Appointment impl_IAppointmentCalendarCreateOrUpdateAppointmentRequest<D>::Appointment() const
{
    Windows::ApplicationModel::Appointments::Appointment value { nullptr };
    check_hresult(shim()->get_Appointment(put(value)));
    return value;
}

template <typename D> bool impl_IAppointmentCalendarCreateOrUpdateAppointmentRequest<D>::NotifyInvitees() const
{
    bool value {};
    check_hresult(shim()->get_NotifyInvitees(&value));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVectorView<hstring> impl_IAppointmentCalendarCreateOrUpdateAppointmentRequest<D>::ChangedProperties() const
{
    Windows::Foundation::Collections::IVectorView<hstring> value;
    check_hresult(shim()->get_ChangedProperties(put(value)));
    return value;
}

template <typename D> Windows::Foundation::IAsyncAction impl_IAppointmentCalendarCreateOrUpdateAppointmentRequest<D>::ReportCompletedAsync(const Windows::ApplicationModel::Appointments::Appointment & createdOrUpdatedAppointment) const
{
    Windows::Foundation::IAsyncAction result;
    check_hresult(shim()->abi_ReportCompletedAsync(get(createdOrUpdatedAppointment), put(result)));
    return result;
}

template <typename D> Windows::Foundation::IAsyncAction impl_IAppointmentCalendarCreateOrUpdateAppointmentRequest<D>::ReportFailedAsync() const
{
    Windows::Foundation::IAsyncAction result;
    check_hresult(shim()->abi_ReportFailedAsync(put(result)));
    return result;
}

template <typename D> hstring impl_IAppointmentCalendarCancelMeetingRequest<D>::AppointmentCalendarLocalId() const
{
    hstring value;
    check_hresult(shim()->get_AppointmentCalendarLocalId(put(value)));
    return value;
}

template <typename D> hstring impl_IAppointmentCalendarCancelMeetingRequest<D>::AppointmentLocalId() const
{
    hstring value;
    check_hresult(shim()->get_AppointmentLocalId(put(value)));
    return value;
}

template <typename D> Windows::Foundation::IReference<Windows::Foundation::DateTime> impl_IAppointmentCalendarCancelMeetingRequest<D>::AppointmentOriginalStartTime() const
{
    Windows::Foundation::IReference<Windows::Foundation::DateTime> value;
    check_hresult(shim()->get_AppointmentOriginalStartTime(put(value)));
    return value;
}

template <typename D> hstring impl_IAppointmentCalendarCancelMeetingRequest<D>::Subject() const
{
    hstring value;
    check_hresult(shim()->get_Subject(put(value)));
    return value;
}

template <typename D> hstring impl_IAppointmentCalendarCancelMeetingRequest<D>::Comment() const
{
    hstring value;
    check_hresult(shim()->get_Comment(put(value)));
    return value;
}

template <typename D> bool impl_IAppointmentCalendarCancelMeetingRequest<D>::NotifyInvitees() const
{
    bool value {};
    check_hresult(shim()->get_NotifyInvitees(&value));
    return value;
}

template <typename D> Windows::Foundation::IAsyncAction impl_IAppointmentCalendarCancelMeetingRequest<D>::ReportCompletedAsync() const
{
    Windows::Foundation::IAsyncAction result;
    check_hresult(shim()->abi_ReportCompletedAsync(put(result)));
    return result;
}

template <typename D> Windows::Foundation::IAsyncAction impl_IAppointmentCalendarCancelMeetingRequest<D>::ReportFailedAsync() const
{
    Windows::Foundation::IAsyncAction result;
    check_hresult(shim()->abi_ReportFailedAsync(put(result)));
    return result;
}

template <typename D> hstring impl_IAppointmentCalendarForwardMeetingRequest<D>::AppointmentCalendarLocalId() const
{
    hstring value;
    check_hresult(shim()->get_AppointmentCalendarLocalId(put(value)));
    return value;
}

template <typename D> hstring impl_IAppointmentCalendarForwardMeetingRequest<D>::AppointmentLocalId() const
{
    hstring value;
    check_hresult(shim()->get_AppointmentLocalId(put(value)));
    return value;
}

template <typename D> Windows::Foundation::IReference<Windows::Foundation::DateTime> impl_IAppointmentCalendarForwardMeetingRequest<D>::AppointmentOriginalStartTime() const
{
    Windows::Foundation::IReference<Windows::Foundation::DateTime> value;
    check_hresult(shim()->get_AppointmentOriginalStartTime(put(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Appointments::AppointmentInvitee> impl_IAppointmentCalendarForwardMeetingRequest<D>::Invitees() const
{
    Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Appointments::AppointmentInvitee> value;
    check_hresult(shim()->get_Invitees(put(value)));
    return value;
}

template <typename D> hstring impl_IAppointmentCalendarForwardMeetingRequest<D>::Subject() const
{
    hstring value;
    check_hresult(shim()->get_Subject(put(value)));
    return value;
}

template <typename D> hstring impl_IAppointmentCalendarForwardMeetingRequest<D>::ForwardHeader() const
{
    hstring value;
    check_hresult(shim()->get_ForwardHeader(put(value)));
    return value;
}

template <typename D> hstring impl_IAppointmentCalendarForwardMeetingRequest<D>::Comment() const
{
    hstring value;
    check_hresult(shim()->get_Comment(put(value)));
    return value;
}

template <typename D> Windows::Foundation::IAsyncAction impl_IAppointmentCalendarForwardMeetingRequest<D>::ReportCompletedAsync() const
{
    Windows::Foundation::IAsyncAction result;
    check_hresult(shim()->abi_ReportCompletedAsync(put(result)));
    return result;
}

template <typename D> Windows::Foundation::IAsyncAction impl_IAppointmentCalendarForwardMeetingRequest<D>::ReportFailedAsync() const
{
    Windows::Foundation::IAsyncAction result;
    check_hresult(shim()->abi_ReportFailedAsync(put(result)));
    return result;
}

template <typename D> hstring impl_IAppointmentCalendarProposeNewTimeForMeetingRequest<D>::AppointmentCalendarLocalId() const
{
    hstring value;
    check_hresult(shim()->get_AppointmentCalendarLocalId(put(value)));
    return value;
}

template <typename D> hstring impl_IAppointmentCalendarProposeNewTimeForMeetingRequest<D>::AppointmentLocalId() const
{
    hstring value;
    check_hresult(shim()->get_AppointmentLocalId(put(value)));
    return value;
}

template <typename D> Windows::Foundation::IReference<Windows::Foundation::DateTime> impl_IAppointmentCalendarProposeNewTimeForMeetingRequest<D>::AppointmentOriginalStartTime() const
{
    Windows::Foundation::IReference<Windows::Foundation::DateTime> value;
    check_hresult(shim()->get_AppointmentOriginalStartTime(put(value)));
    return value;
}

template <typename D> Windows::Foundation::DateTime impl_IAppointmentCalendarProposeNewTimeForMeetingRequest<D>::NewStartTime() const
{
    Windows::Foundation::DateTime value {};
    check_hresult(shim()->get_NewStartTime(put(value)));
    return value;
}

template <typename D> Windows::Foundation::TimeSpan impl_IAppointmentCalendarProposeNewTimeForMeetingRequest<D>::NewDuration() const
{
    Windows::Foundation::TimeSpan value {};
    check_hresult(shim()->get_NewDuration(put(value)));
    return value;
}

template <typename D> hstring impl_IAppointmentCalendarProposeNewTimeForMeetingRequest<D>::Subject() const
{
    hstring value;
    check_hresult(shim()->get_Subject(put(value)));
    return value;
}

template <typename D> hstring impl_IAppointmentCalendarProposeNewTimeForMeetingRequest<D>::Comment() const
{
    hstring value;
    check_hresult(shim()->get_Comment(put(value)));
    return value;
}

template <typename D> Windows::Foundation::IAsyncAction impl_IAppointmentCalendarProposeNewTimeForMeetingRequest<D>::ReportCompletedAsync() const
{
    Windows::Foundation::IAsyncAction result;
    check_hresult(shim()->abi_ReportCompletedAsync(put(result)));
    return result;
}

template <typename D> Windows::Foundation::IAsyncAction impl_IAppointmentCalendarProposeNewTimeForMeetingRequest<D>::ReportFailedAsync() const
{
    Windows::Foundation::IAsyncAction result;
    check_hresult(shim()->abi_ReportFailedAsync(put(result)));
    return result;
}

template <typename D> hstring impl_IAppointmentCalendarUpdateMeetingResponseRequest<D>::AppointmentCalendarLocalId() const
{
    hstring value;
    check_hresult(shim()->get_AppointmentCalendarLocalId(put(value)));
    return value;
}

template <typename D> hstring impl_IAppointmentCalendarUpdateMeetingResponseRequest<D>::AppointmentLocalId() const
{
    hstring value;
    check_hresult(shim()->get_AppointmentLocalId(put(value)));
    return value;
}

template <typename D> Windows::Foundation::IReference<Windows::Foundation::DateTime> impl_IAppointmentCalendarUpdateMeetingResponseRequest<D>::AppointmentOriginalStartTime() const
{
    Windows::Foundation::IReference<Windows::Foundation::DateTime> value;
    check_hresult(shim()->get_AppointmentOriginalStartTime(put(value)));
    return value;
}

template <typename D> Windows::ApplicationModel::Appointments::AppointmentParticipantResponse impl_IAppointmentCalendarUpdateMeetingResponseRequest<D>::Response() const
{
    Windows::ApplicationModel::Appointments::AppointmentParticipantResponse response {};
    check_hresult(shim()->get_Response(&response));
    return response;
}

template <typename D> hstring impl_IAppointmentCalendarUpdateMeetingResponseRequest<D>::Subject() const
{
    hstring value;
    check_hresult(shim()->get_Subject(put(value)));
    return value;
}

template <typename D> hstring impl_IAppointmentCalendarUpdateMeetingResponseRequest<D>::Comment() const
{
    hstring value;
    check_hresult(shim()->get_Comment(put(value)));
    return value;
}

template <typename D> bool impl_IAppointmentCalendarUpdateMeetingResponseRequest<D>::SendUpdate() const
{
    bool value {};
    check_hresult(shim()->get_SendUpdate(&value));
    return value;
}

template <typename D> Windows::Foundation::IAsyncAction impl_IAppointmentCalendarUpdateMeetingResponseRequest<D>::ReportCompletedAsync() const
{
    Windows::Foundation::IAsyncAction result;
    check_hresult(shim()->abi_ReportCompletedAsync(put(result)));
    return result;
}

template <typename D> Windows::Foundation::IAsyncAction impl_IAppointmentCalendarUpdateMeetingResponseRequest<D>::ReportFailedAsync() const
{
    Windows::Foundation::IAsyncAction result;
    check_hresult(shim()->abi_ReportFailedAsync(put(result)));
    return result;
}

template <typename D> Windows::ApplicationModel::Appointments::DataProvider::AppointmentCalendarSyncManagerSyncRequest impl_IAppointmentCalendarSyncManagerSyncRequestEventArgs<D>::Request() const
{
    Windows::ApplicationModel::Appointments::DataProvider::AppointmentCalendarSyncManagerSyncRequest value { nullptr };
    check_hresult(shim()->get_Request(put(value)));
    return value;
}

template <typename D> Windows::Foundation::Deferral impl_IAppointmentCalendarSyncManagerSyncRequestEventArgs<D>::GetDeferral() const
{
    Windows::Foundation::Deferral value { nullptr };
    check_hresult(shim()->abi_GetDeferral(put(value)));
    return value;
}

template <typename D> Windows::ApplicationModel::Appointments::DataProvider::AppointmentCalendarCreateOrUpdateAppointmentRequest impl_IAppointmentCalendarCreateOrUpdateAppointmentRequestEventArgs<D>::Request() const
{
    Windows::ApplicationModel::Appointments::DataProvider::AppointmentCalendarCreateOrUpdateAppointmentRequest value { nullptr };
    check_hresult(shim()->get_Request(put(value)));
    return value;
}

template <typename D> Windows::Foundation::Deferral impl_IAppointmentCalendarCreateOrUpdateAppointmentRequestEventArgs<D>::GetDeferral() const
{
    Windows::Foundation::Deferral value { nullptr };
    check_hresult(shim()->abi_GetDeferral(put(value)));
    return value;
}

template <typename D> Windows::ApplicationModel::Appointments::DataProvider::AppointmentCalendarCancelMeetingRequest impl_IAppointmentCalendarCancelMeetingRequestEventArgs<D>::Request() const
{
    Windows::ApplicationModel::Appointments::DataProvider::AppointmentCalendarCancelMeetingRequest value { nullptr };
    check_hresult(shim()->get_Request(put(value)));
    return value;
}

template <typename D> Windows::Foundation::Deferral impl_IAppointmentCalendarCancelMeetingRequestEventArgs<D>::GetDeferral() const
{
    Windows::Foundation::Deferral value { nullptr };
    check_hresult(shim()->abi_GetDeferral(put(value)));
    return value;
}

template <typename D> Windows::ApplicationModel::Appointments::DataProvider::AppointmentCalendarForwardMeetingRequest impl_IAppointmentCalendarForwardMeetingRequestEventArgs<D>::Request() const
{
    Windows::ApplicationModel::Appointments::DataProvider::AppointmentCalendarForwardMeetingRequest value { nullptr };
    check_hresult(shim()->get_Request(put(value)));
    return value;
}

template <typename D> Windows::Foundation::Deferral impl_IAppointmentCalendarForwardMeetingRequestEventArgs<D>::GetDeferral() const
{
    Windows::Foundation::Deferral value { nullptr };
    check_hresult(shim()->abi_GetDeferral(put(value)));
    return value;
}

template <typename D> Windows::ApplicationModel::Appointments::DataProvider::AppointmentCalendarProposeNewTimeForMeetingRequest impl_IAppointmentCalendarProposeNewTimeForMeetingRequestEventArgs<D>::Request() const
{
    Windows::ApplicationModel::Appointments::DataProvider::AppointmentCalendarProposeNewTimeForMeetingRequest value { nullptr };
    check_hresult(shim()->get_Request(put(value)));
    return value;
}

template <typename D> Windows::Foundation::Deferral impl_IAppointmentCalendarProposeNewTimeForMeetingRequestEventArgs<D>::GetDeferral() const
{
    Windows::Foundation::Deferral value { nullptr };
    check_hresult(shim()->abi_GetDeferral(put(value)));
    return value;
}

template <typename D> Windows::ApplicationModel::Appointments::DataProvider::AppointmentCalendarUpdateMeetingResponseRequest impl_IAppointmentCalendarUpdateMeetingResponseRequestEventArgs<D>::Request() const
{
    Windows::ApplicationModel::Appointments::DataProvider::AppointmentCalendarUpdateMeetingResponseRequest value { nullptr };
    check_hresult(shim()->get_Request(put(value)));
    return value;
}

template <typename D> Windows::Foundation::Deferral impl_IAppointmentCalendarUpdateMeetingResponseRequestEventArgs<D>::GetDeferral() const
{
    Windows::Foundation::Deferral value { nullptr };
    check_hresult(shim()->abi_GetDeferral(put(value)));
    return value;
}

}

}
