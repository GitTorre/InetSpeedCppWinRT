// C++/WinRT v1.0.170717.1
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "Windows.ApplicationModel.Appointments.0.h"
#include "Windows.ApplicationModel.Appointments.AppointmentsProvider.0.h"

namespace winrt {

namespace Windows::ApplicationModel::Appointments::AppointmentsProvider {

struct IAddAppointmentOperation :
    Windows::Foundation::IInspectable,
    impl::consume_t<IAddAppointmentOperation>
{
    IAddAppointmentOperation(std::nullptr_t = nullptr) noexcept {}
};

struct IAppointmentsProviderLaunchActionVerbsStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IAppointmentsProviderLaunchActionVerbsStatics>
{
    IAppointmentsProviderLaunchActionVerbsStatics(std::nullptr_t = nullptr) noexcept {}
};

struct IAppointmentsProviderLaunchActionVerbsStatics2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IAppointmentsProviderLaunchActionVerbsStatics2>
{
    IAppointmentsProviderLaunchActionVerbsStatics2(std::nullptr_t = nullptr) noexcept {}
};

struct IRemoveAppointmentOperation :
    Windows::Foundation::IInspectable,
    impl::consume_t<IRemoveAppointmentOperation>
{
    IRemoveAppointmentOperation(std::nullptr_t = nullptr) noexcept {}
};

struct IReplaceAppointmentOperation :
    Windows::Foundation::IInspectable,
    impl::consume_t<IReplaceAppointmentOperation>
{
    IReplaceAppointmentOperation(std::nullptr_t = nullptr) noexcept {}
};

}

}
