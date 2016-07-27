// C++ for the Windows Runtime v1.29
// Copyright (c) 2016 Microsoft Corporation

#pragma once

#include "internal\Windows.Storage.Streams.3.h"
#include "internal\Windows.Foundation.Collections.3.h"
#include "internal\Windows.ApplicationModel.DataTransfer.3.h"
#include "internal\Windows.ApplicationModel.DataTransfer.ShareTarget.3.h"
#include "Windows.ApplicationModel.DataTransfer.h"

WINRT_EXPORT namespace winrt {

namespace impl {

template <typename D>
struct produce<D, Windows::ApplicationModel::DataTransfer::ShareTarget::IQuickLink> : produce_base<D, Windows::ApplicationModel::DataTransfer::ShareTarget::IQuickLink>
{
    HRESULT __stdcall get_Title(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(shim().Title());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Title(abi_arg_in<hstring> value) noexcept override
    {
        try
        {
            shim().Title(*reinterpret_cast<const hstring *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Thumbnail(abi_arg_out<Windows::Storage::Streams::IRandomAccessStreamReference> value) noexcept override
    {
        try
        {
            *value = detach(shim().Thumbnail());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Thumbnail(abi_arg_in<Windows::Storage::Streams::IRandomAccessStreamReference> value) noexcept override
    {
        try
        {
            shim().Thumbnail(*reinterpret_cast<const Windows::Storage::Streams::RandomAccessStreamReference *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

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

    HRESULT __stdcall put_Id(abi_arg_in<hstring> value) noexcept override
    {
        try
        {
            shim().Id(*reinterpret_cast<const hstring *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_SupportedDataFormats(abi_arg_out<Windows::Foundation::Collections::IVector<hstring>> value) noexcept override
    {
        try
        {
            *value = detach(shim().SupportedDataFormats());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_SupportedFileTypes(abi_arg_out<Windows::Foundation::Collections::IVector<hstring>> value) noexcept override
    {
        try
        {
            *value = detach(shim().SupportedFileTypes());
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
struct produce<D, Windows::ApplicationModel::DataTransfer::ShareTarget::IShareOperation> : produce_base<D, Windows::ApplicationModel::DataTransfer::ShareTarget::IShareOperation>
{
    HRESULT __stdcall get_Data(abi_arg_out<Windows::ApplicationModel::DataTransfer::IDataPackageView> value) noexcept override
    {
        try
        {
            *value = detach(shim().Data());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_QuickLinkId(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(shim().QuickLinkId());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_RemoveThisQuickLink() noexcept override
    {
        try
        {
            shim().RemoveThisQuickLink();
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_ReportStarted() noexcept override
    {
        try
        {
            shim().ReportStarted();
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_ReportDataRetrieved() noexcept override
    {
        try
        {
            shim().ReportDataRetrieved();
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_ReportSubmittedBackgroundTask() noexcept override
    {
        try
        {
            shim().ReportSubmittedBackgroundTask();
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_ReportCompletedWithQuickLink(abi_arg_in<Windows::ApplicationModel::DataTransfer::ShareTarget::IQuickLink> quicklink) noexcept override
    {
        try
        {
            shim().ReportCompleted(*reinterpret_cast<const Windows::ApplicationModel::DataTransfer::ShareTarget::QuickLink *>(&quicklink));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_ReportCompleted() noexcept override
    {
        try
        {
            shim().ReportCompleted();
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_ReportError(abi_arg_in<hstring> value) noexcept override
    {
        try
        {
            shim().ReportError(*reinterpret_cast<const hstring *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::DataTransfer::ShareTarget::IShareOperation2> : produce_base<D, Windows::ApplicationModel::DataTransfer::ShareTarget::IShareOperation2>
{
    HRESULT __stdcall abi_DismissUI() noexcept override
    {
        try
        {
            shim().DismissUI();
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

}

namespace Windows::ApplicationModel::DataTransfer::ShareTarget {

template <typename D> hstring impl_IQuickLink<D>::Title() const
{
    hstring value;
    check_hresult(shim()->get_Title(put(value)));
    return value;
}

template <typename D> void impl_IQuickLink<D>::Title(hstring_ref value) const
{
    check_hresult(shim()->put_Title(get(value)));
}

template <typename D> Windows::Storage::Streams::RandomAccessStreamReference impl_IQuickLink<D>::Thumbnail() const
{
    Windows::Storage::Streams::RandomAccessStreamReference value { nullptr };
    check_hresult(shim()->get_Thumbnail(put(value)));
    return value;
}

template <typename D> void impl_IQuickLink<D>::Thumbnail(const Windows::Storage::Streams::RandomAccessStreamReference & value) const
{
    check_hresult(shim()->put_Thumbnail(get(value)));
}

template <typename D> hstring impl_IQuickLink<D>::Id() const
{
    hstring value;
    check_hresult(shim()->get_Id(put(value)));
    return value;
}

template <typename D> void impl_IQuickLink<D>::Id(hstring_ref value) const
{
    check_hresult(shim()->put_Id(get(value)));
}

template <typename D> Windows::Foundation::Collections::IVector<hstring> impl_IQuickLink<D>::SupportedDataFormats() const
{
    Windows::Foundation::Collections::IVector<hstring> value;
    check_hresult(shim()->get_SupportedDataFormats(put(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVector<hstring> impl_IQuickLink<D>::SupportedFileTypes() const
{
    Windows::Foundation::Collections::IVector<hstring> value;
    check_hresult(shim()->get_SupportedFileTypes(put(value)));
    return value;
}

template <typename D> Windows::ApplicationModel::DataTransfer::DataPackageView impl_IShareOperation<D>::Data() const
{
    Windows::ApplicationModel::DataTransfer::DataPackageView value { nullptr };
    check_hresult(shim()->get_Data(put(value)));
    return value;
}

template <typename D> hstring impl_IShareOperation<D>::QuickLinkId() const
{
    hstring value;
    check_hresult(shim()->get_QuickLinkId(put(value)));
    return value;
}

template <typename D> void impl_IShareOperation<D>::RemoveThisQuickLink() const
{
    check_hresult(shim()->abi_RemoveThisQuickLink());
}

template <typename D> void impl_IShareOperation<D>::ReportStarted() const
{
    check_hresult(shim()->abi_ReportStarted());
}

template <typename D> void impl_IShareOperation<D>::ReportDataRetrieved() const
{
    check_hresult(shim()->abi_ReportDataRetrieved());
}

template <typename D> void impl_IShareOperation<D>::ReportSubmittedBackgroundTask() const
{
    check_hresult(shim()->abi_ReportSubmittedBackgroundTask());
}

template <typename D> void impl_IShareOperation<D>::ReportCompleted(const Windows::ApplicationModel::DataTransfer::ShareTarget::QuickLink & quicklink) const
{
    check_hresult(shim()->abi_ReportCompletedWithQuickLink(get(quicklink)));
}

template <typename D> void impl_IShareOperation<D>::ReportCompleted() const
{
    check_hresult(shim()->abi_ReportCompleted());
}

template <typename D> void impl_IShareOperation<D>::ReportError(hstring_ref value) const
{
    check_hresult(shim()->abi_ReportError(get(value)));
}

template <typename D> void impl_IShareOperation2<D>::DismissUI() const
{
    check_hresult(shim()->abi_DismissUI());
}

inline QuickLink::QuickLink() :
    QuickLink(activate_instance<QuickLink>())
{}

}

}
