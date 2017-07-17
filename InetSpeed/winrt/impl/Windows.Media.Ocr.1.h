// C++/WinRT v1.0.170717.1
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "Windows.Globalization.0.h"
#include "Windows.Graphics.Imaging.0.h"
#include "Windows.Media.Ocr.0.h"

namespace winrt {

namespace Windows::Media::Ocr {

struct IOcrEngine :
    Windows::Foundation::IInspectable,
    impl::consume_t<IOcrEngine>
{
    IOcrEngine(std::nullptr_t = nullptr) noexcept {}
};

struct IOcrEngineStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IOcrEngineStatics>
{
    IOcrEngineStatics(std::nullptr_t = nullptr) noexcept {}
};

struct IOcrLine :
    Windows::Foundation::IInspectable,
    impl::consume_t<IOcrLine>
{
    IOcrLine(std::nullptr_t = nullptr) noexcept {}
};

struct IOcrResult :
    Windows::Foundation::IInspectable,
    impl::consume_t<IOcrResult>
{
    IOcrResult(std::nullptr_t = nullptr) noexcept {}
};

struct IOcrWord :
    Windows::Foundation::IInspectable,
    impl::consume_t<IOcrWord>
{
    IOcrWord(std::nullptr_t = nullptr) noexcept {}
};

}

}
