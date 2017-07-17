﻿// C++/WinRT v1.0.170717.1
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "Windows.Graphics.Display.Core.1.h"

namespace winrt {

namespace Windows::Graphics::Display::Core {

struct HdmiDisplayHdr2086Metadata
{
    uint16_t RedPrimaryX;
    uint16_t RedPrimaryY;
    uint16_t GreenPrimaryX;
    uint16_t GreenPrimaryY;
    uint16_t BluePrimaryX;
    uint16_t BluePrimaryY;
    uint16_t WhitePointX;
    uint16_t WhitePointY;
    uint16_t MaxMasteringLuminance;
    uint16_t MinMasteringLuminance;
    uint16_t MaxContentLightLevel;
    uint16_t MaxFrameAverageLightLevel;
};

struct HdmiDisplayInformation :
    Windows::Graphics::Display::Core::IHdmiDisplayInformation
{
    HdmiDisplayInformation(std::nullptr_t) noexcept {}
    static Windows::Graphics::Display::Core::HdmiDisplayInformation GetForCurrentView();
};

struct HdmiDisplayMode :
    Windows::Graphics::Display::Core::IHdmiDisplayMode
{
    HdmiDisplayMode(std::nullptr_t) noexcept {}
};

}

namespace impl {

}

}
