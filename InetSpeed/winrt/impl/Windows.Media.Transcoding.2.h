// C++/WinRT v1.0.170717.1
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "Windows.Foundation.Collections.1.h"
#include "Windows.Media.Core.1.h"
#include "Windows.Media.MediaProperties.1.h"
#include "Windows.Storage.1.h"
#include "Windows.Storage.Streams.1.h"
#include "Windows.Media.Transcoding.1.h"

namespace winrt {

namespace Windows::Media::Transcoding {

struct MediaTranscoder :
    Windows::Media::Transcoding::IMediaTranscoder,
    impl::require<MediaTranscoder, Windows::Media::Transcoding::IMediaTranscoder2>
{
    MediaTranscoder(std::nullptr_t) noexcept {}
    MediaTranscoder();
};

struct PrepareTranscodeResult :
    Windows::Media::Transcoding::IPrepareTranscodeResult
{
    PrepareTranscodeResult(std::nullptr_t) noexcept {}
};

}

namespace impl {

}

}
