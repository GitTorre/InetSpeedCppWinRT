// C++ for the Windows Runtime v1.29
// Copyright (c) 2016 Microsoft Corporation

#pragma once

#include "Windows.Security.Authentication.Identity.1.h"

WINRT_EXPORT namespace winrt {

namespace ABI::Windows::Foundation::Collections {

#ifndef WINRT_GENERIC_3b631cbb_63f8_5eff_8815_69c822c09ce1
#define WINRT_GENERIC_3b631cbb_63f8_5eff_8815_69c822c09ce1
template <> struct __declspec(uuid("3b631cbb-63f8-5eff-8815-69c822c09ce1")) __declspec(novtable) IVectorView<Windows::Security::Authentication::Identity::EnterpriseKeyCredentialRegistrationInfo> : impl_IVectorView<Windows::Security::Authentication::Identity::EnterpriseKeyCredentialRegistrationInfo> {};
#endif


}

namespace ABI::Windows::Foundation {

#ifndef WINRT_GENERIC_0bd64c2f_8b1d_56d4_a707_fab5315e7278
#define WINRT_GENERIC_0bd64c2f_8b1d_56d4_a707_fab5315e7278
template <> struct __declspec(uuid("0bd64c2f-8b1d-56d4-a707-fab5315e7278")) __declspec(novtable) IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Security::Authentication::Identity::EnterpriseKeyCredentialRegistrationInfo>> : impl_IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Security::Authentication::Identity::EnterpriseKeyCredentialRegistrationInfo>> {};
#endif

#ifndef WINRT_GENERIC_67746c40_ade0_5981_ae23_104891748853
#define WINRT_GENERIC_67746c40_ade0_5981_ae23_104891748853
template <> struct __declspec(uuid("67746c40-ade0-5981-ae23-104891748853")) __declspec(novtable) AsyncOperationCompletedHandler<Windows::Foundation::Collections::IVectorView<Windows::Security::Authentication::Identity::EnterpriseKeyCredentialRegistrationInfo>> : impl_AsyncOperationCompletedHandler<Windows::Foundation::Collections::IVectorView<Windows::Security::Authentication::Identity::EnterpriseKeyCredentialRegistrationInfo>> {};
#endif


}

namespace Windows::Security::Authentication::Identity {

template <typename D>
class WINRT_EBO impl_IEnterpriseKeyCredentialRegistrationInfo
{
    auto shim() const { return impl::shim<D, IEnterpriseKeyCredentialRegistrationInfo>(this); }

public:

    hstring TenantId() const;
    hstring TenantName() const;
    hstring Subject() const;
    hstring KeyId() const;
    hstring KeyName() const;
};

template <typename D>
class WINRT_EBO impl_IEnterpriseKeyCredentialRegistrationManager
{
    auto shim() const { return impl::shim<D, IEnterpriseKeyCredentialRegistrationManager>(this); }

public:

    Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Security::Authentication::Identity::EnterpriseKeyCredentialRegistrationInfo>> GetRegistrationsAsync() const;
};

template <typename D>
class WINRT_EBO impl_IEnterpriseKeyCredentialRegistrationManagerStatics
{
    auto shim() const { return impl::shim<D, IEnterpriseKeyCredentialRegistrationManagerStatics>(this); }

public:

    Windows::Security::Authentication::Identity::EnterpriseKeyCredentialRegistrationManager Current() const;
};

struct IEnterpriseKeyCredentialRegistrationInfo :
    Windows::IInspectable,
    impl::consume<IEnterpriseKeyCredentialRegistrationInfo>
{
    IEnterpriseKeyCredentialRegistrationInfo(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IEnterpriseKeyCredentialRegistrationInfo>(m_ptr); }
};

struct IEnterpriseKeyCredentialRegistrationManager :
    Windows::IInspectable,
    impl::consume<IEnterpriseKeyCredentialRegistrationManager>
{
    IEnterpriseKeyCredentialRegistrationManager(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IEnterpriseKeyCredentialRegistrationManager>(m_ptr); }
};

struct IEnterpriseKeyCredentialRegistrationManagerStatics :
    Windows::IInspectable,
    impl::consume<IEnterpriseKeyCredentialRegistrationManagerStatics>
{
    IEnterpriseKeyCredentialRegistrationManagerStatics(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IEnterpriseKeyCredentialRegistrationManagerStatics>(m_ptr); }
};

}

}
