// C++/WinRT v1.0.170717.1
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "Windows.Storage.1.h"
#include "Windows.Storage.AccessCache.1.h"

namespace winrt {

namespace Windows::Storage::AccessCache {

struct AccessListEntry
{
    hstring Token;
    hstring Metadata;
};

struct AccessListEntryView :
    Windows::Foundation::Collections::IVectorView<Windows::Storage::AccessCache::AccessListEntry>
{
    AccessListEntryView(std::nullptr_t) noexcept {}
};

struct ItemRemovedEventArgs :
    Windows::Storage::AccessCache::IItemRemovedEventArgs
{
    ItemRemovedEventArgs(std::nullptr_t) noexcept {}
};

struct StorageApplicationPermissions
{
    StorageApplicationPermissions() = delete;
    static Windows::Storage::AccessCache::StorageItemAccessList FutureAccessList();
    static Windows::Storage::AccessCache::StorageItemMostRecentlyUsedList MostRecentlyUsedList();
};

struct StorageItemAccessList :
    Windows::Storage::AccessCache::IStorageItemAccessList
{
    StorageItemAccessList(std::nullptr_t) noexcept {}
};

struct StorageItemMostRecentlyUsedList :
    Windows::Storage::AccessCache::IStorageItemMostRecentlyUsedList,
    impl::require<StorageItemMostRecentlyUsedList, Windows::Storage::AccessCache::IStorageItemMostRecentlyUsedList2>
{
    StorageItemMostRecentlyUsedList(std::nullptr_t) noexcept {}
    using impl::consume_t<StorageItemMostRecentlyUsedList, Windows::Storage::AccessCache::IStorageItemMostRecentlyUsedList2>::Add;
    using Windows::Storage::AccessCache::IStorageItemMostRecentlyUsedList::Add;
    using impl::consume_t<StorageItemMostRecentlyUsedList, Windows::Storage::AccessCache::IStorageItemMostRecentlyUsedList2>::AddOrReplace;
    using Windows::Storage::AccessCache::IStorageItemMostRecentlyUsedList::AddOrReplace;
};

}

namespace impl {

}

}
