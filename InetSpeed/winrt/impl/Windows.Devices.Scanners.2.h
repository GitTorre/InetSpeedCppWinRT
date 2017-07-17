// C++/WinRT v1.0.170717.1
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "Windows.Graphics.Printing.1.h"
#include "Windows.Storage.1.h"
#include "Windows.Storage.Streams.1.h"
#include "Windows.Devices.Scanners.1.h"

namespace winrt {

namespace Windows::Devices::Scanners {

struct ImageScannerResolution
{
    float DpiX;
    float DpiY;
};

struct ImageScanner :
    Windows::Devices::Scanners::IImageScanner
{
    ImageScanner(std::nullptr_t) noexcept {}
    static Windows::Foundation::IAsyncOperation<Windows::Devices::Scanners::ImageScanner> FromIdAsync(param::hstring const& deviceId);
    static hstring GetDeviceSelector();
};

struct ImageScannerAutoConfiguration :
    Windows::Devices::Scanners::IImageScannerFormatConfiguration
{
    ImageScannerAutoConfiguration(std::nullptr_t) noexcept {}
};

struct ImageScannerFeederConfiguration :
    Windows::Devices::Scanners::IImageScannerFormatConfiguration,
    impl::require<ImageScannerFeederConfiguration, Windows::Devices::Scanners::IImageScannerFeederConfiguration, Windows::Devices::Scanners::IImageScannerSourceConfiguration>
{
    ImageScannerFeederConfiguration(std::nullptr_t) noexcept {}
};

struct ImageScannerFlatbedConfiguration :
    Windows::Devices::Scanners::IImageScannerFormatConfiguration,
    impl::require<ImageScannerFlatbedConfiguration, Windows::Devices::Scanners::IImageScannerSourceConfiguration>
{
    ImageScannerFlatbedConfiguration(std::nullptr_t) noexcept {}
};

struct ImageScannerPreviewResult :
    Windows::Devices::Scanners::IImageScannerPreviewResult
{
    ImageScannerPreviewResult(std::nullptr_t) noexcept {}
};

struct ImageScannerScanResult :
    Windows::Devices::Scanners::IImageScannerScanResult
{
    ImageScannerScanResult(std::nullptr_t) noexcept {}
};

}

namespace impl {

}

}
