// C++/WinRT v1.0.170717.1
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "Windows.Foundation.Collections.0.h"
#include "Windows.Media.Core.0.h"
#include "Windows.Media.MediaProperties.0.h"
#include "Windows.Storage.0.h"
#include "Windows.Storage.Streams.0.h"
#include "Windows.Media.Transcoding.0.h"

namespace winrt {

namespace Windows::Media::Transcoding {

struct IMediaTranscoder :
    Windows::Foundation::IInspectable,
    impl::consume_t<IMediaTranscoder>
{
    IMediaTranscoder(std::nullptr_t = nullptr) noexcept {}
};

struct IMediaTranscoder2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IMediaTranscoder2>
{
    IMediaTranscoder2(std::nullptr_t = nullptr) noexcept {}
};

struct IPrepareTranscodeResult :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPrepareTranscodeResult>
{
    IPrepareTranscodeResult(std::nullptr_t = nullptr) noexcept {}
};

}

}
