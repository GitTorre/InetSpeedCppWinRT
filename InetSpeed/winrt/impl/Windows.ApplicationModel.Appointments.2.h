// C++/WinRT v1.0.170717.1
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "Windows.Foundation.1.h"
#include "Windows.System.1.h"
#include "Windows.UI.1.h"
#include "Windows.UI.Popups.1.h"
#include "Windows.ApplicationModel.Appointments.1.h"

namespace winrt {

namespace Windows::ApplicationModel::Appointments {

struct Appointment :
    Windows::ApplicationModel::Appointments::IAppointment,
    impl::require<Appointment, Windows::ApplicationModel::Appointments::IAppointment2, Windows::ApplicationModel::Appointments::IAppointment3>
{
    Appointment(std::nullptr_t) noexcept {}
    Appointment();
};

struct AppointmentCalendar :
    Windows::ApplicationModel::Appointments::IAppointmentCalendar,
    impl::require<AppointmentCalendar, Windows::ApplicationModel::Appointments::IAppointmentCalendar2, Windows::ApplicationModel::Appointments::IAppointmentCalendar3>
{
    AppointmentCalendar(std::nullptr_t) noexcept {}
    using impl::consume_t<AppointmentCalendar, Windows::ApplicationModel::Appointments::IAppointmentCalendar2>::DisplayColor;
    using Windows::ApplicationModel::Appointments::IAppointmentCalendar::DisplayColor;
    using impl::consume_t<AppointmentCalendar, Windows::ApplicationModel::Appointments::IAppointmentCalendar2>::IsHidden;
    using Windows::ApplicationModel::Appointments::IAppointmentCalendar::IsHidden;
};

struct AppointmentCalendarSyncManager :
    Windows::ApplicationModel::Appointments::IAppointmentCalendarSyncManager,
    impl::require<AppointmentCalendarSyncManager, Windows::ApplicationModel::Appointments::IAppointmentCalendarSyncManager2>
{
    AppointmentCalendarSyncManager(std::nullptr_t) noexcept {}
    using impl::consume_t<AppointmentCalendarSyncManager, Windows::ApplicationModel::Appointments::IAppointmentCalendarSyncManager2>::LastAttemptedSyncTime;
    using Windows::ApplicationModel::Appointments::IAppointmentCalendarSyncManager::LastAttemptedSyncTime;
    using impl::consume_t<AppointmentCalendarSyncManager, Windows::ApplicationModel::Appointments::IAppointmentCalendarSyncManager2>::LastSuccessfulSyncTime;
    using Windows::ApplicationModel::Appointments::IAppointmentCalendarSyncManager::LastSuccessfulSyncTime;
    using impl::consume_t<AppointmentCalendarSyncManager, Windows::ApplicationModel::Appointments::IAppointmentCalendarSyncManager2>::Status;
    using Windows::ApplicationModel::Appointments::IAppointmentCalendarSyncManager::Status;
};

struct AppointmentConflictResult :
    Windows::ApplicationModel::Appointments::IAppointmentConflictResult
{
    AppointmentConflictResult(std::nullptr_t) noexcept {}
};

struct AppointmentException :
    Windows::ApplicationModel::Appointments::IAppointmentException
{
    AppointmentException(std::nullptr_t) noexcept {}
};

struct AppointmentInvitee :
    Windows::ApplicationModel::Appointments::IAppointmentInvitee
{
    AppointmentInvitee(std::nullptr_t) noexcept {}
    AppointmentInvitee();
};

struct AppointmentManager
{
    AppointmentManager() = delete;
    static Windows::Foundation::IAsyncOperation<hstring> ShowAddAppointmentAsync(Windows::ApplicationModel::Appointments::Appointment const& appointment, Windows::Foundation::Rect const& selection);
    static Windows::Foundation::IAsyncOperation<hstring> ShowAddAppointmentAsync(Windows::ApplicationModel::Appointments::Appointment const& appointment, Windows::Foundation::Rect const& selection, Windows::UI::Popups::Placement const& preferredPlacement);
    static Windows::Foundation::IAsyncOperation<hstring> ShowReplaceAppointmentAsync(param::hstring const& appointmentId, Windows::ApplicationModel::Appointments::Appointment const& appointment, Windows::Foundation::Rect const& selection);
    static Windows::Foundation::IAsyncOperation<hstring> ShowReplaceAppointmentAsync(param::hstring const& appointmentId, Windows::ApplicationModel::Appointments::Appointment const& appointment, Windows::Foundation::Rect const& selection, Windows::UI::Popups::Placement const& preferredPlacement);
    static Windows::Foundation::IAsyncOperation<hstring> ShowReplaceAppointmentAsync(param::hstring const& appointmentId, Windows::ApplicationModel::Appointments::Appointment const& appointment, Windows::Foundation::Rect const& selection, Windows::UI::Popups::Placement const& preferredPlacement, Windows::Foundation::DateTime const& instanceStartDate);
    static Windows::Foundation::IAsyncOperation<bool> ShowRemoveAppointmentAsync(param::hstring const& appointmentId, Windows::Foundation::Rect const& selection);
    static Windows::Foundation::IAsyncOperation<bool> ShowRemoveAppointmentAsync(param::hstring const& appointmentId, Windows::Foundation::Rect const& selection, Windows::UI::Popups::Placement const& preferredPlacement);
    static Windows::Foundation::IAsyncOperation<bool> ShowRemoveAppointmentAsync(param::hstring const& appointmentId, Windows::Foundation::Rect const& selection, Windows::UI::Popups::Placement const& preferredPlacement, Windows::Foundation::DateTime const& instanceStartDate);
    static Windows::Foundation::IAsyncAction ShowTimeFrameAsync(Windows::Foundation::DateTime const& timeToShow, Windows::Foundation::TimeSpan const& duration);
    static Windows::Foundation::IAsyncAction ShowAppointmentDetailsAsync(param::hstring const& appointmentId);
    static Windows::Foundation::IAsyncAction ShowAppointmentDetailsAsync(param::hstring const& appointmentId, Windows::Foundation::DateTime const& instanceStartDate);
    static Windows::Foundation::IAsyncOperation<hstring> ShowEditNewAppointmentAsync(Windows::ApplicationModel::Appointments::Appointment const& appointment);
    static Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Appointments::AppointmentStore> RequestStoreAsync(Windows::ApplicationModel::Appointments::AppointmentStoreAccessType const& options);
    static Windows::ApplicationModel::Appointments::AppointmentManagerForUser GetForUser(Windows::System::User const& user);
};

struct AppointmentManagerForUser :
    Windows::ApplicationModel::Appointments::IAppointmentManagerForUser
{
    AppointmentManagerForUser(std::nullptr_t) noexcept {}
};

struct AppointmentOrganizer :
    Windows::ApplicationModel::Appointments::IAppointmentParticipant
{
    AppointmentOrganizer(std::nullptr_t) noexcept {}
    AppointmentOrganizer();
};

struct AppointmentProperties
{
    AppointmentProperties() = delete;
    static hstring Subject();
    static hstring Location();
    static hstring StartTime();
    static hstring Duration();
    static hstring Reminder();
    static hstring BusyStatus();
    static hstring Sensitivity();
    static hstring OriginalStartTime();
    static hstring IsResponseRequested();
    static hstring AllowNewTimeProposal();
    static hstring AllDay();
    static hstring Details();
    static hstring OnlineMeetingLink();
    static hstring ReplyTime();
    static hstring Organizer();
    static hstring UserResponse();
    static hstring HasInvitees();
    static hstring IsCanceledMeeting();
    static hstring IsOrganizedByUser();
    static hstring Recurrence();
    static hstring Uri();
    static hstring Invitees();
    static Windows::Foundation::Collections::IVector<hstring> DefaultProperties();
    static hstring ChangeNumber();
    static hstring RemoteChangeNumber();
    static hstring DetailsKind();
};

struct AppointmentRecurrence :
    Windows::ApplicationModel::Appointments::IAppointmentRecurrence,
    impl::require<AppointmentRecurrence, Windows::ApplicationModel::Appointments::IAppointmentRecurrence2, Windows::ApplicationModel::Appointments::IAppointmentRecurrence3>
{
    AppointmentRecurrence(std::nullptr_t) noexcept {}
    AppointmentRecurrence();
};

struct AppointmentStore :
    Windows::ApplicationModel::Appointments::IAppointmentStore,
    impl::require<AppointmentStore, Windows::ApplicationModel::Appointments::IAppointmentStore2>
{
    AppointmentStore(std::nullptr_t) noexcept {}
    using impl::consume_t<AppointmentStore, Windows::ApplicationModel::Appointments::IAppointmentStore2>::CreateAppointmentCalendarAsync;
    using Windows::ApplicationModel::Appointments::IAppointmentStore::CreateAppointmentCalendarAsync;
};

struct AppointmentStoreChange :
    Windows::ApplicationModel::Appointments::IAppointmentStoreChange,
    impl::require<AppointmentStoreChange, Windows::ApplicationModel::Appointments::IAppointmentStoreChange2>
{
    AppointmentStoreChange(std::nullptr_t) noexcept {}
};

struct AppointmentStoreChangeReader :
    Windows::ApplicationModel::Appointments::IAppointmentStoreChangeReader
{
    AppointmentStoreChangeReader(std::nullptr_t) noexcept {}
};

struct AppointmentStoreChangeTracker :
    Windows::ApplicationModel::Appointments::IAppointmentStoreChangeTracker
{
    AppointmentStoreChangeTracker(std::nullptr_t) noexcept {}
};

struct AppointmentStoreChangedDeferral :
    Windows::ApplicationModel::Appointments::IAppointmentStoreChangedDeferral
{
    AppointmentStoreChangedDeferral(std::nullptr_t) noexcept {}
};

struct AppointmentStoreChangedEventArgs :
    Windows::ApplicationModel::Appointments::IAppointmentStoreChangedEventArgs
{
    AppointmentStoreChangedEventArgs(std::nullptr_t) noexcept {}
};

struct AppointmentStoreNotificationTriggerDetails :
    Windows::ApplicationModel::Appointments::IAppointmentStoreNotificationTriggerDetails
{
    AppointmentStoreNotificationTriggerDetails(std::nullptr_t) noexcept {}
};

struct FindAppointmentsOptions :
    Windows::ApplicationModel::Appointments::IFindAppointmentsOptions
{
    FindAppointmentsOptions(std::nullptr_t) noexcept {}
    FindAppointmentsOptions();
};

}

namespace impl {

}

}
