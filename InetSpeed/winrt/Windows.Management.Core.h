// C++ for the Windows Runtime v1.29
// Copyright (c) 2016 Microsoft Corporation

#pragma once

#include "internal\Windows.Storage.3.h"
#include "internal\Windows.Management.Core.3.h"

WINRT_EXPORT namespace winrt {

namespace impl {

template <typename D>
struct produce<D, Windows::Management::Core::IApplicationDataManager> : produce_base<D, Windows::Management::Core::IApplicationDataManager>
{};

template <typename D>
struct produce<D, Windows::Management::Core::IApplicationDataManagerStatics> : produce_base<D, Windows::Management::Core::IApplicationDataManagerStatics>
{
    HRESULT __stdcall abi_CreateForPackageFamily(abi_arg_in<hstring> packageFamilyName, abi_arg_out<Windows::Storage::IApplicationData> applicationData) noexcept override
    {
        try
        {
            *applicationData = detach(shim().CreateForPackageFamily(*reinterpret_cast<const hstring *>(&packageFamilyName)));
            return S_OK;
        }
        catch (...)
        {
            *applicationData = nullptr;
            return impl::to_hresult();
        }
    }
};

}

namespace Windows::Management::Core {

template <typename D> Windows::Storage::ApplicationData impl_IApplicationDataManagerStatics<D>::CreateForPackageFamily(hstring_ref packageFamilyName) const
{
    Windows::Storage::ApplicationData applicationData { nullptr };
    check_hresult(shim()->abi_CreateForPackageFamily(get(packageFamilyName), put(applicationData)));
    return applicationData;
}

inline Windows::Storage::ApplicationData ApplicationDataManager::CreateForPackageFamily(hstring_ref packageFamilyName)
{
    return get_activation_factory<ApplicationDataManager, IApplicationDataManagerStatics>().CreateForPackageFamily(packageFamilyName);
}

}

}
