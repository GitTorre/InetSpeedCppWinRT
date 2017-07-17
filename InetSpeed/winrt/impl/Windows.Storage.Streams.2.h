// C++/WinRT v1.0.170717.1
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "Windows.Foundation.1.h"
#include "Windows.Storage.1.h"
#include "Windows.Storage.Streams.1.h"

namespace winrt {

namespace Windows::Storage::Streams {

struct Buffer :
    Windows::Storage::Streams::IBuffer
{
    Buffer(std::nullptr_t) noexcept {}
    Buffer(uint32_t capacity);
    static Windows::Storage::Streams::Buffer CreateCopyFromMemoryBuffer(Windows::Foundation::IMemoryBuffer const& input);
    static Windows::Foundation::MemoryBuffer CreateMemoryBufferOverIBuffer(Windows::Storage::Streams::IBuffer const& input);
};

struct DataReader :
    Windows::Storage::Streams::IDataReader,
    impl::require<DataReader, Windows::Foundation::IClosable>
{
    DataReader(std::nullptr_t) noexcept {}
    DataReader(Windows::Storage::Streams::IInputStream const& inputStream);
    static Windows::Storage::Streams::DataReader FromBuffer(Windows::Storage::Streams::IBuffer const& buffer);
};

struct DataReaderLoadOperation :
    Windows::Foundation::IAsyncOperation<uint32_t>
{
    DataReaderLoadOperation(std::nullptr_t) noexcept {}
};

struct DataWriter :
    Windows::Storage::Streams::IDataWriter,
    impl::require<DataWriter, Windows::Foundation::IClosable>
{
    DataWriter(std::nullptr_t) noexcept {}
    DataWriter();
    DataWriter(Windows::Storage::Streams::IOutputStream const& outputStream);
};

struct DataWriterStoreOperation :
    Windows::Foundation::IAsyncOperation<uint32_t>
{
    DataWriterStoreOperation(std::nullptr_t) noexcept {}
};

struct FileInputStream :
    Windows::Storage::Streams::IInputStream
{
    FileInputStream(std::nullptr_t) noexcept {}
};

struct FileOutputStream :
    Windows::Storage::Streams::IOutputStream
{
    FileOutputStream(std::nullptr_t) noexcept {}
};

struct FileRandomAccessStream :
    Windows::Storage::Streams::IRandomAccessStream
{
    FileRandomAccessStream(std::nullptr_t) noexcept {}
};

struct InMemoryRandomAccessStream :
    Windows::Storage::Streams::IRandomAccessStream
{
    InMemoryRandomAccessStream(std::nullptr_t) noexcept {}
    InMemoryRandomAccessStream();
};

struct InputStreamOverStream :
    Windows::Storage::Streams::IInputStream
{
    InputStreamOverStream(std::nullptr_t) noexcept {}
};

struct OutputStreamOverStream :
    Windows::Storage::Streams::IOutputStream
{
    OutputStreamOverStream(std::nullptr_t) noexcept {}
};

struct RandomAccessStream
{
    RandomAccessStream() = delete;
    static Windows::Foundation::IAsyncOperationWithProgress<uint64_t, uint64_t> CopyAsync(Windows::Storage::Streams::IInputStream const& source, Windows::Storage::Streams::IOutputStream const& destination);
    static Windows::Foundation::IAsyncOperationWithProgress<uint64_t, uint64_t> CopyAsync(Windows::Storage::Streams::IInputStream const& source, Windows::Storage::Streams::IOutputStream const& destination, uint64_t bytesToCopy);
    static Windows::Foundation::IAsyncOperationWithProgress<uint64_t, uint64_t> CopyAndCloseAsync(Windows::Storage::Streams::IInputStream const& source, Windows::Storage::Streams::IOutputStream const& destination);
};

struct RandomAccessStreamOverStream :
    Windows::Storage::Streams::IRandomAccessStream
{
    RandomAccessStreamOverStream(std::nullptr_t) noexcept {}
};

struct RandomAccessStreamReference :
    Windows::Storage::Streams::IRandomAccessStreamReference
{
    RandomAccessStreamReference(std::nullptr_t) noexcept {}
    static Windows::Storage::Streams::RandomAccessStreamReference CreateFromFile(Windows::Storage::IStorageFile const& file);
    static Windows::Storage::Streams::RandomAccessStreamReference CreateFromUri(Windows::Foundation::Uri const& uri);
    static Windows::Storage::Streams::RandomAccessStreamReference CreateFromStream(Windows::Storage::Streams::IRandomAccessStream const& stream);
};

}

namespace impl {

}

}
