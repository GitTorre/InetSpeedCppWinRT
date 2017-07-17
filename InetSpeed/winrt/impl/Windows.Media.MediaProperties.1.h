// C++/WinRT v1.0.170717.1
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "Windows.Storage.0.h"
#include "Windows.Storage.Streams.0.h"
#include "Windows.Media.MediaProperties.0.h"

namespace winrt {

namespace Windows::Media::MediaProperties {

struct IAudioEncodingProperties :
    Windows::Foundation::IInspectable,
    impl::consume_t<IAudioEncodingProperties>,
    impl::require<IAudioEncodingProperties, Windows::Media::MediaProperties::IMediaEncodingProperties>
{
    IAudioEncodingProperties(std::nullptr_t = nullptr) noexcept {}
};

struct IAudioEncodingProperties2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IAudioEncodingProperties2>
{
    IAudioEncodingProperties2(std::nullptr_t = nullptr) noexcept {}
};

struct IAudioEncodingPropertiesStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IAudioEncodingPropertiesStatics>
{
    IAudioEncodingPropertiesStatics(std::nullptr_t = nullptr) noexcept {}
};

struct IAudioEncodingPropertiesStatics2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IAudioEncodingPropertiesStatics2>
{
    IAudioEncodingPropertiesStatics2(std::nullptr_t = nullptr) noexcept {}
};

struct IAudioEncodingPropertiesWithFormatUserData :
    Windows::Foundation::IInspectable,
    impl::consume_t<IAudioEncodingPropertiesWithFormatUserData>
{
    IAudioEncodingPropertiesWithFormatUserData(std::nullptr_t = nullptr) noexcept {}
};

struct IContainerEncodingProperties :
    Windows::Foundation::IInspectable,
    impl::consume_t<IContainerEncodingProperties>,
    impl::require<IContainerEncodingProperties, Windows::Media::MediaProperties::IMediaEncodingProperties>
{
    IContainerEncodingProperties(std::nullptr_t = nullptr) noexcept {}
};

struct IH264ProfileIdsStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IH264ProfileIdsStatics>
{
    IH264ProfileIdsStatics(std::nullptr_t = nullptr) noexcept {}
};

struct IImageEncodingProperties :
    Windows::Foundation::IInspectable,
    impl::consume_t<IImageEncodingProperties>,
    impl::require<IImageEncodingProperties, Windows::Media::MediaProperties::IMediaEncodingProperties>
{
    IImageEncodingProperties(std::nullptr_t = nullptr) noexcept {}
};

struct IImageEncodingPropertiesStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IImageEncodingPropertiesStatics>
{
    IImageEncodingPropertiesStatics(std::nullptr_t = nullptr) noexcept {}
};

struct IImageEncodingPropertiesStatics2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IImageEncodingPropertiesStatics2>
{
    IImageEncodingPropertiesStatics2(std::nullptr_t = nullptr) noexcept {}
};

struct IMediaEncodingProfile :
    Windows::Foundation::IInspectable,
    impl::consume_t<IMediaEncodingProfile>
{
    IMediaEncodingProfile(std::nullptr_t = nullptr) noexcept {}
};

struct IMediaEncodingProfileStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IMediaEncodingProfileStatics>
{
    IMediaEncodingProfileStatics(std::nullptr_t = nullptr) noexcept {}
};

struct IMediaEncodingProfileStatics2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IMediaEncodingProfileStatics2>
{
    IMediaEncodingProfileStatics2(std::nullptr_t = nullptr) noexcept {}
};

struct IMediaEncodingProfileStatics3 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IMediaEncodingProfileStatics3>
{
    IMediaEncodingProfileStatics3(std::nullptr_t = nullptr) noexcept {}
};

struct IMediaEncodingProperties :
    Windows::Foundation::IInspectable,
    impl::consume_t<IMediaEncodingProperties>
{
    IMediaEncodingProperties(std::nullptr_t = nullptr) noexcept {}
};

struct IMediaEncodingSubtypesStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IMediaEncodingSubtypesStatics>
{
    IMediaEncodingSubtypesStatics(std::nullptr_t = nullptr) noexcept {}
};

struct IMediaEncodingSubtypesStatics2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IMediaEncodingSubtypesStatics2>
{
    IMediaEncodingSubtypesStatics2(std::nullptr_t = nullptr) noexcept {}
};

struct IMediaEncodingSubtypesStatics3 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IMediaEncodingSubtypesStatics3>
{
    IMediaEncodingSubtypesStatics3(std::nullptr_t = nullptr) noexcept {}
};

struct IMediaRatio :
    Windows::Foundation::IInspectable,
    impl::consume_t<IMediaRatio>
{
    IMediaRatio(std::nullptr_t = nullptr) noexcept {}
};

struct IMpeg2ProfileIdsStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IMpeg2ProfileIdsStatics>
{
    IMpeg2ProfileIdsStatics(std::nullptr_t = nullptr) noexcept {}
};

struct IVideoEncodingProperties :
    Windows::Foundation::IInspectable,
    impl::consume_t<IVideoEncodingProperties>,
    impl::require<IVideoEncodingProperties, Windows::Media::MediaProperties::IMediaEncodingProperties>
{
    IVideoEncodingProperties(std::nullptr_t = nullptr) noexcept {}
};

struct IVideoEncodingProperties2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IVideoEncodingProperties2>
{
    IVideoEncodingProperties2(std::nullptr_t = nullptr) noexcept {}
};

struct IVideoEncodingProperties3 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IVideoEncodingProperties3>
{
    IVideoEncodingProperties3(std::nullptr_t = nullptr) noexcept {}
};

struct IVideoEncodingProperties4 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IVideoEncodingProperties4>
{
    IVideoEncodingProperties4(std::nullptr_t = nullptr) noexcept {}
};

struct IVideoEncodingPropertiesStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IVideoEncodingPropertiesStatics>
{
    IVideoEncodingPropertiesStatics(std::nullptr_t = nullptr) noexcept {}
};

struct IVideoEncodingPropertiesStatics2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IVideoEncodingPropertiesStatics2>
{
    IVideoEncodingPropertiesStatics2(std::nullptr_t = nullptr) noexcept {}
};

}

}
