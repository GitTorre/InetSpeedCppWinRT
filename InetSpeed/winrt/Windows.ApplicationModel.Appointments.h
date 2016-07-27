// C++ for the Windows Runtime v1.29
// Copyright (c) 2016 Microsoft Corporation

#pragma once

#include "internal\Windows.Foundation.3.h"
#include "internal\Windows.UI.Popups.3.h"
#include "internal\Windows.System.3.h"
#include "internal\Windows.Foundation.Collections.3.h"
#include "internal\Windows.UI.3.h"
#include "internal\Windows.ApplicationModel.Appointments.3.h"
#include "Windows.ApplicationModel.h"

WINRT_EXPORT namespace winrt {

namespace impl {

template <typename D>
struct produce<D, Windows::ApplicationModel::Appointments::IAppointment> : produce_base<D, Windows::ApplicationModel::Appointments::IAppointment>
{
    HRESULT __stdcall get_StartTime(abi_arg_out<Windows::Foundation::DateTime> value) noexcept override
    {
        try
        {
            *value = detach(shim().StartTime());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_StartTime(abi_arg_in<Windows::Foundation::DateTime> value) noexcept override
    {
        try
        {
            shim().StartTime(*reinterpret_cast<const Windows::Foundation::DateTime *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Duration(abi_arg_out<Windows::Foundation::TimeSpan> value) noexcept override
    {
        try
        {
            *value = detach(shim().Duration());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Duration(abi_arg_in<Windows::Foundation::TimeSpan> value) noexcept override
    {
        try
        {
            shim().Duration(*reinterpret_cast<const Windows::Foundation::TimeSpan *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Location(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(shim().Location());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Location(abi_arg_in<hstring> value) noexcept override
    {
        try
        {
            shim().Location(*reinterpret_cast<const hstring *>(&value));
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

    HRESULT __stdcall put_Subject(abi_arg_in<hstring> value) noexcept override
    {
        try
        {
            shim().Subject(*reinterpret_cast<const hstring *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Details(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(shim().Details());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Details(abi_arg_in<hstring> value) noexcept override
    {
        try
        {
            shim().Details(*reinterpret_cast<const hstring *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Reminder(abi_arg_out<Windows::Foundation::IReference<Windows::Foundation::TimeSpan>> value) noexcept override
    {
        try
        {
            *value = detach(shim().Reminder());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Reminder(abi_arg_in<Windows::Foundation::IReference<Windows::Foundation::TimeSpan>> value) noexcept override
    {
        try
        {
            shim().Reminder(*reinterpret_cast<const Windows::Foundation::IReference<Windows::Foundation::TimeSpan> *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Organizer(abi_arg_out<Windows::ApplicationModel::Appointments::IAppointmentParticipant> value) noexcept override
    {
        try
        {
            *value = detach(shim().Organizer());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Organizer(abi_arg_in<Windows::ApplicationModel::Appointments::IAppointmentParticipant> value) noexcept override
    {
        try
        {
            shim().Organizer(*reinterpret_cast<const Windows::ApplicationModel::Appointments::AppointmentOrganizer *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Invitees(abi_arg_out<Windows::Foundation::Collections::IVector<Windows::ApplicationModel::Appointments::AppointmentInvitee>> value) noexcept override
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

    HRESULT __stdcall get_Recurrence(abi_arg_out<Windows::ApplicationModel::Appointments::IAppointmentRecurrence> value) noexcept override
    {
        try
        {
            *value = detach(shim().Recurrence());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Recurrence(abi_arg_in<Windows::ApplicationModel::Appointments::IAppointmentRecurrence> value) noexcept override
    {
        try
        {
            shim().Recurrence(*reinterpret_cast<const Windows::ApplicationModel::Appointments::AppointmentRecurrence *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_BusyStatus(Windows::ApplicationModel::Appointments::AppointmentBusyStatus * value) noexcept override
    {
        try
        {
            *value = detach(shim().BusyStatus());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_BusyStatus(Windows::ApplicationModel::Appointments::AppointmentBusyStatus value) noexcept override
    {
        try
        {
            shim().BusyStatus(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_AllDay(bool * value) noexcept override
    {
        try
        {
            *value = detach(shim().AllDay());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_AllDay(bool value) noexcept override
    {
        try
        {
            shim().AllDay(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Sensitivity(Windows::ApplicationModel::Appointments::AppointmentSensitivity * value) noexcept override
    {
        try
        {
            *value = detach(shim().Sensitivity());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Sensitivity(Windows::ApplicationModel::Appointments::AppointmentSensitivity value) noexcept override
    {
        try
        {
            shim().Sensitivity(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Uri(abi_arg_out<Windows::Foundation::IUriRuntimeClass> value) noexcept override
    {
        try
        {
            *value = detach(shim().Uri());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Uri(abi_arg_in<Windows::Foundation::IUriRuntimeClass> value) noexcept override
    {
        try
        {
            shim().Uri(*reinterpret_cast<const Windows::Foundation::Uri *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::Appointments::IAppointment2> : produce_base<D, Windows::ApplicationModel::Appointments::IAppointment2>
{
    HRESULT __stdcall get_LocalId(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(shim().LocalId());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_CalendarId(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(shim().CalendarId());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_RoamingId(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(shim().RoamingId());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_RoamingId(abi_arg_in<hstring> value) noexcept override
    {
        try
        {
            shim().RoamingId(*reinterpret_cast<const hstring *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_OriginalStartTime(abi_arg_out<Windows::Foundation::IReference<Windows::Foundation::DateTime>> value) noexcept override
    {
        try
        {
            *value = detach(shim().OriginalStartTime());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_IsResponseRequested(bool * value) noexcept override
    {
        try
        {
            *value = detach(shim().IsResponseRequested());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_IsResponseRequested(bool value) noexcept override
    {
        try
        {
            shim().IsResponseRequested(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_AllowNewTimeProposal(bool * value) noexcept override
    {
        try
        {
            *value = detach(shim().AllowNewTimeProposal());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_AllowNewTimeProposal(bool value) noexcept override
    {
        try
        {
            shim().AllowNewTimeProposal(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_OnlineMeetingLink(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(shim().OnlineMeetingLink());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_OnlineMeetingLink(abi_arg_in<hstring> value) noexcept override
    {
        try
        {
            shim().OnlineMeetingLink(*reinterpret_cast<const hstring *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ReplyTime(abi_arg_out<Windows::Foundation::IReference<Windows::Foundation::DateTime>> value) noexcept override
    {
        try
        {
            *value = detach(shim().ReplyTime());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_ReplyTime(abi_arg_in<Windows::Foundation::IReference<Windows::Foundation::DateTime>> value) noexcept override
    {
        try
        {
            shim().ReplyTime(*reinterpret_cast<const Windows::Foundation::IReference<Windows::Foundation::DateTime> *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_UserResponse(Windows::ApplicationModel::Appointments::AppointmentParticipantResponse * value) noexcept override
    {
        try
        {
            *value = detach(shim().UserResponse());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_UserResponse(Windows::ApplicationModel::Appointments::AppointmentParticipantResponse value) noexcept override
    {
        try
        {
            shim().UserResponse(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_HasInvitees(bool * value) noexcept override
    {
        try
        {
            *value = detach(shim().HasInvitees());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_IsCanceledMeeting(bool * value) noexcept override
    {
        try
        {
            *value = detach(shim().IsCanceledMeeting());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_IsCanceledMeeting(bool value) noexcept override
    {
        try
        {
            shim().IsCanceledMeeting(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_IsOrganizedByUser(bool * value) noexcept override
    {
        try
        {
            *value = detach(shim().IsOrganizedByUser());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_IsOrganizedByUser(bool value) noexcept override
    {
        try
        {
            shim().IsOrganizedByUser(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::Appointments::IAppointment3> : produce_base<D, Windows::ApplicationModel::Appointments::IAppointment3>
{
    HRESULT __stdcall get_ChangeNumber(uint64_t * value) noexcept override
    {
        try
        {
            *value = detach(shim().ChangeNumber());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_RemoteChangeNumber(uint64_t * value) noexcept override
    {
        try
        {
            *value = detach(shim().RemoteChangeNumber());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_RemoteChangeNumber(uint64_t value) noexcept override
    {
        try
        {
            shim().RemoteChangeNumber(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_DetailsKind(Windows::ApplicationModel::Appointments::AppointmentDetailsKind * value) noexcept override
    {
        try
        {
            *value = detach(shim().DetailsKind());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_DetailsKind(Windows::ApplicationModel::Appointments::AppointmentDetailsKind value) noexcept override
    {
        try
        {
            shim().DetailsKind(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::Appointments::IAppointmentCalendar> : produce_base<D, Windows::ApplicationModel::Appointments::IAppointmentCalendar>
{
    HRESULT __stdcall get_DisplayColor(abi_arg_out<Windows::UI::Color> value) noexcept override
    {
        try
        {
            *value = detach(shim().DisplayColor());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_DisplayName(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(shim().DisplayName());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_DisplayName(abi_arg_in<hstring> value) noexcept override
    {
        try
        {
            shim().DisplayName(*reinterpret_cast<const hstring *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_LocalId(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(shim().LocalId());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_IsHidden(bool * value) noexcept override
    {
        try
        {
            *value = detach(shim().IsHidden());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_OtherAppReadAccess(Windows::ApplicationModel::Appointments::AppointmentCalendarOtherAppReadAccess * value) noexcept override
    {
        try
        {
            *value = detach(shim().OtherAppReadAccess());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_OtherAppReadAccess(Windows::ApplicationModel::Appointments::AppointmentCalendarOtherAppReadAccess value) noexcept override
    {
        try
        {
            shim().OtherAppReadAccess(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_OtherAppWriteAccess(Windows::ApplicationModel::Appointments::AppointmentCalendarOtherAppWriteAccess * value) noexcept override
    {
        try
        {
            *value = detach(shim().OtherAppWriteAccess());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_OtherAppWriteAccess(Windows::ApplicationModel::Appointments::AppointmentCalendarOtherAppWriteAccess value) noexcept override
    {
        try
        {
            shim().OtherAppWriteAccess(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_SourceDisplayName(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(shim().SourceDisplayName());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_SummaryCardView(Windows::ApplicationModel::Appointments::AppointmentSummaryCardView * value) noexcept override
    {
        try
        {
            *value = detach(shim().SummaryCardView());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_SummaryCardView(Windows::ApplicationModel::Appointments::AppointmentSummaryCardView value) noexcept override
    {
        try
        {
            shim().SummaryCardView(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_FindAppointmentsAsync(abi_arg_in<Windows::Foundation::DateTime> rangeStart, abi_arg_in<Windows::Foundation::TimeSpan> rangeLength, abi_arg_out<Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Appointments::Appointment>>> result) noexcept override
    {
        try
        {
            *result = detach(shim().FindAppointmentsAsync(*reinterpret_cast<const Windows::Foundation::DateTime *>(&rangeStart), *reinterpret_cast<const Windows::Foundation::TimeSpan *>(&rangeLength)));
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_FindAppointmentsAsyncWithOptions(abi_arg_in<Windows::Foundation::DateTime> rangeStart, abi_arg_in<Windows::Foundation::TimeSpan> rangeLength, abi_arg_in<Windows::ApplicationModel::Appointments::IFindAppointmentsOptions> options, abi_arg_out<Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Appointments::Appointment>>> result) noexcept override
    {
        try
        {
            *result = detach(shim().FindAppointmentsAsync(*reinterpret_cast<const Windows::Foundation::DateTime *>(&rangeStart), *reinterpret_cast<const Windows::Foundation::TimeSpan *>(&rangeLength), *reinterpret_cast<const Windows::ApplicationModel::Appointments::FindAppointmentsOptions *>(&options)));
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_FindExceptionsFromMasterAsync(abi_arg_in<hstring> masterLocalId, abi_arg_out<Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Appointments::AppointmentException>>> value) noexcept override
    {
        try
        {
            *value = detach(shim().FindExceptionsFromMasterAsync(*reinterpret_cast<const hstring *>(&masterLocalId)));
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_FindAllInstancesAsync(abi_arg_in<hstring> masterLocalId, abi_arg_in<Windows::Foundation::DateTime> rangeStart, abi_arg_in<Windows::Foundation::TimeSpan> rangeLength, abi_arg_out<Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Appointments::Appointment>>> value) noexcept override
    {
        try
        {
            *value = detach(shim().FindAllInstancesAsync(*reinterpret_cast<const hstring *>(&masterLocalId), *reinterpret_cast<const Windows::Foundation::DateTime *>(&rangeStart), *reinterpret_cast<const Windows::Foundation::TimeSpan *>(&rangeLength)));
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_FindAllInstancesAsyncWithOptions(abi_arg_in<hstring> masterLocalId, abi_arg_in<Windows::Foundation::DateTime> rangeStart, abi_arg_in<Windows::Foundation::TimeSpan> rangeLength, abi_arg_in<Windows::ApplicationModel::Appointments::IFindAppointmentsOptions> pOptions, abi_arg_out<Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Appointments::Appointment>>> value) noexcept override
    {
        try
        {
            *value = detach(shim().FindAllInstancesAsync(*reinterpret_cast<const hstring *>(&masterLocalId), *reinterpret_cast<const Windows::Foundation::DateTime *>(&rangeStart), *reinterpret_cast<const Windows::Foundation::TimeSpan *>(&rangeLength), *reinterpret_cast<const Windows::ApplicationModel::Appointments::FindAppointmentsOptions *>(&pOptions)));
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_GetAppointmentAsync(abi_arg_in<hstring> localId, abi_arg_out<Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Appointments::Appointment>> result) noexcept override
    {
        try
        {
            *result = detach(shim().GetAppointmentAsync(*reinterpret_cast<const hstring *>(&localId)));
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_GetAppointmentInstanceAsync(abi_arg_in<hstring> localId, abi_arg_in<Windows::Foundation::DateTime> instanceStartTime, abi_arg_out<Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Appointments::Appointment>> result) noexcept override
    {
        try
        {
            *result = detach(shim().GetAppointmentInstanceAsync(*reinterpret_cast<const hstring *>(&localId), *reinterpret_cast<const Windows::Foundation::DateTime *>(&instanceStartTime)));
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_FindUnexpandedAppointmentsAsync(abi_arg_out<Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Appointments::Appointment>>> result) noexcept override
    {
        try
        {
            *result = detach(shim().FindUnexpandedAppointmentsAsync());
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_FindUnexpandedAppointmentsAsyncWithOptions(abi_arg_in<Windows::ApplicationModel::Appointments::IFindAppointmentsOptions> options, abi_arg_out<Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Appointments::Appointment>>> result) noexcept override
    {
        try
        {
            *result = detach(shim().FindUnexpandedAppointmentsAsync(*reinterpret_cast<const Windows::ApplicationModel::Appointments::FindAppointmentsOptions *>(&options)));
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_DeleteAsync(abi_arg_out<Windows::Foundation::IAsyncAction> asyncAction) noexcept override
    {
        try
        {
            *asyncAction = detach(shim().DeleteAsync());
            return S_OK;
        }
        catch (...)
        {
            *asyncAction = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_SaveAsync(abi_arg_out<Windows::Foundation::IAsyncAction> asyncAction) noexcept override
    {
        try
        {
            *asyncAction = detach(shim().SaveAsync());
            return S_OK;
        }
        catch (...)
        {
            *asyncAction = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_DeleteAppointmentAsync(abi_arg_in<hstring> localId, abi_arg_out<Windows::Foundation::IAsyncAction> asyncAction) noexcept override
    {
        try
        {
            *asyncAction = detach(shim().DeleteAppointmentAsync(*reinterpret_cast<const hstring *>(&localId)));
            return S_OK;
        }
        catch (...)
        {
            *asyncAction = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_DeleteAppointmentInstanceAsync(abi_arg_in<hstring> localId, abi_arg_in<Windows::Foundation::DateTime> instanceStartTime, abi_arg_out<Windows::Foundation::IAsyncAction> asyncAction) noexcept override
    {
        try
        {
            *asyncAction = detach(shim().DeleteAppointmentInstanceAsync(*reinterpret_cast<const hstring *>(&localId), *reinterpret_cast<const Windows::Foundation::DateTime *>(&instanceStartTime)));
            return S_OK;
        }
        catch (...)
        {
            *asyncAction = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_SaveAppointmentAsync(abi_arg_in<Windows::ApplicationModel::Appointments::IAppointment> pAppointment, abi_arg_out<Windows::Foundation::IAsyncAction> asyncAction) noexcept override
    {
        try
        {
            *asyncAction = detach(shim().SaveAppointmentAsync(*reinterpret_cast<const Windows::ApplicationModel::Appointments::Appointment *>(&pAppointment)));
            return S_OK;
        }
        catch (...)
        {
            *asyncAction = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::Appointments::IAppointmentCalendar2> : produce_base<D, Windows::ApplicationModel::Appointments::IAppointmentCalendar2>
{
    HRESULT __stdcall get_SyncManager(abi_arg_out<Windows::ApplicationModel::Appointments::IAppointmentCalendarSyncManager> value) noexcept override
    {
        try
        {
            *value = detach(shim().SyncManager());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_RemoteId(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(shim().RemoteId());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_RemoteId(abi_arg_in<hstring> value) noexcept override
    {
        try
        {
            shim().RemoteId(*reinterpret_cast<const hstring *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_DisplayColor(abi_arg_in<Windows::UI::Color> value) noexcept override
    {
        try
        {
            shim().DisplayColor(*reinterpret_cast<const Windows::UI::Color *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_IsHidden(bool value) noexcept override
    {
        try
        {
            shim().IsHidden(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_UserDataAccountId(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(shim().UserDataAccountId());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_CanCreateOrUpdateAppointments(bool * value) noexcept override
    {
        try
        {
            *value = detach(shim().CanCreateOrUpdateAppointments());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_CanCreateOrUpdateAppointments(bool value) noexcept override
    {
        try
        {
            shim().CanCreateOrUpdateAppointments(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_CanCancelMeetings(bool * value) noexcept override
    {
        try
        {
            *value = detach(shim().CanCancelMeetings());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_CanCancelMeetings(bool value) noexcept override
    {
        try
        {
            shim().CanCancelMeetings(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_CanForwardMeetings(bool * value) noexcept override
    {
        try
        {
            *value = detach(shim().CanForwardMeetings());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_CanForwardMeetings(bool value) noexcept override
    {
        try
        {
            shim().CanForwardMeetings(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_CanProposeNewTimeForMeetings(bool * value) noexcept override
    {
        try
        {
            *value = detach(shim().CanProposeNewTimeForMeetings());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_CanProposeNewTimeForMeetings(bool value) noexcept override
    {
        try
        {
            shim().CanProposeNewTimeForMeetings(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_CanUpdateMeetingResponses(bool * value) noexcept override
    {
        try
        {
            *value = detach(shim().CanUpdateMeetingResponses());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_CanUpdateMeetingResponses(bool value) noexcept override
    {
        try
        {
            shim().CanUpdateMeetingResponses(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_CanNotifyInvitees(bool * value) noexcept override
    {
        try
        {
            *value = detach(shim().CanNotifyInvitees());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_CanNotifyInvitees(bool value) noexcept override
    {
        try
        {
            shim().CanNotifyInvitees(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_MustNofityInvitees(bool * value) noexcept override
    {
        try
        {
            *value = detach(shim().MustNofityInvitees());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_MustNofityInvitees(bool value) noexcept override
    {
        try
        {
            shim().MustNofityInvitees(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_TryCreateOrUpdateAppointmentAsync(abi_arg_in<Windows::ApplicationModel::Appointments::IAppointment> appointment, bool notifyInvitees, abi_arg_out<Windows::Foundation::IAsyncOperation<bool>> result) noexcept override
    {
        try
        {
            *result = detach(shim().TryCreateOrUpdateAppointmentAsync(*reinterpret_cast<const Windows::ApplicationModel::Appointments::Appointment *>(&appointment), notifyInvitees));
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_TryCancelMeetingAsync(abi_arg_in<Windows::ApplicationModel::Appointments::IAppointment> meeting, abi_arg_in<hstring> subject, abi_arg_in<hstring> comment, bool notifyInvitees, abi_arg_out<Windows::Foundation::IAsyncOperation<bool>> result) noexcept override
    {
        try
        {
            *result = detach(shim().TryCancelMeetingAsync(*reinterpret_cast<const Windows::ApplicationModel::Appointments::Appointment *>(&meeting), *reinterpret_cast<const hstring *>(&subject), *reinterpret_cast<const hstring *>(&comment), notifyInvitees));
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_TryForwardMeetingAsync(abi_arg_in<Windows::ApplicationModel::Appointments::IAppointment> meeting, abi_arg_in<Windows::Foundation::Collections::IIterable<Windows::ApplicationModel::Appointments::AppointmentInvitee>> invitees, abi_arg_in<hstring> subject, abi_arg_in<hstring> forwardHeader, abi_arg_in<hstring> comment, abi_arg_out<Windows::Foundation::IAsyncOperation<bool>> result) noexcept override
    {
        try
        {
            *result = detach(shim().TryForwardMeetingAsync(*reinterpret_cast<const Windows::ApplicationModel::Appointments::Appointment *>(&meeting), *reinterpret_cast<const Windows::Foundation::Collections::IIterable<Windows::ApplicationModel::Appointments::AppointmentInvitee> *>(&invitees), *reinterpret_cast<const hstring *>(&subject), *reinterpret_cast<const hstring *>(&forwardHeader), *reinterpret_cast<const hstring *>(&comment)));
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_TryProposeNewTimeForMeetingAsync(abi_arg_in<Windows::ApplicationModel::Appointments::IAppointment> meeting, abi_arg_in<Windows::Foundation::DateTime> newStartTime, abi_arg_in<Windows::Foundation::TimeSpan> newDuration, abi_arg_in<hstring> subject, abi_arg_in<hstring> comment, abi_arg_out<Windows::Foundation::IAsyncOperation<bool>> result) noexcept override
    {
        try
        {
            *result = detach(shim().TryProposeNewTimeForMeetingAsync(*reinterpret_cast<const Windows::ApplicationModel::Appointments::Appointment *>(&meeting), *reinterpret_cast<const Windows::Foundation::DateTime *>(&newStartTime), *reinterpret_cast<const Windows::Foundation::TimeSpan *>(&newDuration), *reinterpret_cast<const hstring *>(&subject), *reinterpret_cast<const hstring *>(&comment)));
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_TryUpdateMeetingResponseAsync(abi_arg_in<Windows::ApplicationModel::Appointments::IAppointment> meeting, Windows::ApplicationModel::Appointments::AppointmentParticipantResponse response, abi_arg_in<hstring> subject, abi_arg_in<hstring> comment, bool sendUpdate, abi_arg_out<Windows::Foundation::IAsyncOperation<bool>> result) noexcept override
    {
        try
        {
            *result = detach(shim().TryUpdateMeetingResponseAsync(*reinterpret_cast<const Windows::ApplicationModel::Appointments::Appointment *>(&meeting), response, *reinterpret_cast<const hstring *>(&subject), *reinterpret_cast<const hstring *>(&comment), sendUpdate));
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
struct produce<D, Windows::ApplicationModel::Appointments::IAppointmentCalendar3> : produce_base<D, Windows::ApplicationModel::Appointments::IAppointmentCalendar3>
{
    HRESULT __stdcall abi_RegisterSyncManagerAsync(abi_arg_out<Windows::Foundation::IAsyncAction> result) noexcept override
    {
        try
        {
            *result = detach(shim().RegisterSyncManagerAsync());
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
struct produce<D, Windows::ApplicationModel::Appointments::IAppointmentCalendarSyncManager> : produce_base<D, Windows::ApplicationModel::Appointments::IAppointmentCalendarSyncManager>
{
    HRESULT __stdcall get_Status(Windows::ApplicationModel::Appointments::AppointmentCalendarSyncStatus * value) noexcept override
    {
        try
        {
            *value = detach(shim().Status());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_LastSuccessfulSyncTime(abi_arg_out<Windows::Foundation::DateTime> value) noexcept override
    {
        try
        {
            *value = detach(shim().LastSuccessfulSyncTime());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_LastAttemptedSyncTime(abi_arg_out<Windows::Foundation::DateTime> value) noexcept override
    {
        try
        {
            *value = detach(shim().LastAttemptedSyncTime());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_SyncAsync(abi_arg_out<Windows::Foundation::IAsyncOperation<bool>> result) noexcept override
    {
        try
        {
            *result = detach(shim().SyncAsync());
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_SyncStatusChanged(abi_arg_in<Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::Appointments::AppointmentCalendarSyncManager, Windows::IInspectable>> handler, event_token * token) noexcept override
    {
        try
        {
            *token = detach(shim().SyncStatusChanged(*reinterpret_cast<const Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::Appointments::AppointmentCalendarSyncManager, Windows::IInspectable> *>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_SyncStatusChanged(event_token token) noexcept override
    {
        try
        {
            shim().SyncStatusChanged(token);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::Appointments::IAppointmentCalendarSyncManager2> : produce_base<D, Windows::ApplicationModel::Appointments::IAppointmentCalendarSyncManager2>
{
    HRESULT __stdcall put_Status(Windows::ApplicationModel::Appointments::AppointmentCalendarSyncStatus value) noexcept override
    {
        try
        {
            shim().Status(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_LastSuccessfulSyncTime(abi_arg_in<Windows::Foundation::DateTime> value) noexcept override
    {
        try
        {
            shim().LastSuccessfulSyncTime(*reinterpret_cast<const Windows::Foundation::DateTime *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_LastAttemptedSyncTime(abi_arg_in<Windows::Foundation::DateTime> value) noexcept override
    {
        try
        {
            shim().LastAttemptedSyncTime(*reinterpret_cast<const Windows::Foundation::DateTime *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::Appointments::IAppointmentConflictResult> : produce_base<D, Windows::ApplicationModel::Appointments::IAppointmentConflictResult>
{
    HRESULT __stdcall get_Type(Windows::ApplicationModel::Appointments::AppointmentConflictType * value) noexcept override
    {
        try
        {
            *value = detach(shim().Type());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Date(abi_arg_out<Windows::Foundation::DateTime> value) noexcept override
    {
        try
        {
            *value = detach(shim().Date());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::Appointments::IAppointmentException> : produce_base<D, Windows::ApplicationModel::Appointments::IAppointmentException>
{
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

    HRESULT __stdcall get_ExceptionProperties(abi_arg_out<Windows::Foundation::Collections::IVectorView<hstring>> value) noexcept override
    {
        try
        {
            *value = detach(shim().ExceptionProperties());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_IsDeleted(bool * value) noexcept override
    {
        try
        {
            *value = detach(shim().IsDeleted());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::Appointments::IAppointmentInvitee> : produce_base<D, Windows::ApplicationModel::Appointments::IAppointmentInvitee>
{
    HRESULT __stdcall get_Role(Windows::ApplicationModel::Appointments::AppointmentParticipantRole * value) noexcept override
    {
        try
        {
            *value = detach(shim().Role());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Role(Windows::ApplicationModel::Appointments::AppointmentParticipantRole value) noexcept override
    {
        try
        {
            shim().Role(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Response(Windows::ApplicationModel::Appointments::AppointmentParticipantResponse * value) noexcept override
    {
        try
        {
            *value = detach(shim().Response());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Response(Windows::ApplicationModel::Appointments::AppointmentParticipantResponse value) noexcept override
    {
        try
        {
            shim().Response(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::Appointments::IAppointmentManagerForUser> : produce_base<D, Windows::ApplicationModel::Appointments::IAppointmentManagerForUser>
{
    HRESULT __stdcall abi_ShowAddAppointmentAsync(abi_arg_in<Windows::ApplicationModel::Appointments::IAppointment> appointment, abi_arg_in<Windows::Foundation::Rect> selection, abi_arg_out<Windows::Foundation::IAsyncOperation<hstring>> result) noexcept override
    {
        try
        {
            *result = detach(shim().ShowAddAppointmentAsync(*reinterpret_cast<const Windows::ApplicationModel::Appointments::Appointment *>(&appointment), *reinterpret_cast<const Windows::Foundation::Rect *>(&selection)));
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_ShowAddAppointmentWithPlacementAsync(abi_arg_in<Windows::ApplicationModel::Appointments::IAppointment> appointment, abi_arg_in<Windows::Foundation::Rect> selection, Windows::UI::Popups::Placement preferredPlacement, abi_arg_out<Windows::Foundation::IAsyncOperation<hstring>> result) noexcept override
    {
        try
        {
            *result = detach(shim().ShowAddAppointmentAsync(*reinterpret_cast<const Windows::ApplicationModel::Appointments::Appointment *>(&appointment), *reinterpret_cast<const Windows::Foundation::Rect *>(&selection), preferredPlacement));
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_ShowReplaceAppointmentAsync(abi_arg_in<hstring> appointmentId, abi_arg_in<Windows::ApplicationModel::Appointments::IAppointment> appointment, abi_arg_in<Windows::Foundation::Rect> selection, abi_arg_out<Windows::Foundation::IAsyncOperation<hstring>> result) noexcept override
    {
        try
        {
            *result = detach(shim().ShowReplaceAppointmentAsync(*reinterpret_cast<const hstring *>(&appointmentId), *reinterpret_cast<const Windows::ApplicationModel::Appointments::Appointment *>(&appointment), *reinterpret_cast<const Windows::Foundation::Rect *>(&selection)));
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_ShowReplaceAppointmentWithPlacementAsync(abi_arg_in<hstring> appointmentId, abi_arg_in<Windows::ApplicationModel::Appointments::IAppointment> appointment, abi_arg_in<Windows::Foundation::Rect> selection, Windows::UI::Popups::Placement preferredPlacement, abi_arg_out<Windows::Foundation::IAsyncOperation<hstring>> result) noexcept override
    {
        try
        {
            *result = detach(shim().ShowReplaceAppointmentAsync(*reinterpret_cast<const hstring *>(&appointmentId), *reinterpret_cast<const Windows::ApplicationModel::Appointments::Appointment *>(&appointment), *reinterpret_cast<const Windows::Foundation::Rect *>(&selection), preferredPlacement));
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_ShowReplaceAppointmentWithPlacementAndDateAsync(abi_arg_in<hstring> appointmentId, abi_arg_in<Windows::ApplicationModel::Appointments::IAppointment> appointment, abi_arg_in<Windows::Foundation::Rect> selection, Windows::UI::Popups::Placement preferredPlacement, abi_arg_in<Windows::Foundation::DateTime> instanceStartDate, abi_arg_out<Windows::Foundation::IAsyncOperation<hstring>> result) noexcept override
    {
        try
        {
            *result = detach(shim().ShowReplaceAppointmentAsync(*reinterpret_cast<const hstring *>(&appointmentId), *reinterpret_cast<const Windows::ApplicationModel::Appointments::Appointment *>(&appointment), *reinterpret_cast<const Windows::Foundation::Rect *>(&selection), preferredPlacement, *reinterpret_cast<const Windows::Foundation::DateTime *>(&instanceStartDate)));
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_ShowRemoveAppointmentAsync(abi_arg_in<hstring> appointmentId, abi_arg_in<Windows::Foundation::Rect> selection, abi_arg_out<Windows::Foundation::IAsyncOperation<bool>> result) noexcept override
    {
        try
        {
            *result = detach(shim().ShowRemoveAppointmentAsync(*reinterpret_cast<const hstring *>(&appointmentId), *reinterpret_cast<const Windows::Foundation::Rect *>(&selection)));
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_ShowRemoveAppointmentWithPlacementAsync(abi_arg_in<hstring> appointmentId, abi_arg_in<Windows::Foundation::Rect> selection, Windows::UI::Popups::Placement preferredPlacement, abi_arg_out<Windows::Foundation::IAsyncOperation<bool>> result) noexcept override
    {
        try
        {
            *result = detach(shim().ShowRemoveAppointmentAsync(*reinterpret_cast<const hstring *>(&appointmentId), *reinterpret_cast<const Windows::Foundation::Rect *>(&selection), preferredPlacement));
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_ShowRemoveAppointmentWithPlacementAndDateAsync(abi_arg_in<hstring> appointmentId, abi_arg_in<Windows::Foundation::Rect> selection, Windows::UI::Popups::Placement preferredPlacement, abi_arg_in<Windows::Foundation::DateTime> instanceStartDate, abi_arg_out<Windows::Foundation::IAsyncOperation<bool>> result) noexcept override
    {
        try
        {
            *result = detach(shim().ShowRemoveAppointmentAsync(*reinterpret_cast<const hstring *>(&appointmentId), *reinterpret_cast<const Windows::Foundation::Rect *>(&selection), preferredPlacement, *reinterpret_cast<const Windows::Foundation::DateTime *>(&instanceStartDate)));
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_ShowTimeFrameAsync(abi_arg_in<Windows::Foundation::DateTime> timeToShow, abi_arg_in<Windows::Foundation::TimeSpan> duration, abi_arg_out<Windows::Foundation::IAsyncAction> result) noexcept override
    {
        try
        {
            *result = detach(shim().ShowTimeFrameAsync(*reinterpret_cast<const Windows::Foundation::DateTime *>(&timeToShow), *reinterpret_cast<const Windows::Foundation::TimeSpan *>(&duration)));
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_ShowAppointmentDetailsAsync(abi_arg_in<hstring> appointmentId, abi_arg_out<Windows::Foundation::IAsyncAction> result) noexcept override
    {
        try
        {
            *result = detach(shim().ShowAppointmentDetailsAsync(*reinterpret_cast<const hstring *>(&appointmentId)));
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_ShowAppointmentDetailsWithDateAsync(abi_arg_in<hstring> appointmentId, abi_arg_in<Windows::Foundation::DateTime> instanceStartDate, abi_arg_out<Windows::Foundation::IAsyncAction> result) noexcept override
    {
        try
        {
            *result = detach(shim().ShowAppointmentDetailsAsync(*reinterpret_cast<const hstring *>(&appointmentId), *reinterpret_cast<const Windows::Foundation::DateTime *>(&instanceStartDate)));
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_ShowEditNewAppointmentAsync(abi_arg_in<Windows::ApplicationModel::Appointments::IAppointment> appointment, abi_arg_out<Windows::Foundation::IAsyncOperation<hstring>> result) noexcept override
    {
        try
        {
            *result = detach(shim().ShowEditNewAppointmentAsync(*reinterpret_cast<const Windows::ApplicationModel::Appointments::Appointment *>(&appointment)));
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_RequestStoreAsync(Windows::ApplicationModel::Appointments::AppointmentStoreAccessType options, abi_arg_out<Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Appointments::AppointmentStore>> result) noexcept override
    {
        try
        {
            *result = detach(shim().RequestStoreAsync(options));
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_User(abi_arg_out<Windows::System::IUser> value) noexcept override
    {
        try
        {
            *value = detach(shim().User());
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
struct produce<D, Windows::ApplicationModel::Appointments::IAppointmentManagerStatics> : produce_base<D, Windows::ApplicationModel::Appointments::IAppointmentManagerStatics>
{
    HRESULT __stdcall abi_ShowAddAppointmentAsync(abi_arg_in<Windows::ApplicationModel::Appointments::IAppointment> appointment, abi_arg_in<Windows::Foundation::Rect> selection, abi_arg_out<Windows::Foundation::IAsyncOperation<hstring>> operation) noexcept override
    {
        try
        {
            *operation = detach(shim().ShowAddAppointmentAsync(*reinterpret_cast<const Windows::ApplicationModel::Appointments::Appointment *>(&appointment), *reinterpret_cast<const Windows::Foundation::Rect *>(&selection)));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_ShowAddAppointmentWithPlacementAsync(abi_arg_in<Windows::ApplicationModel::Appointments::IAppointment> appointment, abi_arg_in<Windows::Foundation::Rect> selection, Windows::UI::Popups::Placement preferredPlacement, abi_arg_out<Windows::Foundation::IAsyncOperation<hstring>> operation) noexcept override
    {
        try
        {
            *operation = detach(shim().ShowAddAppointmentAsync(*reinterpret_cast<const Windows::ApplicationModel::Appointments::Appointment *>(&appointment), *reinterpret_cast<const Windows::Foundation::Rect *>(&selection), preferredPlacement));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_ShowReplaceAppointmentAsync(abi_arg_in<hstring> appointmentId, abi_arg_in<Windows::ApplicationModel::Appointments::IAppointment> appointment, abi_arg_in<Windows::Foundation::Rect> selection, abi_arg_out<Windows::Foundation::IAsyncOperation<hstring>> operation) noexcept override
    {
        try
        {
            *operation = detach(shim().ShowReplaceAppointmentAsync(*reinterpret_cast<const hstring *>(&appointmentId), *reinterpret_cast<const Windows::ApplicationModel::Appointments::Appointment *>(&appointment), *reinterpret_cast<const Windows::Foundation::Rect *>(&selection)));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_ShowReplaceAppointmentWithPlacementAsync(abi_arg_in<hstring> appointmentId, abi_arg_in<Windows::ApplicationModel::Appointments::IAppointment> appointment, abi_arg_in<Windows::Foundation::Rect> selection, Windows::UI::Popups::Placement preferredPlacement, abi_arg_out<Windows::Foundation::IAsyncOperation<hstring>> operation) noexcept override
    {
        try
        {
            *operation = detach(shim().ShowReplaceAppointmentAsync(*reinterpret_cast<const hstring *>(&appointmentId), *reinterpret_cast<const Windows::ApplicationModel::Appointments::Appointment *>(&appointment), *reinterpret_cast<const Windows::Foundation::Rect *>(&selection), preferredPlacement));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_ShowReplaceAppointmentWithPlacementAndDateAsync(abi_arg_in<hstring> appointmentId, abi_arg_in<Windows::ApplicationModel::Appointments::IAppointment> appointment, abi_arg_in<Windows::Foundation::Rect> selection, Windows::UI::Popups::Placement preferredPlacement, abi_arg_in<Windows::Foundation::DateTime> instanceStartDate, abi_arg_out<Windows::Foundation::IAsyncOperation<hstring>> operation) noexcept override
    {
        try
        {
            *operation = detach(shim().ShowReplaceAppointmentAsync(*reinterpret_cast<const hstring *>(&appointmentId), *reinterpret_cast<const Windows::ApplicationModel::Appointments::Appointment *>(&appointment), *reinterpret_cast<const Windows::Foundation::Rect *>(&selection), preferredPlacement, *reinterpret_cast<const Windows::Foundation::DateTime *>(&instanceStartDate)));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_ShowRemoveAppointmentAsync(abi_arg_in<hstring> appointmentId, abi_arg_in<Windows::Foundation::Rect> selection, abi_arg_out<Windows::Foundation::IAsyncOperation<bool>> operation) noexcept override
    {
        try
        {
            *operation = detach(shim().ShowRemoveAppointmentAsync(*reinterpret_cast<const hstring *>(&appointmentId), *reinterpret_cast<const Windows::Foundation::Rect *>(&selection)));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_ShowRemoveAppointmentWithPlacementAsync(abi_arg_in<hstring> appointmentId, abi_arg_in<Windows::Foundation::Rect> selection, Windows::UI::Popups::Placement preferredPlacement, abi_arg_out<Windows::Foundation::IAsyncOperation<bool>> operation) noexcept override
    {
        try
        {
            *operation = detach(shim().ShowRemoveAppointmentAsync(*reinterpret_cast<const hstring *>(&appointmentId), *reinterpret_cast<const Windows::Foundation::Rect *>(&selection), preferredPlacement));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_ShowRemoveAppointmentWithPlacementAndDateAsync(abi_arg_in<hstring> appointmentId, abi_arg_in<Windows::Foundation::Rect> selection, Windows::UI::Popups::Placement preferredPlacement, abi_arg_in<Windows::Foundation::DateTime> instanceStartDate, abi_arg_out<Windows::Foundation::IAsyncOperation<bool>> operation) noexcept override
    {
        try
        {
            *operation = detach(shim().ShowRemoveAppointmentAsync(*reinterpret_cast<const hstring *>(&appointmentId), *reinterpret_cast<const Windows::Foundation::Rect *>(&selection), preferredPlacement, *reinterpret_cast<const Windows::Foundation::DateTime *>(&instanceStartDate)));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_ShowTimeFrameAsync(abi_arg_in<Windows::Foundation::DateTime> timeToShow, abi_arg_in<Windows::Foundation::TimeSpan> duration, abi_arg_out<Windows::Foundation::IAsyncAction> asyncAction) noexcept override
    {
        try
        {
            *asyncAction = detach(shim().ShowTimeFrameAsync(*reinterpret_cast<const Windows::Foundation::DateTime *>(&timeToShow), *reinterpret_cast<const Windows::Foundation::TimeSpan *>(&duration)));
            return S_OK;
        }
        catch (...)
        {
            *asyncAction = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::Appointments::IAppointmentManagerStatics2> : produce_base<D, Windows::ApplicationModel::Appointments::IAppointmentManagerStatics2>
{
    HRESULT __stdcall abi_ShowAppointmentDetailsAsync(abi_arg_in<hstring> appointmentId, abi_arg_out<Windows::Foundation::IAsyncAction> asyncAction) noexcept override
    {
        try
        {
            *asyncAction = detach(shim().ShowAppointmentDetailsAsync(*reinterpret_cast<const hstring *>(&appointmentId)));
            return S_OK;
        }
        catch (...)
        {
            *asyncAction = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_ShowAppointmentDetailsWithDateAsync(abi_arg_in<hstring> appointmentId, abi_arg_in<Windows::Foundation::DateTime> instanceStartDate, abi_arg_out<Windows::Foundation::IAsyncAction> asyncAction) noexcept override
    {
        try
        {
            *asyncAction = detach(shim().ShowAppointmentDetailsAsync(*reinterpret_cast<const hstring *>(&appointmentId), *reinterpret_cast<const Windows::Foundation::DateTime *>(&instanceStartDate)));
            return S_OK;
        }
        catch (...)
        {
            *asyncAction = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_ShowEditNewAppointmentAsync(abi_arg_in<Windows::ApplicationModel::Appointments::IAppointment> appointment, abi_arg_out<Windows::Foundation::IAsyncOperation<hstring>> operation) noexcept override
    {
        try
        {
            *operation = detach(shim().ShowEditNewAppointmentAsync(*reinterpret_cast<const Windows::ApplicationModel::Appointments::Appointment *>(&appointment)));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_RequestStoreAsync(Windows::ApplicationModel::Appointments::AppointmentStoreAccessType options, abi_arg_out<Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Appointments::AppointmentStore>> operation) noexcept override
    {
        try
        {
            *operation = detach(shim().RequestStoreAsync(options));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::Appointments::IAppointmentManagerStatics3> : produce_base<D, Windows::ApplicationModel::Appointments::IAppointmentManagerStatics3>
{
    HRESULT __stdcall abi_GetForUser(abi_arg_in<Windows::System::IUser> user, abi_arg_out<Windows::ApplicationModel::Appointments::IAppointmentManagerForUser> result) noexcept override
    {
        try
        {
            *result = detach(shim().GetForUser(*reinterpret_cast<const Windows::System::User *>(&user)));
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
struct produce<D, Windows::ApplicationModel::Appointments::IAppointmentParticipant> : produce_base<D, Windows::ApplicationModel::Appointments::IAppointmentParticipant>
{
    HRESULT __stdcall get_DisplayName(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(shim().DisplayName());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_DisplayName(abi_arg_in<hstring> value) noexcept override
    {
        try
        {
            shim().DisplayName(*reinterpret_cast<const hstring *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Address(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(shim().Address());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Address(abi_arg_in<hstring> value) noexcept override
    {
        try
        {
            shim().Address(*reinterpret_cast<const hstring *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::Appointments::IAppointmentPropertiesStatics> : produce_base<D, Windows::ApplicationModel::Appointments::IAppointmentPropertiesStatics>
{
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

    HRESULT __stdcall get_Location(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(shim().Location());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_StartTime(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(shim().StartTime());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Duration(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(shim().Duration());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Reminder(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(shim().Reminder());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_BusyStatus(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(shim().BusyStatus());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Sensitivity(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(shim().Sensitivity());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_OriginalStartTime(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(shim().OriginalStartTime());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_IsResponseRequested(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(shim().IsResponseRequested());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_AllowNewTimeProposal(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(shim().AllowNewTimeProposal());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_AllDay(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(shim().AllDay());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Details(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(shim().Details());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_OnlineMeetingLink(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(shim().OnlineMeetingLink());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ReplyTime(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(shim().ReplyTime());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Organizer(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(shim().Organizer());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_UserResponse(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(shim().UserResponse());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_HasInvitees(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(shim().HasInvitees());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_IsCanceledMeeting(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(shim().IsCanceledMeeting());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_IsOrganizedByUser(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(shim().IsOrganizedByUser());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Recurrence(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(shim().Recurrence());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Uri(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(shim().Uri());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Invitees(abi_arg_out<hstring> value) noexcept override
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

    HRESULT __stdcall get_DefaultProperties(abi_arg_out<Windows::Foundation::Collections::IVector<hstring>> value) noexcept override
    {
        try
        {
            *value = detach(shim().DefaultProperties());
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
struct produce<D, Windows::ApplicationModel::Appointments::IAppointmentPropertiesStatics2> : produce_base<D, Windows::ApplicationModel::Appointments::IAppointmentPropertiesStatics2>
{
    HRESULT __stdcall get_ChangeNumber(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(shim().ChangeNumber());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_RemoteChangeNumber(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(shim().RemoteChangeNumber());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_DetailsKind(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(shim().DetailsKind());
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
struct produce<D, Windows::ApplicationModel::Appointments::IAppointmentRecurrence> : produce_base<D, Windows::ApplicationModel::Appointments::IAppointmentRecurrence>
{
    HRESULT __stdcall get_Unit(Windows::ApplicationModel::Appointments::AppointmentRecurrenceUnit * value) noexcept override
    {
        try
        {
            *value = detach(shim().Unit());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Unit(Windows::ApplicationModel::Appointments::AppointmentRecurrenceUnit value) noexcept override
    {
        try
        {
            shim().Unit(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Occurrences(abi_arg_out<Windows::Foundation::IReference<uint32_t>> value) noexcept override
    {
        try
        {
            *value = detach(shim().Occurrences());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Occurrences(abi_arg_in<Windows::Foundation::IReference<uint32_t>> value) noexcept override
    {
        try
        {
            shim().Occurrences(*reinterpret_cast<const Windows::Foundation::IReference<uint32_t> *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Until(abi_arg_out<Windows::Foundation::IReference<Windows::Foundation::DateTime>> value) noexcept override
    {
        try
        {
            *value = detach(shim().Until());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Until(abi_arg_in<Windows::Foundation::IReference<Windows::Foundation::DateTime>> value) noexcept override
    {
        try
        {
            shim().Until(*reinterpret_cast<const Windows::Foundation::IReference<Windows::Foundation::DateTime> *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Interval(uint32_t * value) noexcept override
    {
        try
        {
            *value = detach(shim().Interval());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Interval(uint32_t value) noexcept override
    {
        try
        {
            shim().Interval(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_DaysOfWeek(Windows::ApplicationModel::Appointments::AppointmentDaysOfWeek * value) noexcept override
    {
        try
        {
            *value = detach(shim().DaysOfWeek());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_DaysOfWeek(Windows::ApplicationModel::Appointments::AppointmentDaysOfWeek value) noexcept override
    {
        try
        {
            shim().DaysOfWeek(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_WeekOfMonth(Windows::ApplicationModel::Appointments::AppointmentWeekOfMonth * value) noexcept override
    {
        try
        {
            *value = detach(shim().WeekOfMonth());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_WeekOfMonth(Windows::ApplicationModel::Appointments::AppointmentWeekOfMonth value) noexcept override
    {
        try
        {
            shim().WeekOfMonth(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Month(uint32_t * value) noexcept override
    {
        try
        {
            *value = detach(shim().Month());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Month(uint32_t value) noexcept override
    {
        try
        {
            shim().Month(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Day(uint32_t * value) noexcept override
    {
        try
        {
            *value = detach(shim().Day());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Day(uint32_t value) noexcept override
    {
        try
        {
            shim().Day(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::Appointments::IAppointmentRecurrence2> : produce_base<D, Windows::ApplicationModel::Appointments::IAppointmentRecurrence2>
{
    HRESULT __stdcall get_RecurrenceType(Windows::ApplicationModel::Appointments::RecurrenceType * value) noexcept override
    {
        try
        {
            *value = detach(shim().RecurrenceType());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_TimeZone(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(shim().TimeZone());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_TimeZone(abi_arg_in<hstring> value) noexcept override
    {
        try
        {
            shim().TimeZone(*reinterpret_cast<const hstring *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::Appointments::IAppointmentRecurrence3> : produce_base<D, Windows::ApplicationModel::Appointments::IAppointmentRecurrence3>
{
    HRESULT __stdcall get_CalendarIdentifier(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(shim().CalendarIdentifier());
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
struct produce<D, Windows::ApplicationModel::Appointments::IAppointmentStore> : produce_base<D, Windows::ApplicationModel::Appointments::IAppointmentStore>
{
    HRESULT __stdcall get_ChangeTracker(abi_arg_out<Windows::ApplicationModel::Appointments::IAppointmentStoreChangeTracker> value) noexcept override
    {
        try
        {
            *value = detach(shim().ChangeTracker());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_CreateAppointmentCalendarAsync(abi_arg_in<hstring> name, abi_arg_out<Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Appointments::AppointmentCalendar>> operation) noexcept override
    {
        try
        {
            *operation = detach(shim().CreateAppointmentCalendarAsync(*reinterpret_cast<const hstring *>(&name)));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_GetAppointmentCalendarAsync(abi_arg_in<hstring> calendarId, abi_arg_out<Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Appointments::AppointmentCalendar>> result) noexcept override
    {
        try
        {
            *result = detach(shim().GetAppointmentCalendarAsync(*reinterpret_cast<const hstring *>(&calendarId)));
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_GetAppointmentAsync(abi_arg_in<hstring> localId, abi_arg_out<Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Appointments::Appointment>> result) noexcept override
    {
        try
        {
            *result = detach(shim().GetAppointmentAsync(*reinterpret_cast<const hstring *>(&localId)));
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_GetAppointmentInstanceAsync(abi_arg_in<hstring> localId, abi_arg_in<Windows::Foundation::DateTime> instanceStartTime, abi_arg_out<Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Appointments::Appointment>> result) noexcept override
    {
        try
        {
            *result = detach(shim().GetAppointmentInstanceAsync(*reinterpret_cast<const hstring *>(&localId), *reinterpret_cast<const Windows::Foundation::DateTime *>(&instanceStartTime)));
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_FindAppointmentCalendarsAsync(abi_arg_out<Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Appointments::AppointmentCalendar>>> result) noexcept override
    {
        try
        {
            *result = detach(shim().FindAppointmentCalendarsAsync());
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_FindAppointmentCalendarsAsyncWithOptions(Windows::ApplicationModel::Appointments::FindAppointmentCalendarsOptions options, abi_arg_out<Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Appointments::AppointmentCalendar>>> result) noexcept override
    {
        try
        {
            *result = detach(shim().FindAppointmentCalendarsAsync(options));
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_FindAppointmentsAsync(abi_arg_in<Windows::Foundation::DateTime> rangeStart, abi_arg_in<Windows::Foundation::TimeSpan> rangeLength, abi_arg_out<Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Appointments::Appointment>>> result) noexcept override
    {
        try
        {
            *result = detach(shim().FindAppointmentsAsync(*reinterpret_cast<const Windows::Foundation::DateTime *>(&rangeStart), *reinterpret_cast<const Windows::Foundation::TimeSpan *>(&rangeLength)));
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_FindAppointmentsAsyncWithOptions(abi_arg_in<Windows::Foundation::DateTime> rangeStart, abi_arg_in<Windows::Foundation::TimeSpan> rangeLength, abi_arg_in<Windows::ApplicationModel::Appointments::IFindAppointmentsOptions> options, abi_arg_out<Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Appointments::Appointment>>> result) noexcept override
    {
        try
        {
            *result = detach(shim().FindAppointmentsAsync(*reinterpret_cast<const Windows::Foundation::DateTime *>(&rangeStart), *reinterpret_cast<const Windows::Foundation::TimeSpan *>(&rangeLength), *reinterpret_cast<const Windows::ApplicationModel::Appointments::FindAppointmentsOptions *>(&options)));
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_FindConflictAsync(abi_arg_in<Windows::ApplicationModel::Appointments::IAppointment> appointment, abi_arg_out<Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Appointments::AppointmentConflictResult>> result) noexcept override
    {
        try
        {
            *result = detach(shim().FindConflictAsync(*reinterpret_cast<const Windows::ApplicationModel::Appointments::Appointment *>(&appointment)));
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_FindConflictAsyncWithInstanceStart(abi_arg_in<Windows::ApplicationModel::Appointments::IAppointment> appointment, abi_arg_in<Windows::Foundation::DateTime> instanceStartTime, abi_arg_out<Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Appointments::AppointmentConflictResult>> result) noexcept override
    {
        try
        {
            *result = detach(shim().FindConflictAsync(*reinterpret_cast<const Windows::ApplicationModel::Appointments::Appointment *>(&appointment), *reinterpret_cast<const Windows::Foundation::DateTime *>(&instanceStartTime)));
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_MoveAppointmentAsync(abi_arg_in<Windows::ApplicationModel::Appointments::IAppointment> appointment, abi_arg_in<Windows::ApplicationModel::Appointments::IAppointmentCalendar> destinationCalendar, abi_arg_out<Windows::Foundation::IAsyncAction> asyncAction) noexcept override
    {
        try
        {
            *asyncAction = detach(shim().MoveAppointmentAsync(*reinterpret_cast<const Windows::ApplicationModel::Appointments::Appointment *>(&appointment), *reinterpret_cast<const Windows::ApplicationModel::Appointments::AppointmentCalendar *>(&destinationCalendar)));
            return S_OK;
        }
        catch (...)
        {
            *asyncAction = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_ShowAddAppointmentAsync(abi_arg_in<Windows::ApplicationModel::Appointments::IAppointment> appointment, abi_arg_in<Windows::Foundation::Rect> selection, abi_arg_out<Windows::Foundation::IAsyncOperation<hstring>> operation) noexcept override
    {
        try
        {
            *operation = detach(shim().ShowAddAppointmentAsync(*reinterpret_cast<const Windows::ApplicationModel::Appointments::Appointment *>(&appointment), *reinterpret_cast<const Windows::Foundation::Rect *>(&selection)));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_ShowReplaceAppointmentAsync(abi_arg_in<hstring> localId, abi_arg_in<Windows::ApplicationModel::Appointments::IAppointment> appointment, abi_arg_in<Windows::Foundation::Rect> selection, abi_arg_out<Windows::Foundation::IAsyncOperation<hstring>> operation) noexcept override
    {
        try
        {
            *operation = detach(shim().ShowReplaceAppointmentAsync(*reinterpret_cast<const hstring *>(&localId), *reinterpret_cast<const Windows::ApplicationModel::Appointments::Appointment *>(&appointment), *reinterpret_cast<const Windows::Foundation::Rect *>(&selection)));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_ShowReplaceAppointmentWithPlacementAndDateAsync(abi_arg_in<hstring> localId, abi_arg_in<Windows::ApplicationModel::Appointments::IAppointment> appointment, abi_arg_in<Windows::Foundation::Rect> selection, Windows::UI::Popups::Placement preferredPlacement, abi_arg_in<Windows::Foundation::DateTime> instanceStartDate, abi_arg_out<Windows::Foundation::IAsyncOperation<hstring>> operation) noexcept override
    {
        try
        {
            *operation = detach(shim().ShowReplaceAppointmentAsync(*reinterpret_cast<const hstring *>(&localId), *reinterpret_cast<const Windows::ApplicationModel::Appointments::Appointment *>(&appointment), *reinterpret_cast<const Windows::Foundation::Rect *>(&selection), preferredPlacement, *reinterpret_cast<const Windows::Foundation::DateTime *>(&instanceStartDate)));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_ShowRemoveAppointmentAsync(abi_arg_in<hstring> localId, abi_arg_in<Windows::Foundation::Rect> selection, abi_arg_out<Windows::Foundation::IAsyncOperation<bool>> operation) noexcept override
    {
        try
        {
            *operation = detach(shim().ShowRemoveAppointmentAsync(*reinterpret_cast<const hstring *>(&localId), *reinterpret_cast<const Windows::Foundation::Rect *>(&selection)));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_ShowRemoveAppointmentWithPlacementAndDateAsync(abi_arg_in<hstring> localId, abi_arg_in<Windows::Foundation::Rect> selection, Windows::UI::Popups::Placement preferredPlacement, abi_arg_in<Windows::Foundation::DateTime> instanceStartDate, abi_arg_out<Windows::Foundation::IAsyncOperation<bool>> operation) noexcept override
    {
        try
        {
            *operation = detach(shim().ShowRemoveAppointmentAsync(*reinterpret_cast<const hstring *>(&localId), *reinterpret_cast<const Windows::Foundation::Rect *>(&selection), preferredPlacement, *reinterpret_cast<const Windows::Foundation::DateTime *>(&instanceStartDate)));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_ShowAppointmentDetailsAsync(abi_arg_in<hstring> localId, abi_arg_out<Windows::Foundation::IAsyncAction> asyncAction) noexcept override
    {
        try
        {
            *asyncAction = detach(shim().ShowAppointmentDetailsAsync(*reinterpret_cast<const hstring *>(&localId)));
            return S_OK;
        }
        catch (...)
        {
            *asyncAction = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_ShowAppointmentDetailsWithDateAsync(abi_arg_in<hstring> localId, abi_arg_in<Windows::Foundation::DateTime> instanceStartDate, abi_arg_out<Windows::Foundation::IAsyncAction> asyncAction) noexcept override
    {
        try
        {
            *asyncAction = detach(shim().ShowAppointmentDetailsAsync(*reinterpret_cast<const hstring *>(&localId), *reinterpret_cast<const Windows::Foundation::DateTime *>(&instanceStartDate)));
            return S_OK;
        }
        catch (...)
        {
            *asyncAction = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_ShowEditNewAppointmentAsync(abi_arg_in<Windows::ApplicationModel::Appointments::IAppointment> appointment, abi_arg_out<Windows::Foundation::IAsyncOperation<hstring>> operation) noexcept override
    {
        try
        {
            *operation = detach(shim().ShowEditNewAppointmentAsync(*reinterpret_cast<const Windows::ApplicationModel::Appointments::Appointment *>(&appointment)));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_FindLocalIdsFromRoamingIdAsync(abi_arg_in<hstring> roamingId, abi_arg_out<Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<hstring>>> operation) noexcept override
    {
        try
        {
            *operation = detach(shim().FindLocalIdsFromRoamingIdAsync(*reinterpret_cast<const hstring *>(&roamingId)));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::Appointments::IAppointmentStore2> : produce_base<D, Windows::ApplicationModel::Appointments::IAppointmentStore2>
{
    HRESULT __stdcall add_StoreChanged(abi_arg_in<Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::Appointments::AppointmentStore, Windows::ApplicationModel::Appointments::AppointmentStoreChangedEventArgs>> pHandler, event_token * pToken) noexcept override
    {
        try
        {
            *pToken = detach(shim().StoreChanged(*reinterpret_cast<const Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::Appointments::AppointmentStore, Windows::ApplicationModel::Appointments::AppointmentStoreChangedEventArgs> *>(&pHandler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_StoreChanged(event_token token) noexcept override
    {
        try
        {
            shim().StoreChanged(token);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_CreateAppointmentCalendarInAccountAsync(abi_arg_in<hstring> name, abi_arg_in<hstring> userDataAccountId, abi_arg_out<Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Appointments::AppointmentCalendar>> operation) noexcept override
    {
        try
        {
            *operation = detach(shim().CreateAppointmentCalendarAsync(*reinterpret_cast<const hstring *>(&name), *reinterpret_cast<const hstring *>(&userDataAccountId)));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::Appointments::IAppointmentStoreChange> : produce_base<D, Windows::ApplicationModel::Appointments::IAppointmentStoreChange>
{
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

    HRESULT __stdcall get_ChangeType(Windows::ApplicationModel::Appointments::AppointmentStoreChangeType * value) noexcept override
    {
        try
        {
            *value = detach(shim().ChangeType());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::Appointments::IAppointmentStoreChange2> : produce_base<D, Windows::ApplicationModel::Appointments::IAppointmentStoreChange2>
{
    HRESULT __stdcall get_AppointmentCalendar(abi_arg_out<Windows::ApplicationModel::Appointments::IAppointmentCalendar> value) noexcept override
    {
        try
        {
            *value = detach(shim().AppointmentCalendar());
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
struct produce<D, Windows::ApplicationModel::Appointments::IAppointmentStoreChangeReader> : produce_base<D, Windows::ApplicationModel::Appointments::IAppointmentStoreChangeReader>
{
    HRESULT __stdcall abi_ReadBatchAsync(abi_arg_out<Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Appointments::AppointmentStoreChange>>> result) noexcept override
    {
        try
        {
            *result = detach(shim().ReadBatchAsync());
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_AcceptChanges() noexcept override
    {
        try
        {
            shim().AcceptChanges();
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_AcceptChangesThrough(abi_arg_in<Windows::ApplicationModel::Appointments::IAppointmentStoreChange> lastChangeToAccept) noexcept override
    {
        try
        {
            shim().AcceptChangesThrough(*reinterpret_cast<const Windows::ApplicationModel::Appointments::AppointmentStoreChange *>(&lastChangeToAccept));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::Appointments::IAppointmentStoreChangeTracker> : produce_base<D, Windows::ApplicationModel::Appointments::IAppointmentStoreChangeTracker>
{
    HRESULT __stdcall abi_GetChangeReader(abi_arg_out<Windows::ApplicationModel::Appointments::IAppointmentStoreChangeReader> value) noexcept override
    {
        try
        {
            *value = detach(shim().GetChangeReader());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_Enable() noexcept override
    {
        try
        {
            shim().Enable();
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_Reset() noexcept override
    {
        try
        {
            shim().Reset();
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::Appointments::IAppointmentStoreChangedDeferral> : produce_base<D, Windows::ApplicationModel::Appointments::IAppointmentStoreChangedDeferral>
{
    HRESULT __stdcall abi_Complete() noexcept override
    {
        try
        {
            shim().Complete();
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::Appointments::IAppointmentStoreChangedEventArgs> : produce_base<D, Windows::ApplicationModel::Appointments::IAppointmentStoreChangedEventArgs>
{
    HRESULT __stdcall abi_GetDeferral(abi_arg_out<Windows::ApplicationModel::Appointments::IAppointmentStoreChangedDeferral> result) noexcept override
    {
        try
        {
            *result = detach(shim().GetDeferral());
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
struct produce<D, Windows::ApplicationModel::Appointments::IAppointmentStoreNotificationTriggerDetails> : produce_base<D, Windows::ApplicationModel::Appointments::IAppointmentStoreNotificationTriggerDetails>
{};

template <typename D>
struct produce<D, Windows::ApplicationModel::Appointments::IFindAppointmentsOptions> : produce_base<D, Windows::ApplicationModel::Appointments::IFindAppointmentsOptions>
{
    HRESULT __stdcall get_CalendarIds(abi_arg_out<Windows::Foundation::Collections::IVector<hstring>> value) noexcept override
    {
        try
        {
            *value = detach(shim().CalendarIds());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_FetchProperties(abi_arg_out<Windows::Foundation::Collections::IVector<hstring>> value) noexcept override
    {
        try
        {
            *value = detach(shim().FetchProperties());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_IncludeHidden(bool * value) noexcept override
    {
        try
        {
            *value = detach(shim().IncludeHidden());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_IncludeHidden(bool value) noexcept override
    {
        try
        {
            shim().IncludeHidden(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_MaxCount(uint32_t * value) noexcept override
    {
        try
        {
            *value = detach(shim().MaxCount());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_MaxCount(uint32_t value) noexcept override
    {
        try
        {
            shim().MaxCount(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

}

namespace Windows::ApplicationModel::Appointments {

template <typename D> Windows::Foundation::IAsyncOperation<hstring> impl_IAppointmentManagerStatics<D>::ShowAddAppointmentAsync(const Windows::ApplicationModel::Appointments::Appointment & appointment, const Windows::Foundation::Rect & selection) const
{
    Windows::Foundation::IAsyncOperation<hstring> operation;
    check_hresult(shim()->abi_ShowAddAppointmentAsync(get(appointment), get(selection), put(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperation<hstring> impl_IAppointmentManagerStatics<D>::ShowAddAppointmentAsync(const Windows::ApplicationModel::Appointments::Appointment & appointment, const Windows::Foundation::Rect & selection, Windows::UI::Popups::Placement preferredPlacement) const
{
    Windows::Foundation::IAsyncOperation<hstring> operation;
    check_hresult(shim()->abi_ShowAddAppointmentWithPlacementAsync(get(appointment), get(selection), preferredPlacement, put(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperation<hstring> impl_IAppointmentManagerStatics<D>::ShowReplaceAppointmentAsync(hstring_ref appointmentId, const Windows::ApplicationModel::Appointments::Appointment & appointment, const Windows::Foundation::Rect & selection) const
{
    Windows::Foundation::IAsyncOperation<hstring> operation;
    check_hresult(shim()->abi_ShowReplaceAppointmentAsync(get(appointmentId), get(appointment), get(selection), put(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperation<hstring> impl_IAppointmentManagerStatics<D>::ShowReplaceAppointmentAsync(hstring_ref appointmentId, const Windows::ApplicationModel::Appointments::Appointment & appointment, const Windows::Foundation::Rect & selection, Windows::UI::Popups::Placement preferredPlacement) const
{
    Windows::Foundation::IAsyncOperation<hstring> operation;
    check_hresult(shim()->abi_ShowReplaceAppointmentWithPlacementAsync(get(appointmentId), get(appointment), get(selection), preferredPlacement, put(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperation<hstring> impl_IAppointmentManagerStatics<D>::ShowReplaceAppointmentAsync(hstring_ref appointmentId, const Windows::ApplicationModel::Appointments::Appointment & appointment, const Windows::Foundation::Rect & selection, Windows::UI::Popups::Placement preferredPlacement, const Windows::Foundation::DateTime & instanceStartDate) const
{
    Windows::Foundation::IAsyncOperation<hstring> operation;
    check_hresult(shim()->abi_ShowReplaceAppointmentWithPlacementAndDateAsync(get(appointmentId), get(appointment), get(selection), preferredPlacement, get(instanceStartDate), put(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperation<bool> impl_IAppointmentManagerStatics<D>::ShowRemoveAppointmentAsync(hstring_ref appointmentId, const Windows::Foundation::Rect & selection) const
{
    Windows::Foundation::IAsyncOperation<bool> operation;
    check_hresult(shim()->abi_ShowRemoveAppointmentAsync(get(appointmentId), get(selection), put(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperation<bool> impl_IAppointmentManagerStatics<D>::ShowRemoveAppointmentAsync(hstring_ref appointmentId, const Windows::Foundation::Rect & selection, Windows::UI::Popups::Placement preferredPlacement) const
{
    Windows::Foundation::IAsyncOperation<bool> operation;
    check_hresult(shim()->abi_ShowRemoveAppointmentWithPlacementAsync(get(appointmentId), get(selection), preferredPlacement, put(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperation<bool> impl_IAppointmentManagerStatics<D>::ShowRemoveAppointmentAsync(hstring_ref appointmentId, const Windows::Foundation::Rect & selection, Windows::UI::Popups::Placement preferredPlacement, const Windows::Foundation::DateTime & instanceStartDate) const
{
    Windows::Foundation::IAsyncOperation<bool> operation;
    check_hresult(shim()->abi_ShowRemoveAppointmentWithPlacementAndDateAsync(get(appointmentId), get(selection), preferredPlacement, get(instanceStartDate), put(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncAction impl_IAppointmentManagerStatics<D>::ShowTimeFrameAsync(const Windows::Foundation::DateTime & timeToShow, const Windows::Foundation::TimeSpan & duration) const
{
    Windows::Foundation::IAsyncAction asyncAction;
    check_hresult(shim()->abi_ShowTimeFrameAsync(get(timeToShow), get(duration), put(asyncAction)));
    return asyncAction;
}

template <typename D> Windows::Foundation::IAsyncAction impl_IAppointmentManagerStatics2<D>::ShowAppointmentDetailsAsync(hstring_ref appointmentId) const
{
    Windows::Foundation::IAsyncAction asyncAction;
    check_hresult(shim()->abi_ShowAppointmentDetailsAsync(get(appointmentId), put(asyncAction)));
    return asyncAction;
}

template <typename D> Windows::Foundation::IAsyncAction impl_IAppointmentManagerStatics2<D>::ShowAppointmentDetailsAsync(hstring_ref appointmentId, const Windows::Foundation::DateTime & instanceStartDate) const
{
    Windows::Foundation::IAsyncAction asyncAction;
    check_hresult(shim()->abi_ShowAppointmentDetailsWithDateAsync(get(appointmentId), get(instanceStartDate), put(asyncAction)));
    return asyncAction;
}

template <typename D> Windows::Foundation::IAsyncOperation<hstring> impl_IAppointmentManagerStatics2<D>::ShowEditNewAppointmentAsync(const Windows::ApplicationModel::Appointments::Appointment & appointment) const
{
    Windows::Foundation::IAsyncOperation<hstring> operation;
    check_hresult(shim()->abi_ShowEditNewAppointmentAsync(get(appointment), put(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Appointments::AppointmentStore> impl_IAppointmentManagerStatics2<D>::RequestStoreAsync(Windows::ApplicationModel::Appointments::AppointmentStoreAccessType options) const
{
    Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Appointments::AppointmentStore> operation;
    check_hresult(shim()->abi_RequestStoreAsync(options, put(operation)));
    return operation;
}

template <typename D> Windows::ApplicationModel::Appointments::AppointmentManagerForUser impl_IAppointmentManagerStatics3<D>::GetForUser(const Windows::System::User & user) const
{
    Windows::ApplicationModel::Appointments::AppointmentManagerForUser result { nullptr };
    check_hresult(shim()->abi_GetForUser(get(user), put(result)));
    return result;
}

template <typename D> Windows::Foundation::IAsyncOperation<hstring> impl_IAppointmentManagerForUser<D>::ShowAddAppointmentAsync(const Windows::ApplicationModel::Appointments::Appointment & appointment, const Windows::Foundation::Rect & selection) const
{
    Windows::Foundation::IAsyncOperation<hstring> result;
    check_hresult(shim()->abi_ShowAddAppointmentAsync(get(appointment), get(selection), put(result)));
    return result;
}

template <typename D> Windows::Foundation::IAsyncOperation<hstring> impl_IAppointmentManagerForUser<D>::ShowAddAppointmentAsync(const Windows::ApplicationModel::Appointments::Appointment & appointment, const Windows::Foundation::Rect & selection, Windows::UI::Popups::Placement preferredPlacement) const
{
    Windows::Foundation::IAsyncOperation<hstring> result;
    check_hresult(shim()->abi_ShowAddAppointmentWithPlacementAsync(get(appointment), get(selection), preferredPlacement, put(result)));
    return result;
}

template <typename D> Windows::Foundation::IAsyncOperation<hstring> impl_IAppointmentManagerForUser<D>::ShowReplaceAppointmentAsync(hstring_ref appointmentId, const Windows::ApplicationModel::Appointments::Appointment & appointment, const Windows::Foundation::Rect & selection) const
{
    Windows::Foundation::IAsyncOperation<hstring> result;
    check_hresult(shim()->abi_ShowReplaceAppointmentAsync(get(appointmentId), get(appointment), get(selection), put(result)));
    return result;
}

template <typename D> Windows::Foundation::IAsyncOperation<hstring> impl_IAppointmentManagerForUser<D>::ShowReplaceAppointmentAsync(hstring_ref appointmentId, const Windows::ApplicationModel::Appointments::Appointment & appointment, const Windows::Foundation::Rect & selection, Windows::UI::Popups::Placement preferredPlacement) const
{
    Windows::Foundation::IAsyncOperation<hstring> result;
    check_hresult(shim()->abi_ShowReplaceAppointmentWithPlacementAsync(get(appointmentId), get(appointment), get(selection), preferredPlacement, put(result)));
    return result;
}

template <typename D> Windows::Foundation::IAsyncOperation<hstring> impl_IAppointmentManagerForUser<D>::ShowReplaceAppointmentAsync(hstring_ref appointmentId, const Windows::ApplicationModel::Appointments::Appointment & appointment, const Windows::Foundation::Rect & selection, Windows::UI::Popups::Placement preferredPlacement, const Windows::Foundation::DateTime & instanceStartDate) const
{
    Windows::Foundation::IAsyncOperation<hstring> result;
    check_hresult(shim()->abi_ShowReplaceAppointmentWithPlacementAndDateAsync(get(appointmentId), get(appointment), get(selection), preferredPlacement, get(instanceStartDate), put(result)));
    return result;
}

template <typename D> Windows::Foundation::IAsyncOperation<bool> impl_IAppointmentManagerForUser<D>::ShowRemoveAppointmentAsync(hstring_ref appointmentId, const Windows::Foundation::Rect & selection) const
{
    Windows::Foundation::IAsyncOperation<bool> result;
    check_hresult(shim()->abi_ShowRemoveAppointmentAsync(get(appointmentId), get(selection), put(result)));
    return result;
}

template <typename D> Windows::Foundation::IAsyncOperation<bool> impl_IAppointmentManagerForUser<D>::ShowRemoveAppointmentAsync(hstring_ref appointmentId, const Windows::Foundation::Rect & selection, Windows::UI::Popups::Placement preferredPlacement) const
{
    Windows::Foundation::IAsyncOperation<bool> result;
    check_hresult(shim()->abi_ShowRemoveAppointmentWithPlacementAsync(get(appointmentId), get(selection), preferredPlacement, put(result)));
    return result;
}

template <typename D> Windows::Foundation::IAsyncOperation<bool> impl_IAppointmentManagerForUser<D>::ShowRemoveAppointmentAsync(hstring_ref appointmentId, const Windows::Foundation::Rect & selection, Windows::UI::Popups::Placement preferredPlacement, const Windows::Foundation::DateTime & instanceStartDate) const
{
    Windows::Foundation::IAsyncOperation<bool> result;
    check_hresult(shim()->abi_ShowRemoveAppointmentWithPlacementAndDateAsync(get(appointmentId), get(selection), preferredPlacement, get(instanceStartDate), put(result)));
    return result;
}

template <typename D> Windows::Foundation::IAsyncAction impl_IAppointmentManagerForUser<D>::ShowTimeFrameAsync(const Windows::Foundation::DateTime & timeToShow, const Windows::Foundation::TimeSpan & duration) const
{
    Windows::Foundation::IAsyncAction result;
    check_hresult(shim()->abi_ShowTimeFrameAsync(get(timeToShow), get(duration), put(result)));
    return result;
}

template <typename D> Windows::Foundation::IAsyncAction impl_IAppointmentManagerForUser<D>::ShowAppointmentDetailsAsync(hstring_ref appointmentId) const
{
    Windows::Foundation::IAsyncAction result;
    check_hresult(shim()->abi_ShowAppointmentDetailsAsync(get(appointmentId), put(result)));
    return result;
}

template <typename D> Windows::Foundation::IAsyncAction impl_IAppointmentManagerForUser<D>::ShowAppointmentDetailsAsync(hstring_ref appointmentId, const Windows::Foundation::DateTime & instanceStartDate) const
{
    Windows::Foundation::IAsyncAction result;
    check_hresult(shim()->abi_ShowAppointmentDetailsWithDateAsync(get(appointmentId), get(instanceStartDate), put(result)));
    return result;
}

template <typename D> Windows::Foundation::IAsyncOperation<hstring> impl_IAppointmentManagerForUser<D>::ShowEditNewAppointmentAsync(const Windows::ApplicationModel::Appointments::Appointment & appointment) const
{
    Windows::Foundation::IAsyncOperation<hstring> result;
    check_hresult(shim()->abi_ShowEditNewAppointmentAsync(get(appointment), put(result)));
    return result;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Appointments::AppointmentStore> impl_IAppointmentManagerForUser<D>::RequestStoreAsync(Windows::ApplicationModel::Appointments::AppointmentStoreAccessType options) const
{
    Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Appointments::AppointmentStore> result;
    check_hresult(shim()->abi_RequestStoreAsync(options, put(result)));
    return result;
}

template <typename D> Windows::System::User impl_IAppointmentManagerForUser<D>::User() const
{
    Windows::System::User value { nullptr };
    check_hresult(shim()->get_User(put(value)));
    return value;
}

template <typename D> hstring impl_IAppointmentParticipant<D>::DisplayName() const
{
    hstring value;
    check_hresult(shim()->get_DisplayName(put(value)));
    return value;
}

template <typename D> void impl_IAppointmentParticipant<D>::DisplayName(hstring_ref value) const
{
    check_hresult(shim()->put_DisplayName(get(value)));
}

template <typename D> hstring impl_IAppointmentParticipant<D>::Address() const
{
    hstring value;
    check_hresult(shim()->get_Address(put(value)));
    return value;
}

template <typename D> void impl_IAppointmentParticipant<D>::Address(hstring_ref value) const
{
    check_hresult(shim()->put_Address(get(value)));
}

template <typename D> Windows::ApplicationModel::Appointments::AppointmentParticipantRole impl_IAppointmentInvitee<D>::Role() const
{
    Windows::ApplicationModel::Appointments::AppointmentParticipantRole value {};
    check_hresult(shim()->get_Role(&value));
    return value;
}

template <typename D> void impl_IAppointmentInvitee<D>::Role(Windows::ApplicationModel::Appointments::AppointmentParticipantRole value) const
{
    check_hresult(shim()->put_Role(value));
}

template <typename D> Windows::ApplicationModel::Appointments::AppointmentParticipantResponse impl_IAppointmentInvitee<D>::Response() const
{
    Windows::ApplicationModel::Appointments::AppointmentParticipantResponse value {};
    check_hresult(shim()->get_Response(&value));
    return value;
}

template <typename D> void impl_IAppointmentInvitee<D>::Response(Windows::ApplicationModel::Appointments::AppointmentParticipantResponse value) const
{
    check_hresult(shim()->put_Response(value));
}

template <typename D> Windows::ApplicationModel::Appointments::AppointmentRecurrenceUnit impl_IAppointmentRecurrence<D>::Unit() const
{
    Windows::ApplicationModel::Appointments::AppointmentRecurrenceUnit value {};
    check_hresult(shim()->get_Unit(&value));
    return value;
}

template <typename D> void impl_IAppointmentRecurrence<D>::Unit(Windows::ApplicationModel::Appointments::AppointmentRecurrenceUnit value) const
{
    check_hresult(shim()->put_Unit(value));
}

template <typename D> Windows::Foundation::IReference<uint32_t> impl_IAppointmentRecurrence<D>::Occurrences() const
{
    Windows::Foundation::IReference<uint32_t> value;
    check_hresult(shim()->get_Occurrences(put(value)));
    return value;
}

template <typename D> void impl_IAppointmentRecurrence<D>::Occurrences(const Windows::Foundation::IReference<uint32_t> & value) const
{
    check_hresult(shim()->put_Occurrences(get(value)));
}

template <typename D> Windows::Foundation::IReference<Windows::Foundation::DateTime> impl_IAppointmentRecurrence<D>::Until() const
{
    Windows::Foundation::IReference<Windows::Foundation::DateTime> value;
    check_hresult(shim()->get_Until(put(value)));
    return value;
}

template <typename D> void impl_IAppointmentRecurrence<D>::Until(const Windows::Foundation::IReference<Windows::Foundation::DateTime> & value) const
{
    check_hresult(shim()->put_Until(get(value)));
}

template <typename D> uint32_t impl_IAppointmentRecurrence<D>::Interval() const
{
    uint32_t value {};
    check_hresult(shim()->get_Interval(&value));
    return value;
}

template <typename D> void impl_IAppointmentRecurrence<D>::Interval(uint32_t value) const
{
    check_hresult(shim()->put_Interval(value));
}

template <typename D> Windows::ApplicationModel::Appointments::AppointmentDaysOfWeek impl_IAppointmentRecurrence<D>::DaysOfWeek() const
{
    Windows::ApplicationModel::Appointments::AppointmentDaysOfWeek value {};
    check_hresult(shim()->get_DaysOfWeek(&value));
    return value;
}

template <typename D> void impl_IAppointmentRecurrence<D>::DaysOfWeek(Windows::ApplicationModel::Appointments::AppointmentDaysOfWeek value) const
{
    check_hresult(shim()->put_DaysOfWeek(value));
}

template <typename D> Windows::ApplicationModel::Appointments::AppointmentWeekOfMonth impl_IAppointmentRecurrence<D>::WeekOfMonth() const
{
    Windows::ApplicationModel::Appointments::AppointmentWeekOfMonth value {};
    check_hresult(shim()->get_WeekOfMonth(&value));
    return value;
}

template <typename D> void impl_IAppointmentRecurrence<D>::WeekOfMonth(Windows::ApplicationModel::Appointments::AppointmentWeekOfMonth value) const
{
    check_hresult(shim()->put_WeekOfMonth(value));
}

template <typename D> uint32_t impl_IAppointmentRecurrence<D>::Month() const
{
    uint32_t value {};
    check_hresult(shim()->get_Month(&value));
    return value;
}

template <typename D> void impl_IAppointmentRecurrence<D>::Month(uint32_t value) const
{
    check_hresult(shim()->put_Month(value));
}

template <typename D> uint32_t impl_IAppointmentRecurrence<D>::Day() const
{
    uint32_t value {};
    check_hresult(shim()->get_Day(&value));
    return value;
}

template <typename D> void impl_IAppointmentRecurrence<D>::Day(uint32_t value) const
{
    check_hresult(shim()->put_Day(value));
}

template <typename D> Windows::ApplicationModel::Appointments::RecurrenceType impl_IAppointmentRecurrence2<D>::RecurrenceType() const
{
    Windows::ApplicationModel::Appointments::RecurrenceType value {};
    check_hresult(shim()->get_RecurrenceType(&value));
    return value;
}

template <typename D> hstring impl_IAppointmentRecurrence2<D>::TimeZone() const
{
    hstring value;
    check_hresult(shim()->get_TimeZone(put(value)));
    return value;
}

template <typename D> void impl_IAppointmentRecurrence2<D>::TimeZone(hstring_ref value) const
{
    check_hresult(shim()->put_TimeZone(get(value)));
}

template <typename D> hstring impl_IAppointmentRecurrence3<D>::CalendarIdentifier() const
{
    hstring value;
    check_hresult(shim()->get_CalendarIdentifier(put(value)));
    return value;
}

template <typename D> Windows::Foundation::DateTime impl_IAppointment<D>::StartTime() const
{
    Windows::Foundation::DateTime value {};
    check_hresult(shim()->get_StartTime(put(value)));
    return value;
}

template <typename D> void impl_IAppointment<D>::StartTime(const Windows::Foundation::DateTime & value) const
{
    check_hresult(shim()->put_StartTime(get(value)));
}

template <typename D> Windows::Foundation::TimeSpan impl_IAppointment<D>::Duration() const
{
    Windows::Foundation::TimeSpan value {};
    check_hresult(shim()->get_Duration(put(value)));
    return value;
}

template <typename D> void impl_IAppointment<D>::Duration(const Windows::Foundation::TimeSpan & value) const
{
    check_hresult(shim()->put_Duration(get(value)));
}

template <typename D> hstring impl_IAppointment<D>::Location() const
{
    hstring value;
    check_hresult(shim()->get_Location(put(value)));
    return value;
}

template <typename D> void impl_IAppointment<D>::Location(hstring_ref value) const
{
    check_hresult(shim()->put_Location(get(value)));
}

template <typename D> hstring impl_IAppointment<D>::Subject() const
{
    hstring value;
    check_hresult(shim()->get_Subject(put(value)));
    return value;
}

template <typename D> void impl_IAppointment<D>::Subject(hstring_ref value) const
{
    check_hresult(shim()->put_Subject(get(value)));
}

template <typename D> hstring impl_IAppointment<D>::Details() const
{
    hstring value;
    check_hresult(shim()->get_Details(put(value)));
    return value;
}

template <typename D> void impl_IAppointment<D>::Details(hstring_ref value) const
{
    check_hresult(shim()->put_Details(get(value)));
}

template <typename D> Windows::Foundation::IReference<Windows::Foundation::TimeSpan> impl_IAppointment<D>::Reminder() const
{
    Windows::Foundation::IReference<Windows::Foundation::TimeSpan> value;
    check_hresult(shim()->get_Reminder(put(value)));
    return value;
}

template <typename D> void impl_IAppointment<D>::Reminder(const Windows::Foundation::IReference<Windows::Foundation::TimeSpan> & value) const
{
    check_hresult(shim()->put_Reminder(get(value)));
}

template <typename D> Windows::ApplicationModel::Appointments::AppointmentOrganizer impl_IAppointment<D>::Organizer() const
{
    Windows::ApplicationModel::Appointments::AppointmentOrganizer value { nullptr };
    check_hresult(shim()->get_Organizer(put(value)));
    return value;
}

template <typename D> void impl_IAppointment<D>::Organizer(const Windows::ApplicationModel::Appointments::AppointmentOrganizer & value) const
{
    check_hresult(shim()->put_Organizer(get(value)));
}

template <typename D> Windows::Foundation::Collections::IVector<Windows::ApplicationModel::Appointments::AppointmentInvitee> impl_IAppointment<D>::Invitees() const
{
    Windows::Foundation::Collections::IVector<Windows::ApplicationModel::Appointments::AppointmentInvitee> value;
    check_hresult(shim()->get_Invitees(put(value)));
    return value;
}

template <typename D> Windows::ApplicationModel::Appointments::AppointmentRecurrence impl_IAppointment<D>::Recurrence() const
{
    Windows::ApplicationModel::Appointments::AppointmentRecurrence value { nullptr };
    check_hresult(shim()->get_Recurrence(put(value)));
    return value;
}

template <typename D> void impl_IAppointment<D>::Recurrence(const Windows::ApplicationModel::Appointments::AppointmentRecurrence & value) const
{
    check_hresult(shim()->put_Recurrence(get(value)));
}

template <typename D> Windows::ApplicationModel::Appointments::AppointmentBusyStatus impl_IAppointment<D>::BusyStatus() const
{
    Windows::ApplicationModel::Appointments::AppointmentBusyStatus value {};
    check_hresult(shim()->get_BusyStatus(&value));
    return value;
}

template <typename D> void impl_IAppointment<D>::BusyStatus(Windows::ApplicationModel::Appointments::AppointmentBusyStatus value) const
{
    check_hresult(shim()->put_BusyStatus(value));
}

template <typename D> bool impl_IAppointment<D>::AllDay() const
{
    bool value {};
    check_hresult(shim()->get_AllDay(&value));
    return value;
}

template <typename D> void impl_IAppointment<D>::AllDay(bool value) const
{
    check_hresult(shim()->put_AllDay(value));
}

template <typename D> Windows::ApplicationModel::Appointments::AppointmentSensitivity impl_IAppointment<D>::Sensitivity() const
{
    Windows::ApplicationModel::Appointments::AppointmentSensitivity value {};
    check_hresult(shim()->get_Sensitivity(&value));
    return value;
}

template <typename D> void impl_IAppointment<D>::Sensitivity(Windows::ApplicationModel::Appointments::AppointmentSensitivity value) const
{
    check_hresult(shim()->put_Sensitivity(value));
}

template <typename D> Windows::Foundation::Uri impl_IAppointment<D>::Uri() const
{
    Windows::Foundation::Uri value { nullptr };
    check_hresult(shim()->get_Uri(put(value)));
    return value;
}

template <typename D> void impl_IAppointment<D>::Uri(const Windows::Foundation::Uri & value) const
{
    check_hresult(shim()->put_Uri(get(value)));
}

template <typename D> hstring impl_IAppointment2<D>::LocalId() const
{
    hstring value;
    check_hresult(shim()->get_LocalId(put(value)));
    return value;
}

template <typename D> hstring impl_IAppointment2<D>::CalendarId() const
{
    hstring value;
    check_hresult(shim()->get_CalendarId(put(value)));
    return value;
}

template <typename D> hstring impl_IAppointment2<D>::RoamingId() const
{
    hstring value;
    check_hresult(shim()->get_RoamingId(put(value)));
    return value;
}

template <typename D> void impl_IAppointment2<D>::RoamingId(hstring_ref value) const
{
    check_hresult(shim()->put_RoamingId(get(value)));
}

template <typename D> Windows::Foundation::IReference<Windows::Foundation::DateTime> impl_IAppointment2<D>::OriginalStartTime() const
{
    Windows::Foundation::IReference<Windows::Foundation::DateTime> value;
    check_hresult(shim()->get_OriginalStartTime(put(value)));
    return value;
}

template <typename D> bool impl_IAppointment2<D>::IsResponseRequested() const
{
    bool value {};
    check_hresult(shim()->get_IsResponseRequested(&value));
    return value;
}

template <typename D> void impl_IAppointment2<D>::IsResponseRequested(bool value) const
{
    check_hresult(shim()->put_IsResponseRequested(value));
}

template <typename D> bool impl_IAppointment2<D>::AllowNewTimeProposal() const
{
    bool value {};
    check_hresult(shim()->get_AllowNewTimeProposal(&value));
    return value;
}

template <typename D> void impl_IAppointment2<D>::AllowNewTimeProposal(bool value) const
{
    check_hresult(shim()->put_AllowNewTimeProposal(value));
}

template <typename D> hstring impl_IAppointment2<D>::OnlineMeetingLink() const
{
    hstring value;
    check_hresult(shim()->get_OnlineMeetingLink(put(value)));
    return value;
}

template <typename D> void impl_IAppointment2<D>::OnlineMeetingLink(hstring_ref value) const
{
    check_hresult(shim()->put_OnlineMeetingLink(get(value)));
}

template <typename D> Windows::Foundation::IReference<Windows::Foundation::DateTime> impl_IAppointment2<D>::ReplyTime() const
{
    Windows::Foundation::IReference<Windows::Foundation::DateTime> value;
    check_hresult(shim()->get_ReplyTime(put(value)));
    return value;
}

template <typename D> void impl_IAppointment2<D>::ReplyTime(const Windows::Foundation::IReference<Windows::Foundation::DateTime> & value) const
{
    check_hresult(shim()->put_ReplyTime(get(value)));
}

template <typename D> Windows::ApplicationModel::Appointments::AppointmentParticipantResponse impl_IAppointment2<D>::UserResponse() const
{
    Windows::ApplicationModel::Appointments::AppointmentParticipantResponse value {};
    check_hresult(shim()->get_UserResponse(&value));
    return value;
}

template <typename D> void impl_IAppointment2<D>::UserResponse(Windows::ApplicationModel::Appointments::AppointmentParticipantResponse value) const
{
    check_hresult(shim()->put_UserResponse(value));
}

template <typename D> bool impl_IAppointment2<D>::HasInvitees() const
{
    bool value {};
    check_hresult(shim()->get_HasInvitees(&value));
    return value;
}

template <typename D> bool impl_IAppointment2<D>::IsCanceledMeeting() const
{
    bool value {};
    check_hresult(shim()->get_IsCanceledMeeting(&value));
    return value;
}

template <typename D> void impl_IAppointment2<D>::IsCanceledMeeting(bool value) const
{
    check_hresult(shim()->put_IsCanceledMeeting(value));
}

template <typename D> bool impl_IAppointment2<D>::IsOrganizedByUser() const
{
    bool value {};
    check_hresult(shim()->get_IsOrganizedByUser(&value));
    return value;
}

template <typename D> void impl_IAppointment2<D>::IsOrganizedByUser(bool value) const
{
    check_hresult(shim()->put_IsOrganizedByUser(value));
}

template <typename D> uint64_t impl_IAppointment3<D>::ChangeNumber() const
{
    uint64_t value {};
    check_hresult(shim()->get_ChangeNumber(&value));
    return value;
}

template <typename D> uint64_t impl_IAppointment3<D>::RemoteChangeNumber() const
{
    uint64_t value {};
    check_hresult(shim()->get_RemoteChangeNumber(&value));
    return value;
}

template <typename D> void impl_IAppointment3<D>::RemoteChangeNumber(uint64_t value) const
{
    check_hresult(shim()->put_RemoteChangeNumber(value));
}

template <typename D> Windows::ApplicationModel::Appointments::AppointmentDetailsKind impl_IAppointment3<D>::DetailsKind() const
{
    Windows::ApplicationModel::Appointments::AppointmentDetailsKind value {};
    check_hresult(shim()->get_DetailsKind(&value));
    return value;
}

template <typename D> void impl_IAppointment3<D>::DetailsKind(Windows::ApplicationModel::Appointments::AppointmentDetailsKind value) const
{
    check_hresult(shim()->put_DetailsKind(value));
}

template <typename D> Windows::Foundation::Collections::IVector<hstring> impl_IFindAppointmentsOptions<D>::CalendarIds() const
{
    Windows::Foundation::Collections::IVector<hstring> value;
    check_hresult(shim()->get_CalendarIds(put(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVector<hstring> impl_IFindAppointmentsOptions<D>::FetchProperties() const
{
    Windows::Foundation::Collections::IVector<hstring> value;
    check_hresult(shim()->get_FetchProperties(put(value)));
    return value;
}

template <typename D> bool impl_IFindAppointmentsOptions<D>::IncludeHidden() const
{
    bool value {};
    check_hresult(shim()->get_IncludeHidden(&value));
    return value;
}

template <typename D> void impl_IFindAppointmentsOptions<D>::IncludeHidden(bool value) const
{
    check_hresult(shim()->put_IncludeHidden(value));
}

template <typename D> uint32_t impl_IFindAppointmentsOptions<D>::MaxCount() const
{
    uint32_t value {};
    check_hresult(shim()->get_MaxCount(&value));
    return value;
}

template <typename D> void impl_IFindAppointmentsOptions<D>::MaxCount(uint32_t value) const
{
    check_hresult(shim()->put_MaxCount(value));
}

template <typename D> Windows::UI::Color impl_IAppointmentCalendar<D>::DisplayColor() const
{
    Windows::UI::Color value {};
    check_hresult(shim()->get_DisplayColor(put(value)));
    return value;
}

template <typename D> hstring impl_IAppointmentCalendar<D>::DisplayName() const
{
    hstring value;
    check_hresult(shim()->get_DisplayName(put(value)));
    return value;
}

template <typename D> void impl_IAppointmentCalendar<D>::DisplayName(hstring_ref value) const
{
    check_hresult(shim()->put_DisplayName(get(value)));
}

template <typename D> hstring impl_IAppointmentCalendar<D>::LocalId() const
{
    hstring value;
    check_hresult(shim()->get_LocalId(put(value)));
    return value;
}

template <typename D> bool impl_IAppointmentCalendar<D>::IsHidden() const
{
    bool value {};
    check_hresult(shim()->get_IsHidden(&value));
    return value;
}

template <typename D> Windows::ApplicationModel::Appointments::AppointmentCalendarOtherAppReadAccess impl_IAppointmentCalendar<D>::OtherAppReadAccess() const
{
    Windows::ApplicationModel::Appointments::AppointmentCalendarOtherAppReadAccess value {};
    check_hresult(shim()->get_OtherAppReadAccess(&value));
    return value;
}

template <typename D> void impl_IAppointmentCalendar<D>::OtherAppReadAccess(Windows::ApplicationModel::Appointments::AppointmentCalendarOtherAppReadAccess value) const
{
    check_hresult(shim()->put_OtherAppReadAccess(value));
}

template <typename D> Windows::ApplicationModel::Appointments::AppointmentCalendarOtherAppWriteAccess impl_IAppointmentCalendar<D>::OtherAppWriteAccess() const
{
    Windows::ApplicationModel::Appointments::AppointmentCalendarOtherAppWriteAccess value {};
    check_hresult(shim()->get_OtherAppWriteAccess(&value));
    return value;
}

template <typename D> void impl_IAppointmentCalendar<D>::OtherAppWriteAccess(Windows::ApplicationModel::Appointments::AppointmentCalendarOtherAppWriteAccess value) const
{
    check_hresult(shim()->put_OtherAppWriteAccess(value));
}

template <typename D> hstring impl_IAppointmentCalendar<D>::SourceDisplayName() const
{
    hstring value;
    check_hresult(shim()->get_SourceDisplayName(put(value)));
    return value;
}

template <typename D> Windows::ApplicationModel::Appointments::AppointmentSummaryCardView impl_IAppointmentCalendar<D>::SummaryCardView() const
{
    Windows::ApplicationModel::Appointments::AppointmentSummaryCardView value {};
    check_hresult(shim()->get_SummaryCardView(&value));
    return value;
}

template <typename D> void impl_IAppointmentCalendar<D>::SummaryCardView(Windows::ApplicationModel::Appointments::AppointmentSummaryCardView value) const
{
    check_hresult(shim()->put_SummaryCardView(value));
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Appointments::Appointment>> impl_IAppointmentCalendar<D>::FindAppointmentsAsync(const Windows::Foundation::DateTime & rangeStart, const Windows::Foundation::TimeSpan & rangeLength) const
{
    Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Appointments::Appointment>> result;
    check_hresult(shim()->abi_FindAppointmentsAsync(get(rangeStart), get(rangeLength), put(result)));
    return result;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Appointments::Appointment>> impl_IAppointmentCalendar<D>::FindAppointmentsAsync(const Windows::Foundation::DateTime & rangeStart, const Windows::Foundation::TimeSpan & rangeLength, const Windows::ApplicationModel::Appointments::FindAppointmentsOptions & options) const
{
    Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Appointments::Appointment>> result;
    check_hresult(shim()->abi_FindAppointmentsAsyncWithOptions(get(rangeStart), get(rangeLength), get(options), put(result)));
    return result;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Appointments::AppointmentException>> impl_IAppointmentCalendar<D>::FindExceptionsFromMasterAsync(hstring_ref masterLocalId) const
{
    Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Appointments::AppointmentException>> value;
    check_hresult(shim()->abi_FindExceptionsFromMasterAsync(get(masterLocalId), put(value)));
    return value;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Appointments::Appointment>> impl_IAppointmentCalendar<D>::FindAllInstancesAsync(hstring_ref masterLocalId, const Windows::Foundation::DateTime & rangeStart, const Windows::Foundation::TimeSpan & rangeLength) const
{
    Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Appointments::Appointment>> value;
    check_hresult(shim()->abi_FindAllInstancesAsync(get(masterLocalId), get(rangeStart), get(rangeLength), put(value)));
    return value;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Appointments::Appointment>> impl_IAppointmentCalendar<D>::FindAllInstancesAsync(hstring_ref masterLocalId, const Windows::Foundation::DateTime & rangeStart, const Windows::Foundation::TimeSpan & rangeLength, const Windows::ApplicationModel::Appointments::FindAppointmentsOptions & pOptions) const
{
    Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Appointments::Appointment>> value;
    check_hresult(shim()->abi_FindAllInstancesAsyncWithOptions(get(masterLocalId), get(rangeStart), get(rangeLength), get(pOptions), put(value)));
    return value;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Appointments::Appointment> impl_IAppointmentCalendar<D>::GetAppointmentAsync(hstring_ref localId) const
{
    Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Appointments::Appointment> result;
    check_hresult(shim()->abi_GetAppointmentAsync(get(localId), put(result)));
    return result;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Appointments::Appointment> impl_IAppointmentCalendar<D>::GetAppointmentInstanceAsync(hstring_ref localId, const Windows::Foundation::DateTime & instanceStartTime) const
{
    Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Appointments::Appointment> result;
    check_hresult(shim()->abi_GetAppointmentInstanceAsync(get(localId), get(instanceStartTime), put(result)));
    return result;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Appointments::Appointment>> impl_IAppointmentCalendar<D>::FindUnexpandedAppointmentsAsync() const
{
    Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Appointments::Appointment>> result;
    check_hresult(shim()->abi_FindUnexpandedAppointmentsAsync(put(result)));
    return result;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Appointments::Appointment>> impl_IAppointmentCalendar<D>::FindUnexpandedAppointmentsAsync(const Windows::ApplicationModel::Appointments::FindAppointmentsOptions & options) const
{
    Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Appointments::Appointment>> result;
    check_hresult(shim()->abi_FindUnexpandedAppointmentsAsyncWithOptions(get(options), put(result)));
    return result;
}

template <typename D> Windows::Foundation::IAsyncAction impl_IAppointmentCalendar<D>::DeleteAsync() const
{
    Windows::Foundation::IAsyncAction asyncAction;
    check_hresult(shim()->abi_DeleteAsync(put(asyncAction)));
    return asyncAction;
}

template <typename D> Windows::Foundation::IAsyncAction impl_IAppointmentCalendar<D>::SaveAsync() const
{
    Windows::Foundation::IAsyncAction asyncAction;
    check_hresult(shim()->abi_SaveAsync(put(asyncAction)));
    return asyncAction;
}

template <typename D> Windows::Foundation::IAsyncAction impl_IAppointmentCalendar<D>::DeleteAppointmentAsync(hstring_ref localId) const
{
    Windows::Foundation::IAsyncAction asyncAction;
    check_hresult(shim()->abi_DeleteAppointmentAsync(get(localId), put(asyncAction)));
    return asyncAction;
}

template <typename D> Windows::Foundation::IAsyncAction impl_IAppointmentCalendar<D>::DeleteAppointmentInstanceAsync(hstring_ref localId, const Windows::Foundation::DateTime & instanceStartTime) const
{
    Windows::Foundation::IAsyncAction asyncAction;
    check_hresult(shim()->abi_DeleteAppointmentInstanceAsync(get(localId), get(instanceStartTime), put(asyncAction)));
    return asyncAction;
}

template <typename D> Windows::Foundation::IAsyncAction impl_IAppointmentCalendar<D>::SaveAppointmentAsync(const Windows::ApplicationModel::Appointments::Appointment & pAppointment) const
{
    Windows::Foundation::IAsyncAction asyncAction;
    check_hresult(shim()->abi_SaveAppointmentAsync(get(pAppointment), put(asyncAction)));
    return asyncAction;
}

template <typename D> Windows::ApplicationModel::Appointments::AppointmentCalendarSyncManager impl_IAppointmentCalendar2<D>::SyncManager() const
{
    Windows::ApplicationModel::Appointments::AppointmentCalendarSyncManager value { nullptr };
    check_hresult(shim()->get_SyncManager(put(value)));
    return value;
}

template <typename D> hstring impl_IAppointmentCalendar2<D>::RemoteId() const
{
    hstring value;
    check_hresult(shim()->get_RemoteId(put(value)));
    return value;
}

template <typename D> void impl_IAppointmentCalendar2<D>::RemoteId(hstring_ref value) const
{
    check_hresult(shim()->put_RemoteId(get(value)));
}

template <typename D> void impl_IAppointmentCalendar2<D>::DisplayColor(const Windows::UI::Color & value) const
{
    check_hresult(shim()->put_DisplayColor(get(value)));
}

template <typename D> void impl_IAppointmentCalendar2<D>::IsHidden(bool value) const
{
    check_hresult(shim()->put_IsHidden(value));
}

template <typename D> hstring impl_IAppointmentCalendar2<D>::UserDataAccountId() const
{
    hstring value;
    check_hresult(shim()->get_UserDataAccountId(put(value)));
    return value;
}

template <typename D> bool impl_IAppointmentCalendar2<D>::CanCreateOrUpdateAppointments() const
{
    bool value {};
    check_hresult(shim()->get_CanCreateOrUpdateAppointments(&value));
    return value;
}

template <typename D> void impl_IAppointmentCalendar2<D>::CanCreateOrUpdateAppointments(bool value) const
{
    check_hresult(shim()->put_CanCreateOrUpdateAppointments(value));
}

template <typename D> bool impl_IAppointmentCalendar2<D>::CanCancelMeetings() const
{
    bool value {};
    check_hresult(shim()->get_CanCancelMeetings(&value));
    return value;
}

template <typename D> void impl_IAppointmentCalendar2<D>::CanCancelMeetings(bool value) const
{
    check_hresult(shim()->put_CanCancelMeetings(value));
}

template <typename D> bool impl_IAppointmentCalendar2<D>::CanForwardMeetings() const
{
    bool value {};
    check_hresult(shim()->get_CanForwardMeetings(&value));
    return value;
}

template <typename D> void impl_IAppointmentCalendar2<D>::CanForwardMeetings(bool value) const
{
    check_hresult(shim()->put_CanForwardMeetings(value));
}

template <typename D> bool impl_IAppointmentCalendar2<D>::CanProposeNewTimeForMeetings() const
{
    bool value {};
    check_hresult(shim()->get_CanProposeNewTimeForMeetings(&value));
    return value;
}

template <typename D> void impl_IAppointmentCalendar2<D>::CanProposeNewTimeForMeetings(bool value) const
{
    check_hresult(shim()->put_CanProposeNewTimeForMeetings(value));
}

template <typename D> bool impl_IAppointmentCalendar2<D>::CanUpdateMeetingResponses() const
{
    bool value {};
    check_hresult(shim()->get_CanUpdateMeetingResponses(&value));
    return value;
}

template <typename D> void impl_IAppointmentCalendar2<D>::CanUpdateMeetingResponses(bool value) const
{
    check_hresult(shim()->put_CanUpdateMeetingResponses(value));
}

template <typename D> bool impl_IAppointmentCalendar2<D>::CanNotifyInvitees() const
{
    bool value {};
    check_hresult(shim()->get_CanNotifyInvitees(&value));
    return value;
}

template <typename D> void impl_IAppointmentCalendar2<D>::CanNotifyInvitees(bool value) const
{
    check_hresult(shim()->put_CanNotifyInvitees(value));
}

template <typename D> bool impl_IAppointmentCalendar2<D>::MustNofityInvitees() const
{
    bool value {};
    check_hresult(shim()->get_MustNofityInvitees(&value));
    return value;
}

template <typename D> void impl_IAppointmentCalendar2<D>::MustNofityInvitees(bool value) const
{
    check_hresult(shim()->put_MustNofityInvitees(value));
}

template <typename D> Windows::Foundation::IAsyncOperation<bool> impl_IAppointmentCalendar2<D>::TryCreateOrUpdateAppointmentAsync(const Windows::ApplicationModel::Appointments::Appointment & appointment, bool notifyInvitees) const
{
    Windows::Foundation::IAsyncOperation<bool> result;
    check_hresult(shim()->abi_TryCreateOrUpdateAppointmentAsync(get(appointment), notifyInvitees, put(result)));
    return result;
}

template <typename D> Windows::Foundation::IAsyncOperation<bool> impl_IAppointmentCalendar2<D>::TryCancelMeetingAsync(const Windows::ApplicationModel::Appointments::Appointment & meeting, hstring_ref subject, hstring_ref comment, bool notifyInvitees) const
{
    Windows::Foundation::IAsyncOperation<bool> result;
    check_hresult(shim()->abi_TryCancelMeetingAsync(get(meeting), get(subject), get(comment), notifyInvitees, put(result)));
    return result;
}

template <typename D> Windows::Foundation::IAsyncOperation<bool> impl_IAppointmentCalendar2<D>::TryForwardMeetingAsync(const Windows::ApplicationModel::Appointments::Appointment & meeting, const Windows::Foundation::Collections::IIterable<Windows::ApplicationModel::Appointments::AppointmentInvitee> & invitees, hstring_ref subject, hstring_ref forwardHeader, hstring_ref comment) const
{
    Windows::Foundation::IAsyncOperation<bool> result;
    check_hresult(shim()->abi_TryForwardMeetingAsync(get(meeting), get(invitees), get(subject), get(forwardHeader), get(comment), put(result)));
    return result;
}

template <typename D> Windows::Foundation::IAsyncOperation<bool> impl_IAppointmentCalendar2<D>::TryProposeNewTimeForMeetingAsync(const Windows::ApplicationModel::Appointments::Appointment & meeting, const Windows::Foundation::DateTime & newStartTime, const Windows::Foundation::TimeSpan & newDuration, hstring_ref subject, hstring_ref comment) const
{
    Windows::Foundation::IAsyncOperation<bool> result;
    check_hresult(shim()->abi_TryProposeNewTimeForMeetingAsync(get(meeting), get(newStartTime), get(newDuration), get(subject), get(comment), put(result)));
    return result;
}

template <typename D> Windows::Foundation::IAsyncOperation<bool> impl_IAppointmentCalendar2<D>::TryUpdateMeetingResponseAsync(const Windows::ApplicationModel::Appointments::Appointment & meeting, Windows::ApplicationModel::Appointments::AppointmentParticipantResponse response, hstring_ref subject, hstring_ref comment, bool sendUpdate) const
{
    Windows::Foundation::IAsyncOperation<bool> result;
    check_hresult(shim()->abi_TryUpdateMeetingResponseAsync(get(meeting), response, get(subject), get(comment), sendUpdate, put(result)));
    return result;
}

template <typename D> Windows::Foundation::IAsyncAction impl_IAppointmentCalendar3<D>::RegisterSyncManagerAsync() const
{
    Windows::Foundation::IAsyncAction result;
    check_hresult(shim()->abi_RegisterSyncManagerAsync(put(result)));
    return result;
}

template <typename D> Windows::ApplicationModel::Appointments::AppointmentCalendarSyncStatus impl_IAppointmentCalendarSyncManager<D>::Status() const
{
    Windows::ApplicationModel::Appointments::AppointmentCalendarSyncStatus value {};
    check_hresult(shim()->get_Status(&value));
    return value;
}

template <typename D> Windows::Foundation::DateTime impl_IAppointmentCalendarSyncManager<D>::LastSuccessfulSyncTime() const
{
    Windows::Foundation::DateTime value {};
    check_hresult(shim()->get_LastSuccessfulSyncTime(put(value)));
    return value;
}

template <typename D> Windows::Foundation::DateTime impl_IAppointmentCalendarSyncManager<D>::LastAttemptedSyncTime() const
{
    Windows::Foundation::DateTime value {};
    check_hresult(shim()->get_LastAttemptedSyncTime(put(value)));
    return value;
}

template <typename D> Windows::Foundation::IAsyncOperation<bool> impl_IAppointmentCalendarSyncManager<D>::SyncAsync() const
{
    Windows::Foundation::IAsyncOperation<bool> result;
    check_hresult(shim()->abi_SyncAsync(put(result)));
    return result;
}

template <typename D> event_token impl_IAppointmentCalendarSyncManager<D>::SyncStatusChanged(const Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::Appointments::AppointmentCalendarSyncManager, Windows::IInspectable> & handler) const
{
    event_token token {};
    check_hresult(shim()->add_SyncStatusChanged(get(handler), &token));
    return token;
}

template <typename D> event_revoker<IAppointmentCalendarSyncManager> impl_IAppointmentCalendarSyncManager<D>::SyncStatusChanged(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::Appointments::AppointmentCalendarSyncManager, Windows::IInspectable> & handler) const
{
    return impl::make_event_revoker<D, IAppointmentCalendarSyncManager>(this, &ABI::Windows::ApplicationModel::Appointments::IAppointmentCalendarSyncManager::remove_SyncStatusChanged, SyncStatusChanged(handler));
}

template <typename D> void impl_IAppointmentCalendarSyncManager<D>::SyncStatusChanged(event_token token) const
{
    check_hresult(shim()->remove_SyncStatusChanged(token));
}

template <typename D> void impl_IAppointmentCalendarSyncManager2<D>::Status(Windows::ApplicationModel::Appointments::AppointmentCalendarSyncStatus value) const
{
    check_hresult(shim()->put_Status(value));
}

template <typename D> void impl_IAppointmentCalendarSyncManager2<D>::LastSuccessfulSyncTime(const Windows::Foundation::DateTime & value) const
{
    check_hresult(shim()->put_LastSuccessfulSyncTime(get(value)));
}

template <typename D> void impl_IAppointmentCalendarSyncManager2<D>::LastAttemptedSyncTime(const Windows::Foundation::DateTime & value) const
{
    check_hresult(shim()->put_LastAttemptedSyncTime(get(value)));
}

template <typename D> hstring impl_IAppointmentPropertiesStatics<D>::Subject() const
{
    hstring value;
    check_hresult(shim()->get_Subject(put(value)));
    return value;
}

template <typename D> hstring impl_IAppointmentPropertiesStatics<D>::Location() const
{
    hstring value;
    check_hresult(shim()->get_Location(put(value)));
    return value;
}

template <typename D> hstring impl_IAppointmentPropertiesStatics<D>::StartTime() const
{
    hstring value;
    check_hresult(shim()->get_StartTime(put(value)));
    return value;
}

template <typename D> hstring impl_IAppointmentPropertiesStatics<D>::Duration() const
{
    hstring value;
    check_hresult(shim()->get_Duration(put(value)));
    return value;
}

template <typename D> hstring impl_IAppointmentPropertiesStatics<D>::Reminder() const
{
    hstring value;
    check_hresult(shim()->get_Reminder(put(value)));
    return value;
}

template <typename D> hstring impl_IAppointmentPropertiesStatics<D>::BusyStatus() const
{
    hstring value;
    check_hresult(shim()->get_BusyStatus(put(value)));
    return value;
}

template <typename D> hstring impl_IAppointmentPropertiesStatics<D>::Sensitivity() const
{
    hstring value;
    check_hresult(shim()->get_Sensitivity(put(value)));
    return value;
}

template <typename D> hstring impl_IAppointmentPropertiesStatics<D>::OriginalStartTime() const
{
    hstring value;
    check_hresult(shim()->get_OriginalStartTime(put(value)));
    return value;
}

template <typename D> hstring impl_IAppointmentPropertiesStatics<D>::IsResponseRequested() const
{
    hstring value;
    check_hresult(shim()->get_IsResponseRequested(put(value)));
    return value;
}

template <typename D> hstring impl_IAppointmentPropertiesStatics<D>::AllowNewTimeProposal() const
{
    hstring value;
    check_hresult(shim()->get_AllowNewTimeProposal(put(value)));
    return value;
}

template <typename D> hstring impl_IAppointmentPropertiesStatics<D>::AllDay() const
{
    hstring value;
    check_hresult(shim()->get_AllDay(put(value)));
    return value;
}

template <typename D> hstring impl_IAppointmentPropertiesStatics<D>::Details() const
{
    hstring value;
    check_hresult(shim()->get_Details(put(value)));
    return value;
}

template <typename D> hstring impl_IAppointmentPropertiesStatics<D>::OnlineMeetingLink() const
{
    hstring value;
    check_hresult(shim()->get_OnlineMeetingLink(put(value)));
    return value;
}

template <typename D> hstring impl_IAppointmentPropertiesStatics<D>::ReplyTime() const
{
    hstring value;
    check_hresult(shim()->get_ReplyTime(put(value)));
    return value;
}

template <typename D> hstring impl_IAppointmentPropertiesStatics<D>::Organizer() const
{
    hstring value;
    check_hresult(shim()->get_Organizer(put(value)));
    return value;
}

template <typename D> hstring impl_IAppointmentPropertiesStatics<D>::UserResponse() const
{
    hstring value;
    check_hresult(shim()->get_UserResponse(put(value)));
    return value;
}

template <typename D> hstring impl_IAppointmentPropertiesStatics<D>::HasInvitees() const
{
    hstring value;
    check_hresult(shim()->get_HasInvitees(put(value)));
    return value;
}

template <typename D> hstring impl_IAppointmentPropertiesStatics<D>::IsCanceledMeeting() const
{
    hstring value;
    check_hresult(shim()->get_IsCanceledMeeting(put(value)));
    return value;
}

template <typename D> hstring impl_IAppointmentPropertiesStatics<D>::IsOrganizedByUser() const
{
    hstring value;
    check_hresult(shim()->get_IsOrganizedByUser(put(value)));
    return value;
}

template <typename D> hstring impl_IAppointmentPropertiesStatics<D>::Recurrence() const
{
    hstring value;
    check_hresult(shim()->get_Recurrence(put(value)));
    return value;
}

template <typename D> hstring impl_IAppointmentPropertiesStatics<D>::Uri() const
{
    hstring value;
    check_hresult(shim()->get_Uri(put(value)));
    return value;
}

template <typename D> hstring impl_IAppointmentPropertiesStatics<D>::Invitees() const
{
    hstring value;
    check_hresult(shim()->get_Invitees(put(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVector<hstring> impl_IAppointmentPropertiesStatics<D>::DefaultProperties() const
{
    Windows::Foundation::Collections::IVector<hstring> value;
    check_hresult(shim()->get_DefaultProperties(put(value)));
    return value;
}

template <typename D> hstring impl_IAppointmentPropertiesStatics2<D>::ChangeNumber() const
{
    hstring value;
    check_hresult(shim()->get_ChangeNumber(put(value)));
    return value;
}

template <typename D> hstring impl_IAppointmentPropertiesStatics2<D>::RemoteChangeNumber() const
{
    hstring value;
    check_hresult(shim()->get_RemoteChangeNumber(put(value)));
    return value;
}

template <typename D> hstring impl_IAppointmentPropertiesStatics2<D>::DetailsKind() const
{
    hstring value;
    check_hresult(shim()->get_DetailsKind(put(value)));
    return value;
}

template <typename D> Windows::ApplicationModel::Appointments::AppointmentConflictType impl_IAppointmentConflictResult<D>::Type() const
{
    Windows::ApplicationModel::Appointments::AppointmentConflictType value {};
    check_hresult(shim()->get_Type(&value));
    return value;
}

template <typename D> Windows::Foundation::DateTime impl_IAppointmentConflictResult<D>::Date() const
{
    Windows::Foundation::DateTime value {};
    check_hresult(shim()->get_Date(put(value)));
    return value;
}

template <typename D> Windows::ApplicationModel::Appointments::Appointment impl_IAppointmentStoreChange<D>::Appointment() const
{
    Windows::ApplicationModel::Appointments::Appointment value { nullptr };
    check_hresult(shim()->get_Appointment(put(value)));
    return value;
}

template <typename D> Windows::ApplicationModel::Appointments::AppointmentStoreChangeType impl_IAppointmentStoreChange<D>::ChangeType() const
{
    Windows::ApplicationModel::Appointments::AppointmentStoreChangeType value {};
    check_hresult(shim()->get_ChangeType(&value));
    return value;
}

template <typename D> Windows::ApplicationModel::Appointments::AppointmentCalendar impl_IAppointmentStoreChange2<D>::AppointmentCalendar() const
{
    Windows::ApplicationModel::Appointments::AppointmentCalendar value { nullptr };
    check_hresult(shim()->get_AppointmentCalendar(put(value)));
    return value;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Appointments::AppointmentStoreChange>> impl_IAppointmentStoreChangeReader<D>::ReadBatchAsync() const
{
    Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Appointments::AppointmentStoreChange>> result;
    check_hresult(shim()->abi_ReadBatchAsync(put(result)));
    return result;
}

template <typename D> void impl_IAppointmentStoreChangeReader<D>::AcceptChanges() const
{
    check_hresult(shim()->abi_AcceptChanges());
}

template <typename D> void impl_IAppointmentStoreChangeReader<D>::AcceptChangesThrough(const Windows::ApplicationModel::Appointments::AppointmentStoreChange & lastChangeToAccept) const
{
    check_hresult(shim()->abi_AcceptChangesThrough(get(lastChangeToAccept)));
}

template <typename D> Windows::ApplicationModel::Appointments::AppointmentStoreChangeReader impl_IAppointmentStoreChangeTracker<D>::GetChangeReader() const
{
    Windows::ApplicationModel::Appointments::AppointmentStoreChangeReader value { nullptr };
    check_hresult(shim()->abi_GetChangeReader(put(value)));
    return value;
}

template <typename D> void impl_IAppointmentStoreChangeTracker<D>::Enable() const
{
    check_hresult(shim()->abi_Enable());
}

template <typename D> void impl_IAppointmentStoreChangeTracker<D>::Reset() const
{
    check_hresult(shim()->abi_Reset());
}

template <typename D> Windows::ApplicationModel::Appointments::AppointmentStoreChangedDeferral impl_IAppointmentStoreChangedEventArgs<D>::GetDeferral() const
{
    Windows::ApplicationModel::Appointments::AppointmentStoreChangedDeferral result { nullptr };
    check_hresult(shim()->abi_GetDeferral(put(result)));
    return result;
}

template <typename D> void impl_IAppointmentStoreChangedDeferral<D>::Complete() const
{
    check_hresult(shim()->abi_Complete());
}

template <typename D> Windows::ApplicationModel::Appointments::AppointmentStoreChangeTracker impl_IAppointmentStore<D>::ChangeTracker() const
{
    Windows::ApplicationModel::Appointments::AppointmentStoreChangeTracker value { nullptr };
    check_hresult(shim()->get_ChangeTracker(put(value)));
    return value;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Appointments::AppointmentCalendar> impl_IAppointmentStore<D>::CreateAppointmentCalendarAsync(hstring_ref name) const
{
    Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Appointments::AppointmentCalendar> operation;
    check_hresult(shim()->abi_CreateAppointmentCalendarAsync(get(name), put(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Appointments::AppointmentCalendar> impl_IAppointmentStore<D>::GetAppointmentCalendarAsync(hstring_ref calendarId) const
{
    Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Appointments::AppointmentCalendar> result;
    check_hresult(shim()->abi_GetAppointmentCalendarAsync(get(calendarId), put(result)));
    return result;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Appointments::Appointment> impl_IAppointmentStore<D>::GetAppointmentAsync(hstring_ref localId) const
{
    Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Appointments::Appointment> result;
    check_hresult(shim()->abi_GetAppointmentAsync(get(localId), put(result)));
    return result;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Appointments::Appointment> impl_IAppointmentStore<D>::GetAppointmentInstanceAsync(hstring_ref localId, const Windows::Foundation::DateTime & instanceStartTime) const
{
    Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Appointments::Appointment> result;
    check_hresult(shim()->abi_GetAppointmentInstanceAsync(get(localId), get(instanceStartTime), put(result)));
    return result;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Appointments::AppointmentCalendar>> impl_IAppointmentStore<D>::FindAppointmentCalendarsAsync() const
{
    Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Appointments::AppointmentCalendar>> result;
    check_hresult(shim()->abi_FindAppointmentCalendarsAsync(put(result)));
    return result;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Appointments::AppointmentCalendar>> impl_IAppointmentStore<D>::FindAppointmentCalendarsAsync(Windows::ApplicationModel::Appointments::FindAppointmentCalendarsOptions options) const
{
    Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Appointments::AppointmentCalendar>> result;
    check_hresult(shim()->abi_FindAppointmentCalendarsAsyncWithOptions(options, put(result)));
    return result;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Appointments::Appointment>> impl_IAppointmentStore<D>::FindAppointmentsAsync(const Windows::Foundation::DateTime & rangeStart, const Windows::Foundation::TimeSpan & rangeLength) const
{
    Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Appointments::Appointment>> result;
    check_hresult(shim()->abi_FindAppointmentsAsync(get(rangeStart), get(rangeLength), put(result)));
    return result;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Appointments::Appointment>> impl_IAppointmentStore<D>::FindAppointmentsAsync(const Windows::Foundation::DateTime & rangeStart, const Windows::Foundation::TimeSpan & rangeLength, const Windows::ApplicationModel::Appointments::FindAppointmentsOptions & options) const
{
    Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Appointments::Appointment>> result;
    check_hresult(shim()->abi_FindAppointmentsAsyncWithOptions(get(rangeStart), get(rangeLength), get(options), put(result)));
    return result;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Appointments::AppointmentConflictResult> impl_IAppointmentStore<D>::FindConflictAsync(const Windows::ApplicationModel::Appointments::Appointment & appointment) const
{
    Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Appointments::AppointmentConflictResult> result;
    check_hresult(shim()->abi_FindConflictAsync(get(appointment), put(result)));
    return result;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Appointments::AppointmentConflictResult> impl_IAppointmentStore<D>::FindConflictAsync(const Windows::ApplicationModel::Appointments::Appointment & appointment, const Windows::Foundation::DateTime & instanceStartTime) const
{
    Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Appointments::AppointmentConflictResult> result;
    check_hresult(shim()->abi_FindConflictAsyncWithInstanceStart(get(appointment), get(instanceStartTime), put(result)));
    return result;
}

template <typename D> Windows::Foundation::IAsyncAction impl_IAppointmentStore<D>::MoveAppointmentAsync(const Windows::ApplicationModel::Appointments::Appointment & appointment, const Windows::ApplicationModel::Appointments::AppointmentCalendar & destinationCalendar) const
{
    Windows::Foundation::IAsyncAction asyncAction;
    check_hresult(shim()->abi_MoveAppointmentAsync(get(appointment), get(destinationCalendar), put(asyncAction)));
    return asyncAction;
}

template <typename D> Windows::Foundation::IAsyncOperation<hstring> impl_IAppointmentStore<D>::ShowAddAppointmentAsync(const Windows::ApplicationModel::Appointments::Appointment & appointment, const Windows::Foundation::Rect & selection) const
{
    Windows::Foundation::IAsyncOperation<hstring> operation;
    check_hresult(shim()->abi_ShowAddAppointmentAsync(get(appointment), get(selection), put(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperation<hstring> impl_IAppointmentStore<D>::ShowReplaceAppointmentAsync(hstring_ref localId, const Windows::ApplicationModel::Appointments::Appointment & appointment, const Windows::Foundation::Rect & selection) const
{
    Windows::Foundation::IAsyncOperation<hstring> operation;
    check_hresult(shim()->abi_ShowReplaceAppointmentAsync(get(localId), get(appointment), get(selection), put(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperation<hstring> impl_IAppointmentStore<D>::ShowReplaceAppointmentAsync(hstring_ref localId, const Windows::ApplicationModel::Appointments::Appointment & appointment, const Windows::Foundation::Rect & selection, Windows::UI::Popups::Placement preferredPlacement, const Windows::Foundation::DateTime & instanceStartDate) const
{
    Windows::Foundation::IAsyncOperation<hstring> operation;
    check_hresult(shim()->abi_ShowReplaceAppointmentWithPlacementAndDateAsync(get(localId), get(appointment), get(selection), preferredPlacement, get(instanceStartDate), put(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperation<bool> impl_IAppointmentStore<D>::ShowRemoveAppointmentAsync(hstring_ref localId, const Windows::Foundation::Rect & selection) const
{
    Windows::Foundation::IAsyncOperation<bool> operation;
    check_hresult(shim()->abi_ShowRemoveAppointmentAsync(get(localId), get(selection), put(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperation<bool> impl_IAppointmentStore<D>::ShowRemoveAppointmentAsync(hstring_ref localId, const Windows::Foundation::Rect & selection, Windows::UI::Popups::Placement preferredPlacement, const Windows::Foundation::DateTime & instanceStartDate) const
{
    Windows::Foundation::IAsyncOperation<bool> operation;
    check_hresult(shim()->abi_ShowRemoveAppointmentWithPlacementAndDateAsync(get(localId), get(selection), preferredPlacement, get(instanceStartDate), put(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncAction impl_IAppointmentStore<D>::ShowAppointmentDetailsAsync(hstring_ref localId) const
{
    Windows::Foundation::IAsyncAction asyncAction;
    check_hresult(shim()->abi_ShowAppointmentDetailsAsync(get(localId), put(asyncAction)));
    return asyncAction;
}

template <typename D> Windows::Foundation::IAsyncAction impl_IAppointmentStore<D>::ShowAppointmentDetailsAsync(hstring_ref localId, const Windows::Foundation::DateTime & instanceStartDate) const
{
    Windows::Foundation::IAsyncAction asyncAction;
    check_hresult(shim()->abi_ShowAppointmentDetailsWithDateAsync(get(localId), get(instanceStartDate), put(asyncAction)));
    return asyncAction;
}

template <typename D> Windows::Foundation::IAsyncOperation<hstring> impl_IAppointmentStore<D>::ShowEditNewAppointmentAsync(const Windows::ApplicationModel::Appointments::Appointment & appointment) const
{
    Windows::Foundation::IAsyncOperation<hstring> operation;
    check_hresult(shim()->abi_ShowEditNewAppointmentAsync(get(appointment), put(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<hstring>> impl_IAppointmentStore<D>::FindLocalIdsFromRoamingIdAsync(hstring_ref roamingId) const
{
    Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<hstring>> operation;
    check_hresult(shim()->abi_FindLocalIdsFromRoamingIdAsync(get(roamingId), put(operation)));
    return operation;
}

template <typename D> event_token impl_IAppointmentStore2<D>::StoreChanged(const Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::Appointments::AppointmentStore, Windows::ApplicationModel::Appointments::AppointmentStoreChangedEventArgs> & pHandler) const
{
    event_token pToken {};
    check_hresult(shim()->add_StoreChanged(get(pHandler), &pToken));
    return pToken;
}

template <typename D> event_revoker<IAppointmentStore2> impl_IAppointmentStore2<D>::StoreChanged(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::Appointments::AppointmentStore, Windows::ApplicationModel::Appointments::AppointmentStoreChangedEventArgs> & pHandler) const
{
    return impl::make_event_revoker<D, IAppointmentStore2>(this, &ABI::Windows::ApplicationModel::Appointments::IAppointmentStore2::remove_StoreChanged, StoreChanged(pHandler));
}

template <typename D> void impl_IAppointmentStore2<D>::StoreChanged(event_token token) const
{
    check_hresult(shim()->remove_StoreChanged(token));
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Appointments::AppointmentCalendar> impl_IAppointmentStore2<D>::CreateAppointmentCalendarAsync(hstring_ref name, hstring_ref userDataAccountId) const
{
    Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Appointments::AppointmentCalendar> operation;
    check_hresult(shim()->abi_CreateAppointmentCalendarInAccountAsync(get(name), get(userDataAccountId), put(operation)));
    return operation;
}

template <typename D> Windows::ApplicationModel::Appointments::Appointment impl_IAppointmentException<D>::Appointment() const
{
    Windows::ApplicationModel::Appointments::Appointment value { nullptr };
    check_hresult(shim()->get_Appointment(put(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVectorView<hstring> impl_IAppointmentException<D>::ExceptionProperties() const
{
    Windows::Foundation::Collections::IVectorView<hstring> value;
    check_hresult(shim()->get_ExceptionProperties(put(value)));
    return value;
}

template <typename D> bool impl_IAppointmentException<D>::IsDeleted() const
{
    bool value {};
    check_hresult(shim()->get_IsDeleted(&value));
    return value;
}

inline Appointment::Appointment() :
    Appointment(activate_instance<Appointment>())
{}

inline AppointmentInvitee::AppointmentInvitee() :
    AppointmentInvitee(activate_instance<AppointmentInvitee>())
{}

inline Windows::Foundation::IAsyncOperation<hstring> AppointmentManager::ShowAddAppointmentAsync(const Windows::ApplicationModel::Appointments::Appointment & appointment, const Windows::Foundation::Rect & selection)
{
    return get_activation_factory<AppointmentManager, IAppointmentManagerStatics>().ShowAddAppointmentAsync(appointment, selection);
}

inline Windows::Foundation::IAsyncOperation<hstring> AppointmentManager::ShowAddAppointmentAsync(const Windows::ApplicationModel::Appointments::Appointment & appointment, const Windows::Foundation::Rect & selection, Windows::UI::Popups::Placement preferredPlacement)
{
    return get_activation_factory<AppointmentManager, IAppointmentManagerStatics>().ShowAddAppointmentAsync(appointment, selection, preferredPlacement);
}

inline Windows::Foundation::IAsyncOperation<hstring> AppointmentManager::ShowReplaceAppointmentAsync(hstring_ref appointmentId, const Windows::ApplicationModel::Appointments::Appointment & appointment, const Windows::Foundation::Rect & selection)
{
    return get_activation_factory<AppointmentManager, IAppointmentManagerStatics>().ShowReplaceAppointmentAsync(appointmentId, appointment, selection);
}

inline Windows::Foundation::IAsyncOperation<hstring> AppointmentManager::ShowReplaceAppointmentAsync(hstring_ref appointmentId, const Windows::ApplicationModel::Appointments::Appointment & appointment, const Windows::Foundation::Rect & selection, Windows::UI::Popups::Placement preferredPlacement)
{
    return get_activation_factory<AppointmentManager, IAppointmentManagerStatics>().ShowReplaceAppointmentAsync(appointmentId, appointment, selection, preferredPlacement);
}

inline Windows::Foundation::IAsyncOperation<hstring> AppointmentManager::ShowReplaceAppointmentAsync(hstring_ref appointmentId, const Windows::ApplicationModel::Appointments::Appointment & appointment, const Windows::Foundation::Rect & selection, Windows::UI::Popups::Placement preferredPlacement, const Windows::Foundation::DateTime & instanceStartDate)
{
    return get_activation_factory<AppointmentManager, IAppointmentManagerStatics>().ShowReplaceAppointmentAsync(appointmentId, appointment, selection, preferredPlacement, instanceStartDate);
}

inline Windows::Foundation::IAsyncOperation<bool> AppointmentManager::ShowRemoveAppointmentAsync(hstring_ref appointmentId, const Windows::Foundation::Rect & selection)
{
    return get_activation_factory<AppointmentManager, IAppointmentManagerStatics>().ShowRemoveAppointmentAsync(appointmentId, selection);
}

inline Windows::Foundation::IAsyncOperation<bool> AppointmentManager::ShowRemoveAppointmentAsync(hstring_ref appointmentId, const Windows::Foundation::Rect & selection, Windows::UI::Popups::Placement preferredPlacement)
{
    return get_activation_factory<AppointmentManager, IAppointmentManagerStatics>().ShowRemoveAppointmentAsync(appointmentId, selection, preferredPlacement);
}

inline Windows::Foundation::IAsyncOperation<bool> AppointmentManager::ShowRemoveAppointmentAsync(hstring_ref appointmentId, const Windows::Foundation::Rect & selection, Windows::UI::Popups::Placement preferredPlacement, const Windows::Foundation::DateTime & instanceStartDate)
{
    return get_activation_factory<AppointmentManager, IAppointmentManagerStatics>().ShowRemoveAppointmentAsync(appointmentId, selection, preferredPlacement, instanceStartDate);
}

inline Windows::Foundation::IAsyncAction AppointmentManager::ShowTimeFrameAsync(const Windows::Foundation::DateTime & timeToShow, const Windows::Foundation::TimeSpan & duration)
{
    return get_activation_factory<AppointmentManager, IAppointmentManagerStatics>().ShowTimeFrameAsync(timeToShow, duration);
}

inline Windows::Foundation::IAsyncAction AppointmentManager::ShowAppointmentDetailsAsync(hstring_ref appointmentId)
{
    return get_activation_factory<AppointmentManager, IAppointmentManagerStatics2>().ShowAppointmentDetailsAsync(appointmentId);
}

inline Windows::Foundation::IAsyncAction AppointmentManager::ShowAppointmentDetailsAsync(hstring_ref appointmentId, const Windows::Foundation::DateTime & instanceStartDate)
{
    return get_activation_factory<AppointmentManager, IAppointmentManagerStatics2>().ShowAppointmentDetailsAsync(appointmentId, instanceStartDate);
}

inline Windows::Foundation::IAsyncOperation<hstring> AppointmentManager::ShowEditNewAppointmentAsync(const Windows::ApplicationModel::Appointments::Appointment & appointment)
{
    return get_activation_factory<AppointmentManager, IAppointmentManagerStatics2>().ShowEditNewAppointmentAsync(appointment);
}

inline Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Appointments::AppointmentStore> AppointmentManager::RequestStoreAsync(Windows::ApplicationModel::Appointments::AppointmentStoreAccessType options)
{
    return get_activation_factory<AppointmentManager, IAppointmentManagerStatics2>().RequestStoreAsync(options);
}

inline Windows::ApplicationModel::Appointments::AppointmentManagerForUser AppointmentManager::GetForUser(const Windows::System::User & user)
{
    return get_activation_factory<AppointmentManager, IAppointmentManagerStatics3>().GetForUser(user);
}

inline AppointmentOrganizer::AppointmentOrganizer() :
    AppointmentOrganizer(activate_instance<AppointmentOrganizer>())
{}

inline hstring AppointmentProperties::Subject()
{
    return get_activation_factory<AppointmentProperties, IAppointmentPropertiesStatics>().Subject();
}

inline hstring AppointmentProperties::Location()
{
    return get_activation_factory<AppointmentProperties, IAppointmentPropertiesStatics>().Location();
}

inline hstring AppointmentProperties::StartTime()
{
    return get_activation_factory<AppointmentProperties, IAppointmentPropertiesStatics>().StartTime();
}

inline hstring AppointmentProperties::Duration()
{
    return get_activation_factory<AppointmentProperties, IAppointmentPropertiesStatics>().Duration();
}

inline hstring AppointmentProperties::Reminder()
{
    return get_activation_factory<AppointmentProperties, IAppointmentPropertiesStatics>().Reminder();
}

inline hstring AppointmentProperties::BusyStatus()
{
    return get_activation_factory<AppointmentProperties, IAppointmentPropertiesStatics>().BusyStatus();
}

inline hstring AppointmentProperties::Sensitivity()
{
    return get_activation_factory<AppointmentProperties, IAppointmentPropertiesStatics>().Sensitivity();
}

inline hstring AppointmentProperties::OriginalStartTime()
{
    return get_activation_factory<AppointmentProperties, IAppointmentPropertiesStatics>().OriginalStartTime();
}

inline hstring AppointmentProperties::IsResponseRequested()
{
    return get_activation_factory<AppointmentProperties, IAppointmentPropertiesStatics>().IsResponseRequested();
}

inline hstring AppointmentProperties::AllowNewTimeProposal()
{
    return get_activation_factory<AppointmentProperties, IAppointmentPropertiesStatics>().AllowNewTimeProposal();
}

inline hstring AppointmentProperties::AllDay()
{
    return get_activation_factory<AppointmentProperties, IAppointmentPropertiesStatics>().AllDay();
}

inline hstring AppointmentProperties::Details()
{
    return get_activation_factory<AppointmentProperties, IAppointmentPropertiesStatics>().Details();
}

inline hstring AppointmentProperties::OnlineMeetingLink()
{
    return get_activation_factory<AppointmentProperties, IAppointmentPropertiesStatics>().OnlineMeetingLink();
}

inline hstring AppointmentProperties::ReplyTime()
{
    return get_activation_factory<AppointmentProperties, IAppointmentPropertiesStatics>().ReplyTime();
}

inline hstring AppointmentProperties::Organizer()
{
    return get_activation_factory<AppointmentProperties, IAppointmentPropertiesStatics>().Organizer();
}

inline hstring AppointmentProperties::UserResponse()
{
    return get_activation_factory<AppointmentProperties, IAppointmentPropertiesStatics>().UserResponse();
}

inline hstring AppointmentProperties::HasInvitees()
{
    return get_activation_factory<AppointmentProperties, IAppointmentPropertiesStatics>().HasInvitees();
}

inline hstring AppointmentProperties::IsCanceledMeeting()
{
    return get_activation_factory<AppointmentProperties, IAppointmentPropertiesStatics>().IsCanceledMeeting();
}

inline hstring AppointmentProperties::IsOrganizedByUser()
{
    return get_activation_factory<AppointmentProperties, IAppointmentPropertiesStatics>().IsOrganizedByUser();
}

inline hstring AppointmentProperties::Recurrence()
{
    return get_activation_factory<AppointmentProperties, IAppointmentPropertiesStatics>().Recurrence();
}

inline hstring AppointmentProperties::Uri()
{
    return get_activation_factory<AppointmentProperties, IAppointmentPropertiesStatics>().Uri();
}

inline hstring AppointmentProperties::Invitees()
{
    return get_activation_factory<AppointmentProperties, IAppointmentPropertiesStatics>().Invitees();
}

inline Windows::Foundation::Collections::IVector<hstring> AppointmentProperties::DefaultProperties()
{
    return get_activation_factory<AppointmentProperties, IAppointmentPropertiesStatics>().DefaultProperties();
}

inline hstring AppointmentProperties::ChangeNumber()
{
    return get_activation_factory<AppointmentProperties, IAppointmentPropertiesStatics2>().ChangeNumber();
}

inline hstring AppointmentProperties::RemoteChangeNumber()
{
    return get_activation_factory<AppointmentProperties, IAppointmentPropertiesStatics2>().RemoteChangeNumber();
}

inline hstring AppointmentProperties::DetailsKind()
{
    return get_activation_factory<AppointmentProperties, IAppointmentPropertiesStatics2>().DetailsKind();
}

inline AppointmentRecurrence::AppointmentRecurrence() :
    AppointmentRecurrence(activate_instance<AppointmentRecurrence>())
{}

inline FindAppointmentsOptions::FindAppointmentsOptions() :
    FindAppointmentsOptions(activate_instance<FindAppointmentsOptions>())
{}

}

}
