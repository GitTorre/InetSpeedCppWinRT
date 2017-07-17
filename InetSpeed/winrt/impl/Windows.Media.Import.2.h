// C++/WinRT v1.0.170717.1
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "Windows.Storage.1.h"
#include "Windows.Storage.Streams.1.h"
#include "Windows.Foundation.1.h"
#include "Windows.Media.Import.1.h"

namespace winrt {

namespace Windows::Media::Import {

struct PhotoImportProgress
{
    uint32_t ItemsImported;
    uint32_t TotalItemsToImport;
    uint64_t BytesImported;
    uint64_t TotalBytesToImport;
    double ImportProgress;
};

struct PhotoImportDeleteImportedItemsFromSourceResult :
    Windows::Media::Import::IPhotoImportDeleteImportedItemsFromSourceResult
{
    PhotoImportDeleteImportedItemsFromSourceResult(std::nullptr_t) noexcept {}
};

struct PhotoImportFindItemsResult :
    Windows::Media::Import::IPhotoImportFindItemsResult,
    impl::require<PhotoImportFindItemsResult, Windows::Media::Import::IPhotoImportFindItemsResult2>
{
    PhotoImportFindItemsResult(std::nullptr_t) noexcept {}
};

struct PhotoImportImportItemsResult :
    Windows::Media::Import::IPhotoImportImportItemsResult
{
    PhotoImportImportItemsResult(std::nullptr_t) noexcept {}
};

struct PhotoImportItem :
    Windows::Media::Import::IPhotoImportItem
{
    PhotoImportItem(std::nullptr_t) noexcept {}
};

struct PhotoImportItemImportedEventArgs :
    Windows::Media::Import::IPhotoImportItemImportedEventArgs
{
    PhotoImportItemImportedEventArgs(std::nullptr_t) noexcept {}
};

struct PhotoImportManager
{
    PhotoImportManager() = delete;
    static Windows::Foundation::IAsyncOperation<bool> IsSupportedAsync();
    static Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Media::Import::PhotoImportSource>> FindAllSourcesAsync();
    static Windows::Foundation::Collections::IVectorView<Windows::Media::Import::PhotoImportOperation> GetPendingOperations();
};

struct PhotoImportOperation :
    Windows::Media::Import::IPhotoImportOperation
{
    PhotoImportOperation(std::nullptr_t) noexcept {}
};

struct PhotoImportSelectionChangedEventArgs :
    Windows::Media::Import::IPhotoImportSelectionChangedEventArgs
{
    PhotoImportSelectionChangedEventArgs(std::nullptr_t) noexcept {}
};

struct PhotoImportSession :
    Windows::Media::Import::IPhotoImportSession,
    impl::require<PhotoImportSession, Windows::Media::Import::IPhotoImportSession2>
{
    PhotoImportSession(std::nullptr_t) noexcept {}
};

struct PhotoImportSidecar :
    Windows::Media::Import::IPhotoImportSidecar
{
    PhotoImportSidecar(std::nullptr_t) noexcept {}
};

struct PhotoImportSource :
    Windows::Media::Import::IPhotoImportSource
{
    PhotoImportSource(std::nullptr_t) noexcept {}
    static Windows::Foundation::IAsyncOperation<Windows::Media::Import::PhotoImportSource> FromIdAsync(param::hstring const& sourceId);
    static Windows::Foundation::IAsyncOperation<Windows::Media::Import::PhotoImportSource> FromFolderAsync(Windows::Storage::IStorageFolder const& sourceRootFolder);
};

struct PhotoImportStorageMedium :
    Windows::Media::Import::IPhotoImportStorageMedium
{
    PhotoImportStorageMedium(std::nullptr_t) noexcept {}
};

struct PhotoImportVideoSegment :
    Windows::Media::Import::IPhotoImportVideoSegment
{
    PhotoImportVideoSegment(std::nullptr_t) noexcept {}
};

}

namespace impl {

}

}
