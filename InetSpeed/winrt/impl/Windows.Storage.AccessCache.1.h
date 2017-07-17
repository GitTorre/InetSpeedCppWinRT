// C++/WinRT v1.0.170717.1
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "Windows.Storage.0.h"
#include "Windows.Storage.AccessCache.0.h"

namespace winrt {

namespace Windows::Storage::AccessCache {

struct IItemRemovedEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<IItemRemovedEventArgs>
{
    IItemRemovedEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct IStorageApplicationPermissionsStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IStorageApplicationPermissionsStatics>
{
    IStorageApplicationPermissionsStatics(std::nullptr_t = nullptr) noexcept {}
};

struct IStorageItemAccessList :
    Windows::Foundation::IInspectable,
    impl::consume_t<IStorageItemAccessList>
{
    IStorageItemAccessList(std::nullptr_t = nullptr) noexcept {}
};

struct IStorageItemMostRecentlyUsedList :
    Windows::Foundation::IInspectable,
    impl::consume_t<IStorageItemMostRecentlyUsedList>,
    impl::require<IStorageItemMostRecentlyUsedList, Windows::Storage::AccessCache::IStorageItemAccessList>
{
    IStorageItemMostRecentlyUsedList(std::nullptr_t = nullptr) noexcept {}
};

struct IStorageItemMostRecentlyUsedList2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IStorageItemMostRecentlyUsedList2>,
    impl::require<IStorageItemMostRecentlyUsedList2, Windows::Storage::AccessCache::IStorageItemAccessList, Windows::Storage::AccessCache::IStorageItemMostRecentlyUsedList>
{
    IStorageItemMostRecentlyUsedList2(std::nullptr_t = nullptr) noexcept {}
    using impl::consume_t<IStorageItemMostRecentlyUsedList2, Windows::Storage::AccessCache::IStorageItemAccessList>::Add;
    using impl::consume_t<IStorageItemMostRecentlyUsedList2, Windows::Storage::AccessCache::IStorageItemMostRecentlyUsedList2>::Add;
    using impl::consume_t<IStorageItemMostRecentlyUsedList2, Windows::Storage::AccessCache::IStorageItemAccessList>::AddOrReplace;
    using impl::consume_t<IStorageItemMostRecentlyUsedList2, Windows::Storage::AccessCache::IStorageItemMostRecentlyUsedList2>::AddOrReplace;
};

}

}
