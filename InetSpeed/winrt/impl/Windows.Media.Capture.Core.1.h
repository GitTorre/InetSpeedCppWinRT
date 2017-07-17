// C++/WinRT v1.0.170717.1
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "Windows.Media.Capture.0.h"
#include "Windows.Media.Capture.Core.0.h"

namespace winrt {

namespace Windows::Media::Capture::Core {

struct IVariablePhotoCapturedEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<IVariablePhotoCapturedEventArgs>
{
    IVariablePhotoCapturedEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct IVariablePhotoSequenceCapture :
    Windows::Foundation::IInspectable,
    impl::consume_t<IVariablePhotoSequenceCapture>
{
    IVariablePhotoSequenceCapture(std::nullptr_t = nullptr) noexcept {}
};

struct IVariablePhotoSequenceCapture2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IVariablePhotoSequenceCapture2>
{
    IVariablePhotoSequenceCapture2(std::nullptr_t = nullptr) noexcept {}
};

}

}
