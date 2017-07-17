// C++/WinRT v1.0.170717.1
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "Windows.Graphics.Printing.0.h"
#include "Windows.Storage.0.h"
#include "Windows.Storage.Streams.0.h"
#include "Windows.Devices.Scanners.0.h"

namespace winrt {

namespace Windows::Devices::Scanners {

struct IImageScanner :
    Windows::Foundation::IInspectable,
    impl::consume_t<IImageScanner>
{
    IImageScanner(std::nullptr_t = nullptr) noexcept {}
};

struct IImageScannerFeederConfiguration :
    Windows::Foundation::IInspectable,
    impl::consume_t<IImageScannerFeederConfiguration>,
    impl::require<IImageScannerFeederConfiguration, Windows::Devices::Scanners::IImageScannerFormatConfiguration, Windows::Devices::Scanners::IImageScannerSourceConfiguration>
{
    IImageScannerFeederConfiguration(std::nullptr_t = nullptr) noexcept {}
};

struct IImageScannerFormatConfiguration :
    Windows::Foundation::IInspectable,
    impl::consume_t<IImageScannerFormatConfiguration>
{
    IImageScannerFormatConfiguration(std::nullptr_t = nullptr) noexcept {}
};

struct IImageScannerPreviewResult :
    Windows::Foundation::IInspectable,
    impl::consume_t<IImageScannerPreviewResult>
{
    IImageScannerPreviewResult(std::nullptr_t = nullptr) noexcept {}
};

struct IImageScannerScanResult :
    Windows::Foundation::IInspectable,
    impl::consume_t<IImageScannerScanResult>
{
    IImageScannerScanResult(std::nullptr_t = nullptr) noexcept {}
};

struct IImageScannerSourceConfiguration :
    Windows::Foundation::IInspectable,
    impl::consume_t<IImageScannerSourceConfiguration>,
    impl::require<IImageScannerSourceConfiguration, Windows::Devices::Scanners::IImageScannerFormatConfiguration>
{
    IImageScannerSourceConfiguration(std::nullptr_t = nullptr) noexcept {}
};

struct IImageScannerStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IImageScannerStatics>
{
    IImageScannerStatics(std::nullptr_t = nullptr) noexcept {}
};

}

}
