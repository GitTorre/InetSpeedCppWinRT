// C++/WinRT v1.0.170717.1
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "Windows.Foundation.0.h"
#include "Windows.Graphics.DirectX.Direct3D11.0.h"
#include "Windows.Storage.Streams.0.h"
#include "Windows.Graphics.Imaging.0.h"

namespace winrt {

namespace Windows::Graphics::Imaging {

struct IBitmapBuffer :
    Windows::Foundation::IInspectable,
    impl::consume_t<IBitmapBuffer>,
    impl::require<IBitmapBuffer, Windows::Foundation::IClosable, Windows::Foundation::IMemoryBuffer>
{
    IBitmapBuffer(std::nullptr_t = nullptr) noexcept {}
};

struct IBitmapCodecInformation :
    Windows::Foundation::IInspectable,
    impl::consume_t<IBitmapCodecInformation>
{
    IBitmapCodecInformation(std::nullptr_t = nullptr) noexcept {}
};

struct IBitmapDecoder :
    Windows::Foundation::IInspectable,
    impl::consume_t<IBitmapDecoder>
{
    IBitmapDecoder(std::nullptr_t = nullptr) noexcept {}
};

struct IBitmapDecoderStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IBitmapDecoderStatics>
{
    IBitmapDecoderStatics(std::nullptr_t = nullptr) noexcept {}
};

struct IBitmapEncoder :
    Windows::Foundation::IInspectable,
    impl::consume_t<IBitmapEncoder>
{
    IBitmapEncoder(std::nullptr_t = nullptr) noexcept {}
};

struct IBitmapEncoderStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IBitmapEncoderStatics>
{
    IBitmapEncoderStatics(std::nullptr_t = nullptr) noexcept {}
};

struct IBitmapEncoderWithSoftwareBitmap :
    Windows::Foundation::IInspectable,
    impl::consume_t<IBitmapEncoderWithSoftwareBitmap>
{
    IBitmapEncoderWithSoftwareBitmap(std::nullptr_t = nullptr) noexcept {}
};

struct IBitmapFrame :
    Windows::Foundation::IInspectable,
    impl::consume_t<IBitmapFrame>
{
    IBitmapFrame(std::nullptr_t = nullptr) noexcept {}
};

struct IBitmapFrameWithSoftwareBitmap :
    Windows::Foundation::IInspectable,
    impl::consume_t<IBitmapFrameWithSoftwareBitmap>,
    impl::require<IBitmapFrameWithSoftwareBitmap, Windows::Graphics::Imaging::IBitmapFrame>
{
    IBitmapFrameWithSoftwareBitmap(std::nullptr_t = nullptr) noexcept {}
};

struct IBitmapProperties :
    Windows::Foundation::IInspectable,
    impl::consume_t<IBitmapProperties>,
    impl::require<IBitmapProperties, Windows::Graphics::Imaging::IBitmapPropertiesView>
{
    IBitmapProperties(std::nullptr_t = nullptr) noexcept {}
};

struct IBitmapPropertiesView :
    Windows::Foundation::IInspectable,
    impl::consume_t<IBitmapPropertiesView>
{
    IBitmapPropertiesView(std::nullptr_t = nullptr) noexcept {}
};

struct IBitmapTransform :
    Windows::Foundation::IInspectable,
    impl::consume_t<IBitmapTransform>
{
    IBitmapTransform(std::nullptr_t = nullptr) noexcept {}
};

struct IBitmapTypedValue :
    Windows::Foundation::IInspectable,
    impl::consume_t<IBitmapTypedValue>
{
    IBitmapTypedValue(std::nullptr_t = nullptr) noexcept {}
};

struct IBitmapTypedValueFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<IBitmapTypedValueFactory>
{
    IBitmapTypedValueFactory(std::nullptr_t = nullptr) noexcept {}
};

struct IPixelDataProvider :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPixelDataProvider>
{
    IPixelDataProvider(std::nullptr_t = nullptr) noexcept {}
};

struct ISoftwareBitmap :
    Windows::Foundation::IInspectable,
    impl::consume_t<ISoftwareBitmap>,
    impl::require<ISoftwareBitmap, Windows::Foundation::IClosable>
{
    ISoftwareBitmap(std::nullptr_t = nullptr) noexcept {}
};

struct ISoftwareBitmapFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<ISoftwareBitmapFactory>
{
    ISoftwareBitmapFactory(std::nullptr_t = nullptr) noexcept {}
};

struct ISoftwareBitmapStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<ISoftwareBitmapStatics>
{
    ISoftwareBitmapStatics(std::nullptr_t = nullptr) noexcept {}
};

}

}
