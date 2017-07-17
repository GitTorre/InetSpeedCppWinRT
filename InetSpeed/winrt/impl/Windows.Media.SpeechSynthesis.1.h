// C++/WinRT v1.0.170717.1
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "Windows.Media.0.h"
#include "Windows.Media.Core.0.h"
#include "Windows.Storage.Streams.0.h"
#include "Windows.Foundation.0.h"
#include "Windows.Media.SpeechSynthesis.0.h"

namespace winrt {

namespace Windows::Media::SpeechSynthesis {

struct IInstalledVoicesStatic :
    Windows::Foundation::IInspectable,
    impl::consume_t<IInstalledVoicesStatic>
{
    IInstalledVoicesStatic(std::nullptr_t = nullptr) noexcept {}
};

struct ISpeechSynthesisStream :
    Windows::Foundation::IInspectable,
    impl::consume_t<ISpeechSynthesisStream>,
    impl::require<ISpeechSynthesisStream, Windows::Foundation::IClosable, Windows::Storage::Streams::IContentTypeProvider, Windows::Storage::Streams::IInputStream, Windows::Storage::Streams::IOutputStream, Windows::Storage::Streams::IRandomAccessStream, Windows::Storage::Streams::IRandomAccessStreamWithContentType>
{
    ISpeechSynthesisStream(std::nullptr_t = nullptr) noexcept {}
};

struct ISpeechSynthesizer :
    Windows::Foundation::IInspectable,
    impl::consume_t<ISpeechSynthesizer>
{
    ISpeechSynthesizer(std::nullptr_t = nullptr) noexcept {}
};

struct ISpeechSynthesizer2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<ISpeechSynthesizer2>
{
    ISpeechSynthesizer2(std::nullptr_t = nullptr) noexcept {}
};

struct ISpeechSynthesizerOptions :
    Windows::Foundation::IInspectable,
    impl::consume_t<ISpeechSynthesizerOptions>
{
    ISpeechSynthesizerOptions(std::nullptr_t = nullptr) noexcept {}
};

struct IVoiceInformation :
    Windows::Foundation::IInspectable,
    impl::consume_t<IVoiceInformation>
{
    IVoiceInformation(std::nullptr_t = nullptr) noexcept {}
};

}

}
