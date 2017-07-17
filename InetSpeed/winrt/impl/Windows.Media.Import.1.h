// C++/WinRT v1.0.170717.1
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "Windows.Storage.0.h"
#include "Windows.Storage.Streams.0.h"
#include "Windows.Foundation.0.h"
#include "Windows.Media.Import.0.h"

namespace winrt {

namespace Windows::Media::Import {

struct IPhotoImportDeleteImportedItemsFromSourceResult :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPhotoImportDeleteImportedItemsFromSourceResult>
{
    IPhotoImportDeleteImportedItemsFromSourceResult(std::nullptr_t = nullptr) noexcept {}
};

struct IPhotoImportFindItemsResult :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPhotoImportFindItemsResult>
{
    IPhotoImportFindItemsResult(std::nullptr_t = nullptr) noexcept {}
};

struct IPhotoImportFindItemsResult2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPhotoImportFindItemsResult2>
{
    IPhotoImportFindItemsResult2(std::nullptr_t = nullptr) noexcept {}
};

struct IPhotoImportImportItemsResult :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPhotoImportImportItemsResult>
{
    IPhotoImportImportItemsResult(std::nullptr_t = nullptr) noexcept {}
};

struct IPhotoImportItem :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPhotoImportItem>
{
    IPhotoImportItem(std::nullptr_t = nullptr) noexcept {}
};

struct IPhotoImportItemImportedEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPhotoImportItemImportedEventArgs>
{
    IPhotoImportItemImportedEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct IPhotoImportManagerStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPhotoImportManagerStatics>
{
    IPhotoImportManagerStatics(std::nullptr_t = nullptr) noexcept {}
};

struct IPhotoImportOperation :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPhotoImportOperation>
{
    IPhotoImportOperation(std::nullptr_t = nullptr) noexcept {}
};

struct IPhotoImportSelectionChangedEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPhotoImportSelectionChangedEventArgs>
{
    IPhotoImportSelectionChangedEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct IPhotoImportSession :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPhotoImportSession>,
    impl::require<IPhotoImportSession, Windows::Foundation::IClosable>
{
    IPhotoImportSession(std::nullptr_t = nullptr) noexcept {}
};

struct IPhotoImportSession2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPhotoImportSession2>
{
    IPhotoImportSession2(std::nullptr_t = nullptr) noexcept {}
};

struct IPhotoImportSidecar :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPhotoImportSidecar>
{
    IPhotoImportSidecar(std::nullptr_t = nullptr) noexcept {}
};

struct IPhotoImportSource :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPhotoImportSource>
{
    IPhotoImportSource(std::nullptr_t = nullptr) noexcept {}
};

struct IPhotoImportSourceStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPhotoImportSourceStatics>
{
    IPhotoImportSourceStatics(std::nullptr_t = nullptr) noexcept {}
};

struct IPhotoImportStorageMedium :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPhotoImportStorageMedium>
{
    IPhotoImportStorageMedium(std::nullptr_t = nullptr) noexcept {}
};

struct IPhotoImportVideoSegment :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPhotoImportVideoSegment>
{
    IPhotoImportVideoSegment(std::nullptr_t = nullptr) noexcept {}
};

}

}
