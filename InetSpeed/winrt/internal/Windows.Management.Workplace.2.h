// C++ for the Windows Runtime v1.29
// Copyright (c) 2016 Microsoft Corporation

#pragma once

#include "Windows.Management.Workplace.1.h"

WINRT_EXPORT namespace winrt {

namespace Windows::Management::Workplace {

template <typename D>
class WINRT_EBO impl_IMdmAllowPolicyStatics
{
    auto shim() const { return impl::shim<D, IMdmAllowPolicyStatics>(this); }

public:

    bool IsBrowserAllowed() const;
    bool IsCameraAllowed() const;
    bool IsMicrosoftAccountAllowed() const;
    bool IsStoreAllowed() const;
};

template <typename D>
class WINRT_EBO impl_IMdmPolicyStatics2
{
    auto shim() const { return impl::shim<D, IMdmPolicyStatics2>(this); }

public:

    Windows::Management::Workplace::MessagingSyncPolicy GetMessagingSyncPolicy() const;
};

template <typename D>
class WINRT_EBO impl_IWorkplaceSettingsStatics
{
    auto shim() const { return impl::shim<D, IWorkplaceSettingsStatics>(this); }

public:

    bool IsMicrosoftAccountOptional() const;
};

struct IMdmAllowPolicyStatics :
    Windows::IInspectable,
    impl::consume<IMdmAllowPolicyStatics>
{
    IMdmAllowPolicyStatics(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IMdmAllowPolicyStatics>(m_ptr); }
};

struct IMdmPolicyStatics2 :
    Windows::IInspectable,
    impl::consume<IMdmPolicyStatics2>
{
    IMdmPolicyStatics2(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IMdmPolicyStatics2>(m_ptr); }
};

struct IWorkplaceSettingsStatics :
    Windows::IInspectable,
    impl::consume<IWorkplaceSettingsStatics>
{
    IWorkplaceSettingsStatics(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IWorkplaceSettingsStatics>(m_ptr); }
};

}

}
