// C++/WinRT v1.0.170717.1
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "Windows.Devices.Power.0.h"
#include "Windows.Gaming.Input.ForceFeedback.0.h"
#include "Windows.System.0.h"
#include "Windows.Gaming.Input.0.h"

namespace winrt {

namespace Windows::Gaming::Input {

struct IArcadeStick :
    Windows::Foundation::IInspectable,
    impl::consume_t<IArcadeStick>,
    impl::require<IArcadeStick, Windows::Gaming::Input::IGameController>
{
    IArcadeStick(std::nullptr_t = nullptr) noexcept {}
};

struct IArcadeStickStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IArcadeStickStatics>
{
    IArcadeStickStatics(std::nullptr_t = nullptr) noexcept {}
};

struct IArcadeStickStatics2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IArcadeStickStatics2>,
    impl::require<IArcadeStickStatics2, Windows::Gaming::Input::IArcadeStickStatics>
{
    IArcadeStickStatics2(std::nullptr_t = nullptr) noexcept {}
};

struct IFlightStick :
    Windows::Foundation::IInspectable,
    impl::consume_t<IFlightStick>,
    impl::require<IFlightStick, Windows::Gaming::Input::IGameController>
{
    IFlightStick(std::nullptr_t = nullptr) noexcept {}
};

struct IFlightStickStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IFlightStickStatics>
{
    IFlightStickStatics(std::nullptr_t = nullptr) noexcept {}
};

struct IGameController :
    Windows::Foundation::IInspectable,
    impl::consume_t<IGameController>
{
    IGameController(std::nullptr_t = nullptr) noexcept {}
};

struct IGameControllerBatteryInfo :
    Windows::Foundation::IInspectable,
    impl::consume_t<IGameControllerBatteryInfo>
{
    IGameControllerBatteryInfo(std::nullptr_t = nullptr) noexcept {}
};

struct IGamepad :
    Windows::Foundation::IInspectable,
    impl::consume_t<IGamepad>,
    impl::require<IGamepad, Windows::Gaming::Input::IGameController>
{
    IGamepad(std::nullptr_t = nullptr) noexcept {}
};

struct IGamepad2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IGamepad2>,
    impl::require<IGamepad2, Windows::Gaming::Input::IGameController, Windows::Gaming::Input::IGamepad>
{
    IGamepad2(std::nullptr_t = nullptr) noexcept {}
};

struct IGamepadStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IGamepadStatics>
{
    IGamepadStatics(std::nullptr_t = nullptr) noexcept {}
};

struct IGamepadStatics2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IGamepadStatics2>,
    impl::require<IGamepadStatics2, Windows::Gaming::Input::IGamepadStatics>
{
    IGamepadStatics2(std::nullptr_t = nullptr) noexcept {}
};

struct IHeadset :
    Windows::Foundation::IInspectable,
    impl::consume_t<IHeadset>
{
    IHeadset(std::nullptr_t = nullptr) noexcept {}
};

struct IRacingWheel :
    Windows::Foundation::IInspectable,
    impl::consume_t<IRacingWheel>,
    impl::require<IRacingWheel, Windows::Gaming::Input::IGameController>
{
    IRacingWheel(std::nullptr_t = nullptr) noexcept {}
};

struct IRacingWheelStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IRacingWheelStatics>
{
    IRacingWheelStatics(std::nullptr_t = nullptr) noexcept {}
};

struct IRacingWheelStatics2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IRacingWheelStatics2>,
    impl::require<IRacingWheelStatics2, Windows::Gaming::Input::IRacingWheelStatics>
{
    IRacingWheelStatics2(std::nullptr_t = nullptr) noexcept {}
};

struct IRawGameController :
    Windows::Foundation::IInspectable,
    impl::consume_t<IRawGameController>,
    impl::require<IRawGameController, Windows::Gaming::Input::IGameController>
{
    IRawGameController(std::nullptr_t = nullptr) noexcept {}
};

struct IRawGameControllerStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IRawGameControllerStatics>
{
    IRawGameControllerStatics(std::nullptr_t = nullptr) noexcept {}
};

struct IUINavigationController :
    Windows::Foundation::IInspectable,
    impl::consume_t<IUINavigationController>,
    impl::require<IUINavigationController, Windows::Gaming::Input::IGameController>
{
    IUINavigationController(std::nullptr_t = nullptr) noexcept {}
};

struct IUINavigationControllerStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IUINavigationControllerStatics>
{
    IUINavigationControllerStatics(std::nullptr_t = nullptr) noexcept {}
};

struct IUINavigationControllerStatics2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IUINavigationControllerStatics2>,
    impl::require<IUINavigationControllerStatics2, Windows::Gaming::Input::IUINavigationControllerStatics>
{
    IUINavigationControllerStatics2(std::nullptr_t = nullptr) noexcept {}
};

}

}
