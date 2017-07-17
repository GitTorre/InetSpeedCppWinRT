// C++/WinRT v1.0.170717.1
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "Windows.Data.Text.0.h"
#include "Windows.Storage.0.h"
#include "Windows.Storage.FileProperties.0.h"
#include "Windows.Storage.Streams.0.h"
#include "Windows.Storage.Search.0.h"

namespace winrt {

namespace Windows::Storage::Search {

struct IContentIndexer :
    Windows::Foundation::IInspectable,
    impl::consume_t<IContentIndexer>
{
    IContentIndexer(std::nullptr_t = nullptr) noexcept {}
};

struct IContentIndexerQuery :
    Windows::Foundation::IInspectable,
    impl::consume_t<IContentIndexerQuery>
{
    IContentIndexerQuery(std::nullptr_t = nullptr) noexcept {}
};

struct IContentIndexerQueryOperations :
    Windows::Foundation::IInspectable,
    impl::consume_t<IContentIndexerQueryOperations>
{
    IContentIndexerQueryOperations(std::nullptr_t = nullptr) noexcept {}
};

struct IContentIndexerStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IContentIndexerStatics>
{
    IContentIndexerStatics(std::nullptr_t = nullptr) noexcept {}
};

struct IIndexableContent :
    Windows::Foundation::IInspectable,
    impl::consume_t<IIndexableContent>
{
    IIndexableContent(std::nullptr_t = nullptr) noexcept {}
};

struct IQueryOptions :
    Windows::Foundation::IInspectable,
    impl::consume_t<IQueryOptions>
{
    IQueryOptions(std::nullptr_t = nullptr) noexcept {}
};

struct IQueryOptionsFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<IQueryOptionsFactory>
{
    IQueryOptionsFactory(std::nullptr_t = nullptr) noexcept {}
};

struct IQueryOptionsWithProviderFilter :
    Windows::Foundation::IInspectable,
    impl::consume_t<IQueryOptionsWithProviderFilter>
{
    IQueryOptionsWithProviderFilter(std::nullptr_t = nullptr) noexcept {}
};

struct IStorageFileQueryResult :
    Windows::Foundation::IInspectable,
    impl::consume_t<IStorageFileQueryResult>,
    impl::require<IStorageFileQueryResult, Windows::Storage::Search::IStorageQueryResultBase>
{
    IStorageFileQueryResult(std::nullptr_t = nullptr) noexcept {}
};

struct IStorageFileQueryResult2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IStorageFileQueryResult2>,
    impl::require<IStorageFileQueryResult2, Windows::Storage::Search::IStorageQueryResultBase>
{
    IStorageFileQueryResult2(std::nullptr_t = nullptr) noexcept {}
};

struct IStorageFolderQueryOperations :
    Windows::Foundation::IInspectable,
    impl::consume_t<IStorageFolderQueryOperations>
{
    IStorageFolderQueryOperations(std::nullptr_t = nullptr) noexcept {}
};

struct IStorageFolderQueryResult :
    Windows::Foundation::IInspectable,
    impl::consume_t<IStorageFolderQueryResult>,
    impl::require<IStorageFolderQueryResult, Windows::Storage::Search::IStorageQueryResultBase>
{
    IStorageFolderQueryResult(std::nullptr_t = nullptr) noexcept {}
};

struct IStorageItemQueryResult :
    Windows::Foundation::IInspectable,
    impl::consume_t<IStorageItemQueryResult>,
    impl::require<IStorageItemQueryResult, Windows::Storage::Search::IStorageQueryResultBase>
{
    IStorageItemQueryResult(std::nullptr_t = nullptr) noexcept {}
};

struct IStorageLibraryContentChangedTriggerDetails :
    Windows::Foundation::IInspectable,
    impl::consume_t<IStorageLibraryContentChangedTriggerDetails>
{
    IStorageLibraryContentChangedTriggerDetails(std::nullptr_t = nullptr) noexcept {}
};

struct IStorageQueryResultBase :
    Windows::Foundation::IInspectable,
    impl::consume_t<IStorageQueryResultBase>
{
    IStorageQueryResultBase(std::nullptr_t = nullptr) noexcept {}
};

struct IValueAndLanguage :
    Windows::Foundation::IInspectable,
    impl::consume_t<IValueAndLanguage>
{
    IValueAndLanguage(std::nullptr_t = nullptr) noexcept {}
};

}

}
