// C++ for the Windows Runtime v1.29
// Copyright (c) 2016 Microsoft Corporation

#pragma once

#include "Windows.Management.Deployment.Preview.1.h"

WINRT_EXPORT namespace winrt {

namespace Windows::Management::Deployment::Preview {

template <typename D>
class WINRT_EBO impl_IClassicAppManagerStatics
{
    auto shim() const { return impl::shim<D, IClassicAppManagerStatics>(this); }

public:

    Windows::Management::Deployment::Preview::InstalledClassicAppInfo FindInstalledApp(hstring_ref appUninstallKey) const;
};

template <typename D>
class WINRT_EBO impl_IInstalledClassicAppInfo
{
    auto shim() const { return impl::shim<D, IInstalledClassicAppInfo>(this); }

public:

    hstring DisplayName() const;
    hstring DisplayVersion() const;
};

struct IClassicAppManagerStatics :
    Windows::IInspectable,
    impl::consume<IClassicAppManagerStatics>
{
    IClassicAppManagerStatics(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IClassicAppManagerStatics>(m_ptr); }
};

struct IInstalledClassicAppInfo :
    Windows::IInspectable,
    impl::consume<IInstalledClassicAppInfo>
{
    IInstalledClassicAppInfo(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IInstalledClassicAppInfo>(m_ptr); }
};

}

}
