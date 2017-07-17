// C++/WinRT v1.0.170717.1
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "Windows.ApplicationModel.Calls.Background.1.h"

namespace winrt {

namespace Windows::ApplicationModel::Calls::Background {

struct PhoneCallBlockedTriggerDetails :
    Windows::ApplicationModel::Calls::Background::IPhoneCallBlockedTriggerDetails
{
    PhoneCallBlockedTriggerDetails(std::nullptr_t) noexcept {}
};

struct PhoneCallOriginDataRequestTriggerDetails :
    Windows::ApplicationModel::Calls::Background::IPhoneCallOriginDataRequestTriggerDetails
{
    PhoneCallOriginDataRequestTriggerDetails(std::nullptr_t) noexcept {}
};

struct PhoneLineChangedTriggerDetails :
    Windows::ApplicationModel::Calls::Background::IPhoneLineChangedTriggerDetails
{
    PhoneLineChangedTriggerDetails(std::nullptr_t) noexcept {}
};

struct PhoneNewVoicemailMessageTriggerDetails :
    Windows::ApplicationModel::Calls::Background::IPhoneNewVoicemailMessageTriggerDetails
{
    PhoneNewVoicemailMessageTriggerDetails(std::nullptr_t) noexcept {}
};

}

namespace impl {

}

}
