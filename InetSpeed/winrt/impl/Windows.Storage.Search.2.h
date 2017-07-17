// C++/WinRT v1.0.170717.1
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "Windows.Data.Text.1.h"
#include "Windows.Storage.1.h"
#include "Windows.Storage.FileProperties.1.h"
#include "Windows.Storage.Streams.1.h"
#include "Windows.Storage.Search.1.h"

namespace winrt {

namespace Windows::Storage::Search {

struct SortEntry
{
    hstring PropertyName;
    bool AscendingOrder;
};

struct ContentIndexer :
    Windows::Storage::Search::IContentIndexer,
    impl::require<ContentIndexer, Windows::Storage::Search::IContentIndexerQueryOperations>
{
    ContentIndexer(std::nullptr_t) noexcept {}
    static Windows::Storage::Search::ContentIndexer GetIndexer(param::hstring const& indexName);
    static Windows::Storage::Search::ContentIndexer GetIndexer();
};

struct ContentIndexerQuery :
    Windows::Storage::Search::IContentIndexerQuery
{
    ContentIndexerQuery(std::nullptr_t) noexcept {}
};

struct IndexableContent :
    Windows::Storage::Search::IIndexableContent
{
    IndexableContent(std::nullptr_t) noexcept {}
    IndexableContent();
};

struct QueryOptions :
    Windows::Storage::Search::IQueryOptions,
    impl::require<QueryOptions, Windows::Storage::Search::IQueryOptionsWithProviderFilter>
{
    QueryOptions(std::nullptr_t) noexcept {}
    QueryOptions();
    QueryOptions(Windows::Storage::Search::CommonFileQuery const& query, param::iterable<hstring> const& fileTypeFilter);
    QueryOptions(Windows::Storage::Search::CommonFolderQuery const& query);
};

struct SortEntryVector :
    Windows::Foundation::Collections::IVector<Windows::Storage::Search::SortEntry>
{
    SortEntryVector(std::nullptr_t) noexcept {}
};

struct StorageFileQueryResult :
    Windows::Storage::Search::IStorageFileQueryResult,
    impl::require<StorageFileQueryResult, Windows::Storage::Search::IStorageFileQueryResult2>
{
    StorageFileQueryResult(std::nullptr_t) noexcept {}
};

struct StorageFolderQueryResult :
    Windows::Storage::Search::IStorageFolderQueryResult
{
    StorageFolderQueryResult(std::nullptr_t) noexcept {}
};

struct StorageItemQueryResult :
    Windows::Storage::Search::IStorageItemQueryResult
{
    StorageItemQueryResult(std::nullptr_t) noexcept {}
};

struct StorageLibraryContentChangedTriggerDetails :
    Windows::Storage::Search::IStorageLibraryContentChangedTriggerDetails
{
    StorageLibraryContentChangedTriggerDetails(std::nullptr_t) noexcept {}
};

struct ValueAndLanguage :
    Windows::Storage::Search::IValueAndLanguage
{
    ValueAndLanguage(std::nullptr_t) noexcept {}
    ValueAndLanguage();
};

}

namespace impl {

}

}
