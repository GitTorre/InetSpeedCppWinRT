// C++/WinRT v1.0.170717.1
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "Windows.ApplicationModel.Appointments.1.h"
#include "Windows.ApplicationModel.Appointments.AppointmentsProvider.1.h"

namespace winrt {

namespace Windows::ApplicationModel::Appointments::AppointmentsProvider {

struct AddAppointmentOperation :
    Windows::ApplicationModel::Appointments::AppointmentsProvider::IAddAppointmentOperation
{
    AddAppointmentOperation(std::nullptr_t) noexcept {}
};

struct AppointmentsProviderLaunchActionVerbs
{
    AppointmentsProviderLaunchActionVerbs() = delete;
    static hstring AddAppointment();
    static hstring ReplaceAppointment();
    static hstring RemoveAppointment();
    static hstring ShowTimeFrame();
    static hstring ShowAppointmentDetails();
};

struct RemoveAppointmentOperation :
    Windows::ApplicationModel::Appointments::AppointmentsProvider::IRemoveAppointmentOperation
{
    RemoveAppointmentOperation(std::nullptr_t) noexcept {}
};

struct ReplaceAppointmentOperation :
    Windows::ApplicationModel::Appointments::AppointmentsProvider::IReplaceAppointmentOperation
{
    ReplaceAppointmentOperation(std::nullptr_t) noexcept {}
};

}

namespace impl {

}

}
