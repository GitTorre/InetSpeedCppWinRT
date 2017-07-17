// C++/WinRT v1.0.170717.1
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "Windows.Storage.Streams.0.h"
#include "Windows.Foundation.0.h"
#include "Windows.Storage.Compression.0.h"

namespace winrt {

namespace Windows::Storage::Compression {

struct ICompressor :
    Windows::Foundation::IInspectable,
    impl::consume_t<ICompressor>,
    impl::require<ICompressor, Windows::Foundation::IClosable, Windows::Storage::Streams::IOutputStream>
{
    ICompressor(std::nullptr_t = nullptr) noexcept {}
};

struct ICompressorFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<ICompressorFactory>
{
    ICompressorFactory(std::nullptr_t = nullptr) noexcept {}
};

struct IDecompressor :
    Windows::Foundation::IInspectable,
    impl::consume_t<IDecompressor>,
    impl::require<IDecompressor, Windows::Foundation::IClosable, Windows::Storage::Streams::IInputStream>
{
    IDecompressor(std::nullptr_t = nullptr) noexcept {}
};

struct IDecompressorFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<IDecompressorFactory>
{
    IDecompressorFactory(std::nullptr_t = nullptr) noexcept {}
};

}

}
