// C++ for the Windows Runtime v1.29
// Copyright (c) 2016 Microsoft Corporation

#pragma once

#include "internal\Windows.Foundation.3.h"
#include "internal\Windows.Foundation.Collections.3.h"
#include "internal\Windows.Storage.3.h"
#include "internal\Windows.Storage.Streams.3.h"
#include "internal\Windows.Media.Import.3.h"
#include "Windows.Media.h"
#include "Windows.Foundation.h"

WINRT_EXPORT namespace winrt {

namespace impl {

template <typename D>
struct produce<D, Windows::Media::Import::IPhotoImportDeleteImportedItemsFromSourceResult> : produce_base<D, Windows::Media::Import::IPhotoImportDeleteImportedItemsFromSourceResult>
{
    HRESULT __stdcall get_Session(abi_arg_out<Windows::Media::Import::IPhotoImportSession> value) noexcept override
    {
        try
        {
            *value = detach(shim().Session());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_HasSucceeded(bool * value) noexcept override
    {
        try
        {
            *value = detach(shim().HasSucceeded());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_DeletedItems(abi_arg_out<Windows::Foundation::Collections::IVectorView<Windows::Media::Import::PhotoImportItem>> value) noexcept override
    {
        try
        {
            *value = detach(shim().DeletedItems());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_PhotosCount(uint32_t * value) noexcept override
    {
        try
        {
            *value = detach(shim().PhotosCount());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_PhotosSizeInBytes(uint64_t * value) noexcept override
    {
        try
        {
            *value = detach(shim().PhotosSizeInBytes());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_VideosCount(uint32_t * value) noexcept override
    {
        try
        {
            *value = detach(shim().VideosCount());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_VideosSizeInBytes(uint64_t * value) noexcept override
    {
        try
        {
            *value = detach(shim().VideosSizeInBytes());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_SidecarsCount(uint32_t * value) noexcept override
    {
        try
        {
            *value = detach(shim().SidecarsCount());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_SidecarsSizeInBytes(uint64_t * value) noexcept override
    {
        try
        {
            *value = detach(shim().SidecarsSizeInBytes());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_SiblingsCount(uint32_t * value) noexcept override
    {
        try
        {
            *value = detach(shim().SiblingsCount());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_SiblingsSizeInBytes(uint64_t * value) noexcept override
    {
        try
        {
            *value = detach(shim().SiblingsSizeInBytes());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_TotalCount(uint32_t * value) noexcept override
    {
        try
        {
            *value = detach(shim().TotalCount());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_TotalSizeInBytes(uint64_t * value) noexcept override
    {
        try
        {
            *value = detach(shim().TotalSizeInBytes());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::Import::IPhotoImportFindItemsResult> : produce_base<D, Windows::Media::Import::IPhotoImportFindItemsResult>
{
    HRESULT __stdcall get_Session(abi_arg_out<Windows::Media::Import::IPhotoImportSession> value) noexcept override
    {
        try
        {
            *value = detach(shim().Session());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_HasSucceeded(bool * value) noexcept override
    {
        try
        {
            *value = detach(shim().HasSucceeded());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_FoundItems(abi_arg_out<Windows::Foundation::Collections::IVectorView<Windows::Media::Import::PhotoImportItem>> value) noexcept override
    {
        try
        {
            *value = detach(shim().FoundItems());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_PhotosCount(uint32_t * value) noexcept override
    {
        try
        {
            *value = detach(shim().PhotosCount());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_PhotosSizeInBytes(uint64_t * value) noexcept override
    {
        try
        {
            *value = detach(shim().PhotosSizeInBytes());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_VideosCount(uint32_t * value) noexcept override
    {
        try
        {
            *value = detach(shim().VideosCount());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_VideosSizeInBytes(uint64_t * value) noexcept override
    {
        try
        {
            *value = detach(shim().VideosSizeInBytes());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_SidecarsCount(uint32_t * value) noexcept override
    {
        try
        {
            *value = detach(shim().SidecarsCount());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_SidecarsSizeInBytes(uint64_t * value) noexcept override
    {
        try
        {
            *value = detach(shim().SidecarsSizeInBytes());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_SiblingsCount(uint32_t * value) noexcept override
    {
        try
        {
            *value = detach(shim().SiblingsCount());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_SiblingsSizeInBytes(uint64_t * value) noexcept override
    {
        try
        {
            *value = detach(shim().SiblingsSizeInBytes());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_TotalCount(uint32_t * value) noexcept override
    {
        try
        {
            *value = detach(shim().TotalCount());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_TotalSizeInBytes(uint64_t * value) noexcept override
    {
        try
        {
            *value = detach(shim().TotalSizeInBytes());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_SelectAll() noexcept override
    {
        try
        {
            shim().SelectAll();
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_SelectNone() noexcept override
    {
        try
        {
            shim().SelectNone();
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_SelectNewAsync(abi_arg_out<Windows::Foundation::IAsyncAction> action) noexcept override
    {
        try
        {
            *action = detach(shim().SelectNewAsync());
            return S_OK;
        }
        catch (...)
        {
            *action = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_SetImportMode(Windows::Media::Import::PhotoImportImportMode value) noexcept override
    {
        try
        {
            shim().SetImportMode(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ImportMode(Windows::Media::Import::PhotoImportImportMode * value) noexcept override
    {
        try
        {
            *value = detach(shim().ImportMode());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_SelectedPhotosCount(uint32_t * value) noexcept override
    {
        try
        {
            *value = detach(shim().SelectedPhotosCount());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_SelectedPhotosSizeInBytes(uint64_t * value) noexcept override
    {
        try
        {
            *value = detach(shim().SelectedPhotosSizeInBytes());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_SelectedVideosCount(uint32_t * value) noexcept override
    {
        try
        {
            *value = detach(shim().SelectedVideosCount());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_SelectedVideosSizeInBytes(uint64_t * value) noexcept override
    {
        try
        {
            *value = detach(shim().SelectedVideosSizeInBytes());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_SelectedSidecarsCount(uint32_t * value) noexcept override
    {
        try
        {
            *value = detach(shim().SelectedSidecarsCount());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_SelectedSidecarsSizeInBytes(uint64_t * value) noexcept override
    {
        try
        {
            *value = detach(shim().SelectedSidecarsSizeInBytes());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_SelectedSiblingsCount(uint32_t * value) noexcept override
    {
        try
        {
            *value = detach(shim().SelectedSiblingsCount());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_SelectedSiblingsSizeInBytes(uint64_t * value) noexcept override
    {
        try
        {
            *value = detach(shim().SelectedSiblingsSizeInBytes());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_SelectedTotalCount(uint32_t * value) noexcept override
    {
        try
        {
            *value = detach(shim().SelectedTotalCount());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_SelectedTotalSizeInBytes(uint64_t * value) noexcept override
    {
        try
        {
            *value = detach(shim().SelectedTotalSizeInBytes());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_SelectionChanged(abi_arg_in<Windows::Foundation::TypedEventHandler<Windows::Media::Import::PhotoImportFindItemsResult, Windows::Media::Import::PhotoImportSelectionChangedEventArgs>> value, event_token * token) noexcept override
    {
        try
        {
            *token = detach(shim().SelectionChanged(*reinterpret_cast<const Windows::Foundation::TypedEventHandler<Windows::Media::Import::PhotoImportFindItemsResult, Windows::Media::Import::PhotoImportSelectionChangedEventArgs> *>(&value)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_SelectionChanged(event_token token) noexcept override
    {
        try
        {
            shim().SelectionChanged(token);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_ImportItemsAsync(abi_arg_out<Windows::Foundation::IAsyncOperationWithProgress<Windows::Media::Import::PhotoImportImportItemsResult, Windows::Media::Import::PhotoImportProgress>> operation) noexcept override
    {
        try
        {
            *operation = detach(shim().ImportItemsAsync());
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_ItemImported(abi_arg_in<Windows::Foundation::TypedEventHandler<Windows::Media::Import::PhotoImportFindItemsResult, Windows::Media::Import::PhotoImportItemImportedEventArgs>> value, event_token * token) noexcept override
    {
        try
        {
            *token = detach(shim().ItemImported(*reinterpret_cast<const Windows::Foundation::TypedEventHandler<Windows::Media::Import::PhotoImportFindItemsResult, Windows::Media::Import::PhotoImportItemImportedEventArgs> *>(&value)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_ItemImported(event_token token) noexcept override
    {
        try
        {
            shim().ItemImported(token);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::Import::IPhotoImportFindItemsResult2> : produce_base<D, Windows::Media::Import::IPhotoImportFindItemsResult2>
{
    HRESULT __stdcall abi_AddItemsInDateRangeToSelection(abi_arg_in<Windows::Foundation::DateTime> rangeStart, abi_arg_in<Windows::Foundation::TimeSpan> rangeLength) noexcept override
    {
        try
        {
            shim().AddItemsInDateRangeToSelection(*reinterpret_cast<const Windows::Foundation::DateTime *>(&rangeStart), *reinterpret_cast<const Windows::Foundation::TimeSpan *>(&rangeLength));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::Import::IPhotoImportImportItemsResult> : produce_base<D, Windows::Media::Import::IPhotoImportImportItemsResult>
{
    HRESULT __stdcall get_Session(abi_arg_out<Windows::Media::Import::IPhotoImportSession> value) noexcept override
    {
        try
        {
            *value = detach(shim().Session());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_HasSucceeded(bool * value) noexcept override
    {
        try
        {
            *value = detach(shim().HasSucceeded());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ImportedItems(abi_arg_out<Windows::Foundation::Collections::IVectorView<Windows::Media::Import::PhotoImportItem>> value) noexcept override
    {
        try
        {
            *value = detach(shim().ImportedItems());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_PhotosCount(uint32_t * value) noexcept override
    {
        try
        {
            *value = detach(shim().PhotosCount());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_PhotosSizeInBytes(uint64_t * value) noexcept override
    {
        try
        {
            *value = detach(shim().PhotosSizeInBytes());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_VideosCount(uint32_t * value) noexcept override
    {
        try
        {
            *value = detach(shim().VideosCount());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_VideosSizeInBytes(uint64_t * value) noexcept override
    {
        try
        {
            *value = detach(shim().VideosSizeInBytes());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_SidecarsCount(uint32_t * value) noexcept override
    {
        try
        {
            *value = detach(shim().SidecarsCount());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_SidecarsSizeInBytes(uint64_t * value) noexcept override
    {
        try
        {
            *value = detach(shim().SidecarsSizeInBytes());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_SiblingsCount(uint32_t * value) noexcept override
    {
        try
        {
            *value = detach(shim().SiblingsCount());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_SiblingsSizeInBytes(uint64_t * value) noexcept override
    {
        try
        {
            *value = detach(shim().SiblingsSizeInBytes());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_TotalCount(uint32_t * value) noexcept override
    {
        try
        {
            *value = detach(shim().TotalCount());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_TotalSizeInBytes(uint64_t * value) noexcept override
    {
        try
        {
            *value = detach(shim().TotalSizeInBytes());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_DeleteImportedItemsFromSourceAsync(abi_arg_out<Windows::Foundation::IAsyncOperationWithProgress<Windows::Media::Import::PhotoImportDeleteImportedItemsFromSourceResult, double>> result) noexcept override
    {
        try
        {
            *result = detach(shim().DeleteImportedItemsFromSourceAsync());
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::Import::IPhotoImportItem> : produce_base<D, Windows::Media::Import::IPhotoImportItem>
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

    HRESULT __stdcall get_ItemKey(uint64_t * value) noexcept override
    {
        try
        {
            *value = detach(shim().ItemKey());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ContentType(Windows::Media::Import::PhotoImportContentType * value) noexcept override
    {
        try
        {
            *value = detach(shim().ContentType());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_SizeInBytes(uint64_t * value) noexcept override
    {
        try
        {
            *value = detach(shim().SizeInBytes());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Date(abi_arg_out<Windows::Foundation::DateTime> value) noexcept override
    {
        try
        {
            *value = detach(shim().Date());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Sibling(abi_arg_out<Windows::Media::Import::IPhotoImportSidecar> value) noexcept override
    {
        try
        {
            *value = detach(shim().Sibling());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Sidecars(abi_arg_out<Windows::Foundation::Collections::IVectorView<Windows::Media::Import::PhotoImportSidecar>> value) noexcept override
    {
        try
        {
            *value = detach(shim().Sidecars());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_VideoSegments(abi_arg_out<Windows::Foundation::Collections::IVectorView<Windows::Media::Import::PhotoImportVideoSegment>> value) noexcept override
    {
        try
        {
            *value = detach(shim().VideoSegments());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_IsSelected(bool * value) noexcept override
    {
        try
        {
            *value = detach(shim().IsSelected());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_IsSelected(bool value) noexcept override
    {
        try
        {
            shim().IsSelected(value);
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

    HRESULT __stdcall get_ImportedFileNames(abi_arg_out<Windows::Foundation::Collections::IVectorView<hstring>> value) noexcept override
    {
        try
        {
            *value = detach(shim().ImportedFileNames());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_DeletedFileNames(abi_arg_out<Windows::Foundation::Collections::IVectorView<hstring>> value) noexcept override
    {
        try
        {
            *value = detach(shim().DeletedFileNames());
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
struct produce<D, Windows::Media::Import::IPhotoImportItemImportedEventArgs> : produce_base<D, Windows::Media::Import::IPhotoImportItemImportedEventArgs>
{
    HRESULT __stdcall get_ImportedItem(abi_arg_out<Windows::Media::Import::IPhotoImportItem> value) noexcept override
    {
        try
        {
            *value = detach(shim().ImportedItem());
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
struct produce<D, Windows::Media::Import::IPhotoImportManagerStatics> : produce_base<D, Windows::Media::Import::IPhotoImportManagerStatics>
{
    HRESULT __stdcall abi_IsSupportedAsync(abi_arg_out<Windows::Foundation::IAsyncOperation<bool>> operation) noexcept override
    {
        try
        {
            *operation = detach(shim().IsSupportedAsync());
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_FindAllSourcesAsync(abi_arg_out<Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Media::Import::PhotoImportSource>>> operation) noexcept override
    {
        try
        {
            *operation = detach(shim().FindAllSourcesAsync());
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_GetPendingOperations(abi_arg_out<Windows::Foundation::Collections::IVectorView<Windows::Media::Import::PhotoImportOperation>> result) noexcept override
    {
        try
        {
            *result = detach(shim().GetPendingOperations());
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::Import::IPhotoImportOperation> : produce_base<D, Windows::Media::Import::IPhotoImportOperation>
{
    HRESULT __stdcall get_Stage(Windows::Media::Import::PhotoImportStage * value) noexcept override
    {
        try
        {
            *value = detach(shim().Stage());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Session(abi_arg_out<Windows::Media::Import::IPhotoImportSession> value) noexcept override
    {
        try
        {
            *value = detach(shim().Session());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ContinueFindingItemsAsync(abi_arg_out<Windows::Foundation::IAsyncOperationWithProgress<Windows::Media::Import::PhotoImportFindItemsResult, uint32_t>> operation) noexcept override
    {
        try
        {
            *operation = detach(shim().ContinueFindingItemsAsync());
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ContinueImportingItemsAsync(abi_arg_out<Windows::Foundation::IAsyncOperationWithProgress<Windows::Media::Import::PhotoImportImportItemsResult, Windows::Media::Import::PhotoImportProgress>> operation) noexcept override
    {
        try
        {
            *operation = detach(shim().ContinueImportingItemsAsync());
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ContinueDeletingImportedItemsFromSourceAsync(abi_arg_out<Windows::Foundation::IAsyncOperationWithProgress<Windows::Media::Import::PhotoImportDeleteImportedItemsFromSourceResult, double>> operation) noexcept override
    {
        try
        {
            *operation = detach(shim().ContinueDeletingImportedItemsFromSourceAsync());
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
struct produce<D, Windows::Media::Import::IPhotoImportSelectionChangedEventArgs> : produce_base<D, Windows::Media::Import::IPhotoImportSelectionChangedEventArgs>
{
    HRESULT __stdcall get_IsSelectionEmpty(bool * value) noexcept override
    {
        try
        {
            *value = detach(shim().IsSelectionEmpty());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::Import::IPhotoImportSession> : produce_base<D, Windows::Media::Import::IPhotoImportSession>
{
    HRESULT __stdcall get_Source(abi_arg_out<Windows::Media::Import::IPhotoImportSource> value) noexcept override
    {
        try
        {
            *value = detach(shim().Source());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_SessionId(GUID * value) noexcept override
    {
        try
        {
            *value = detach(shim().SessionId());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_DestinationFolder(abi_arg_in<Windows::Storage::IStorageFolder> value) noexcept override
    {
        try
        {
            shim().DestinationFolder(*reinterpret_cast<const Windows::Storage::IStorageFolder *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_DestinationFolder(abi_arg_out<Windows::Storage::IStorageFolder> value) noexcept override
    {
        try
        {
            *value = detach(shim().DestinationFolder());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_AppendSessionDateToDestinationFolder(bool value) noexcept override
    {
        try
        {
            shim().AppendSessionDateToDestinationFolder(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_AppendSessionDateToDestinationFolder(bool * value) noexcept override
    {
        try
        {
            *value = detach(shim().AppendSessionDateToDestinationFolder());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_SubfolderCreationMode(Windows::Media::Import::PhotoImportSubfolderCreationMode value) noexcept override
    {
        try
        {
            shim().SubfolderCreationMode(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_SubfolderCreationMode(Windows::Media::Import::PhotoImportSubfolderCreationMode * value) noexcept override
    {
        try
        {
            *value = detach(shim().SubfolderCreationMode());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_DestinationFileNamePrefix(abi_arg_in<hstring> value) noexcept override
    {
        try
        {
            shim().DestinationFileNamePrefix(*reinterpret_cast<const hstring *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_DestinationFileNamePrefix(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(shim().DestinationFileNamePrefix());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_FindItemsAsync(Windows::Media::Import::PhotoImportContentTypeFilter contentTypeFilter, Windows::Media::Import::PhotoImportItemSelectionMode itemSelectionMode, abi_arg_out<Windows::Foundation::IAsyncOperationWithProgress<Windows::Media::Import::PhotoImportFindItemsResult, uint32_t>> operation) noexcept override
    {
        try
        {
            *operation = detach(shim().FindItemsAsync(contentTypeFilter, itemSelectionMode));
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
struct produce<D, Windows::Media::Import::IPhotoImportSession2> : produce_base<D, Windows::Media::Import::IPhotoImportSession2>
{
    HRESULT __stdcall put_SubfolderDateFormat(Windows::Media::Import::PhotoImportSubfolderDateFormat value) noexcept override
    {
        try
        {
            shim().SubfolderDateFormat(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_SubfolderDateFormat(Windows::Media::Import::PhotoImportSubfolderDateFormat * value) noexcept override
    {
        try
        {
            *value = detach(shim().SubfolderDateFormat());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_RememberDeselectedItems(bool value) noexcept override
    {
        try
        {
            shim().RememberDeselectedItems(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_RememberDeselectedItems(bool * value) noexcept override
    {
        try
        {
            *value = detach(shim().RememberDeselectedItems());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::Import::IPhotoImportSidecar> : produce_base<D, Windows::Media::Import::IPhotoImportSidecar>
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

    HRESULT __stdcall get_SizeInBytes(uint64_t * value) noexcept override
    {
        try
        {
            *value = detach(shim().SizeInBytes());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Date(abi_arg_out<Windows::Foundation::DateTime> value) noexcept override
    {
        try
        {
            *value = detach(shim().Date());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::Import::IPhotoImportSource> : produce_base<D, Windows::Media::Import::IPhotoImportSource>
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

    HRESULT __stdcall get_Manufacturer(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(shim().Manufacturer());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Model(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(shim().Model());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_SerialNumber(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(shim().SerialNumber());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ConnectionProtocol(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(shim().ConnectionProtocol());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ConnectionTransport(Windows::Media::Import::PhotoImportConnectionTransport * value) noexcept override
    {
        try
        {
            *value = detach(shim().ConnectionTransport());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Type(Windows::Media::Import::PhotoImportSourceType * value) noexcept override
    {
        try
        {
            *value = detach(shim().Type());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_PowerSource(Windows::Media::Import::PhotoImportPowerSource * value) noexcept override
    {
        try
        {
            *value = detach(shim().PowerSource());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_BatteryLevelPercent(abi_arg_out<Windows::Foundation::IReference<uint32_t>> value) noexcept override
    {
        try
        {
            *value = detach(shim().BatteryLevelPercent());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_DateTime(abi_arg_out<Windows::Foundation::IReference<Windows::Foundation::DateTime>> value) noexcept override
    {
        try
        {
            *value = detach(shim().DateTime());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_StorageMedia(abi_arg_out<Windows::Foundation::Collections::IVectorView<Windows::Media::Import::PhotoImportStorageMedium>> value) noexcept override
    {
        try
        {
            *value = detach(shim().StorageMedia());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_IsLocked(abi_arg_out<Windows::Foundation::IReference<bool>> value) noexcept override
    {
        try
        {
            *value = detach(shim().IsLocked());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_IsMassStorage(bool * value) noexcept override
    {
        try
        {
            *value = detach(shim().IsMassStorage());
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

    HRESULT __stdcall abi_CreateImportSession(abi_arg_out<Windows::Media::Import::IPhotoImportSession> result) noexcept override
    {
        try
        {
            *result = detach(shim().CreateImportSession());
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::Import::IPhotoImportSourceStatics> : produce_base<D, Windows::Media::Import::IPhotoImportSourceStatics>
{
    HRESULT __stdcall abi_FromIdAsync(abi_arg_in<hstring> sourceId, abi_arg_out<Windows::Foundation::IAsyncOperation<Windows::Media::Import::PhotoImportSource>> operation) noexcept override
    {
        try
        {
            *operation = detach(shim().FromIdAsync(*reinterpret_cast<const hstring *>(&sourceId)));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_FromFolderAsync(abi_arg_in<Windows::Storage::IStorageFolder> sourceRootFolder, abi_arg_out<Windows::Foundation::IAsyncOperation<Windows::Media::Import::PhotoImportSource>> operation) noexcept override
    {
        try
        {
            *operation = detach(shim().FromFolderAsync(*reinterpret_cast<const Windows::Storage::IStorageFolder *>(&sourceRootFolder)));
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
struct produce<D, Windows::Media::Import::IPhotoImportStorageMedium> : produce_base<D, Windows::Media::Import::IPhotoImportStorageMedium>
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

    HRESULT __stdcall get_SerialNumber(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(shim().SerialNumber());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_StorageMediumType(Windows::Media::Import::PhotoImportStorageMediumType * value) noexcept override
    {
        try
        {
            *value = detach(shim().StorageMediumType());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_SupportedAccessMode(Windows::Media::Import::PhotoImportAccessMode * value) noexcept override
    {
        try
        {
            *value = detach(shim().SupportedAccessMode());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_CapacityInBytes(uint64_t * value) noexcept override
    {
        try
        {
            *value = detach(shim().CapacityInBytes());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_AvailableSpaceInBytes(uint64_t * value) noexcept override
    {
        try
        {
            *value = detach(shim().AvailableSpaceInBytes());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_Refresh() noexcept override
    {
        try
        {
            shim().Refresh();
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::Import::IPhotoImportVideoSegment> : produce_base<D, Windows::Media::Import::IPhotoImportVideoSegment>
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

    HRESULT __stdcall get_SizeInBytes(uint64_t * value) noexcept override
    {
        try
        {
            *value = detach(shim().SizeInBytes());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Date(abi_arg_out<Windows::Foundation::DateTime> value) noexcept override
    {
        try
        {
            *value = detach(shim().Date());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Sibling(abi_arg_out<Windows::Media::Import::IPhotoImportSidecar> value) noexcept override
    {
        try
        {
            *value = detach(shim().Sibling());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Sidecars(abi_arg_out<Windows::Foundation::Collections::IVectorView<Windows::Media::Import::PhotoImportSidecar>> value) noexcept override
    {
        try
        {
            *value = detach(shim().Sidecars());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }
};

}

namespace Windows::Media::Import {

template <typename D> Windows::Foundation::IAsyncOperation<bool> impl_IPhotoImportManagerStatics<D>::IsSupportedAsync() const
{
    Windows::Foundation::IAsyncOperation<bool> operation;
    check_hresult(shim()->abi_IsSupportedAsync(put(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Media::Import::PhotoImportSource>> impl_IPhotoImportManagerStatics<D>::FindAllSourcesAsync() const
{
    Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Media::Import::PhotoImportSource>> operation;
    check_hresult(shim()->abi_FindAllSourcesAsync(put(operation)));
    return operation;
}

template <typename D> Windows::Foundation::Collections::IVectorView<Windows::Media::Import::PhotoImportOperation> impl_IPhotoImportManagerStatics<D>::GetPendingOperations() const
{
    Windows::Foundation::Collections::IVectorView<Windows::Media::Import::PhotoImportOperation> result;
    check_hresult(shim()->abi_GetPendingOperations(put(result)));
    return result;
}

template <typename D> Windows::Media::Import::PhotoImportStage impl_IPhotoImportOperation<D>::Stage() const
{
    Windows::Media::Import::PhotoImportStage value {};
    check_hresult(shim()->get_Stage(&value));
    return value;
}

template <typename D> Windows::Media::Import::PhotoImportSession impl_IPhotoImportOperation<D>::Session() const
{
    Windows::Media::Import::PhotoImportSession value { nullptr };
    check_hresult(shim()->get_Session(put(value)));
    return value;
}

template <typename D> Windows::Foundation::IAsyncOperationWithProgress<Windows::Media::Import::PhotoImportFindItemsResult, uint32_t> impl_IPhotoImportOperation<D>::ContinueFindingItemsAsync() const
{
    Windows::Foundation::IAsyncOperationWithProgress<Windows::Media::Import::PhotoImportFindItemsResult, uint32_t> operation;
    check_hresult(shim()->get_ContinueFindingItemsAsync(put(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperationWithProgress<Windows::Media::Import::PhotoImportImportItemsResult, Windows::Media::Import::PhotoImportProgress> impl_IPhotoImportOperation<D>::ContinueImportingItemsAsync() const
{
    Windows::Foundation::IAsyncOperationWithProgress<Windows::Media::Import::PhotoImportImportItemsResult, Windows::Media::Import::PhotoImportProgress> operation;
    check_hresult(shim()->get_ContinueImportingItemsAsync(put(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperationWithProgress<Windows::Media::Import::PhotoImportDeleteImportedItemsFromSourceResult, double> impl_IPhotoImportOperation<D>::ContinueDeletingImportedItemsFromSourceAsync() const
{
    Windows::Foundation::IAsyncOperationWithProgress<Windows::Media::Import::PhotoImportDeleteImportedItemsFromSourceResult, double> operation;
    check_hresult(shim()->get_ContinueDeletingImportedItemsFromSourceAsync(put(operation)));
    return operation;
}

template <typename D> hstring impl_IPhotoImportStorageMedium<D>::Name() const
{
    hstring value;
    check_hresult(shim()->get_Name(put(value)));
    return value;
}

template <typename D> hstring impl_IPhotoImportStorageMedium<D>::Description() const
{
    hstring value;
    check_hresult(shim()->get_Description(put(value)));
    return value;
}

template <typename D> hstring impl_IPhotoImportStorageMedium<D>::SerialNumber() const
{
    hstring value;
    check_hresult(shim()->get_SerialNumber(put(value)));
    return value;
}

template <typename D> Windows::Media::Import::PhotoImportStorageMediumType impl_IPhotoImportStorageMedium<D>::StorageMediumType() const
{
    Windows::Media::Import::PhotoImportStorageMediumType value {};
    check_hresult(shim()->get_StorageMediumType(&value));
    return value;
}

template <typename D> Windows::Media::Import::PhotoImportAccessMode impl_IPhotoImportStorageMedium<D>::SupportedAccessMode() const
{
    Windows::Media::Import::PhotoImportAccessMode value {};
    check_hresult(shim()->get_SupportedAccessMode(&value));
    return value;
}

template <typename D> uint64_t impl_IPhotoImportStorageMedium<D>::CapacityInBytes() const
{
    uint64_t value {};
    check_hresult(shim()->get_CapacityInBytes(&value));
    return value;
}

template <typename D> uint64_t impl_IPhotoImportStorageMedium<D>::AvailableSpaceInBytes() const
{
    uint64_t value {};
    check_hresult(shim()->get_AvailableSpaceInBytes(&value));
    return value;
}

template <typename D> void impl_IPhotoImportStorageMedium<D>::Refresh() const
{
    check_hresult(shim()->abi_Refresh());
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Media::Import::PhotoImportSource> impl_IPhotoImportSourceStatics<D>::FromIdAsync(hstring_ref sourceId) const
{
    Windows::Foundation::IAsyncOperation<Windows::Media::Import::PhotoImportSource> operation;
    check_hresult(shim()->abi_FromIdAsync(get(sourceId), put(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Media::Import::PhotoImportSource> impl_IPhotoImportSourceStatics<D>::FromFolderAsync(const Windows::Storage::IStorageFolder & sourceRootFolder) const
{
    Windows::Foundation::IAsyncOperation<Windows::Media::Import::PhotoImportSource> operation;
    check_hresult(shim()->abi_FromFolderAsync(get(sourceRootFolder), put(operation)));
    return operation;
}

template <typename D> hstring impl_IPhotoImportSource<D>::Id() const
{
    hstring value;
    check_hresult(shim()->get_Id(put(value)));
    return value;
}

template <typename D> hstring impl_IPhotoImportSource<D>::DisplayName() const
{
    hstring value;
    check_hresult(shim()->get_DisplayName(put(value)));
    return value;
}

template <typename D> hstring impl_IPhotoImportSource<D>::Description() const
{
    hstring value;
    check_hresult(shim()->get_Description(put(value)));
    return value;
}

template <typename D> hstring impl_IPhotoImportSource<D>::Manufacturer() const
{
    hstring value;
    check_hresult(shim()->get_Manufacturer(put(value)));
    return value;
}

template <typename D> hstring impl_IPhotoImportSource<D>::Model() const
{
    hstring value;
    check_hresult(shim()->get_Model(put(value)));
    return value;
}

template <typename D> hstring impl_IPhotoImportSource<D>::SerialNumber() const
{
    hstring value;
    check_hresult(shim()->get_SerialNumber(put(value)));
    return value;
}

template <typename D> hstring impl_IPhotoImportSource<D>::ConnectionProtocol() const
{
    hstring value;
    check_hresult(shim()->get_ConnectionProtocol(put(value)));
    return value;
}

template <typename D> Windows::Media::Import::PhotoImportConnectionTransport impl_IPhotoImportSource<D>::ConnectionTransport() const
{
    Windows::Media::Import::PhotoImportConnectionTransport value {};
    check_hresult(shim()->get_ConnectionTransport(&value));
    return value;
}

template <typename D> Windows::Media::Import::PhotoImportSourceType impl_IPhotoImportSource<D>::Type() const
{
    Windows::Media::Import::PhotoImportSourceType value {};
    check_hresult(shim()->get_Type(&value));
    return value;
}

template <typename D> Windows::Media::Import::PhotoImportPowerSource impl_IPhotoImportSource<D>::PowerSource() const
{
    Windows::Media::Import::PhotoImportPowerSource value {};
    check_hresult(shim()->get_PowerSource(&value));
    return value;
}

template <typename D> Windows::Foundation::IReference<uint32_t> impl_IPhotoImportSource<D>::BatteryLevelPercent() const
{
    Windows::Foundation::IReference<uint32_t> value;
    check_hresult(shim()->get_BatteryLevelPercent(put(value)));
    return value;
}

template <typename D> Windows::Foundation::IReference<Windows::Foundation::DateTime> impl_IPhotoImportSource<D>::DateTime() const
{
    Windows::Foundation::IReference<Windows::Foundation::DateTime> value;
    check_hresult(shim()->get_DateTime(put(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVectorView<Windows::Media::Import::PhotoImportStorageMedium> impl_IPhotoImportSource<D>::StorageMedia() const
{
    Windows::Foundation::Collections::IVectorView<Windows::Media::Import::PhotoImportStorageMedium> value;
    check_hresult(shim()->get_StorageMedia(put(value)));
    return value;
}

template <typename D> Windows::Foundation::IReference<bool> impl_IPhotoImportSource<D>::IsLocked() const
{
    Windows::Foundation::IReference<bool> value;
    check_hresult(shim()->get_IsLocked(put(value)));
    return value;
}

template <typename D> bool impl_IPhotoImportSource<D>::IsMassStorage() const
{
    bool value {};
    check_hresult(shim()->get_IsMassStorage(&value));
    return value;
}

template <typename D> Windows::Storage::Streams::IRandomAccessStreamReference impl_IPhotoImportSource<D>::Thumbnail() const
{
    Windows::Storage::Streams::IRandomAccessStreamReference value;
    check_hresult(shim()->get_Thumbnail(put(value)));
    return value;
}

template <typename D> Windows::Media::Import::PhotoImportSession impl_IPhotoImportSource<D>::CreateImportSession() const
{
    Windows::Media::Import::PhotoImportSession result { nullptr };
    check_hresult(shim()->abi_CreateImportSession(put(result)));
    return result;
}

template <typename D> Windows::Media::Import::PhotoImportSource impl_IPhotoImportSession<D>::Source() const
{
    Windows::Media::Import::PhotoImportSource value { nullptr };
    check_hresult(shim()->get_Source(put(value)));
    return value;
}

template <typename D> GUID impl_IPhotoImportSession<D>::SessionId() const
{
    GUID value {};
    check_hresult(shim()->get_SessionId(&value));
    return value;
}

template <typename D> void impl_IPhotoImportSession<D>::DestinationFolder(const Windows::Storage::IStorageFolder & value) const
{
    check_hresult(shim()->put_DestinationFolder(get(value)));
}

template <typename D> Windows::Storage::IStorageFolder impl_IPhotoImportSession<D>::DestinationFolder() const
{
    Windows::Storage::IStorageFolder value;
    check_hresult(shim()->get_DestinationFolder(put(value)));
    return value;
}

template <typename D> void impl_IPhotoImportSession<D>::AppendSessionDateToDestinationFolder(bool value) const
{
    check_hresult(shim()->put_AppendSessionDateToDestinationFolder(value));
}

template <typename D> bool impl_IPhotoImportSession<D>::AppendSessionDateToDestinationFolder() const
{
    bool value {};
    check_hresult(shim()->get_AppendSessionDateToDestinationFolder(&value));
    return value;
}

template <typename D> void impl_IPhotoImportSession<D>::SubfolderCreationMode(Windows::Media::Import::PhotoImportSubfolderCreationMode value) const
{
    check_hresult(shim()->put_SubfolderCreationMode(value));
}

template <typename D> Windows::Media::Import::PhotoImportSubfolderCreationMode impl_IPhotoImportSession<D>::SubfolderCreationMode() const
{
    Windows::Media::Import::PhotoImportSubfolderCreationMode value {};
    check_hresult(shim()->get_SubfolderCreationMode(&value));
    return value;
}

template <typename D> void impl_IPhotoImportSession<D>::DestinationFileNamePrefix(hstring_ref value) const
{
    check_hresult(shim()->put_DestinationFileNamePrefix(get(value)));
}

template <typename D> hstring impl_IPhotoImportSession<D>::DestinationFileNamePrefix() const
{
    hstring value;
    check_hresult(shim()->get_DestinationFileNamePrefix(put(value)));
    return value;
}

template <typename D> Windows::Foundation::IAsyncOperationWithProgress<Windows::Media::Import::PhotoImportFindItemsResult, uint32_t> impl_IPhotoImportSession<D>::FindItemsAsync(Windows::Media::Import::PhotoImportContentTypeFilter contentTypeFilter, Windows::Media::Import::PhotoImportItemSelectionMode itemSelectionMode) const
{
    Windows::Foundation::IAsyncOperationWithProgress<Windows::Media::Import::PhotoImportFindItemsResult, uint32_t> operation;
    check_hresult(shim()->abi_FindItemsAsync(contentTypeFilter, itemSelectionMode, put(operation)));
    return operation;
}

template <typename D> void impl_IPhotoImportSession2<D>::SubfolderDateFormat(Windows::Media::Import::PhotoImportSubfolderDateFormat value) const
{
    check_hresult(shim()->put_SubfolderDateFormat(value));
}

template <typename D> Windows::Media::Import::PhotoImportSubfolderDateFormat impl_IPhotoImportSession2<D>::SubfolderDateFormat() const
{
    Windows::Media::Import::PhotoImportSubfolderDateFormat value {};
    check_hresult(shim()->get_SubfolderDateFormat(&value));
    return value;
}

template <typename D> void impl_IPhotoImportSession2<D>::RememberDeselectedItems(bool value) const
{
    check_hresult(shim()->put_RememberDeselectedItems(value));
}

template <typename D> bool impl_IPhotoImportSession2<D>::RememberDeselectedItems() const
{
    bool value {};
    check_hresult(shim()->get_RememberDeselectedItems(&value));
    return value;
}

template <typename D> hstring impl_IPhotoImportItem<D>::Name() const
{
    hstring value;
    check_hresult(shim()->get_Name(put(value)));
    return value;
}

template <typename D> uint64_t impl_IPhotoImportItem<D>::ItemKey() const
{
    uint64_t value {};
    check_hresult(shim()->get_ItemKey(&value));
    return value;
}

template <typename D> Windows::Media::Import::PhotoImportContentType impl_IPhotoImportItem<D>::ContentType() const
{
    Windows::Media::Import::PhotoImportContentType value {};
    check_hresult(shim()->get_ContentType(&value));
    return value;
}

template <typename D> uint64_t impl_IPhotoImportItem<D>::SizeInBytes() const
{
    uint64_t value {};
    check_hresult(shim()->get_SizeInBytes(&value));
    return value;
}

template <typename D> Windows::Foundation::DateTime impl_IPhotoImportItem<D>::Date() const
{
    Windows::Foundation::DateTime value {};
    check_hresult(shim()->get_Date(put(value)));
    return value;
}

template <typename D> Windows::Media::Import::PhotoImportSidecar impl_IPhotoImportItem<D>::Sibling() const
{
    Windows::Media::Import::PhotoImportSidecar value { nullptr };
    check_hresult(shim()->get_Sibling(put(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVectorView<Windows::Media::Import::PhotoImportSidecar> impl_IPhotoImportItem<D>::Sidecars() const
{
    Windows::Foundation::Collections::IVectorView<Windows::Media::Import::PhotoImportSidecar> value;
    check_hresult(shim()->get_Sidecars(put(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVectorView<Windows::Media::Import::PhotoImportVideoSegment> impl_IPhotoImportItem<D>::VideoSegments() const
{
    Windows::Foundation::Collections::IVectorView<Windows::Media::Import::PhotoImportVideoSegment> value;
    check_hresult(shim()->get_VideoSegments(put(value)));
    return value;
}

template <typename D> bool impl_IPhotoImportItem<D>::IsSelected() const
{
    bool value {};
    check_hresult(shim()->get_IsSelected(&value));
    return value;
}

template <typename D> void impl_IPhotoImportItem<D>::IsSelected(bool value) const
{
    check_hresult(shim()->put_IsSelected(value));
}

template <typename D> Windows::Storage::Streams::IRandomAccessStreamReference impl_IPhotoImportItem<D>::Thumbnail() const
{
    Windows::Storage::Streams::IRandomAccessStreamReference value;
    check_hresult(shim()->get_Thumbnail(put(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVectorView<hstring> impl_IPhotoImportItem<D>::ImportedFileNames() const
{
    Windows::Foundation::Collections::IVectorView<hstring> value;
    check_hresult(shim()->get_ImportedFileNames(put(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVectorView<hstring> impl_IPhotoImportItem<D>::DeletedFileNames() const
{
    Windows::Foundation::Collections::IVectorView<hstring> value;
    check_hresult(shim()->get_DeletedFileNames(put(value)));
    return value;
}

template <typename D> Windows::Media::Import::PhotoImportSession impl_IPhotoImportFindItemsResult<D>::Session() const
{
    Windows::Media::Import::PhotoImportSession value { nullptr };
    check_hresult(shim()->get_Session(put(value)));
    return value;
}

template <typename D> bool impl_IPhotoImportFindItemsResult<D>::HasSucceeded() const
{
    bool value {};
    check_hresult(shim()->get_HasSucceeded(&value));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVectorView<Windows::Media::Import::PhotoImportItem> impl_IPhotoImportFindItemsResult<D>::FoundItems() const
{
    Windows::Foundation::Collections::IVectorView<Windows::Media::Import::PhotoImportItem> value;
    check_hresult(shim()->get_FoundItems(put(value)));
    return value;
}

template <typename D> uint32_t impl_IPhotoImportFindItemsResult<D>::PhotosCount() const
{
    uint32_t value {};
    check_hresult(shim()->get_PhotosCount(&value));
    return value;
}

template <typename D> uint64_t impl_IPhotoImportFindItemsResult<D>::PhotosSizeInBytes() const
{
    uint64_t value {};
    check_hresult(shim()->get_PhotosSizeInBytes(&value));
    return value;
}

template <typename D> uint32_t impl_IPhotoImportFindItemsResult<D>::VideosCount() const
{
    uint32_t value {};
    check_hresult(shim()->get_VideosCount(&value));
    return value;
}

template <typename D> uint64_t impl_IPhotoImportFindItemsResult<D>::VideosSizeInBytes() const
{
    uint64_t value {};
    check_hresult(shim()->get_VideosSizeInBytes(&value));
    return value;
}

template <typename D> uint32_t impl_IPhotoImportFindItemsResult<D>::SidecarsCount() const
{
    uint32_t value {};
    check_hresult(shim()->get_SidecarsCount(&value));
    return value;
}

template <typename D> uint64_t impl_IPhotoImportFindItemsResult<D>::SidecarsSizeInBytes() const
{
    uint64_t value {};
    check_hresult(shim()->get_SidecarsSizeInBytes(&value));
    return value;
}

template <typename D> uint32_t impl_IPhotoImportFindItemsResult<D>::SiblingsCount() const
{
    uint32_t value {};
    check_hresult(shim()->get_SiblingsCount(&value));
    return value;
}

template <typename D> uint64_t impl_IPhotoImportFindItemsResult<D>::SiblingsSizeInBytes() const
{
    uint64_t value {};
    check_hresult(shim()->get_SiblingsSizeInBytes(&value));
    return value;
}

template <typename D> uint32_t impl_IPhotoImportFindItemsResult<D>::TotalCount() const
{
    uint32_t value {};
    check_hresult(shim()->get_TotalCount(&value));
    return value;
}

template <typename D> uint64_t impl_IPhotoImportFindItemsResult<D>::TotalSizeInBytes() const
{
    uint64_t value {};
    check_hresult(shim()->get_TotalSizeInBytes(&value));
    return value;
}

template <typename D> void impl_IPhotoImportFindItemsResult<D>::SelectAll() const
{
    check_hresult(shim()->abi_SelectAll());
}

template <typename D> void impl_IPhotoImportFindItemsResult<D>::SelectNone() const
{
    check_hresult(shim()->abi_SelectNone());
}

template <typename D> Windows::Foundation::IAsyncAction impl_IPhotoImportFindItemsResult<D>::SelectNewAsync() const
{
    Windows::Foundation::IAsyncAction action;
    check_hresult(shim()->abi_SelectNewAsync(put(action)));
    return action;
}

template <typename D> void impl_IPhotoImportFindItemsResult<D>::SetImportMode(Windows::Media::Import::PhotoImportImportMode value) const
{
    check_hresult(shim()->abi_SetImportMode(value));
}

template <typename D> Windows::Media::Import::PhotoImportImportMode impl_IPhotoImportFindItemsResult<D>::ImportMode() const
{
    Windows::Media::Import::PhotoImportImportMode value {};
    check_hresult(shim()->get_ImportMode(&value));
    return value;
}

template <typename D> uint32_t impl_IPhotoImportFindItemsResult<D>::SelectedPhotosCount() const
{
    uint32_t value {};
    check_hresult(shim()->get_SelectedPhotosCount(&value));
    return value;
}

template <typename D> uint64_t impl_IPhotoImportFindItemsResult<D>::SelectedPhotosSizeInBytes() const
{
    uint64_t value {};
    check_hresult(shim()->get_SelectedPhotosSizeInBytes(&value));
    return value;
}

template <typename D> uint32_t impl_IPhotoImportFindItemsResult<D>::SelectedVideosCount() const
{
    uint32_t value {};
    check_hresult(shim()->get_SelectedVideosCount(&value));
    return value;
}

template <typename D> uint64_t impl_IPhotoImportFindItemsResult<D>::SelectedVideosSizeInBytes() const
{
    uint64_t value {};
    check_hresult(shim()->get_SelectedVideosSizeInBytes(&value));
    return value;
}

template <typename D> uint32_t impl_IPhotoImportFindItemsResult<D>::SelectedSidecarsCount() const
{
    uint32_t value {};
    check_hresult(shim()->get_SelectedSidecarsCount(&value));
    return value;
}

template <typename D> uint64_t impl_IPhotoImportFindItemsResult<D>::SelectedSidecarsSizeInBytes() const
{
    uint64_t value {};
    check_hresult(shim()->get_SelectedSidecarsSizeInBytes(&value));
    return value;
}

template <typename D> uint32_t impl_IPhotoImportFindItemsResult<D>::SelectedSiblingsCount() const
{
    uint32_t value {};
    check_hresult(shim()->get_SelectedSiblingsCount(&value));
    return value;
}

template <typename D> uint64_t impl_IPhotoImportFindItemsResult<D>::SelectedSiblingsSizeInBytes() const
{
    uint64_t value {};
    check_hresult(shim()->get_SelectedSiblingsSizeInBytes(&value));
    return value;
}

template <typename D> uint32_t impl_IPhotoImportFindItemsResult<D>::SelectedTotalCount() const
{
    uint32_t value {};
    check_hresult(shim()->get_SelectedTotalCount(&value));
    return value;
}

template <typename D> uint64_t impl_IPhotoImportFindItemsResult<D>::SelectedTotalSizeInBytes() const
{
    uint64_t value {};
    check_hresult(shim()->get_SelectedTotalSizeInBytes(&value));
    return value;
}

template <typename D> event_token impl_IPhotoImportFindItemsResult<D>::SelectionChanged(const Windows::Foundation::TypedEventHandler<Windows::Media::Import::PhotoImportFindItemsResult, Windows::Media::Import::PhotoImportSelectionChangedEventArgs> & value) const
{
    event_token token {};
    check_hresult(shim()->add_SelectionChanged(get(value), &token));
    return token;
}

template <typename D> event_revoker<IPhotoImportFindItemsResult> impl_IPhotoImportFindItemsResult<D>::SelectionChanged(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::Media::Import::PhotoImportFindItemsResult, Windows::Media::Import::PhotoImportSelectionChangedEventArgs> & value) const
{
    return impl::make_event_revoker<D, IPhotoImportFindItemsResult>(this, &ABI::Windows::Media::Import::IPhotoImportFindItemsResult::remove_SelectionChanged, SelectionChanged(value));
}

template <typename D> void impl_IPhotoImportFindItemsResult<D>::SelectionChanged(event_token token) const
{
    check_hresult(shim()->remove_SelectionChanged(token));
}

template <typename D> Windows::Foundation::IAsyncOperationWithProgress<Windows::Media::Import::PhotoImportImportItemsResult, Windows::Media::Import::PhotoImportProgress> impl_IPhotoImportFindItemsResult<D>::ImportItemsAsync() const
{
    Windows::Foundation::IAsyncOperationWithProgress<Windows::Media::Import::PhotoImportImportItemsResult, Windows::Media::Import::PhotoImportProgress> operation;
    check_hresult(shim()->abi_ImportItemsAsync(put(operation)));
    return operation;
}

template <typename D> event_token impl_IPhotoImportFindItemsResult<D>::ItemImported(const Windows::Foundation::TypedEventHandler<Windows::Media::Import::PhotoImportFindItemsResult, Windows::Media::Import::PhotoImportItemImportedEventArgs> & value) const
{
    event_token token {};
    check_hresult(shim()->add_ItemImported(get(value), &token));
    return token;
}

template <typename D> event_revoker<IPhotoImportFindItemsResult> impl_IPhotoImportFindItemsResult<D>::ItemImported(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::Media::Import::PhotoImportFindItemsResult, Windows::Media::Import::PhotoImportItemImportedEventArgs> & value) const
{
    return impl::make_event_revoker<D, IPhotoImportFindItemsResult>(this, &ABI::Windows::Media::Import::IPhotoImportFindItemsResult::remove_ItemImported, ItemImported(value));
}

template <typename D> void impl_IPhotoImportFindItemsResult<D>::ItemImported(event_token token) const
{
    check_hresult(shim()->remove_ItemImported(token));
}

template <typename D> void impl_IPhotoImportFindItemsResult2<D>::AddItemsInDateRangeToSelection(const Windows::Foundation::DateTime & rangeStart, const Windows::Foundation::TimeSpan & rangeLength) const
{
    check_hresult(shim()->abi_AddItemsInDateRangeToSelection(get(rangeStart), get(rangeLength)));
}

template <typename D> Windows::Media::Import::PhotoImportSession impl_IPhotoImportImportItemsResult<D>::Session() const
{
    Windows::Media::Import::PhotoImportSession value { nullptr };
    check_hresult(shim()->get_Session(put(value)));
    return value;
}

template <typename D> bool impl_IPhotoImportImportItemsResult<D>::HasSucceeded() const
{
    bool value {};
    check_hresult(shim()->get_HasSucceeded(&value));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVectorView<Windows::Media::Import::PhotoImportItem> impl_IPhotoImportImportItemsResult<D>::ImportedItems() const
{
    Windows::Foundation::Collections::IVectorView<Windows::Media::Import::PhotoImportItem> value;
    check_hresult(shim()->get_ImportedItems(put(value)));
    return value;
}

template <typename D> uint32_t impl_IPhotoImportImportItemsResult<D>::PhotosCount() const
{
    uint32_t value {};
    check_hresult(shim()->get_PhotosCount(&value));
    return value;
}

template <typename D> uint64_t impl_IPhotoImportImportItemsResult<D>::PhotosSizeInBytes() const
{
    uint64_t value {};
    check_hresult(shim()->get_PhotosSizeInBytes(&value));
    return value;
}

template <typename D> uint32_t impl_IPhotoImportImportItemsResult<D>::VideosCount() const
{
    uint32_t value {};
    check_hresult(shim()->get_VideosCount(&value));
    return value;
}

template <typename D> uint64_t impl_IPhotoImportImportItemsResult<D>::VideosSizeInBytes() const
{
    uint64_t value {};
    check_hresult(shim()->get_VideosSizeInBytes(&value));
    return value;
}

template <typename D> uint32_t impl_IPhotoImportImportItemsResult<D>::SidecarsCount() const
{
    uint32_t value {};
    check_hresult(shim()->get_SidecarsCount(&value));
    return value;
}

template <typename D> uint64_t impl_IPhotoImportImportItemsResult<D>::SidecarsSizeInBytes() const
{
    uint64_t value {};
    check_hresult(shim()->get_SidecarsSizeInBytes(&value));
    return value;
}

template <typename D> uint32_t impl_IPhotoImportImportItemsResult<D>::SiblingsCount() const
{
    uint32_t value {};
    check_hresult(shim()->get_SiblingsCount(&value));
    return value;
}

template <typename D> uint64_t impl_IPhotoImportImportItemsResult<D>::SiblingsSizeInBytes() const
{
    uint64_t value {};
    check_hresult(shim()->get_SiblingsSizeInBytes(&value));
    return value;
}

template <typename D> uint32_t impl_IPhotoImportImportItemsResult<D>::TotalCount() const
{
    uint32_t value {};
    check_hresult(shim()->get_TotalCount(&value));
    return value;
}

template <typename D> uint64_t impl_IPhotoImportImportItemsResult<D>::TotalSizeInBytes() const
{
    uint64_t value {};
    check_hresult(shim()->get_TotalSizeInBytes(&value));
    return value;
}

template <typename D> Windows::Foundation::IAsyncOperationWithProgress<Windows::Media::Import::PhotoImportDeleteImportedItemsFromSourceResult, double> impl_IPhotoImportImportItemsResult<D>::DeleteImportedItemsFromSourceAsync() const
{
    Windows::Foundation::IAsyncOperationWithProgress<Windows::Media::Import::PhotoImportDeleteImportedItemsFromSourceResult, double> result;
    check_hresult(shim()->abi_DeleteImportedItemsFromSourceAsync(put(result)));
    return result;
}

template <typename D> Windows::Media::Import::PhotoImportSession impl_IPhotoImportDeleteImportedItemsFromSourceResult<D>::Session() const
{
    Windows::Media::Import::PhotoImportSession value { nullptr };
    check_hresult(shim()->get_Session(put(value)));
    return value;
}

template <typename D> bool impl_IPhotoImportDeleteImportedItemsFromSourceResult<D>::HasSucceeded() const
{
    bool value {};
    check_hresult(shim()->get_HasSucceeded(&value));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVectorView<Windows::Media::Import::PhotoImportItem> impl_IPhotoImportDeleteImportedItemsFromSourceResult<D>::DeletedItems() const
{
    Windows::Foundation::Collections::IVectorView<Windows::Media::Import::PhotoImportItem> value;
    check_hresult(shim()->get_DeletedItems(put(value)));
    return value;
}

template <typename D> uint32_t impl_IPhotoImportDeleteImportedItemsFromSourceResult<D>::PhotosCount() const
{
    uint32_t value {};
    check_hresult(shim()->get_PhotosCount(&value));
    return value;
}

template <typename D> uint64_t impl_IPhotoImportDeleteImportedItemsFromSourceResult<D>::PhotosSizeInBytes() const
{
    uint64_t value {};
    check_hresult(shim()->get_PhotosSizeInBytes(&value));
    return value;
}

template <typename D> uint32_t impl_IPhotoImportDeleteImportedItemsFromSourceResult<D>::VideosCount() const
{
    uint32_t value {};
    check_hresult(shim()->get_VideosCount(&value));
    return value;
}

template <typename D> uint64_t impl_IPhotoImportDeleteImportedItemsFromSourceResult<D>::VideosSizeInBytes() const
{
    uint64_t value {};
    check_hresult(shim()->get_VideosSizeInBytes(&value));
    return value;
}

template <typename D> uint32_t impl_IPhotoImportDeleteImportedItemsFromSourceResult<D>::SidecarsCount() const
{
    uint32_t value {};
    check_hresult(shim()->get_SidecarsCount(&value));
    return value;
}

template <typename D> uint64_t impl_IPhotoImportDeleteImportedItemsFromSourceResult<D>::SidecarsSizeInBytes() const
{
    uint64_t value {};
    check_hresult(shim()->get_SidecarsSizeInBytes(&value));
    return value;
}

template <typename D> uint32_t impl_IPhotoImportDeleteImportedItemsFromSourceResult<D>::SiblingsCount() const
{
    uint32_t value {};
    check_hresult(shim()->get_SiblingsCount(&value));
    return value;
}

template <typename D> uint64_t impl_IPhotoImportDeleteImportedItemsFromSourceResult<D>::SiblingsSizeInBytes() const
{
    uint64_t value {};
    check_hresult(shim()->get_SiblingsSizeInBytes(&value));
    return value;
}

template <typename D> uint32_t impl_IPhotoImportDeleteImportedItemsFromSourceResult<D>::TotalCount() const
{
    uint32_t value {};
    check_hresult(shim()->get_TotalCount(&value));
    return value;
}

template <typename D> uint64_t impl_IPhotoImportDeleteImportedItemsFromSourceResult<D>::TotalSizeInBytes() const
{
    uint64_t value {};
    check_hresult(shim()->get_TotalSizeInBytes(&value));
    return value;
}

template <typename D> hstring impl_IPhotoImportSidecar<D>::Name() const
{
    hstring value;
    check_hresult(shim()->get_Name(put(value)));
    return value;
}

template <typename D> uint64_t impl_IPhotoImportSidecar<D>::SizeInBytes() const
{
    uint64_t value {};
    check_hresult(shim()->get_SizeInBytes(&value));
    return value;
}

template <typename D> Windows::Foundation::DateTime impl_IPhotoImportSidecar<D>::Date() const
{
    Windows::Foundation::DateTime value {};
    check_hresult(shim()->get_Date(put(value)));
    return value;
}

template <typename D> hstring impl_IPhotoImportVideoSegment<D>::Name() const
{
    hstring value;
    check_hresult(shim()->get_Name(put(value)));
    return value;
}

template <typename D> uint64_t impl_IPhotoImportVideoSegment<D>::SizeInBytes() const
{
    uint64_t value {};
    check_hresult(shim()->get_SizeInBytes(&value));
    return value;
}

template <typename D> Windows::Foundation::DateTime impl_IPhotoImportVideoSegment<D>::Date() const
{
    Windows::Foundation::DateTime value {};
    check_hresult(shim()->get_Date(put(value)));
    return value;
}

template <typename D> Windows::Media::Import::PhotoImportSidecar impl_IPhotoImportVideoSegment<D>::Sibling() const
{
    Windows::Media::Import::PhotoImportSidecar value { nullptr };
    check_hresult(shim()->get_Sibling(put(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVectorView<Windows::Media::Import::PhotoImportSidecar> impl_IPhotoImportVideoSegment<D>::Sidecars() const
{
    Windows::Foundation::Collections::IVectorView<Windows::Media::Import::PhotoImportSidecar> value;
    check_hresult(shim()->get_Sidecars(put(value)));
    return value;
}

template <typename D> Windows::Media::Import::PhotoImportItem impl_IPhotoImportItemImportedEventArgs<D>::ImportedItem() const
{
    Windows::Media::Import::PhotoImportItem value { nullptr };
    check_hresult(shim()->get_ImportedItem(put(value)));
    return value;
}

template <typename D> bool impl_IPhotoImportSelectionChangedEventArgs<D>::IsSelectionEmpty() const
{
    bool value {};
    check_hresult(shim()->get_IsSelectionEmpty(&value));
    return value;
}

inline Windows::Foundation::IAsyncOperation<bool> PhotoImportManager::IsSupportedAsync()
{
    return get_activation_factory<PhotoImportManager, IPhotoImportManagerStatics>().IsSupportedAsync();
}

inline Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Media::Import::PhotoImportSource>> PhotoImportManager::FindAllSourcesAsync()
{
    return get_activation_factory<PhotoImportManager, IPhotoImportManagerStatics>().FindAllSourcesAsync();
}

inline Windows::Foundation::Collections::IVectorView<Windows::Media::Import::PhotoImportOperation> PhotoImportManager::GetPendingOperations()
{
    return get_activation_factory<PhotoImportManager, IPhotoImportManagerStatics>().GetPendingOperations();
}

inline Windows::Foundation::IAsyncOperation<Windows::Media::Import::PhotoImportSource> PhotoImportSource::FromIdAsync(hstring_ref sourceId)
{
    return get_activation_factory<PhotoImportSource, IPhotoImportSourceStatics>().FromIdAsync(sourceId);
}

inline Windows::Foundation::IAsyncOperation<Windows::Media::Import::PhotoImportSource> PhotoImportSource::FromFolderAsync(const Windows::Storage::IStorageFolder & sourceRootFolder)
{
    return get_activation_factory<PhotoImportSource, IPhotoImportSourceStatics>().FromFolderAsync(sourceRootFolder);
}

}

}
