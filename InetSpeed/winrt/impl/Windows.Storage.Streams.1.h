// C++/WinRT v1.0.170717.1
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "Windows.Foundation.0.h"
#include "Windows.Storage.0.h"
#include "Windows.Storage.Streams.0.h"

namespace winrt {

namespace Windows::Storage::Streams {

struct IBuffer :
    Windows::Foundation::IInspectable,
    impl::consume_t<IBuffer>
{
    IBuffer(std::nullptr_t = nullptr) noexcept {}
};

struct IBufferFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<IBufferFactory>
{
    IBufferFactory(std::nullptr_t = nullptr) noexcept {}
};

struct IBufferStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IBufferStatics>
{
    IBufferStatics(std::nullptr_t = nullptr) noexcept {}
};

struct IContentTypeProvider :
    Windows::Foundation::IInspectable,
    impl::consume_t<IContentTypeProvider>
{
    IContentTypeProvider(std::nullptr_t = nullptr) noexcept {}
};

struct IDataReader :
    Windows::Foundation::IInspectable,
    impl::consume_t<IDataReader>
{
    IDataReader(std::nullptr_t = nullptr) noexcept {}
};

struct IDataReaderFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<IDataReaderFactory>
{
    IDataReaderFactory(std::nullptr_t = nullptr) noexcept {}
};

struct IDataReaderStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IDataReaderStatics>
{
    IDataReaderStatics(std::nullptr_t = nullptr) noexcept {}
};

struct IDataWriter :
    Windows::Foundation::IInspectable,
    impl::consume_t<IDataWriter>
{
    IDataWriter(std::nullptr_t = nullptr) noexcept {}
};

struct IDataWriterFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<IDataWriterFactory>
{
    IDataWriterFactory(std::nullptr_t = nullptr) noexcept {}
};

struct IInputStream :
    Windows::Foundation::IInspectable,
    impl::consume_t<IInputStream>,
    impl::require<IInputStream, Windows::Foundation::IClosable>
{
    IInputStream(std::nullptr_t = nullptr) noexcept {}
};

struct IInputStreamReference :
    Windows::Foundation::IInspectable,
    impl::consume_t<IInputStreamReference>
{
    IInputStreamReference(std::nullptr_t = nullptr) noexcept {}
};

struct IOutputStream :
    Windows::Foundation::IInspectable,
    impl::consume_t<IOutputStream>,
    impl::require<IOutputStream, Windows::Foundation::IClosable>
{
    IOutputStream(std::nullptr_t = nullptr) noexcept {}
};

struct IRandomAccessStream :
    Windows::Foundation::IInspectable,
    impl::consume_t<IRandomAccessStream>,
    impl::require<IRandomAccessStream, Windows::Foundation::IClosable, Windows::Storage::Streams::IInputStream, Windows::Storage::Streams::IOutputStream>
{
    IRandomAccessStream(std::nullptr_t = nullptr) noexcept {}
};

struct IRandomAccessStreamReference :
    Windows::Foundation::IInspectable,
    impl::consume_t<IRandomAccessStreamReference>
{
    IRandomAccessStreamReference(std::nullptr_t = nullptr) noexcept {}
};

struct IRandomAccessStreamReferenceStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IRandomAccessStreamReferenceStatics>
{
    IRandomAccessStreamReferenceStatics(std::nullptr_t = nullptr) noexcept {}
};

struct IRandomAccessStreamStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IRandomAccessStreamStatics>
{
    IRandomAccessStreamStatics(std::nullptr_t = nullptr) noexcept {}
};

struct IRandomAccessStreamWithContentType :
    Windows::Foundation::IInspectable,
    impl::consume_t<IRandomAccessStreamWithContentType>,
    impl::require<IRandomAccessStreamWithContentType, Windows::Foundation::IClosable, Windows::Storage::Streams::IContentTypeProvider, Windows::Storage::Streams::IInputStream, Windows::Storage::Streams::IOutputStream, Windows::Storage::Streams::IRandomAccessStream>
{
    IRandomAccessStreamWithContentType(std::nullptr_t = nullptr) noexcept {}
};

}

}
