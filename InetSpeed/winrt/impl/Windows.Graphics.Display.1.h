// C++/WinRT v1.0.170717.1
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "Windows.Storage.Streams.0.h"
#include "Windows.Graphics.Display.0.h"

namespace winrt {

namespace Windows::Graphics::Display {

struct IBrightnessOverride :
    Windows::Foundation::IInspectable,
    impl::consume_t<IBrightnessOverride>
{
    IBrightnessOverride(std::nullptr_t = nullptr) noexcept {}
};

struct IBrightnessOverrideStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IBrightnessOverrideStatics>
{
    IBrightnessOverrideStatics(std::nullptr_t = nullptr) noexcept {}
};

struct IDisplayInformation :
    Windows::Foundation::IInspectable,
    impl::consume_t<IDisplayInformation>
{
    IDisplayInformation(std::nullptr_t = nullptr) noexcept {}
};

struct IDisplayInformation2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IDisplayInformation2>,
    impl::require<IDisplayInformation2, Windows::Graphics::Display::IDisplayInformation>
{
    IDisplayInformation2(std::nullptr_t = nullptr) noexcept {}
};

struct IDisplayInformation3 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IDisplayInformation3>
{
    IDisplayInformation3(std::nullptr_t = nullptr) noexcept {}
};

struct IDisplayInformation4 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IDisplayInformation4>
{
    IDisplayInformation4(std::nullptr_t = nullptr) noexcept {}
};

struct IDisplayInformationStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IDisplayInformationStatics>
{
    IDisplayInformationStatics(std::nullptr_t = nullptr) noexcept {}
};

struct [[deprecated("DisplayProperties may be altered or unavailable for releases after Windows Phone 8.1. Instead, use DisplayInformation.")]] IDisplayPropertiesStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IDisplayPropertiesStatics>
{
    IDisplayPropertiesStatics(std::nullptr_t = nullptr) noexcept {}
};

}

}
