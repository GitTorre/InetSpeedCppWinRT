// C++/WinRT v1.0.170717.1
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "Windows.Management.Workplace.0.h"

namespace winrt {

namespace Windows::Management::Workplace {

struct IMdmAllowPolicyStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IMdmAllowPolicyStatics>
{
    IMdmAllowPolicyStatics(std::nullptr_t = nullptr) noexcept {}
};

struct IMdmPolicyStatics2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IMdmPolicyStatics2>
{
    IMdmPolicyStatics2(std::nullptr_t = nullptr) noexcept {}
};

struct IWorkplaceSettingsStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IWorkplaceSettingsStatics>
{
    IWorkplaceSettingsStatics(std::nullptr_t = nullptr) noexcept {}
};

}

}
