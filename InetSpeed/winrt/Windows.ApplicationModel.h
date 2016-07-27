// C++ for the Windows Runtime v1.29
// Copyright (c) 2016 Microsoft Corporation

#pragma once

#include "internal\Windows.Foundation.3.h"
#include "internal\Windows.Storage.Streams.3.h"
#include "internal\Windows.System.3.h"
#include "internal\Windows.Storage.3.h"
#include "internal\Windows.Foundation.Collections.3.h"
#include "internal\Windows.ApplicationModel.3.h"

WINRT_EXPORT namespace winrt {

namespace impl {

template <typename D>
struct produce<D, Windows::ApplicationModel::IAppDisplayInfo> : produce_base<D, Windows::ApplicationModel::IAppDisplayInfo>
{
    HRESULT __stdcall get_DisplayName(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(shim().DisplayName());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Description(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(shim().Description());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_GetLogo(abi_arg_in<Windows::Foundation::Size> size, abi_arg_out<Windows::Storage::Streams::IRandomAccessStreamReference> value) noexcept override
    {
        try
        {
            *value = detach(shim().GetLogo(*reinterpret_cast<const Windows::Foundation::Size *>(&size)));
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::IAppInfo> : produce_base<D, Windows::ApplicationModel::IAppInfo>
{
    HRESULT __stdcall get_Id(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(shim().Id());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_AppUserModelId(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(shim().AppUserModelId());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_DisplayInfo(abi_arg_out<Windows::ApplicationModel::IAppDisplayInfo> value) noexcept override
    {
        try
        {
            *value = detach(shim().DisplayInfo());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_PackageFamilyName(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(shim().PackageFamilyName());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::IDesignModeStatics> : produce_base<D, Windows::ApplicationModel::IDesignModeStatics>
{
    HRESULT __stdcall get_DesignModeEnabled(bool * value) noexcept override
    {
        try
        {
            *value = detach(shim().DesignModeEnabled());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::IEnteredBackgroundEventArgs> : produce_base<D, Windows::ApplicationModel::IEnteredBackgroundEventArgs>
{
    HRESULT __stdcall abi_GetDeferral(abi_arg_out<Windows::Foundation::IDeferral> value) noexcept override
    {
        try
        {
            *value = detach(shim().GetDeferral());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::IFullTrustProcessLauncherStatics> : produce_base<D, Windows::ApplicationModel::IFullTrustProcessLauncherStatics>
{
    HRESULT __stdcall abi_LaunchFullTrustProcessForCurrentAppAsync(abi_arg_out<Windows::Foundation::IAsyncAction> asyncAction) noexcept override
    {
        try
        {
            *asyncAction = detach(shim().LaunchFullTrustProcessForCurrentAppAsync());
            return S_OK;
        }
        catch (...)
        {
            *asyncAction = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_LaunchFullTrustProcessForCurrentAppWithParametersAsync(abi_arg_in<hstring> parameterGroupId, abi_arg_out<Windows::Foundation::IAsyncAction> asyncAction) noexcept override
    {
        try
        {
            *asyncAction = detach(shim().LaunchFullTrustProcessForCurrentAppAsync(*reinterpret_cast<const hstring *>(&parameterGroupId)));
            return S_OK;
        }
        catch (...)
        {
            *asyncAction = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_LaunchFullTrustProcessForAppAsync(abi_arg_in<hstring> fullTrustPackageRelativeAppId, abi_arg_out<Windows::Foundation::IAsyncAction> asyncAction) noexcept override
    {
        try
        {
            *asyncAction = detach(shim().LaunchFullTrustProcessForAppAsync(*reinterpret_cast<const hstring *>(&fullTrustPackageRelativeAppId)));
            return S_OK;
        }
        catch (...)
        {
            *asyncAction = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_LaunchFullTrustProcessForAppWithParametersAsync(abi_arg_in<hstring> fullTrustPackageRelativeAppId, abi_arg_in<hstring> parameterGroupId, abi_arg_out<Windows::Foundation::IAsyncAction> asyncAction) noexcept override
    {
        try
        {
            *asyncAction = detach(shim().LaunchFullTrustProcessForAppAsync(*reinterpret_cast<const hstring *>(&fullTrustPackageRelativeAppId), *reinterpret_cast<const hstring *>(&parameterGroupId)));
            return S_OK;
        }
        catch (...)
        {
            *asyncAction = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::ILeavingBackgroundEventArgs> : produce_base<D, Windows::ApplicationModel::ILeavingBackgroundEventArgs>
{
    HRESULT __stdcall abi_GetDeferral(abi_arg_out<Windows::Foundation::IDeferral> value) noexcept override
    {
        try
        {
            *value = detach(shim().GetDeferral());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::IPackage> : produce_base<D, Windows::ApplicationModel::IPackage>
{
    HRESULT __stdcall get_Id(abi_arg_out<Windows::ApplicationModel::IPackageId> value) noexcept override
    {
        try
        {
            *value = detach(shim().Id());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_InstalledLocation(abi_arg_out<Windows::Storage::IStorageFolder> value) noexcept override
    {
        try
        {
            *value = detach(shim().InstalledLocation());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_IsFramework(bool * value) noexcept override
    {
        try
        {
            *value = detach(shim().IsFramework());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Dependencies(abi_arg_out<Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Package>> value) noexcept override
    {
        try
        {
            *value = detach(shim().Dependencies());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::IPackage2> : produce_base<D, Windows::ApplicationModel::IPackage2>
{
    HRESULT __stdcall get_DisplayName(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(shim().DisplayName());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_PublisherDisplayName(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(shim().PublisherDisplayName());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Description(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(shim().Description());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Logo(abi_arg_out<Windows::Foundation::IUriRuntimeClass> value) noexcept override
    {
        try
        {
            *value = detach(shim().Logo());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_IsResourcePackage(bool * value) noexcept override
    {
        try
        {
            *value = detach(shim().IsResourcePackage());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_IsBundle(bool * value) noexcept override
    {
        try
        {
            *value = detach(shim().IsBundle());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_IsDevelopmentMode(bool * value) noexcept override
    {
        try
        {
            *value = detach(shim().IsDevelopmentMode());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::IPackage3> : produce_base<D, Windows::ApplicationModel::IPackage3>
{
    HRESULT __stdcall get_Status(abi_arg_out<Windows::ApplicationModel::IPackageStatus> value) noexcept override
    {
        try
        {
            *value = detach(shim().Status());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_InstalledDate(abi_arg_out<Windows::Foundation::DateTime> value) noexcept override
    {
        try
        {
            *value = detach(shim().InstalledDate());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_GetAppListEntriesAsync(abi_arg_out<Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Core::AppListEntry>>> operation) noexcept override
    {
        try
        {
            *operation = detach(shim().GetAppListEntriesAsync());
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::IPackage4> : produce_base<D, Windows::ApplicationModel::IPackage4>
{
    HRESULT __stdcall get_SignatureKind(Windows::ApplicationModel::PackageSignatureKind * value) noexcept override
    {
        try
        {
            *value = detach(shim().SignatureKind());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_IsOptional(bool * value) noexcept override
    {
        try
        {
            *value = detach(shim().IsOptional());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_VerifyContentIntegrityAsync(abi_arg_out<Windows::Foundation::IAsyncOperation<bool>> operation) noexcept override
    {
        try
        {
            *operation = detach(shim().VerifyContentIntegrityAsync());
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::IPackageCatalog> : produce_base<D, Windows::ApplicationModel::IPackageCatalog>
{
    HRESULT __stdcall add_PackageStaging(abi_arg_in<Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::PackageCatalog, Windows::ApplicationModel::PackageStagingEventArgs>> handler, event_token * token) noexcept override
    {
        try
        {
            *token = detach(shim().PackageStaging(*reinterpret_cast<const Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::PackageCatalog, Windows::ApplicationModel::PackageStagingEventArgs> *>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_PackageStaging(event_token token) noexcept override
    {
        try
        {
            shim().PackageStaging(token);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_PackageInstalling(abi_arg_in<Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::PackageCatalog, Windows::ApplicationModel::PackageInstallingEventArgs>> handler, event_token * token) noexcept override
    {
        try
        {
            *token = detach(shim().PackageInstalling(*reinterpret_cast<const Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::PackageCatalog, Windows::ApplicationModel::PackageInstallingEventArgs> *>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_PackageInstalling(event_token token) noexcept override
    {
        try
        {
            shim().PackageInstalling(token);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_PackageUpdating(abi_arg_in<Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::PackageCatalog, Windows::ApplicationModel::PackageUpdatingEventArgs>> handler, event_token * token) noexcept override
    {
        try
        {
            *token = detach(shim().PackageUpdating(*reinterpret_cast<const Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::PackageCatalog, Windows::ApplicationModel::PackageUpdatingEventArgs> *>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_PackageUpdating(event_token token) noexcept override
    {
        try
        {
            shim().PackageUpdating(token);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_PackageUninstalling(abi_arg_in<Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::PackageCatalog, Windows::ApplicationModel::PackageUninstallingEventArgs>> handler, event_token * token) noexcept override
    {
        try
        {
            *token = detach(shim().PackageUninstalling(*reinterpret_cast<const Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::PackageCatalog, Windows::ApplicationModel::PackageUninstallingEventArgs> *>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_PackageUninstalling(event_token token) noexcept override
    {
        try
        {
            shim().PackageUninstalling(token);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_PackageStatusChanged(abi_arg_in<Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::PackageCatalog, Windows::ApplicationModel::PackageStatusChangedEventArgs>> handler, event_token * token) noexcept override
    {
        try
        {
            *token = detach(shim().PackageStatusChanged(*reinterpret_cast<const Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::PackageCatalog, Windows::ApplicationModel::PackageStatusChangedEventArgs> *>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_PackageStatusChanged(event_token token) noexcept override
    {
        try
        {
            shim().PackageStatusChanged(token);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::IPackageCatalogStatics> : produce_base<D, Windows::ApplicationModel::IPackageCatalogStatics>
{
    HRESULT __stdcall abi_OpenForCurrentPackage(abi_arg_out<Windows::ApplicationModel::IPackageCatalog> value) noexcept override
    {
        try
        {
            *value = detach(shim().OpenForCurrentPackage());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_OpenForCurrentUser(abi_arg_out<Windows::ApplicationModel::IPackageCatalog> value) noexcept override
    {
        try
        {
            *value = detach(shim().OpenForCurrentUser());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::IPackageId> : produce_base<D, Windows::ApplicationModel::IPackageId>
{
    HRESULT __stdcall get_Name(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(shim().Name());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Version(abi_arg_out<Windows::ApplicationModel::PackageVersion> value) noexcept override
    {
        try
        {
            *value = detach(shim().Version());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Architecture(Windows::System::ProcessorArchitecture * value) noexcept override
    {
        try
        {
            *value = detach(shim().Architecture());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ResourceId(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(shim().ResourceId());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Publisher(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(shim().Publisher());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_PublisherId(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(shim().PublisherId());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_FullName(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(shim().FullName());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_FamilyName(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(shim().FamilyName());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::IPackageIdWithMetadata> : produce_base<D, Windows::ApplicationModel::IPackageIdWithMetadata>
{
    HRESULT __stdcall get_ProductId(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(shim().ProductId());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Author(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(shim().Author());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::IPackageInstallingEventArgs> : produce_base<D, Windows::ApplicationModel::IPackageInstallingEventArgs>
{
    HRESULT __stdcall get_ActivityId(GUID * value) noexcept override
    {
        try
        {
            *value = detach(shim().ActivityId());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Package(abi_arg_out<Windows::ApplicationModel::IPackage> value) noexcept override
    {
        try
        {
            *value = detach(shim().Package());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Progress(double * value) noexcept override
    {
        try
        {
            *value = detach(shim().Progress());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_IsComplete(bool * value) noexcept override
    {
        try
        {
            *value = detach(shim().IsComplete());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ErrorCode(HRESULT * value) noexcept override
    {
        try
        {
            *value = detach(shim().ErrorCode());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::IPackageStagingEventArgs> : produce_base<D, Windows::ApplicationModel::IPackageStagingEventArgs>
{
    HRESULT __stdcall get_ActivityId(GUID * value) noexcept override
    {
        try
        {
            *value = detach(shim().ActivityId());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Package(abi_arg_out<Windows::ApplicationModel::IPackage> value) noexcept override
    {
        try
        {
            *value = detach(shim().Package());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Progress(double * value) noexcept override
    {
        try
        {
            *value = detach(shim().Progress());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_IsComplete(bool * value) noexcept override
    {
        try
        {
            *value = detach(shim().IsComplete());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ErrorCode(HRESULT * value) noexcept override
    {
        try
        {
            *value = detach(shim().ErrorCode());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::IPackageStatics> : produce_base<D, Windows::ApplicationModel::IPackageStatics>
{
    HRESULT __stdcall get_Current(abi_arg_out<Windows::ApplicationModel::IPackage> value) noexcept override
    {
        try
        {
            *value = detach(shim().Current());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::IPackageStatus> : produce_base<D, Windows::ApplicationModel::IPackageStatus>
{
    HRESULT __stdcall abi_VerifyIsOK(bool * value) noexcept override
    {
        try
        {
            *value = detach(shim().VerifyIsOK());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_NotAvailable(bool * value) noexcept override
    {
        try
        {
            *value = detach(shim().NotAvailable());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_PackageOffline(bool * value) noexcept override
    {
        try
        {
            *value = detach(shim().PackageOffline());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_DataOffline(bool * value) noexcept override
    {
        try
        {
            *value = detach(shim().DataOffline());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Disabled(bool * value) noexcept override
    {
        try
        {
            *value = detach(shim().Disabled());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_NeedsRemediation(bool * value) noexcept override
    {
        try
        {
            *value = detach(shim().NeedsRemediation());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_LicenseIssue(bool * value) noexcept override
    {
        try
        {
            *value = detach(shim().LicenseIssue());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Modified(bool * value) noexcept override
    {
        try
        {
            *value = detach(shim().Modified());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Tampered(bool * value) noexcept override
    {
        try
        {
            *value = detach(shim().Tampered());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_DependencyIssue(bool * value) noexcept override
    {
        try
        {
            *value = detach(shim().DependencyIssue());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Servicing(bool * value) noexcept override
    {
        try
        {
            *value = detach(shim().Servicing());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_DeploymentInProgress(bool * value) noexcept override
    {
        try
        {
            *value = detach(shim().DeploymentInProgress());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::IPackageStatusChangedEventArgs> : produce_base<D, Windows::ApplicationModel::IPackageStatusChangedEventArgs>
{
    HRESULT __stdcall get_Package(abi_arg_out<Windows::ApplicationModel::IPackage> value) noexcept override
    {
        try
        {
            *value = detach(shim().Package());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::IPackageUninstallingEventArgs> : produce_base<D, Windows::ApplicationModel::IPackageUninstallingEventArgs>
{
    HRESULT __stdcall get_ActivityId(GUID * value) noexcept override
    {
        try
        {
            *value = detach(shim().ActivityId());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Package(abi_arg_out<Windows::ApplicationModel::IPackage> value) noexcept override
    {
        try
        {
            *value = detach(shim().Package());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Progress(double * value) noexcept override
    {
        try
        {
            *value = detach(shim().Progress());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_IsComplete(bool * value) noexcept override
    {
        try
        {
            *value = detach(shim().IsComplete());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ErrorCode(HRESULT * value) noexcept override
    {
        try
        {
            *value = detach(shim().ErrorCode());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::IPackageUpdatingEventArgs> : produce_base<D, Windows::ApplicationModel::IPackageUpdatingEventArgs>
{
    HRESULT __stdcall get_ActivityId(GUID * value) noexcept override
    {
        try
        {
            *value = detach(shim().ActivityId());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_SourcePackage(abi_arg_out<Windows::ApplicationModel::IPackage> value) noexcept override
    {
        try
        {
            *value = detach(shim().SourcePackage());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_TargetPackage(abi_arg_out<Windows::ApplicationModel::IPackage> value) noexcept override
    {
        try
        {
            *value = detach(shim().TargetPackage());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Progress(double * value) noexcept override
    {
        try
        {
            *value = detach(shim().Progress());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_IsComplete(bool * value) noexcept override
    {
        try
        {
            *value = detach(shim().IsComplete());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ErrorCode(HRESULT * value) noexcept override
    {
        try
        {
            *value = detach(shim().ErrorCode());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::IPackageWithMetadata> : produce_base<D, Windows::ApplicationModel::IPackageWithMetadata>
{
    HRESULT __stdcall get_InstallDate(abi_arg_out<Windows::Foundation::DateTime> value) noexcept override
    {
        try
        {
            *value = detach(shim().InstallDate());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_GetThumbnailToken(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(shim().GetThumbnailToken());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_Launch(abi_arg_in<hstring> parameters) noexcept override
    {
        try
        {
            shim().Launch(*reinterpret_cast<const hstring *>(&parameters));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::IStartupTask> : produce_base<D, Windows::ApplicationModel::IStartupTask>
{
    HRESULT __stdcall abi_RequestEnableAsync(abi_arg_out<Windows::Foundation::IAsyncOperation<winrt::Windows::ApplicationModel::StartupTaskState>> operation) noexcept override
    {
        try
        {
            *operation = detach(shim().RequestEnableAsync());
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_Disable() noexcept override
    {
        try
        {
            shim().Disable();
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_State(Windows::ApplicationModel::StartupTaskState * value) noexcept override
    {
        try
        {
            *value = detach(shim().State());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_TaskId(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(shim().TaskId());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::IStartupTaskStatics> : produce_base<D, Windows::ApplicationModel::IStartupTaskStatics>
{
    HRESULT __stdcall abi_GetForCurrentPackageAsync(abi_arg_out<Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::StartupTask>>> operation) noexcept override
    {
        try
        {
            *operation = detach(shim().GetForCurrentPackageAsync());
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_GetAsync(abi_arg_in<hstring> taskId, abi_arg_out<Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::StartupTask>> operation) noexcept override
    {
        try
        {
            *operation = detach(shim().GetAsync(*reinterpret_cast<const hstring *>(&taskId)));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::ISuspendingDeferral> : produce_base<D, Windows::ApplicationModel::ISuspendingDeferral>
{
    HRESULT __stdcall abi_Complete() noexcept override
    {
        try
        {
            shim().Complete();
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::ISuspendingEventArgs> : produce_base<D, Windows::ApplicationModel::ISuspendingEventArgs>
{
    HRESULT __stdcall get_SuspendingOperation(abi_arg_out<Windows::ApplicationModel::ISuspendingOperation> value) noexcept override
    {
        try
        {
            *value = detach(shim().SuspendingOperation());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::ISuspendingOperation> : produce_base<D, Windows::ApplicationModel::ISuspendingOperation>
{
    HRESULT __stdcall abi_GetDeferral(abi_arg_out<Windows::ApplicationModel::ISuspendingDeferral> deferral) noexcept override
    {
        try
        {
            *deferral = detach(shim().GetDeferral());
            return S_OK;
        }
        catch (...)
        {
            *deferral = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Deadline(abi_arg_out<Windows::Foundation::DateTime> value) noexcept override
    {
        try
        {
            *value = detach(shim().Deadline());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

}

namespace Windows::ApplicationModel {

template <typename D> Windows::Foundation::IAsyncAction impl_IFullTrustProcessLauncherStatics<D>::LaunchFullTrustProcessForCurrentAppAsync() const
{
    Windows::Foundation::IAsyncAction asyncAction;
    check_hresult(shim()->abi_LaunchFullTrustProcessForCurrentAppAsync(put(asyncAction)));
    return asyncAction;
}

template <typename D> Windows::Foundation::IAsyncAction impl_IFullTrustProcessLauncherStatics<D>::LaunchFullTrustProcessForCurrentAppAsync(hstring_ref parameterGroupId) const
{
    Windows::Foundation::IAsyncAction asyncAction;
    check_hresult(shim()->abi_LaunchFullTrustProcessForCurrentAppWithParametersAsync(get(parameterGroupId), put(asyncAction)));
    return asyncAction;
}

template <typename D> Windows::Foundation::IAsyncAction impl_IFullTrustProcessLauncherStatics<D>::LaunchFullTrustProcessForAppAsync(hstring_ref fullTrustPackageRelativeAppId) const
{
    Windows::Foundation::IAsyncAction asyncAction;
    check_hresult(shim()->abi_LaunchFullTrustProcessForAppAsync(get(fullTrustPackageRelativeAppId), put(asyncAction)));
    return asyncAction;
}

template <typename D> Windows::Foundation::IAsyncAction impl_IFullTrustProcessLauncherStatics<D>::LaunchFullTrustProcessForAppAsync(hstring_ref fullTrustPackageRelativeAppId, hstring_ref parameterGroupId) const
{
    Windows::Foundation::IAsyncAction asyncAction;
    check_hresult(shim()->abi_LaunchFullTrustProcessForAppWithParametersAsync(get(fullTrustPackageRelativeAppId), get(parameterGroupId), put(asyncAction)));
    return asyncAction;
}

template <typename D> hstring impl_IAppDisplayInfo<D>::DisplayName() const
{
    hstring value;
    check_hresult(shim()->get_DisplayName(put(value)));
    return value;
}

template <typename D> hstring impl_IAppDisplayInfo<D>::Description() const
{
    hstring value;
    check_hresult(shim()->get_Description(put(value)));
    return value;
}

template <typename D> Windows::Storage::Streams::RandomAccessStreamReference impl_IAppDisplayInfo<D>::GetLogo(const Windows::Foundation::Size & size) const
{
    Windows::Storage::Streams::RandomAccessStreamReference value { nullptr };
    check_hresult(shim()->abi_GetLogo(get(size), put(value)));
    return value;
}

template <typename D> hstring impl_IAppInfo<D>::Id() const
{
    hstring value;
    check_hresult(shim()->get_Id(put(value)));
    return value;
}

template <typename D> hstring impl_IAppInfo<D>::AppUserModelId() const
{
    hstring value;
    check_hresult(shim()->get_AppUserModelId(put(value)));
    return value;
}

template <typename D> Windows::ApplicationModel::AppDisplayInfo impl_IAppInfo<D>::DisplayInfo() const
{
    Windows::ApplicationModel::AppDisplayInfo value { nullptr };
    check_hresult(shim()->get_DisplayInfo(put(value)));
    return value;
}

template <typename D> hstring impl_IAppInfo<D>::PackageFamilyName() const
{
    hstring value;
    check_hresult(shim()->get_PackageFamilyName(put(value)));
    return value;
}

template <typename D> void impl_ISuspendingDeferral<D>::Complete() const
{
    check_hresult(shim()->abi_Complete());
}

template <typename D> Windows::ApplicationModel::SuspendingDeferral impl_ISuspendingOperation<D>::GetDeferral() const
{
    Windows::ApplicationModel::SuspendingDeferral deferral { nullptr };
    check_hresult(shim()->abi_GetDeferral(put(deferral)));
    return deferral;
}

template <typename D> Windows::Foundation::DateTime impl_ISuspendingOperation<D>::Deadline() const
{
    Windows::Foundation::DateTime value {};
    check_hresult(shim()->get_Deadline(put(value)));
    return value;
}

template <typename D> Windows::ApplicationModel::SuspendingOperation impl_ISuspendingEventArgs<D>::SuspendingOperation() const
{
    Windows::ApplicationModel::SuspendingOperation value { nullptr };
    check_hresult(shim()->get_SuspendingOperation(put(value)));
    return value;
}

template <typename D> Windows::Foundation::Deferral impl_ILeavingBackgroundEventArgs<D>::GetDeferral() const
{
    Windows::Foundation::Deferral value { nullptr };
    check_hresult(shim()->abi_GetDeferral(put(value)));
    return value;
}

template <typename D> Windows::Foundation::Deferral impl_IEnteredBackgroundEventArgs<D>::GetDeferral() const
{
    Windows::Foundation::Deferral value { nullptr };
    check_hresult(shim()->abi_GetDeferral(put(value)));
    return value;
}

template <typename D> hstring impl_IPackageIdWithMetadata<D>::ProductId() const
{
    hstring value;
    check_hresult(shim()->get_ProductId(put(value)));
    return value;
}

template <typename D> hstring impl_IPackageIdWithMetadata<D>::Author() const
{
    hstring value;
    check_hresult(shim()->get_Author(put(value)));
    return value;
}

template <typename D> Windows::Foundation::DateTime impl_IPackageWithMetadata<D>::InstallDate() const
{
    Windows::Foundation::DateTime value {};
    check_hresult(shim()->get_InstallDate(put(value)));
    return value;
}

template <typename D> hstring impl_IPackageWithMetadata<D>::GetThumbnailToken() const
{
    hstring value;
    check_hresult(shim()->abi_GetThumbnailToken(put(value)));
    return value;
}

template <typename D> void impl_IPackageWithMetadata<D>::Launch(hstring_ref parameters) const
{
    check_hresult(shim()->abi_Launch(get(parameters)));
}

template <typename D> bool impl_IPackageStatus<D>::VerifyIsOK() const
{
    bool value {};
    check_hresult(shim()->abi_VerifyIsOK(&value));
    return value;
}

template <typename D> bool impl_IPackageStatus<D>::NotAvailable() const
{
    bool value {};
    check_hresult(shim()->get_NotAvailable(&value));
    return value;
}

template <typename D> bool impl_IPackageStatus<D>::PackageOffline() const
{
    bool value {};
    check_hresult(shim()->get_PackageOffline(&value));
    return value;
}

template <typename D> bool impl_IPackageStatus<D>::DataOffline() const
{
    bool value {};
    check_hresult(shim()->get_DataOffline(&value));
    return value;
}

template <typename D> bool impl_IPackageStatus<D>::Disabled() const
{
    bool value {};
    check_hresult(shim()->get_Disabled(&value));
    return value;
}

template <typename D> bool impl_IPackageStatus<D>::NeedsRemediation() const
{
    bool value {};
    check_hresult(shim()->get_NeedsRemediation(&value));
    return value;
}

template <typename D> bool impl_IPackageStatus<D>::LicenseIssue() const
{
    bool value {};
    check_hresult(shim()->get_LicenseIssue(&value));
    return value;
}

template <typename D> bool impl_IPackageStatus<D>::Modified() const
{
    bool value {};
    check_hresult(shim()->get_Modified(&value));
    return value;
}

template <typename D> bool impl_IPackageStatus<D>::Tampered() const
{
    bool value {};
    check_hresult(shim()->get_Tampered(&value));
    return value;
}

template <typename D> bool impl_IPackageStatus<D>::DependencyIssue() const
{
    bool value {};
    check_hresult(shim()->get_DependencyIssue(&value));
    return value;
}

template <typename D> bool impl_IPackageStatus<D>::Servicing() const
{
    bool value {};
    check_hresult(shim()->get_Servicing(&value));
    return value;
}

template <typename D> bool impl_IPackageStatus<D>::DeploymentInProgress() const
{
    bool value {};
    check_hresult(shim()->get_DeploymentInProgress(&value));
    return value;
}

template <typename D> hstring impl_IPackageId<D>::Name() const
{
    hstring value;
    check_hresult(shim()->get_Name(put(value)));
    return value;
}

template <typename D> Windows::ApplicationModel::PackageVersion impl_IPackageId<D>::Version() const
{
    Windows::ApplicationModel::PackageVersion value {};
    check_hresult(shim()->get_Version(put(value)));
    return value;
}

template <typename D> Windows::System::ProcessorArchitecture impl_IPackageId<D>::Architecture() const
{
    Windows::System::ProcessorArchitecture value {};
    check_hresult(shim()->get_Architecture(&value));
    return value;
}

template <typename D> hstring impl_IPackageId<D>::ResourceId() const
{
    hstring value;
    check_hresult(shim()->get_ResourceId(put(value)));
    return value;
}

template <typename D> hstring impl_IPackageId<D>::Publisher() const
{
    hstring value;
    check_hresult(shim()->get_Publisher(put(value)));
    return value;
}

template <typename D> hstring impl_IPackageId<D>::PublisherId() const
{
    hstring value;
    check_hresult(shim()->get_PublisherId(put(value)));
    return value;
}

template <typename D> hstring impl_IPackageId<D>::FullName() const
{
    hstring value;
    check_hresult(shim()->get_FullName(put(value)));
    return value;
}

template <typename D> hstring impl_IPackageId<D>::FamilyName() const
{
    hstring value;
    check_hresult(shim()->get_FamilyName(put(value)));
    return value;
}

template <typename D> Windows::ApplicationModel::PackageId impl_IPackage<D>::Id() const
{
    Windows::ApplicationModel::PackageId value { nullptr };
    check_hresult(shim()->get_Id(put(value)));
    return value;
}

template <typename D> Windows::Storage::StorageFolder impl_IPackage<D>::InstalledLocation() const
{
    Windows::Storage::StorageFolder value { nullptr };
    check_hresult(shim()->get_InstalledLocation(put(value)));
    return value;
}

template <typename D> bool impl_IPackage<D>::IsFramework() const
{
    bool value {};
    check_hresult(shim()->get_IsFramework(&value));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Package> impl_IPackage<D>::Dependencies() const
{
    Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Package> value;
    check_hresult(shim()->get_Dependencies(put(value)));
    return value;
}

template <typename D> hstring impl_IPackage2<D>::DisplayName() const
{
    hstring value;
    check_hresult(shim()->get_DisplayName(put(value)));
    return value;
}

template <typename D> hstring impl_IPackage2<D>::PublisherDisplayName() const
{
    hstring value;
    check_hresult(shim()->get_PublisherDisplayName(put(value)));
    return value;
}

template <typename D> hstring impl_IPackage2<D>::Description() const
{
    hstring value;
    check_hresult(shim()->get_Description(put(value)));
    return value;
}

template <typename D> Windows::Foundation::Uri impl_IPackage2<D>::Logo() const
{
    Windows::Foundation::Uri value { nullptr };
    check_hresult(shim()->get_Logo(put(value)));
    return value;
}

template <typename D> bool impl_IPackage2<D>::IsResourcePackage() const
{
    bool value {};
    check_hresult(shim()->get_IsResourcePackage(&value));
    return value;
}

template <typename D> bool impl_IPackage2<D>::IsBundle() const
{
    bool value {};
    check_hresult(shim()->get_IsBundle(&value));
    return value;
}

template <typename D> bool impl_IPackage2<D>::IsDevelopmentMode() const
{
    bool value {};
    check_hresult(shim()->get_IsDevelopmentMode(&value));
    return value;
}

template <typename D> Windows::ApplicationModel::PackageStatus impl_IPackage3<D>::Status() const
{
    Windows::ApplicationModel::PackageStatus value { nullptr };
    check_hresult(shim()->get_Status(put(value)));
    return value;
}

template <typename D> Windows::Foundation::DateTime impl_IPackage3<D>::InstalledDate() const
{
    Windows::Foundation::DateTime value {};
    check_hresult(shim()->get_InstalledDate(put(value)));
    return value;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Core::AppListEntry>> impl_IPackage3<D>::GetAppListEntriesAsync() const
{
    Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Core::AppListEntry>> operation;
    check_hresult(shim()->abi_GetAppListEntriesAsync(put(operation)));
    return operation;
}

template <typename D> Windows::ApplicationModel::PackageSignatureKind impl_IPackage4<D>::SignatureKind() const
{
    Windows::ApplicationModel::PackageSignatureKind value {};
    check_hresult(shim()->get_SignatureKind(&value));
    return value;
}

template <typename D> bool impl_IPackage4<D>::IsOptional() const
{
    bool value {};
    check_hresult(shim()->get_IsOptional(&value));
    return value;
}

template <typename D> Windows::Foundation::IAsyncOperation<bool> impl_IPackage4<D>::VerifyContentIntegrityAsync() const
{
    Windows::Foundation::IAsyncOperation<bool> operation;
    check_hresult(shim()->abi_VerifyContentIntegrityAsync(put(operation)));
    return operation;
}

template <typename D> Windows::ApplicationModel::Package impl_IPackageStatics<D>::Current() const
{
    Windows::ApplicationModel::Package value { nullptr };
    check_hresult(shim()->get_Current(put(value)));
    return value;
}

template <typename D> GUID impl_IPackageStagingEventArgs<D>::ActivityId() const
{
    GUID value {};
    check_hresult(shim()->get_ActivityId(&value));
    return value;
}

template <typename D> Windows::ApplicationModel::Package impl_IPackageStagingEventArgs<D>::Package() const
{
    Windows::ApplicationModel::Package value { nullptr };
    check_hresult(shim()->get_Package(put(value)));
    return value;
}

template <typename D> double impl_IPackageStagingEventArgs<D>::Progress() const
{
    double value {};
    check_hresult(shim()->get_Progress(&value));
    return value;
}

template <typename D> bool impl_IPackageStagingEventArgs<D>::IsComplete() const
{
    bool value {};
    check_hresult(shim()->get_IsComplete(&value));
    return value;
}

template <typename D> HRESULT impl_IPackageStagingEventArgs<D>::ErrorCode() const
{
    HRESULT value {};
    check_hresult(shim()->get_ErrorCode(&value));
    return value;
}

template <typename D> GUID impl_IPackageInstallingEventArgs<D>::ActivityId() const
{
    GUID value {};
    check_hresult(shim()->get_ActivityId(&value));
    return value;
}

template <typename D> Windows::ApplicationModel::Package impl_IPackageInstallingEventArgs<D>::Package() const
{
    Windows::ApplicationModel::Package value { nullptr };
    check_hresult(shim()->get_Package(put(value)));
    return value;
}

template <typename D> double impl_IPackageInstallingEventArgs<D>::Progress() const
{
    double value {};
    check_hresult(shim()->get_Progress(&value));
    return value;
}

template <typename D> bool impl_IPackageInstallingEventArgs<D>::IsComplete() const
{
    bool value {};
    check_hresult(shim()->get_IsComplete(&value));
    return value;
}

template <typename D> HRESULT impl_IPackageInstallingEventArgs<D>::ErrorCode() const
{
    HRESULT value {};
    check_hresult(shim()->get_ErrorCode(&value));
    return value;
}

template <typename D> GUID impl_IPackageUpdatingEventArgs<D>::ActivityId() const
{
    GUID value {};
    check_hresult(shim()->get_ActivityId(&value));
    return value;
}

template <typename D> Windows::ApplicationModel::Package impl_IPackageUpdatingEventArgs<D>::SourcePackage() const
{
    Windows::ApplicationModel::Package value { nullptr };
    check_hresult(shim()->get_SourcePackage(put(value)));
    return value;
}

template <typename D> Windows::ApplicationModel::Package impl_IPackageUpdatingEventArgs<D>::TargetPackage() const
{
    Windows::ApplicationModel::Package value { nullptr };
    check_hresult(shim()->get_TargetPackage(put(value)));
    return value;
}

template <typename D> double impl_IPackageUpdatingEventArgs<D>::Progress() const
{
    double value {};
    check_hresult(shim()->get_Progress(&value));
    return value;
}

template <typename D> bool impl_IPackageUpdatingEventArgs<D>::IsComplete() const
{
    bool value {};
    check_hresult(shim()->get_IsComplete(&value));
    return value;
}

template <typename D> HRESULT impl_IPackageUpdatingEventArgs<D>::ErrorCode() const
{
    HRESULT value {};
    check_hresult(shim()->get_ErrorCode(&value));
    return value;
}

template <typename D> GUID impl_IPackageUninstallingEventArgs<D>::ActivityId() const
{
    GUID value {};
    check_hresult(shim()->get_ActivityId(&value));
    return value;
}

template <typename D> Windows::ApplicationModel::Package impl_IPackageUninstallingEventArgs<D>::Package() const
{
    Windows::ApplicationModel::Package value { nullptr };
    check_hresult(shim()->get_Package(put(value)));
    return value;
}

template <typename D> double impl_IPackageUninstallingEventArgs<D>::Progress() const
{
    double value {};
    check_hresult(shim()->get_Progress(&value));
    return value;
}

template <typename D> bool impl_IPackageUninstallingEventArgs<D>::IsComplete() const
{
    bool value {};
    check_hresult(shim()->get_IsComplete(&value));
    return value;
}

template <typename D> HRESULT impl_IPackageUninstallingEventArgs<D>::ErrorCode() const
{
    HRESULT value {};
    check_hresult(shim()->get_ErrorCode(&value));
    return value;
}

template <typename D> Windows::ApplicationModel::Package impl_IPackageStatusChangedEventArgs<D>::Package() const
{
    Windows::ApplicationModel::Package value { nullptr };
    check_hresult(shim()->get_Package(put(value)));
    return value;
}

template <typename D> event_token impl_IPackageCatalog<D>::PackageStaging(const Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::PackageCatalog, Windows::ApplicationModel::PackageStagingEventArgs> & handler) const
{
    event_token token {};
    check_hresult(shim()->add_PackageStaging(get(handler), &token));
    return token;
}

template <typename D> event_revoker<IPackageCatalog> impl_IPackageCatalog<D>::PackageStaging(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::PackageCatalog, Windows::ApplicationModel::PackageStagingEventArgs> & handler) const
{
    return impl::make_event_revoker<D, IPackageCatalog>(this, &ABI::Windows::ApplicationModel::IPackageCatalog::remove_PackageStaging, PackageStaging(handler));
}

template <typename D> void impl_IPackageCatalog<D>::PackageStaging(event_token token) const
{
    check_hresult(shim()->remove_PackageStaging(token));
}

template <typename D> event_token impl_IPackageCatalog<D>::PackageInstalling(const Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::PackageCatalog, Windows::ApplicationModel::PackageInstallingEventArgs> & handler) const
{
    event_token token {};
    check_hresult(shim()->add_PackageInstalling(get(handler), &token));
    return token;
}

template <typename D> event_revoker<IPackageCatalog> impl_IPackageCatalog<D>::PackageInstalling(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::PackageCatalog, Windows::ApplicationModel::PackageInstallingEventArgs> & handler) const
{
    return impl::make_event_revoker<D, IPackageCatalog>(this, &ABI::Windows::ApplicationModel::IPackageCatalog::remove_PackageInstalling, PackageInstalling(handler));
}

template <typename D> void impl_IPackageCatalog<D>::PackageInstalling(event_token token) const
{
    check_hresult(shim()->remove_PackageInstalling(token));
}

template <typename D> event_token impl_IPackageCatalog<D>::PackageUpdating(const Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::PackageCatalog, Windows::ApplicationModel::PackageUpdatingEventArgs> & handler) const
{
    event_token token {};
    check_hresult(shim()->add_PackageUpdating(get(handler), &token));
    return token;
}

template <typename D> event_revoker<IPackageCatalog> impl_IPackageCatalog<D>::PackageUpdating(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::PackageCatalog, Windows::ApplicationModel::PackageUpdatingEventArgs> & handler) const
{
    return impl::make_event_revoker<D, IPackageCatalog>(this, &ABI::Windows::ApplicationModel::IPackageCatalog::remove_PackageUpdating, PackageUpdating(handler));
}

template <typename D> void impl_IPackageCatalog<D>::PackageUpdating(event_token token) const
{
    check_hresult(shim()->remove_PackageUpdating(token));
}

template <typename D> event_token impl_IPackageCatalog<D>::PackageUninstalling(const Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::PackageCatalog, Windows::ApplicationModel::PackageUninstallingEventArgs> & handler) const
{
    event_token token {};
    check_hresult(shim()->add_PackageUninstalling(get(handler), &token));
    return token;
}

template <typename D> event_revoker<IPackageCatalog> impl_IPackageCatalog<D>::PackageUninstalling(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::PackageCatalog, Windows::ApplicationModel::PackageUninstallingEventArgs> & handler) const
{
    return impl::make_event_revoker<D, IPackageCatalog>(this, &ABI::Windows::ApplicationModel::IPackageCatalog::remove_PackageUninstalling, PackageUninstalling(handler));
}

template <typename D> void impl_IPackageCatalog<D>::PackageUninstalling(event_token token) const
{
    check_hresult(shim()->remove_PackageUninstalling(token));
}

template <typename D> event_token impl_IPackageCatalog<D>::PackageStatusChanged(const Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::PackageCatalog, Windows::ApplicationModel::PackageStatusChangedEventArgs> & handler) const
{
    event_token token {};
    check_hresult(shim()->add_PackageStatusChanged(get(handler), &token));
    return token;
}

template <typename D> event_revoker<IPackageCatalog> impl_IPackageCatalog<D>::PackageStatusChanged(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::PackageCatalog, Windows::ApplicationModel::PackageStatusChangedEventArgs> & handler) const
{
    return impl::make_event_revoker<D, IPackageCatalog>(this, &ABI::Windows::ApplicationModel::IPackageCatalog::remove_PackageStatusChanged, PackageStatusChanged(handler));
}

template <typename D> void impl_IPackageCatalog<D>::PackageStatusChanged(event_token token) const
{
    check_hresult(shim()->remove_PackageStatusChanged(token));
}

template <typename D> Windows::ApplicationModel::PackageCatalog impl_IPackageCatalogStatics<D>::OpenForCurrentPackage() const
{
    Windows::ApplicationModel::PackageCatalog value { nullptr };
    check_hresult(shim()->abi_OpenForCurrentPackage(put(value)));
    return value;
}

template <typename D> Windows::ApplicationModel::PackageCatalog impl_IPackageCatalogStatics<D>::OpenForCurrentUser() const
{
    Windows::ApplicationModel::PackageCatalog value { nullptr };
    check_hresult(shim()->abi_OpenForCurrentUser(put(value)));
    return value;
}

template <typename D> bool impl_IDesignModeStatics<D>::DesignModeEnabled() const
{
    bool value {};
    check_hresult(shim()->get_DesignModeEnabled(&value));
    return value;
}

template <typename D> Windows::Foundation::IAsyncOperation<winrt::Windows::ApplicationModel::StartupTaskState> impl_IStartupTask<D>::RequestEnableAsync() const
{
    Windows::Foundation::IAsyncOperation<winrt::Windows::ApplicationModel::StartupTaskState> operation;
    check_hresult(shim()->abi_RequestEnableAsync(put(operation)));
    return operation;
}

template <typename D> void impl_IStartupTask<D>::Disable() const
{
    check_hresult(shim()->abi_Disable());
}

template <typename D> Windows::ApplicationModel::StartupTaskState impl_IStartupTask<D>::State() const
{
    Windows::ApplicationModel::StartupTaskState value {};
    check_hresult(shim()->get_State(&value));
    return value;
}

template <typename D> hstring impl_IStartupTask<D>::TaskId() const
{
    hstring value;
    check_hresult(shim()->get_TaskId(put(value)));
    return value;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::StartupTask>> impl_IStartupTaskStatics<D>::GetForCurrentPackageAsync() const
{
    Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::StartupTask>> operation;
    check_hresult(shim()->abi_GetForCurrentPackageAsync(put(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::StartupTask> impl_IStartupTaskStatics<D>::GetAsync(hstring_ref taskId) const
{
    Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::StartupTask> operation;
    check_hresult(shim()->abi_GetAsync(get(taskId), put(operation)));
    return operation;
}

inline bool DesignMode::DesignModeEnabled()
{
    return get_activation_factory<DesignMode, IDesignModeStatics>().DesignModeEnabled();
}

inline Windows::Foundation::IAsyncAction FullTrustProcessLauncher::LaunchFullTrustProcessForCurrentAppAsync()
{
    return get_activation_factory<FullTrustProcessLauncher, IFullTrustProcessLauncherStatics>().LaunchFullTrustProcessForCurrentAppAsync();
}

inline Windows::Foundation::IAsyncAction FullTrustProcessLauncher::LaunchFullTrustProcessForCurrentAppAsync(hstring_ref parameterGroupId)
{
    return get_activation_factory<FullTrustProcessLauncher, IFullTrustProcessLauncherStatics>().LaunchFullTrustProcessForCurrentAppAsync(parameterGroupId);
}

inline Windows::Foundation::IAsyncAction FullTrustProcessLauncher::LaunchFullTrustProcessForAppAsync(hstring_ref fullTrustPackageRelativeAppId)
{
    return get_activation_factory<FullTrustProcessLauncher, IFullTrustProcessLauncherStatics>().LaunchFullTrustProcessForAppAsync(fullTrustPackageRelativeAppId);
}

inline Windows::Foundation::IAsyncAction FullTrustProcessLauncher::LaunchFullTrustProcessForAppAsync(hstring_ref fullTrustPackageRelativeAppId, hstring_ref parameterGroupId)
{
    return get_activation_factory<FullTrustProcessLauncher, IFullTrustProcessLauncherStatics>().LaunchFullTrustProcessForAppAsync(fullTrustPackageRelativeAppId, parameterGroupId);
}

inline Windows::ApplicationModel::Package Package::Current()
{
    return get_activation_factory<Package, IPackageStatics>().Current();
}

inline Windows::ApplicationModel::PackageCatalog PackageCatalog::OpenForCurrentPackage()
{
    return get_activation_factory<PackageCatalog, IPackageCatalogStatics>().OpenForCurrentPackage();
}

inline Windows::ApplicationModel::PackageCatalog PackageCatalog::OpenForCurrentUser()
{
    return get_activation_factory<PackageCatalog, IPackageCatalogStatics>().OpenForCurrentUser();
}

inline Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::StartupTask>> StartupTask::GetForCurrentPackageAsync()
{
    return get_activation_factory<StartupTask, IStartupTaskStatics>().GetForCurrentPackageAsync();
}

inline Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::StartupTask> StartupTask::GetAsync(hstring_ref taskId)
{
    return get_activation_factory<StartupTask, IStartupTaskStatics>().GetAsync(taskId);
}

}

}
