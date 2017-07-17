// C++/WinRT v1.0.170717.1
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "Windows.Graphics.Imaging.0.h"
#include "Windows.Media.0.h"
#include "Windows.Media.FaceAnalysis.0.h"

namespace winrt {

namespace Windows::Media::FaceAnalysis {

struct IDetectedFace :
    Windows::Foundation::IInspectable,
    impl::consume_t<IDetectedFace>
{
    IDetectedFace(std::nullptr_t = nullptr) noexcept {}
};

struct IFaceDetector :
    Windows::Foundation::IInspectable,
    impl::consume_t<IFaceDetector>
{
    IFaceDetector(std::nullptr_t = nullptr) noexcept {}
};

struct IFaceDetectorStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IFaceDetectorStatics>
{
    IFaceDetectorStatics(std::nullptr_t = nullptr) noexcept {}
};

struct IFaceTracker :
    Windows::Foundation::IInspectable,
    impl::consume_t<IFaceTracker>
{
    IFaceTracker(std::nullptr_t = nullptr) noexcept {}
};

struct IFaceTrackerStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IFaceTrackerStatics>
{
    IFaceTrackerStatics(std::nullptr_t = nullptr) noexcept {}
};

}

}
