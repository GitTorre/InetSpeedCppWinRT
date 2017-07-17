// C++/WinRT v1.0.170717.1
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "Windows.Foundation.Collections.1.h"
#include "Windows.Storage.1.h"
#include "Windows.Storage.Pickers.1.h"

namespace winrt {

namespace Windows::Storage::Pickers {

struct FileExtensionVector :
    Windows::Foundation::Collections::IVector<hstring>
{
    FileExtensionVector(std::nullptr_t) noexcept {}
};

struct FileOpenPicker :
    Windows::Storage::Pickers::IFileOpenPicker,
    impl::require<FileOpenPicker, Windows::Storage::Pickers::IFileOpenPicker2, Windows::Storage::Pickers::IFileOpenPickerWithOperationId>
{
    FileOpenPicker(std::nullptr_t) noexcept {}
    FileOpenPicker();
    using impl::consume_t<FileOpenPicker, Windows::Storage::Pickers::IFileOpenPickerWithOperationId>::PickSingleFileAsync;
    using Windows::Storage::Pickers::IFileOpenPicker::PickSingleFileAsync;
    [[deprecated("Instead, use PickSingleFileAsync")]] static Windows::Foundation::IAsyncOperation<Windows::Storage::StorageFile> ResumePickSingleFileAsync();
};

struct FilePickerFileTypesOrderedMap :
    Windows::Foundation::Collections::IMap<hstring, Windows::Foundation::Collections::IVector<hstring>>
{
    FilePickerFileTypesOrderedMap(std::nullptr_t) noexcept {}
};

struct FilePickerSelectedFilesArray :
    Windows::Foundation::Collections::IVectorView<Windows::Storage::StorageFile>
{
    FilePickerSelectedFilesArray(std::nullptr_t) noexcept {}
};

struct FileSavePicker :
    Windows::Storage::Pickers::IFileSavePicker,
    impl::require<FileSavePicker, Windows::Storage::Pickers::IFileSavePicker2, Windows::Storage::Pickers::IFileSavePicker3>
{
    FileSavePicker(std::nullptr_t) noexcept {}
    FileSavePicker();
};

struct FolderPicker :
    Windows::Storage::Pickers::IFolderPicker,
    impl::require<FolderPicker, Windows::Storage::Pickers::IFolderPicker2>
{
    FolderPicker(std::nullptr_t) noexcept {}
    FolderPicker();
};

}

namespace impl {

}

}
