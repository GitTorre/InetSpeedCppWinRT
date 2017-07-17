// C++/WinRT v1.0.170717.1
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "Windows.Management.Deployment.Preview.0.h"

namespace winrt {

namespace Windows::Management::Deployment::Preview {

struct IClassicAppManagerStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IClassicAppManagerStatics>
{
    IClassicAppManagerStatics(std::nullptr_t = nullptr) noexcept {}
};

struct IInstalledClassicAppInfo :
    Windows::Foundation::IInspectable,
    impl::consume_t<IInstalledClassicAppInfo>
{
    IInstalledClassicAppInfo(std::nullptr_t = nullptr) noexcept {}
};

}

}
