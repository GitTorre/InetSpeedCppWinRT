// C++/WinRT v1.0.170717.1
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "Windows.Gaming.Input.0.h"
#include "Windows.Storage.Streams.0.h"
#include "Windows.Gaming.Input.Custom.0.h"

namespace winrt {

namespace Windows::Gaming::Input::Custom {

struct ICustomGameControllerFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<ICustomGameControllerFactory>
{
    ICustomGameControllerFactory(std::nullptr_t = nullptr) noexcept {}
};

struct IGameControllerFactoryManagerStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IGameControllerFactoryManagerStatics>
{
    IGameControllerFactoryManagerStatics(std::nullptr_t = nullptr) noexcept {}
};

struct IGameControllerFactoryManagerStatics2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IGameControllerFactoryManagerStatics2>,
    impl::require<IGameControllerFactoryManagerStatics2, Windows::Gaming::Input::Custom::IGameControllerFactoryManagerStatics>
{
    IGameControllerFactoryManagerStatics2(std::nullptr_t = nullptr) noexcept {}
};

struct IGameControllerInputSink :
    Windows::Foundation::IInspectable,
    impl::consume_t<IGameControllerInputSink>
{
    IGameControllerInputSink(std::nullptr_t = nullptr) noexcept {}
};

struct IGameControllerProvider :
    Windows::Foundation::IInspectable,
    impl::consume_t<IGameControllerProvider>
{
    IGameControllerProvider(std::nullptr_t = nullptr) noexcept {}
};

struct IGipFirmwareUpdateResult :
    Windows::Foundation::IInspectable,
    impl::consume_t<IGipFirmwareUpdateResult>
{
    IGipFirmwareUpdateResult(std::nullptr_t = nullptr) noexcept {}
};

struct IGipGameControllerInputSink :
    Windows::Foundation::IInspectable,
    impl::consume_t<IGipGameControllerInputSink>,
    impl::require<IGipGameControllerInputSink, Windows::Gaming::Input::Custom::IGameControllerInputSink>
{
    IGipGameControllerInputSink(std::nullptr_t = nullptr) noexcept {}
};

struct IGipGameControllerProvider :
    Windows::Foundation::IInspectable,
    impl::consume_t<IGipGameControllerProvider>,
    impl::require<IGipGameControllerProvider, Windows::Gaming::Input::Custom::IGameControllerProvider>
{
    IGipGameControllerProvider(std::nullptr_t = nullptr) noexcept {}
};

struct IHidGameControllerInputSink :
    Windows::Foundation::IInspectable,
    impl::consume_t<IHidGameControllerInputSink>,
    impl::require<IHidGameControllerInputSink, Windows::Gaming::Input::Custom::IGameControllerInputSink>
{
    IHidGameControllerInputSink(std::nullptr_t = nullptr) noexcept {}
};

struct IHidGameControllerProvider :
    Windows::Foundation::IInspectable,
    impl::consume_t<IHidGameControllerProvider>,
    impl::require<IHidGameControllerProvider, Windows::Gaming::Input::Custom::IGameControllerProvider>
{
    IHidGameControllerProvider(std::nullptr_t = nullptr) noexcept {}
};

struct IXusbGameControllerInputSink :
    Windows::Foundation::IInspectable,
    impl::consume_t<IXusbGameControllerInputSink>,
    impl::require<IXusbGameControllerInputSink, Windows::Gaming::Input::Custom::IGameControllerInputSink>
{
    IXusbGameControllerInputSink(std::nullptr_t = nullptr) noexcept {}
};

struct IXusbGameControllerProvider :
    Windows::Foundation::IInspectable,
    impl::consume_t<IXusbGameControllerProvider>,
    impl::require<IXusbGameControllerProvider, Windows::Gaming::Input::Custom::IGameControllerProvider>
{
    IXusbGameControllerProvider(std::nullptr_t = nullptr) noexcept {}
};

}

}
