// C++ for the Windows Runtime v1.29
// Copyright (c) 2016 Microsoft Corporation

#pragma once

#include "Windows.Management.Core.1.h"

WINRT_EXPORT namespace winrt {

namespace Windows::Management::Core {

template <typename D>
class WINRT_EBO impl_IApplicationDataManager
{
    auto shim() const { return impl::shim<D, IApplicationDataManager>(this); }

public:

};

template <typename D>
class WINRT_EBO impl_IApplicationDataManagerStatics
{
    auto shim() const { return impl::shim<D, IApplicationDataManagerStatics>(this); }

public:

    Windows::Storage::ApplicationData CreateForPackageFamily(hstring_ref packageFamilyName) const;
};

struct IApplicationDataManager :
    Windows::IInspectable,
    impl::consume<IApplicationDataManager>
{
    IApplicationDataManager(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IApplicationDataManager>(m_ptr); }
};

struct IApplicationDataManagerStatics :
    Windows::IInspectable,
    impl::consume<IApplicationDataManagerStatics>
{
    IApplicationDataManagerStatics(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IApplicationDataManagerStatics>(m_ptr); }
};

}

}
