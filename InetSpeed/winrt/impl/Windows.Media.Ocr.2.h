// C++/WinRT v1.0.170717.1
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "Windows.Globalization.1.h"
#include "Windows.Graphics.Imaging.1.h"
#include "Windows.Media.Ocr.1.h"

namespace winrt {

namespace Windows::Media::Ocr {

struct OcrEngine :
    Windows::Media::Ocr::IOcrEngine
{
    OcrEngine(std::nullptr_t) noexcept {}
    static uint32_t MaxImageDimension();
    static Windows::Foundation::Collections::IVectorView<Windows::Globalization::Language> AvailableRecognizerLanguages();
    static bool IsLanguageSupported(Windows::Globalization::Language const& language);
    static Windows::Media::Ocr::OcrEngine TryCreateFromLanguage(Windows::Globalization::Language const& language);
    static Windows::Media::Ocr::OcrEngine TryCreateFromUserProfileLanguages();
};

struct OcrLine :
    Windows::Media::Ocr::IOcrLine
{
    OcrLine(std::nullptr_t) noexcept {}
};

struct OcrResult :
    Windows::Media::Ocr::IOcrResult
{
    OcrResult(std::nullptr_t) noexcept {}
};

struct OcrWord :
    Windows::Media::Ocr::IOcrWord
{
    OcrWord(std::nullptr_t) noexcept {}
};

}

namespace impl {

}

}
