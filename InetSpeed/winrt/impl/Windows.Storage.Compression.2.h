// C++/WinRT v1.0.170717.1
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "Windows.Storage.Streams.1.h"
#include "Windows.Foundation.1.h"
#include "Windows.Storage.Compression.1.h"

namespace winrt {

namespace Windows::Storage::Compression {

struct Compressor :
    Windows::Storage::Compression::ICompressor
{
    Compressor(std::nullptr_t) noexcept {}
    Compressor(Windows::Storage::Streams::IOutputStream const& underlyingStream);
    Compressor(Windows::Storage::Streams::IOutputStream const& underlyingStream, Windows::Storage::Compression::CompressAlgorithm const& algorithm, uint32_t blockSize);
};

struct Decompressor :
    Windows::Storage::Compression::IDecompressor
{
    Decompressor(std::nullptr_t) noexcept {}
    Decompressor(Windows::Storage::Streams::IInputStream const& underlyingStream);
};

}

namespace impl {

}

}
