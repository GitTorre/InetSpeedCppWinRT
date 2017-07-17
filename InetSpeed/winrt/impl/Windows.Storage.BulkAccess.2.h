// C++/WinRT v1.0.170717.1
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "Windows.Storage.1.h"
#include "Windows.Storage.FileProperties.1.h"
#include "Windows.Storage.Search.1.h"
#include "Windows.Storage.Streams.1.h"
#include "Windows.Storage.BulkAccess.1.h"

namespace winrt {

namespace Windows::Storage::BulkAccess {

struct FileInformation :
    Windows::Storage::BulkAccess::IStorageItemInformation,
    impl::require<FileInformation, Windows::Storage::IStorageFile, Windows::Storage::IStorageFile2, Windows::Storage::IStorageFilePropertiesWithAvailability, Windows::Storage::IStorageItem, Windows::Storage::IStorageItem2, Windows::Storage::IStorageItemProperties, Windows::Storage::IStorageItemPropertiesWithProvider, Windows::Storage::Streams::IInputStreamReference, Windows::Storage::Streams::IRandomAccessStreamReference>
{
    FileInformation(std::nullptr_t) noexcept {}
    using impl::consume_t<FileInformation, Windows::Storage::IStorageFile>::OpenAsync;
    using impl::consume_t<FileInformation, Windows::Storage::IStorageFile2>::OpenAsync;
    using impl::consume_t<FileInformation, Windows::Storage::IStorageFile>::OpenTransactedWriteAsync;
    using impl::consume_t<FileInformation, Windows::Storage::IStorageFile2>::OpenTransactedWriteAsync;
};

struct FileInformationFactory :
    Windows::Storage::BulkAccess::IFileInformationFactory
{
    FileInformationFactory(std::nullptr_t) noexcept {}
    FileInformationFactory(Windows::Storage::Search::IStorageQueryResultBase const& queryResult, Windows::Storage::FileProperties::ThumbnailMode const& mode);
    FileInformationFactory(Windows::Storage::Search::IStorageQueryResultBase const& queryResult, Windows::Storage::FileProperties::ThumbnailMode const& mode, uint32_t requestedThumbnailSize);
    FileInformationFactory(Windows::Storage::Search::IStorageQueryResultBase const& queryResult, Windows::Storage::FileProperties::ThumbnailMode const& mode, uint32_t requestedThumbnailSize, Windows::Storage::FileProperties::ThumbnailOptions const& thumbnailOptions);
    FileInformationFactory(Windows::Storage::Search::IStorageQueryResultBase const& queryResult, Windows::Storage::FileProperties::ThumbnailMode const& mode, uint32_t requestedThumbnailSize, Windows::Storage::FileProperties::ThumbnailOptions const& thumbnailOptions, bool delayLoad);
};

struct FolderInformation :
    Windows::Storage::BulkAccess::IStorageItemInformation,
    impl::require<FolderInformation, Windows::Storage::IStorageFolder, Windows::Storage::IStorageFolder2, Windows::Storage::IStorageItem, Windows::Storage::IStorageItem2, Windows::Storage::IStorageItemProperties, Windows::Storage::IStorageItemPropertiesWithProvider, Windows::Storage::Search::IStorageFolderQueryOperations>
{
    FolderInformation(std::nullptr_t) noexcept {}
    using impl::consume_t<FolderInformation, Windows::Storage::IStorageFolder>::GetFilesAsync;
    using impl::consume_t<FolderInformation, Windows::Storage::Search::IStorageFolderQueryOperations>::GetFilesAsync;
    using impl::consume_t<FolderInformation, Windows::Storage::IStorageFolder>::GetFoldersAsync;
    using impl::consume_t<FolderInformation, Windows::Storage::Search::IStorageFolderQueryOperations>::GetFoldersAsync;
    using impl::consume_t<FolderInformation, Windows::Storage::IStorageFolder>::GetItemsAsync;
    using impl::consume_t<FolderInformation, Windows::Storage::Search::IStorageFolderQueryOperations>::GetItemsAsync;
};

}

namespace impl {

}

}
