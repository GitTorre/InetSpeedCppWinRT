// C++/WinRT v1.0.170717.1
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "Windows.Storage.0.h"
#include "Windows.Storage.FileProperties.0.h"
#include "Windows.Storage.Search.0.h"
#include "Windows.Storage.Streams.0.h"
#include "Windows.Storage.BulkAccess.0.h"

namespace winrt {

namespace Windows::Storage::BulkAccess {

struct IFileInformationFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<IFileInformationFactory>
{
    IFileInformationFactory(std::nullptr_t = nullptr) noexcept {}
};

struct IFileInformationFactoryFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<IFileInformationFactoryFactory>
{
    IFileInformationFactoryFactory(std::nullptr_t = nullptr) noexcept {}
};

struct IStorageItemInformation :
    Windows::Foundation::IInspectable,
    impl::consume_t<IStorageItemInformation>
{
    IStorageItemInformation(std::nullptr_t = nullptr) noexcept {}
};

}

}
