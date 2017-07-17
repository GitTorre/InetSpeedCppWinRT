// C++/WinRT v1.0.170717.1
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "Windows.Storage.Streams.1.h"
#include "Windows.System.1.h"
#include "Windows.Management.Policies.1.h"

namespace winrt {

namespace Windows::Management::Policies {

struct NamedPolicy
{
    NamedPolicy() = delete;
    static Windows::Management::Policies::NamedPolicyData GetPolicyFromPath(param::hstring const& area, param::hstring const& name);
    static Windows::Management::Policies::NamedPolicyData GetPolicyFromPathForUser(Windows::System::User const& user, param::hstring const& area, param::hstring const& name);
};

struct NamedPolicyData :
    Windows::Management::Policies::INamedPolicyData
{
    NamedPolicyData(std::nullptr_t) noexcept {}
};

}

namespace impl {

}

}
