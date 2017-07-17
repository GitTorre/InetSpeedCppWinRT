// C++/WinRT v1.0.170717.1
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "Windows.Graphics.Imaging.1.h"
#include "Windows.Media.1.h"
#include "Windows.Media.FaceAnalysis.1.h"

namespace winrt {

namespace Windows::Media::FaceAnalysis {

struct DetectedFace :
    Windows::Media::FaceAnalysis::IDetectedFace
{
    DetectedFace(std::nullptr_t) noexcept {}
};

struct FaceDetector :
    Windows::Media::FaceAnalysis::IFaceDetector
{
    FaceDetector(std::nullptr_t) noexcept {}
    static Windows::Foundation::IAsyncOperation<Windows::Media::FaceAnalysis::FaceDetector> CreateAsync();
    static Windows::Foundation::Collections::IVectorView<Windows::Graphics::Imaging::BitmapPixelFormat> GetSupportedBitmapPixelFormats();
    static bool IsBitmapPixelFormatSupported(Windows::Graphics::Imaging::BitmapPixelFormat const& bitmapPixelFormat);
    static bool IsSupported();
};

struct FaceTracker :
    Windows::Media::FaceAnalysis::IFaceTracker
{
    FaceTracker(std::nullptr_t) noexcept {}
    static Windows::Foundation::IAsyncOperation<Windows::Media::FaceAnalysis::FaceTracker> CreateAsync();
    static Windows::Foundation::Collections::IVectorView<Windows::Graphics::Imaging::BitmapPixelFormat> GetSupportedBitmapPixelFormats();
    static bool IsBitmapPixelFormatSupported(Windows::Graphics::Imaging::BitmapPixelFormat const& bitmapPixelFormat);
    static bool IsSupported();
};

}

namespace impl {

}

}
