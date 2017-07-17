// C++/WinRT v1.0.170717.1
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "Windows.Phone.PersonalInformation.0.h"
#include "Windows.Storage.Streams.0.h"
#include "Windows.Phone.PersonalInformation.Provisioning.0.h"

namespace winrt {

namespace Windows::Phone::PersonalInformation::Provisioning {

struct IContactPartnerProvisioningManagerStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IContactPartnerProvisioningManagerStatics>
{
    IContactPartnerProvisioningManagerStatics(std::nullptr_t = nullptr) noexcept {}
};

struct IContactPartnerProvisioningManagerStatics2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IContactPartnerProvisioningManagerStatics2>
{
    IContactPartnerProvisioningManagerStatics2(std::nullptr_t = nullptr) noexcept {}
};

struct IMessagePartnerProvisioningManagerStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IMessagePartnerProvisioningManagerStatics>
{
    IMessagePartnerProvisioningManagerStatics(std::nullptr_t = nullptr) noexcept {}
};

}

}
