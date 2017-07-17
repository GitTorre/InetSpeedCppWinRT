// C++/WinRT v1.0.170717.1
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "Windows.ApplicationModel.Appointments.1.h"
#include "Windows.Foundation.1.h"
#include "Windows.ApplicationModel.Appointments.DataProvider.1.h"

namespace winrt {

namespace Windows::ApplicationModel::Appointments::DataProvider {

struct AppointmentCalendarCancelMeetingRequest :
    Windows::ApplicationModel::Appointments::DataProvider::IAppointmentCalendarCancelMeetingRequest
{
    AppointmentCalendarCancelMeetingRequest(std::nullptr_t) noexcept {}
};

struct AppointmentCalendarCancelMeetingRequestEventArgs :
    Windows::ApplicationModel::Appointments::DataProvider::IAppointmentCalendarCancelMeetingRequestEventArgs
{
    AppointmentCalendarCancelMeetingRequestEventArgs(std::nullptr_t) noexcept {}
};

struct AppointmentCalendarCreateOrUpdateAppointmentRequest :
    Windows::ApplicationModel::Appointments::DataProvider::IAppointmentCalendarCreateOrUpdateAppointmentRequest
{
    AppointmentCalendarCreateOrUpdateAppointmentRequest(std::nullptr_t) noexcept {}
};

struct AppointmentCalendarCreateOrUpdateAppointmentRequestEventArgs :
    Windows::ApplicationModel::Appointments::DataProvider::IAppointmentCalendarCreateOrUpdateAppointmentRequestEventArgs
{
    AppointmentCalendarCreateOrUpdateAppointmentRequestEventArgs(std::nullptr_t) noexcept {}
};

struct AppointmentCalendarForwardMeetingRequest :
    Windows::ApplicationModel::Appointments::DataProvider::IAppointmentCalendarForwardMeetingRequest
{
    AppointmentCalendarForwardMeetingRequest(std::nullptr_t) noexcept {}
};

struct AppointmentCalendarForwardMeetingRequestEventArgs :
    Windows::ApplicationModel::Appointments::DataProvider::IAppointmentCalendarForwardMeetingRequestEventArgs
{
    AppointmentCalendarForwardMeetingRequestEventArgs(std::nullptr_t) noexcept {}
};

struct AppointmentCalendarProposeNewTimeForMeetingRequest :
    Windows::ApplicationModel::Appointments::DataProvider::IAppointmentCalendarProposeNewTimeForMeetingRequest
{
    AppointmentCalendarProposeNewTimeForMeetingRequest(std::nullptr_t) noexcept {}
};

struct AppointmentCalendarProposeNewTimeForMeetingRequestEventArgs :
    Windows::ApplicationModel::Appointments::DataProvider::IAppointmentCalendarProposeNewTimeForMeetingRequestEventArgs
{
    AppointmentCalendarProposeNewTimeForMeetingRequestEventArgs(std::nullptr_t) noexcept {}
};

struct AppointmentCalendarSyncManagerSyncRequest :
    Windows::ApplicationModel::Appointments::DataProvider::IAppointmentCalendarSyncManagerSyncRequest
{
    AppointmentCalendarSyncManagerSyncRequest(std::nullptr_t) noexcept {}
};

struct AppointmentCalendarSyncManagerSyncRequestEventArgs :
    Windows::ApplicationModel::Appointments::DataProvider::IAppointmentCalendarSyncManagerSyncRequestEventArgs
{
    AppointmentCalendarSyncManagerSyncRequestEventArgs(std::nullptr_t) noexcept {}
};

struct AppointmentCalendarUpdateMeetingResponseRequest :
    Windows::ApplicationModel::Appointments::DataProvider::IAppointmentCalendarUpdateMeetingResponseRequest
{
    AppointmentCalendarUpdateMeetingResponseRequest(std::nullptr_t) noexcept {}
};

struct AppointmentCalendarUpdateMeetingResponseRequestEventArgs :
    Windows::ApplicationModel::Appointments::DataProvider::IAppointmentCalendarUpdateMeetingResponseRequestEventArgs
{
    AppointmentCalendarUpdateMeetingResponseRequestEventArgs(std::nullptr_t) noexcept {}
};

struct AppointmentDataProviderConnection :
    Windows::ApplicationModel::Appointments::DataProvider::IAppointmentDataProviderConnection
{
    AppointmentDataProviderConnection(std::nullptr_t) noexcept {}
};

struct AppointmentDataProviderTriggerDetails :
    Windows::ApplicationModel::Appointments::DataProvider::IAppointmentDataProviderTriggerDetails
{
    AppointmentDataProviderTriggerDetails(std::nullptr_t) noexcept {}
};

}

namespace impl {

}

}
