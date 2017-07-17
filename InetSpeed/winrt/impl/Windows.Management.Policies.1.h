// C++/WinRT v1.0.170717.1
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "Windows.Storage.Streams.0.h"
#include "Windows.System.0.h"
#include "Windows.Management.Policies.0.h"

namespace winrt {

namespace Windows::Management::Policies {

struct INamedPolicyData :
    Windows::Foundation::IInspectable,
    impl::consume_t<INamedPolicyData>
{
    INamedPolicyData(std::nullptr_t = nullptr) noexcept {}
};

struct INamedPolicyStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<INamedPolicyStatics>
{
    INamedPolicyStatics(std::nullptr_t = nullptr) noexcept {}
};

}

}
