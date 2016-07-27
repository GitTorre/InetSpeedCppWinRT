// C++ for the Windows Runtime v1.29
// Copyright (c) 2016 Microsoft Corporation

#pragma once

#include "Windows.Management.Deployment.Preview.2.h"

WINRT_EXPORT namespace winrt {

namespace Windows::Management::Deployment::Preview {

struct ClassicAppManager
{
    ClassicAppManager() = delete;
    static Windows::Management::Deployment::Preview::InstalledClassicAppInfo FindInstalledApp(hstring_ref appUninstallKey);
};

struct WINRT_EBO InstalledClassicAppInfo :
    Windows::Management::Deployment::Preview::IInstalledClassicAppInfo
{
    InstalledClassicAppInfo(std::nullptr_t) noexcept {}
};

}

}
