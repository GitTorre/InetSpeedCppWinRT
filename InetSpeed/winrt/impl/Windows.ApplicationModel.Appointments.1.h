// C++/WinRT v1.0.170717.1
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "Windows.Foundation.0.h"
#include "Windows.System.0.h"
#include "Windows.UI.0.h"
#include "Windows.UI.Popups.0.h"
#include "Windows.ApplicationModel.Appointments.0.h"

namespace winrt {

namespace Windows::ApplicationModel::Appointments {

struct IAppointment :
    Windows::Foundation::IInspectable,
    impl::consume_t<IAppointment>
{
    IAppointment(std::nullptr_t = nullptr) noexcept {}
};

struct IAppointment2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IAppointment2>,
    impl::require<IAppointment2, Windows::ApplicationModel::Appointments::IAppointment>
{
    IAppointment2(std::nullptr_t = nullptr) noexcept {}
};

struct IAppointment3 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IAppointment3>,
    impl::require<IAppointment3, Windows::ApplicationModel::Appointments::IAppointment, Windows::ApplicationModel::Appointments::IAppointment2>
{
    IAppointment3(std::nullptr_t = nullptr) noexcept {}
};

struct IAppointmentCalendar :
    Windows::Foundation::IInspectable,
    impl::consume_t<IAppointmentCalendar>
{
    IAppointmentCalendar(std::nullptr_t = nullptr) noexcept {}
};

struct IAppointmentCalendar2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IAppointmentCalendar2>,
    impl::require<IAppointmentCalendar2, Windows::ApplicationModel::Appointments::IAppointmentCalendar>
{
    IAppointmentCalendar2(std::nullptr_t = nullptr) noexcept {}
    using impl::consume_t<IAppointmentCalendar2, Windows::ApplicationModel::Appointments::IAppointmentCalendar>::DisplayColor;
    using impl::consume_t<IAppointmentCalendar2, Windows::ApplicationModel::Appointments::IAppointmentCalendar2>::DisplayColor;
    using impl::consume_t<IAppointmentCalendar2, Windows::ApplicationModel::Appointments::IAppointmentCalendar>::IsHidden;
    using impl::consume_t<IAppointmentCalendar2, Windows::ApplicationModel::Appointments::IAppointmentCalendar2>::IsHidden;
};

struct IAppointmentCalendar3 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IAppointmentCalendar3>
{
    IAppointmentCalendar3(std::nullptr_t = nullptr) noexcept {}
};

struct IAppointmentCalendarSyncManager :
    Windows::Foundation::IInspectable,
    impl::consume_t<IAppointmentCalendarSyncManager>
{
    IAppointmentCalendarSyncManager(std::nullptr_t = nullptr) noexcept {}
};

struct IAppointmentCalendarSyncManager2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IAppointmentCalendarSyncManager2>
{
    IAppointmentCalendarSyncManager2(std::nullptr_t = nullptr) noexcept {}
};

struct IAppointmentConflictResult :
    Windows::Foundation::IInspectable,
    impl::consume_t<IAppointmentConflictResult>
{
    IAppointmentConflictResult(std::nullptr_t = nullptr) noexcept {}
};

struct IAppointmentException :
    Windows::Foundation::IInspectable,
    impl::consume_t<IAppointmentException>
{
    IAppointmentException(std::nullptr_t = nullptr) noexcept {}
};

struct IAppointmentInvitee :
    Windows::Foundation::IInspectable,
    impl::consume_t<IAppointmentInvitee>,
    impl::require<IAppointmentInvitee, Windows::ApplicationModel::Appointments::IAppointmentParticipant>
{
    IAppointmentInvitee(std::nullptr_t = nullptr) noexcept {}
};

struct IAppointmentManagerForUser :
    Windows::Foundation::IInspectable,
    impl::consume_t<IAppointmentManagerForUser>
{
    IAppointmentManagerForUser(std::nullptr_t = nullptr) noexcept {}
};

struct IAppointmentManagerStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IAppointmentManagerStatics>
{
    IAppointmentManagerStatics(std::nullptr_t = nullptr) noexcept {}
};

struct IAppointmentManagerStatics2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IAppointmentManagerStatics2>
{
    IAppointmentManagerStatics2(std::nullptr_t = nullptr) noexcept {}
};

struct IAppointmentManagerStatics3 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IAppointmentManagerStatics3>
{
    IAppointmentManagerStatics3(std::nullptr_t = nullptr) noexcept {}
};

struct IAppointmentParticipant :
    Windows::Foundation::IInspectable,
    impl::consume_t<IAppointmentParticipant>
{
    IAppointmentParticipant(std::nullptr_t = nullptr) noexcept {}
};

struct IAppointmentPropertiesStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IAppointmentPropertiesStatics>
{
    IAppointmentPropertiesStatics(std::nullptr_t = nullptr) noexcept {}
};

struct IAppointmentPropertiesStatics2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IAppointmentPropertiesStatics2>,
    impl::require<IAppointmentPropertiesStatics2, Windows::ApplicationModel::Appointments::IAppointmentPropertiesStatics>
{
    IAppointmentPropertiesStatics2(std::nullptr_t = nullptr) noexcept {}
};

struct IAppointmentRecurrence :
    Windows::Foundation::IInspectable,
    impl::consume_t<IAppointmentRecurrence>
{
    IAppointmentRecurrence(std::nullptr_t = nullptr) noexcept {}
};

struct IAppointmentRecurrence2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IAppointmentRecurrence2>,
    impl::require<IAppointmentRecurrence2, Windows::ApplicationModel::Appointments::IAppointmentRecurrence>
{
    IAppointmentRecurrence2(std::nullptr_t = nullptr) noexcept {}
};

struct IAppointmentRecurrence3 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IAppointmentRecurrence3>,
    impl::require<IAppointmentRecurrence3, Windows::ApplicationModel::Appointments::IAppointmentRecurrence, Windows::ApplicationModel::Appointments::IAppointmentRecurrence2>
{
    IAppointmentRecurrence3(std::nullptr_t = nullptr) noexcept {}
};

struct IAppointmentStore :
    Windows::Foundation::IInspectable,
    impl::consume_t<IAppointmentStore>
{
    IAppointmentStore(std::nullptr_t = nullptr) noexcept {}
};

struct IAppointmentStore2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IAppointmentStore2>,
    impl::require<IAppointmentStore2, Windows::ApplicationModel::Appointments::IAppointmentStore>
{
    IAppointmentStore2(std::nullptr_t = nullptr) noexcept {}
    using impl::consume_t<IAppointmentStore2, Windows::ApplicationModel::Appointments::IAppointmentStore>::CreateAppointmentCalendarAsync;
    using impl::consume_t<IAppointmentStore2, Windows::ApplicationModel::Appointments::IAppointmentStore2>::CreateAppointmentCalendarAsync;
};

struct IAppointmentStoreChange :
    Windows::Foundation::IInspectable,
    impl::consume_t<IAppointmentStoreChange>
{
    IAppointmentStoreChange(std::nullptr_t = nullptr) noexcept {}
};

struct IAppointmentStoreChange2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IAppointmentStoreChange2>,
    impl::require<IAppointmentStoreChange2, Windows::ApplicationModel::Appointments::IAppointmentStoreChange>
{
    IAppointmentStoreChange2(std::nullptr_t = nullptr) noexcept {}
};

struct IAppointmentStoreChangeReader :
    Windows::Foundation::IInspectable,
    impl::consume_t<IAppointmentStoreChangeReader>
{
    IAppointmentStoreChangeReader(std::nullptr_t = nullptr) noexcept {}
};

struct IAppointmentStoreChangeTracker :
    Windows::Foundation::IInspectable,
    impl::consume_t<IAppointmentStoreChangeTracker>
{
    IAppointmentStoreChangeTracker(std::nullptr_t = nullptr) noexcept {}
};

struct IAppointmentStoreChangedDeferral :
    Windows::Foundation::IInspectable,
    impl::consume_t<IAppointmentStoreChangedDeferral>
{
    IAppointmentStoreChangedDeferral(std::nullptr_t = nullptr) noexcept {}
};

struct IAppointmentStoreChangedEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<IAppointmentStoreChangedEventArgs>
{
    IAppointmentStoreChangedEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct IAppointmentStoreNotificationTriggerDetails :
    Windows::Foundation::IInspectable,
    impl::consume_t<IAppointmentStoreNotificationTriggerDetails>
{
    IAppointmentStoreNotificationTriggerDetails(std::nullptr_t = nullptr) noexcept {}
};

struct IFindAppointmentsOptions :
    Windows::Foundation::IInspectable,
    impl::consume_t<IFindAppointmentsOptions>
{
    IFindAppointmentsOptions(std::nullptr_t = nullptr) noexcept {}
};

}

}
