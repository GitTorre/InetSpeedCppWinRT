// C++ for the Windows Runtime v1.29
// Copyright (c) 2016 Microsoft Corporation

#pragma once

#include "internal\Windows.Foundation.Collections.3.h"
#include "internal\Windows.Foundation.3.h"
#include "internal\Windows.Storage.3.h"
#include "internal\Windows.Storage.Pickers.3.h"
#include "Windows.Storage.h"
#include "Windows.Foundation.Collections.h"

WINRT_EXPORT namespace winrt {

namespace impl {

template <typename D>
struct produce<D, Windows::Storage::Pickers::IFileOpenPicker> : produce_base<D, Windows::Storage::Pickers::IFileOpenPicker>
{
    HRESULT __stdcall get_ViewMode(Windows::Storage::Pickers::PickerViewMode * value) noexcept override
    {
        try
        {
            *value = detach(shim().ViewMode());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_ViewMode(Windows::Storage::Pickers::PickerViewMode value) noexcept override
    {
        try
        {
            shim().ViewMode(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_SettingsIdentifier(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(shim().SettingsIdentifier());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_SettingsIdentifier(abi_arg_in<hstring> value) noexcept override
    {
        try
        {
            shim().SettingsIdentifier(*reinterpret_cast<const hstring *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_SuggestedStartLocation(Windows::Storage::Pickers::PickerLocationId * value) noexcept override
    {
        try
        {
            *value = detach(shim().SuggestedStartLocation());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_SuggestedStartLocation(Windows::Storage::Pickers::PickerLocationId value) noexcept override
    {
        try
        {
            shim().SuggestedStartLocation(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_CommitButtonText(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(shim().CommitButtonText());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_CommitButtonText(abi_arg_in<hstring> value) noexcept override
    {
        try
        {
            shim().CommitButtonText(*reinterpret_cast<const hstring *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_FileTypeFilter(abi_arg_out<Windows::Foundation::Collections::IVector<hstring>> value) noexcept override
    {
        try
        {
            *value = detach(shim().FileTypeFilter());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_PickSingleFileAsync(abi_arg_out<Windows::Foundation::IAsyncOperation<Windows::Storage::StorageFile>> pickSingleFileOperation) noexcept override
    {
        try
        {
            *pickSingleFileOperation = detach(shim().PickSingleFileAsync());
            return S_OK;
        }
        catch (...)
        {
            *pickSingleFileOperation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_PickMultipleFilesAsync(abi_arg_out<Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Storage::StorageFile>>> pickMultipleFilesOperation) noexcept override
    {
        try
        {
            *pickMultipleFilesOperation = detach(shim().PickMultipleFilesAsync());
            return S_OK;
        }
        catch (...)
        {
            *pickMultipleFilesOperation = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Storage::Pickers::IFileOpenPicker2> : produce_base<D, Windows::Storage::Pickers::IFileOpenPicker2>
{
    HRESULT __stdcall get_ContinuationData(abi_arg_out<Windows::Foundation::Collections::IPropertySet> value) noexcept override
    {
        try
        {
            *value = detach(shim().ContinuationData());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_PickSingleFileAndContinue() noexcept override
    {
        try
        {
            shim().PickSingleFileAndContinue();
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_PickMultipleFilesAndContinue() noexcept override
    {
        try
        {
            shim().PickMultipleFilesAndContinue();
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Storage::Pickers::IFileOpenPickerStatics> : produce_base<D, Windows::Storage::Pickers::IFileOpenPickerStatics>
{
    HRESULT __stdcall abi_ResumePickSingleFileAsync(abi_arg_out<Windows::Foundation::IAsyncOperation<Windows::Storage::StorageFile>> pickSingleFileOperation) noexcept override
    {
        try
        {
            *pickSingleFileOperation = detach(shim().ResumePickSingleFileAsync());
            return S_OK;
        }
        catch (...)
        {
            *pickSingleFileOperation = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Storage::Pickers::IFileOpenPickerWithOperationId> : produce_base<D, Windows::Storage::Pickers::IFileOpenPickerWithOperationId>
{
    HRESULT __stdcall abi_PickSingleFileAsync(abi_arg_in<hstring> pickerOperationId, abi_arg_out<Windows::Foundation::IAsyncOperation<Windows::Storage::StorageFile>> pickSingleFileOperation) noexcept override
    {
        try
        {
            *pickSingleFileOperation = detach(shim().PickSingleFileAsync(*reinterpret_cast<const hstring *>(&pickerOperationId)));
            return S_OK;
        }
        catch (...)
        {
            *pickSingleFileOperation = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Storage::Pickers::IFileSavePicker> : produce_base<D, Windows::Storage::Pickers::IFileSavePicker>
{
    HRESULT __stdcall get_SettingsIdentifier(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(shim().SettingsIdentifier());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_SettingsIdentifier(abi_arg_in<hstring> value) noexcept override
    {
        try
        {
            shim().SettingsIdentifier(*reinterpret_cast<const hstring *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_SuggestedStartLocation(Windows::Storage::Pickers::PickerLocationId * value) noexcept override
    {
        try
        {
            *value = detach(shim().SuggestedStartLocation());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_SuggestedStartLocation(Windows::Storage::Pickers::PickerLocationId value) noexcept override
    {
        try
        {
            shim().SuggestedStartLocation(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_CommitButtonText(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(shim().CommitButtonText());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_CommitButtonText(abi_arg_in<hstring> value) noexcept override
    {
        try
        {
            shim().CommitButtonText(*reinterpret_cast<const hstring *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_FileTypeChoices(abi_arg_out<Windows::Foundation::Collections::IMap<hstring, Windows::Foundation::Collections::IVector<hstring>>> value) noexcept override
    {
        try
        {
            *value = detach(shim().FileTypeChoices());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_DefaultFileExtension(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(shim().DefaultFileExtension());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_DefaultFileExtension(abi_arg_in<hstring> value) noexcept override
    {
        try
        {
            shim().DefaultFileExtension(*reinterpret_cast<const hstring *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_SuggestedSaveFile(abi_arg_out<Windows::Storage::IStorageFile> value) noexcept override
    {
        try
        {
            *value = detach(shim().SuggestedSaveFile());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_SuggestedSaveFile(abi_arg_in<Windows::Storage::IStorageFile> value) noexcept override
    {
        try
        {
            shim().SuggestedSaveFile(*reinterpret_cast<const Windows::Storage::StorageFile *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_SuggestedFileName(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(shim().SuggestedFileName());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_SuggestedFileName(abi_arg_in<hstring> value) noexcept override
    {
        try
        {
            shim().SuggestedFileName(*reinterpret_cast<const hstring *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_PickSaveFileAsync(abi_arg_out<Windows::Foundation::IAsyncOperation<Windows::Storage::StorageFile>> pickSaveFileOperation) noexcept override
    {
        try
        {
            *pickSaveFileOperation = detach(shim().PickSaveFileAsync());
            return S_OK;
        }
        catch (...)
        {
            *pickSaveFileOperation = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Storage::Pickers::IFileSavePicker2> : produce_base<D, Windows::Storage::Pickers::IFileSavePicker2>
{
    HRESULT __stdcall get_ContinuationData(abi_arg_out<Windows::Foundation::Collections::IPropertySet> value) noexcept override
    {
        try
        {
            *value = detach(shim().ContinuationData());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_PickSaveFileAndContinue() noexcept override
    {
        try
        {
            shim().PickSaveFileAndContinue();
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Storage::Pickers::IFileSavePicker3> : produce_base<D, Windows::Storage::Pickers::IFileSavePicker3>
{
    HRESULT __stdcall get_EnterpriseId(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(shim().EnterpriseId());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_EnterpriseId(abi_arg_in<hstring> value) noexcept override
    {
        try
        {
            shim().EnterpriseId(*reinterpret_cast<const hstring *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Storage::Pickers::IFolderPicker> : produce_base<D, Windows::Storage::Pickers::IFolderPicker>
{
    HRESULT __stdcall get_ViewMode(Windows::Storage::Pickers::PickerViewMode * value) noexcept override
    {
        try
        {
            *value = detach(shim().ViewMode());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_ViewMode(Windows::Storage::Pickers::PickerViewMode value) noexcept override
    {
        try
        {
            shim().ViewMode(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_SettingsIdentifier(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(shim().SettingsIdentifier());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_SettingsIdentifier(abi_arg_in<hstring> value) noexcept override
    {
        try
        {
            shim().SettingsIdentifier(*reinterpret_cast<const hstring *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_SuggestedStartLocation(Windows::Storage::Pickers::PickerLocationId * value) noexcept override
    {
        try
        {
            *value = detach(shim().SuggestedStartLocation());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_SuggestedStartLocation(Windows::Storage::Pickers::PickerLocationId value) noexcept override
    {
        try
        {
            shim().SuggestedStartLocation(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_CommitButtonText(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(shim().CommitButtonText());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_CommitButtonText(abi_arg_in<hstring> value) noexcept override
    {
        try
        {
            shim().CommitButtonText(*reinterpret_cast<const hstring *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_FileTypeFilter(abi_arg_out<Windows::Foundation::Collections::IVector<hstring>> value) noexcept override
    {
        try
        {
            *value = detach(shim().FileTypeFilter());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_PickSingleFolderAsync(abi_arg_out<Windows::Foundation::IAsyncOperation<Windows::Storage::StorageFolder>> pickSingleFolderOperation) noexcept override
    {
        try
        {
            *pickSingleFolderOperation = detach(shim().PickSingleFolderAsync());
            return S_OK;
        }
        catch (...)
        {
            *pickSingleFolderOperation = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Storage::Pickers::IFolderPicker2> : produce_base<D, Windows::Storage::Pickers::IFolderPicker2>
{
    HRESULT __stdcall get_ContinuationData(abi_arg_out<Windows::Foundation::Collections::IPropertySet> value) noexcept override
    {
        try
        {
            *value = detach(shim().ContinuationData());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_PickFolderAndContinue() noexcept override
    {
        try
        {
            shim().PickFolderAndContinue();
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

}

namespace Windows::Storage::Pickers {

template <typename D> Windows::Storage::Pickers::PickerViewMode impl_IFileOpenPicker<D>::ViewMode() const
{
    Windows::Storage::Pickers::PickerViewMode value {};
    check_hresult(shim()->get_ViewMode(&value));
    return value;
}

template <typename D> void impl_IFileOpenPicker<D>::ViewMode(Windows::Storage::Pickers::PickerViewMode value) const
{
    check_hresult(shim()->put_ViewMode(value));
}

template <typename D> hstring impl_IFileOpenPicker<D>::SettingsIdentifier() const
{
    hstring value;
    check_hresult(shim()->get_SettingsIdentifier(put(value)));
    return value;
}

template <typename D> void impl_IFileOpenPicker<D>::SettingsIdentifier(hstring_ref value) const
{
    check_hresult(shim()->put_SettingsIdentifier(get(value)));
}

template <typename D> Windows::Storage::Pickers::PickerLocationId impl_IFileOpenPicker<D>::SuggestedStartLocation() const
{
    Windows::Storage::Pickers::PickerLocationId value {};
    check_hresult(shim()->get_SuggestedStartLocation(&value));
    return value;
}

template <typename D> void impl_IFileOpenPicker<D>::SuggestedStartLocation(Windows::Storage::Pickers::PickerLocationId value) const
{
    check_hresult(shim()->put_SuggestedStartLocation(value));
}

template <typename D> hstring impl_IFileOpenPicker<D>::CommitButtonText() const
{
    hstring value;
    check_hresult(shim()->get_CommitButtonText(put(value)));
    return value;
}

template <typename D> void impl_IFileOpenPicker<D>::CommitButtonText(hstring_ref value) const
{
    check_hresult(shim()->put_CommitButtonText(get(value)));
}

template <typename D> Windows::Foundation::Collections::IVector<hstring> impl_IFileOpenPicker<D>::FileTypeFilter() const
{
    Windows::Foundation::Collections::IVector<hstring> value;
    check_hresult(shim()->get_FileTypeFilter(put(value)));
    return value;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Storage::StorageFile> impl_IFileOpenPicker<D>::PickSingleFileAsync() const
{
    Windows::Foundation::IAsyncOperation<Windows::Storage::StorageFile> pickSingleFileOperation;
    check_hresult(shim()->abi_PickSingleFileAsync(put(pickSingleFileOperation)));
    return pickSingleFileOperation;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Storage::StorageFile>> impl_IFileOpenPicker<D>::PickMultipleFilesAsync() const
{
    Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Storage::StorageFile>> pickMultipleFilesOperation;
    check_hresult(shim()->abi_PickMultipleFilesAsync(put(pickMultipleFilesOperation)));
    return pickMultipleFilesOperation;
}

template <typename D> Windows::Foundation::Collections::ValueSet impl_IFileOpenPicker2<D>::ContinuationData() const
{
    Windows::Foundation::Collections::ValueSet value { nullptr };
    check_hresult(shim()->get_ContinuationData(put(value)));
    return value;
}

template <typename D> void impl_IFileOpenPicker2<D>::PickSingleFileAndContinue() const
{
    check_hresult(shim()->abi_PickSingleFileAndContinue());
}

template <typename D> void impl_IFileOpenPicker2<D>::PickMultipleFilesAndContinue() const
{
    check_hresult(shim()->abi_PickMultipleFilesAndContinue());
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Storage::StorageFile> impl_IFileOpenPickerWithOperationId<D>::PickSingleFileAsync(hstring_ref pickerOperationId) const
{
    Windows::Foundation::IAsyncOperation<Windows::Storage::StorageFile> pickSingleFileOperation;
    check_hresult(shim()->abi_PickSingleFileAsync(get(pickerOperationId), put(pickSingleFileOperation)));
    return pickSingleFileOperation;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Storage::StorageFile> impl_IFileOpenPickerStatics<D>::ResumePickSingleFileAsync() const
{
    Windows::Foundation::IAsyncOperation<Windows::Storage::StorageFile> pickSingleFileOperation;
    check_hresult(shim()->abi_ResumePickSingleFileAsync(put(pickSingleFileOperation)));
    return pickSingleFileOperation;
}

template <typename D> hstring impl_IFileSavePicker<D>::SettingsIdentifier() const
{
    hstring value;
    check_hresult(shim()->get_SettingsIdentifier(put(value)));
    return value;
}

template <typename D> void impl_IFileSavePicker<D>::SettingsIdentifier(hstring_ref value) const
{
    check_hresult(shim()->put_SettingsIdentifier(get(value)));
}

template <typename D> Windows::Storage::Pickers::PickerLocationId impl_IFileSavePicker<D>::SuggestedStartLocation() const
{
    Windows::Storage::Pickers::PickerLocationId value {};
    check_hresult(shim()->get_SuggestedStartLocation(&value));
    return value;
}

template <typename D> void impl_IFileSavePicker<D>::SuggestedStartLocation(Windows::Storage::Pickers::PickerLocationId value) const
{
    check_hresult(shim()->put_SuggestedStartLocation(value));
}

template <typename D> hstring impl_IFileSavePicker<D>::CommitButtonText() const
{
    hstring value;
    check_hresult(shim()->get_CommitButtonText(put(value)));
    return value;
}

template <typename D> void impl_IFileSavePicker<D>::CommitButtonText(hstring_ref value) const
{
    check_hresult(shim()->put_CommitButtonText(get(value)));
}

template <typename D> Windows::Foundation::Collections::IMap<hstring, Windows::Foundation::Collections::IVector<hstring>> impl_IFileSavePicker<D>::FileTypeChoices() const
{
    Windows::Foundation::Collections::IMap<hstring, Windows::Foundation::Collections::IVector<hstring>> value;
    check_hresult(shim()->get_FileTypeChoices(put(value)));
    return value;
}

template <typename D> hstring impl_IFileSavePicker<D>::DefaultFileExtension() const
{
    hstring value;
    check_hresult(shim()->get_DefaultFileExtension(put(value)));
    return value;
}

template <typename D> void impl_IFileSavePicker<D>::DefaultFileExtension(hstring_ref value) const
{
    check_hresult(shim()->put_DefaultFileExtension(get(value)));
}

template <typename D> Windows::Storage::StorageFile impl_IFileSavePicker<D>::SuggestedSaveFile() const
{
    Windows::Storage::StorageFile value { nullptr };
    check_hresult(shim()->get_SuggestedSaveFile(put(value)));
    return value;
}

template <typename D> void impl_IFileSavePicker<D>::SuggestedSaveFile(const Windows::Storage::StorageFile & value) const
{
    check_hresult(shim()->put_SuggestedSaveFile(get(value)));
}

template <typename D> hstring impl_IFileSavePicker<D>::SuggestedFileName() const
{
    hstring value;
    check_hresult(shim()->get_SuggestedFileName(put(value)));
    return value;
}

template <typename D> void impl_IFileSavePicker<D>::SuggestedFileName(hstring_ref value) const
{
    check_hresult(shim()->put_SuggestedFileName(get(value)));
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Storage::StorageFile> impl_IFileSavePicker<D>::PickSaveFileAsync() const
{
    Windows::Foundation::IAsyncOperation<Windows::Storage::StorageFile> pickSaveFileOperation;
    check_hresult(shim()->abi_PickSaveFileAsync(put(pickSaveFileOperation)));
    return pickSaveFileOperation;
}

template <typename D> Windows::Foundation::Collections::ValueSet impl_IFileSavePicker2<D>::ContinuationData() const
{
    Windows::Foundation::Collections::ValueSet value { nullptr };
    check_hresult(shim()->get_ContinuationData(put(value)));
    return value;
}

template <typename D> void impl_IFileSavePicker2<D>::PickSaveFileAndContinue() const
{
    check_hresult(shim()->abi_PickSaveFileAndContinue());
}

template <typename D> hstring impl_IFileSavePicker3<D>::EnterpriseId() const
{
    hstring value;
    check_hresult(shim()->get_EnterpriseId(put(value)));
    return value;
}

template <typename D> void impl_IFileSavePicker3<D>::EnterpriseId(hstring_ref value) const
{
    check_hresult(shim()->put_EnterpriseId(get(value)));
}

template <typename D> Windows::Storage::Pickers::PickerViewMode impl_IFolderPicker<D>::ViewMode() const
{
    Windows::Storage::Pickers::PickerViewMode value {};
    check_hresult(shim()->get_ViewMode(&value));
    return value;
}

template <typename D> void impl_IFolderPicker<D>::ViewMode(Windows::Storage::Pickers::PickerViewMode value) const
{
    check_hresult(shim()->put_ViewMode(value));
}

template <typename D> hstring impl_IFolderPicker<D>::SettingsIdentifier() const
{
    hstring value;
    check_hresult(shim()->get_SettingsIdentifier(put(value)));
    return value;
}

template <typename D> void impl_IFolderPicker<D>::SettingsIdentifier(hstring_ref value) const
{
    check_hresult(shim()->put_SettingsIdentifier(get(value)));
}

template <typename D> Windows::Storage::Pickers::PickerLocationId impl_IFolderPicker<D>::SuggestedStartLocation() const
{
    Windows::Storage::Pickers::PickerLocationId value {};
    check_hresult(shim()->get_SuggestedStartLocation(&value));
    return value;
}

template <typename D> void impl_IFolderPicker<D>::SuggestedStartLocation(Windows::Storage::Pickers::PickerLocationId value) const
{
    check_hresult(shim()->put_SuggestedStartLocation(value));
}

template <typename D> hstring impl_IFolderPicker<D>::CommitButtonText() const
{
    hstring value;
    check_hresult(shim()->get_CommitButtonText(put(value)));
    return value;
}

template <typename D> void impl_IFolderPicker<D>::CommitButtonText(hstring_ref value) const
{
    check_hresult(shim()->put_CommitButtonText(get(value)));
}

template <typename D> Windows::Foundation::Collections::IVector<hstring> impl_IFolderPicker<D>::FileTypeFilter() const
{
    Windows::Foundation::Collections::IVector<hstring> value;
    check_hresult(shim()->get_FileTypeFilter(put(value)));
    return value;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Storage::StorageFolder> impl_IFolderPicker<D>::PickSingleFolderAsync() const
{
    Windows::Foundation::IAsyncOperation<Windows::Storage::StorageFolder> pickSingleFolderOperation;
    check_hresult(shim()->abi_PickSingleFolderAsync(put(pickSingleFolderOperation)));
    return pickSingleFolderOperation;
}

template <typename D> Windows::Foundation::Collections::ValueSet impl_IFolderPicker2<D>::ContinuationData() const
{
    Windows::Foundation::Collections::ValueSet value { nullptr };
    check_hresult(shim()->get_ContinuationData(put(value)));
    return value;
}

template <typename D> void impl_IFolderPicker2<D>::PickFolderAndContinue() const
{
    check_hresult(shim()->abi_PickFolderAndContinue());
}

inline FileOpenPicker::FileOpenPicker() :
    FileOpenPicker(activate_instance<FileOpenPicker>())
{}

inline Windows::Foundation::IAsyncOperation<Windows::Storage::StorageFile> FileOpenPicker::ResumePickSingleFileAsync()
{
    return get_activation_factory<FileOpenPicker, IFileOpenPickerStatics>().ResumePickSingleFileAsync();
}

inline FileSavePicker::FileSavePicker() :
    FileSavePicker(activate_instance<FileSavePicker>())
{}

inline FolderPicker::FolderPicker() :
    FolderPicker(activate_instance<FolderPicker>())
{}

}

}
