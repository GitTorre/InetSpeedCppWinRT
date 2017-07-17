// C++/WinRT v1.0.170717.1
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once

namespace winrt {

namespace Windows::Phone::Speech::Recognition {

enum class SpeechRecognitionUIStatus
{
    Succeeded = 0,
    Busy = 1,
    Cancelled = 2,
    Preempted = 3,
    PrivacyPolicyDeclined = 4,
};

}

namespace impl {
template <> struct category<Windows::Phone::Speech::Recognition::SpeechRecognitionUIStatus>{ using type = enum_category; };
template <> struct name<Windows::Phone::Speech::Recognition::SpeechRecognitionUIStatus>{ static constexpr auto & value{ L"Windows.Phone.Speech.Recognition.SpeechRecognitionUIStatus" }; };

}

}
