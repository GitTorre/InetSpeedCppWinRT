// C++/WinRT v1.0.170717.1
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "Windows.ApplicationModel.Appointments.0.h"
#include "Windows.Foundation.0.h"
#include "Windows.ApplicationModel.Appointments.DataProvider.0.h"

namespace winrt {

namespace Windows::ApplicationModel::Appointments::DataProvider {

struct IAppointmentCalendarCancelMeetingRequest :
    Windows::Foundation::IInspectable,
    impl::consume_t<IAppointmentCalendarCancelMeetingRequest>
{
    IAppointmentCalendarCancelMeetingRequest(std::nullptr_t = nullptr) noexcept {}
};

struct IAppointmentCalendarCancelMeetingRequestEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<IAppointmentCalendarCancelMeetingRequestEventArgs>
{
    IAppointmentCalendarCancelMeetingRequestEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct IAppointmentCalendarCreateOrUpdateAppointmentRequest :
    Windows::Foundation::IInspectable,
    impl::consume_t<IAppointmentCalendarCreateOrUpdateAppointmentRequest>
{
    IAppointmentCalendarCreateOrUpdateAppointmentRequest(std::nullptr_t = nullptr) noexcept {}
};

struct IAppointmentCalendarCreateOrUpdateAppointmentRequestEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<IAppointmentCalendarCreateOrUpdateAppointmentRequestEventArgs>
{
    IAppointmentCalendarCreateOrUpdateAppointmentRequestEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct IAppointmentCalendarForwardMeetingRequest :
    Windows::Foundation::IInspectable,
    impl::consume_t<IAppointmentCalendarForwardMeetingRequest>
{
    IAppointmentCalendarForwardMeetingRequest(std::nullptr_t = nullptr) noexcept {}
};

struct IAppointmentCalendarForwardMeetingRequestEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<IAppointmentCalendarForwardMeetingRequestEventArgs>
{
    IAppointmentCalendarForwardMeetingRequestEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct IAppointmentCalendarProposeNewTimeForMeetingRequest :
    Windows::Foundation::IInspectable,
    impl::consume_t<IAppointmentCalendarProposeNewTimeForMeetingRequest>
{
    IAppointmentCalendarProposeNewTimeForMeetingRequest(std::nullptr_t = nullptr) noexcept {}
};

struct IAppointmentCalendarProposeNewTimeForMeetingRequestEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<IAppointmentCalendarProposeNewTimeForMeetingRequestEventArgs>
{
    IAppointmentCalendarProposeNewTimeForMeetingRequestEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct IAppointmentCalendarSyncManagerSyncRequest :
    Windows::Foundation::IInspectable,
    impl::consume_t<IAppointmentCalendarSyncManagerSyncRequest>
{
    IAppointmentCalendarSyncManagerSyncRequest(std::nullptr_t = nullptr) noexcept {}
};

struct IAppointmentCalendarSyncManagerSyncRequestEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<IAppointmentCalendarSyncManagerSyncRequestEventArgs>
{
    IAppointmentCalendarSyncManagerSyncRequestEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct IAppointmentCalendarUpdateMeetingResponseRequest :
    Windows::Foundation::IInspectable,
    impl::consume_t<IAppointmentCalendarUpdateMeetingResponseRequest>
{
    IAppointmentCalendarUpdateMeetingResponseRequest(std::nullptr_t = nullptr) noexcept {}
};

struct IAppointmentCalendarUpdateMeetingResponseRequestEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<IAppointmentCalendarUpdateMeetingResponseRequestEventArgs>
{
    IAppointmentCalendarUpdateMeetingResponseRequestEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct IAppointmentDataProviderConnection :
    Windows::Foundation::IInspectable,
    impl::consume_t<IAppointmentDataProviderConnection>
{
    IAppointmentDataProviderConnection(std::nullptr_t = nullptr) noexcept {}
};

struct IAppointmentDataProviderTriggerDetails :
    Windows::Foundation::IInspectable,
    impl::consume_t<IAppointmentDataProviderTriggerDetails>
{
    IAppointmentDataProviderTriggerDetails(std::nullptr_t = nullptr) noexcept {}
};

}

}
