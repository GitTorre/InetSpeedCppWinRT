// C++/WinRT v1.0.170717.1
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "Windows.Foundation.0.h"
#include "Windows.Foundation.Collections.0.h"
#include "Windows.Storage.FileProperties.0.h"
#include "Windows.Storage.Provider.0.h"
#include "Windows.Storage.Search.0.h"
#include "Windows.Storage.Streams.0.h"
#include "Windows.System.0.h"
#include "Windows.Storage.0.h"

namespace winrt {

namespace Windows::Storage {

struct IApplicationData :
    Windows::Foundation::IInspectable,
    impl::consume_t<IApplicationData>
{
    IApplicationData(std::nullptr_t = nullptr) noexcept {}
};

struct IApplicationData2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IApplicationData2>
{
    IApplicationData2(std::nullptr_t = nullptr) noexcept {}
};

struct IApplicationData3 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IApplicationData3>
{
    IApplicationData3(std::nullptr_t = nullptr) noexcept {}
};

struct IApplicationDataContainer :
    Windows::Foundation::IInspectable,
    impl::consume_t<IApplicationDataContainer>
{
    IApplicationDataContainer(std::nullptr_t = nullptr) noexcept {}
};

struct IApplicationDataStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IApplicationDataStatics>
{
    IApplicationDataStatics(std::nullptr_t = nullptr) noexcept {}
};

struct IApplicationDataStatics2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IApplicationDataStatics2>
{
    IApplicationDataStatics2(std::nullptr_t = nullptr) noexcept {}
};

struct ICachedFileManagerStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<ICachedFileManagerStatics>
{
    ICachedFileManagerStatics(std::nullptr_t = nullptr) noexcept {}
};

struct IDownloadsFolderStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IDownloadsFolderStatics>
{
    IDownloadsFolderStatics(std::nullptr_t = nullptr) noexcept {}
};

struct IDownloadsFolderStatics2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IDownloadsFolderStatics2>
{
    IDownloadsFolderStatics2(std::nullptr_t = nullptr) noexcept {}
};

struct IFileIOStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IFileIOStatics>
{
    IFileIOStatics(std::nullptr_t = nullptr) noexcept {}
};

struct IKnownFoldersCameraRollStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IKnownFoldersCameraRollStatics>
{
    IKnownFoldersCameraRollStatics(std::nullptr_t = nullptr) noexcept {}
};

struct IKnownFoldersPlaylistsStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IKnownFoldersPlaylistsStatics>
{
    IKnownFoldersPlaylistsStatics(std::nullptr_t = nullptr) noexcept {}
};

struct IKnownFoldersSavedPicturesStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IKnownFoldersSavedPicturesStatics>
{
    IKnownFoldersSavedPicturesStatics(std::nullptr_t = nullptr) noexcept {}
};

struct IKnownFoldersStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IKnownFoldersStatics>
{
    IKnownFoldersStatics(std::nullptr_t = nullptr) noexcept {}
};

struct IKnownFoldersStatics2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IKnownFoldersStatics2>
{
    IKnownFoldersStatics2(std::nullptr_t = nullptr) noexcept {}
};

struct IKnownFoldersStatics3 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IKnownFoldersStatics3>
{
    IKnownFoldersStatics3(std::nullptr_t = nullptr) noexcept {}
};

struct IPathIOStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPathIOStatics>
{
    IPathIOStatics(std::nullptr_t = nullptr) noexcept {}
};

struct ISetVersionDeferral :
    Windows::Foundation::IInspectable,
    impl::consume_t<ISetVersionDeferral>
{
    ISetVersionDeferral(std::nullptr_t = nullptr) noexcept {}
};

struct ISetVersionRequest :
    Windows::Foundation::IInspectable,
    impl::consume_t<ISetVersionRequest>
{
    ISetVersionRequest(std::nullptr_t = nullptr) noexcept {}
};

struct IStorageFile :
    Windows::Foundation::IInspectable,
    impl::consume_t<IStorageFile>,
    impl::require<IStorageFile, Windows::Storage::IStorageItem, Windows::Storage::Streams::IInputStreamReference, Windows::Storage::Streams::IRandomAccessStreamReference>
{
    IStorageFile(std::nullptr_t = nullptr) noexcept {}
};

struct IStorageFile2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IStorageFile2>
{
    IStorageFile2(std::nullptr_t = nullptr) noexcept {}
};

struct IStorageFilePropertiesWithAvailability :
    Windows::Foundation::IInspectable,
    impl::consume_t<IStorageFilePropertiesWithAvailability>
{
    IStorageFilePropertiesWithAvailability(std::nullptr_t = nullptr) noexcept {}
};

struct IStorageFileStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IStorageFileStatics>
{
    IStorageFileStatics(std::nullptr_t = nullptr) noexcept {}
};

struct IStorageFolder :
    Windows::Foundation::IInspectable,
    impl::consume_t<IStorageFolder>,
    impl::require<IStorageFolder, Windows::Storage::IStorageItem>
{
    IStorageFolder(std::nullptr_t = nullptr) noexcept {}
};

struct IStorageFolder2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IStorageFolder2>
{
    IStorageFolder2(std::nullptr_t = nullptr) noexcept {}
};

struct IStorageFolderStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IStorageFolderStatics>
{
    IStorageFolderStatics(std::nullptr_t = nullptr) noexcept {}
};

struct IStorageItem :
    Windows::Foundation::IInspectable,
    impl::consume_t<IStorageItem>
{
    IStorageItem(std::nullptr_t = nullptr) noexcept {}
};

struct IStorageItem2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IStorageItem2>,
    impl::require<IStorageItem2, Windows::Storage::IStorageItem>
{
    IStorageItem2(std::nullptr_t = nullptr) noexcept {}
};

struct IStorageItemProperties :
    Windows::Foundation::IInspectable,
    impl::consume_t<IStorageItemProperties>
{
    IStorageItemProperties(std::nullptr_t = nullptr) noexcept {}
};

struct IStorageItemProperties2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IStorageItemProperties2>,
    impl::require<IStorageItemProperties2, Windows::Storage::IStorageItemProperties>
{
    IStorageItemProperties2(std::nullptr_t = nullptr) noexcept {}
};

struct IStorageItemPropertiesWithProvider :
    Windows::Foundation::IInspectable,
    impl::consume_t<IStorageItemPropertiesWithProvider>,
    impl::require<IStorageItemPropertiesWithProvider, Windows::Storage::IStorageItemProperties>
{
    IStorageItemPropertiesWithProvider(std::nullptr_t = nullptr) noexcept {}
};

struct IStorageLibrary :
    Windows::Foundation::IInspectable,
    impl::consume_t<IStorageLibrary>
{
    IStorageLibrary(std::nullptr_t = nullptr) noexcept {}
};

struct IStorageLibrary2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IStorageLibrary2>
{
    IStorageLibrary2(std::nullptr_t = nullptr) noexcept {}
};

struct IStorageLibraryChange :
    Windows::Foundation::IInspectable,
    impl::consume_t<IStorageLibraryChange>
{
    IStorageLibraryChange(std::nullptr_t = nullptr) noexcept {}
};

struct IStorageLibraryChangeReader :
    Windows::Foundation::IInspectable,
    impl::consume_t<IStorageLibraryChangeReader>
{
    IStorageLibraryChangeReader(std::nullptr_t = nullptr) noexcept {}
};

struct IStorageLibraryChangeTracker :
    Windows::Foundation::IInspectable,
    impl::consume_t<IStorageLibraryChangeTracker>
{
    IStorageLibraryChangeTracker(std::nullptr_t = nullptr) noexcept {}
};

struct IStorageLibraryStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IStorageLibraryStatics>
{
    IStorageLibraryStatics(std::nullptr_t = nullptr) noexcept {}
};

struct IStorageLibraryStatics2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IStorageLibraryStatics2>
{
    IStorageLibraryStatics2(std::nullptr_t = nullptr) noexcept {}
};

struct IStorageProvider :
    Windows::Foundation::IInspectable,
    impl::consume_t<IStorageProvider>
{
    IStorageProvider(std::nullptr_t = nullptr) noexcept {}
};

struct IStorageStreamTransaction :
    Windows::Foundation::IInspectable,
    impl::consume_t<IStorageStreamTransaction>,
    impl::require<IStorageStreamTransaction, Windows::Foundation::IClosable>
{
    IStorageStreamTransaction(std::nullptr_t = nullptr) noexcept {}
};

struct IStreamedFileDataRequest :
    Windows::Foundation::IInspectable,
    impl::consume_t<IStreamedFileDataRequest>
{
    IStreamedFileDataRequest(std::nullptr_t = nullptr) noexcept {}
};

struct ISystemAudioProperties :
    Windows::Foundation::IInspectable,
    impl::consume_t<ISystemAudioProperties>
{
    ISystemAudioProperties(std::nullptr_t = nullptr) noexcept {}
};

struct ISystemGPSProperties :
    Windows::Foundation::IInspectable,
    impl::consume_t<ISystemGPSProperties>
{
    ISystemGPSProperties(std::nullptr_t = nullptr) noexcept {}
};

struct ISystemImageProperties :
    Windows::Foundation::IInspectable,
    impl::consume_t<ISystemImageProperties>
{
    ISystemImageProperties(std::nullptr_t = nullptr) noexcept {}
};

struct ISystemMediaProperties :
    Windows::Foundation::IInspectable,
    impl::consume_t<ISystemMediaProperties>
{
    ISystemMediaProperties(std::nullptr_t = nullptr) noexcept {}
};

struct ISystemMusicProperties :
    Windows::Foundation::IInspectable,
    impl::consume_t<ISystemMusicProperties>
{
    ISystemMusicProperties(std::nullptr_t = nullptr) noexcept {}
};

struct ISystemPhotoProperties :
    Windows::Foundation::IInspectable,
    impl::consume_t<ISystemPhotoProperties>
{
    ISystemPhotoProperties(std::nullptr_t = nullptr) noexcept {}
};

struct ISystemProperties :
    Windows::Foundation::IInspectable,
    impl::consume_t<ISystemProperties>
{
    ISystemProperties(std::nullptr_t = nullptr) noexcept {}
};

struct ISystemVideoProperties :
    Windows::Foundation::IInspectable,
    impl::consume_t<ISystemVideoProperties>
{
    ISystemVideoProperties(std::nullptr_t = nullptr) noexcept {}
};

}

}
