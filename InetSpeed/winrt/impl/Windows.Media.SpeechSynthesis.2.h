// C++/WinRT v1.0.170717.1
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "Windows.Media.1.h"
#include "Windows.Media.Core.1.h"
#include "Windows.Storage.Streams.1.h"
#include "Windows.Foundation.1.h"
#include "Windows.Media.SpeechSynthesis.1.h"

namespace winrt {

namespace Windows::Media::SpeechSynthesis {

struct SpeechSynthesisStream :
    Windows::Media::SpeechSynthesis::ISpeechSynthesisStream,
    impl::require<SpeechSynthesisStream, Windows::Media::Core::ITimedMetadataTrackProvider>
{
    SpeechSynthesisStream(std::nullptr_t) noexcept {}
};

struct SpeechSynthesizer :
    Windows::Media::SpeechSynthesis::ISpeechSynthesizer,
    impl::require<SpeechSynthesizer, Windows::Foundation::IClosable, Windows::Media::SpeechSynthesis::ISpeechSynthesizer2>
{
    SpeechSynthesizer(std::nullptr_t) noexcept {}
    SpeechSynthesizer();
    static Windows::Foundation::Collections::IVectorView<Windows::Media::SpeechSynthesis::VoiceInformation> AllVoices();
    static Windows::Media::SpeechSynthesis::VoiceInformation DefaultVoice();
};

struct SpeechSynthesizerOptions :
    Windows::Media::SpeechSynthesis::ISpeechSynthesizerOptions
{
    SpeechSynthesizerOptions(std::nullptr_t) noexcept {}
};

struct VoiceInformation :
    Windows::Media::SpeechSynthesis::IVoiceInformation
{
    VoiceInformation(std::nullptr_t) noexcept {}
};

}

namespace impl {

}

}
