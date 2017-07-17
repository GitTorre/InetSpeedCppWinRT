// C++/WinRT v1.0.170717.1
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "Windows.ApplicationModel.Calls.Background.0.h"

namespace winrt {

namespace Windows::ApplicationModel::Calls::Background {

struct IPhoneCallBlockedTriggerDetails :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPhoneCallBlockedTriggerDetails>
{
    IPhoneCallBlockedTriggerDetails(std::nullptr_t = nullptr) noexcept {}
};

struct IPhoneCallOriginDataRequestTriggerDetails :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPhoneCallOriginDataRequestTriggerDetails>
{
    IPhoneCallOriginDataRequestTriggerDetails(std::nullptr_t = nullptr) noexcept {}
};

struct IPhoneLineChangedTriggerDetails :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPhoneLineChangedTriggerDetails>
{
    IPhoneLineChangedTriggerDetails(std::nullptr_t = nullptr) noexcept {}
};

struct IPhoneNewVoicemailMessageTriggerDetails :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPhoneNewVoicemailMessageTriggerDetails>
{
    IPhoneNewVoicemailMessageTriggerDetails(std::nullptr_t = nullptr) noexcept {}
};

}

}
