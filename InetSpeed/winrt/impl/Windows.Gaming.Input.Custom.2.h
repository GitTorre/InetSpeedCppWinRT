// C++/WinRT v1.0.170717.1
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "Windows.Gaming.Input.1.h"
#include "Windows.Storage.Streams.1.h"
#include "Windows.Gaming.Input.Custom.1.h"

namespace winrt {

namespace Windows::Gaming::Input::Custom {

struct GameControllerVersionInfo
{
    uint16_t Major;
    uint16_t Minor;
    uint16_t Build;
    uint16_t Revision;
};

struct GipFirmwareUpdateProgress
{
    double PercentCompleted;
    uint32_t CurrentComponentId;
};

struct GameControllerFactoryManager
{
    GameControllerFactoryManager() = delete;
    static void RegisterCustomFactoryForGipInterface(Windows::Gaming::Input::Custom::ICustomGameControllerFactory const& factory, GUID const& interfaceId);
    static void RegisterCustomFactoryForHardwareId(Windows::Gaming::Input::Custom::ICustomGameControllerFactory const& factory, uint16_t hardwareVendorId, uint16_t hardwareProductId);
    static void RegisterCustomFactoryForXusbType(Windows::Gaming::Input::Custom::ICustomGameControllerFactory const& factory, Windows::Gaming::Input::Custom::XusbDeviceType const& xusbType, Windows::Gaming::Input::Custom::XusbDeviceSubtype const& xusbSubtype);
    static Windows::Gaming::Input::IGameController TryGetFactoryControllerFromGameController(Windows::Gaming::Input::Custom::ICustomGameControllerFactory const& factory, Windows::Gaming::Input::IGameController const& gameController);
};

struct GipFirmwareUpdateResult :
    Windows::Gaming::Input::Custom::IGipFirmwareUpdateResult
{
    GipFirmwareUpdateResult(std::nullptr_t) noexcept {}
};

struct GipGameControllerProvider :
    Windows::Gaming::Input::Custom::IGipGameControllerProvider
{
    GipGameControllerProvider(std::nullptr_t) noexcept {}
};

struct HidGameControllerProvider :
    Windows::Gaming::Input::Custom::IHidGameControllerProvider
{
    HidGameControllerProvider(std::nullptr_t) noexcept {}
};

struct XusbGameControllerProvider :
    Windows::Gaming::Input::Custom::IXusbGameControllerProvider
{
    XusbGameControllerProvider(std::nullptr_t) noexcept {}
};

}

namespace impl {

}

}
