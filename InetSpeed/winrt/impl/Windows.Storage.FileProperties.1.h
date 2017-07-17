// C++/WinRT v1.0.170717.1
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "Windows.Devices.Geolocation.0.h"
#include "Windows.Storage.0.h"
#include "Windows.Storage.Streams.0.h"
#include "Windows.Storage.FileProperties.0.h"

namespace winrt {

namespace Windows::Storage::FileProperties {

struct IBasicProperties :
    Windows::Foundation::IInspectable,
    impl::consume_t<IBasicProperties>
{
    IBasicProperties(std::nullptr_t = nullptr) noexcept {}
};

struct IDocumentProperties :
    Windows::Foundation::IInspectable,
    impl::consume_t<IDocumentProperties>,
    impl::require<IDocumentProperties, Windows::Storage::FileProperties::IStorageItemExtraProperties>
{
    IDocumentProperties(std::nullptr_t = nullptr) noexcept {}
};

struct IGeotagHelperStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IGeotagHelperStatics>
{
    IGeotagHelperStatics(std::nullptr_t = nullptr) noexcept {}
};

struct IImageProperties :
    Windows::Foundation::IInspectable,
    impl::consume_t<IImageProperties>,
    impl::require<IImageProperties, Windows::Storage::FileProperties::IStorageItemExtraProperties>
{
    IImageProperties(std::nullptr_t = nullptr) noexcept {}
};

struct IMusicProperties :
    Windows::Foundation::IInspectable,
    impl::consume_t<IMusicProperties>,
    impl::require<IMusicProperties, Windows::Storage::FileProperties::IStorageItemExtraProperties>
{
    IMusicProperties(std::nullptr_t = nullptr) noexcept {}
};

struct IStorageItemContentProperties :
    Windows::Foundation::IInspectable,
    impl::consume_t<IStorageItemContentProperties>,
    impl::require<IStorageItemContentProperties, Windows::Storage::FileProperties::IStorageItemExtraProperties>
{
    IStorageItemContentProperties(std::nullptr_t = nullptr) noexcept {}
};

struct IStorageItemExtraProperties :
    Windows::Foundation::IInspectable,
    impl::consume_t<IStorageItemExtraProperties>
{
    IStorageItemExtraProperties(std::nullptr_t = nullptr) noexcept {}
};

struct IThumbnailProperties :
    Windows::Foundation::IInspectable,
    impl::consume_t<IThumbnailProperties>
{
    IThumbnailProperties(std::nullptr_t = nullptr) noexcept {}
};

struct IVideoProperties :
    Windows::Foundation::IInspectable,
    impl::consume_t<IVideoProperties>,
    impl::require<IVideoProperties, Windows::Storage::FileProperties::IStorageItemExtraProperties>
{
    IVideoProperties(std::nullptr_t = nullptr) noexcept {}
};

}

}
