// C++/WinRT v1.0.170717.1
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "Windows.Media.Capture.1.h"
#include "Windows.Media.Capture.Core.1.h"

namespace winrt {

namespace Windows::Media::Capture::Core {

struct VariablePhotoCapturedEventArgs :
    Windows::Media::Capture::Core::IVariablePhotoCapturedEventArgs
{
    VariablePhotoCapturedEventArgs(std::nullptr_t) noexcept {}
};

struct VariablePhotoSequenceCapture :
    Windows::Media::Capture::Core::IVariablePhotoSequenceCapture,
    impl::require<VariablePhotoSequenceCapture, Windows::Media::Capture::Core::IVariablePhotoSequenceCapture2>
{
    VariablePhotoSequenceCapture(std::nullptr_t) noexcept {}
};

}

namespace impl {

}

}
