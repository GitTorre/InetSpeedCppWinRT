// C++/WinRT v1.0.170717.1
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "Windows.Management.Deployment.Preview.1.h"

namespace winrt {

namespace Windows::Management::Deployment::Preview {

struct ClassicAppManager
{
    ClassicAppManager() = delete;
    static Windows::Management::Deployment::Preview::InstalledClassicAppInfo FindInstalledApp(param::hstring const& appUninstallKey);
};

struct InstalledClassicAppInfo :
    Windows::Management::Deployment::Preview::IInstalledClassicAppInfo
{
    InstalledClassicAppInfo(std::nullptr_t) noexcept {}
};

}

namespace impl {

}

}
