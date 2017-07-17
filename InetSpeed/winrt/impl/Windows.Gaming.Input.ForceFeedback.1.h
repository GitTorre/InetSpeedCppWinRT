// C++/WinRT v1.0.170717.1
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "Windows.Gaming.Input.ForceFeedback.0.h"

namespace winrt {

namespace Windows::Gaming::Input::ForceFeedback {

struct IConditionForceEffect :
    Windows::Foundation::IInspectable,
    impl::consume_t<IConditionForceEffect>,
    impl::require<IConditionForceEffect, Windows::Gaming::Input::ForceFeedback::IForceFeedbackEffect>
{
    IConditionForceEffect(std::nullptr_t = nullptr) noexcept {}
};

struct IConditionForceEffectFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<IConditionForceEffectFactory>
{
    IConditionForceEffectFactory(std::nullptr_t = nullptr) noexcept {}
};

struct IConstantForceEffect :
    Windows::Foundation::IInspectable,
    impl::consume_t<IConstantForceEffect>,
    impl::require<IConstantForceEffect, Windows::Gaming::Input::ForceFeedback::IForceFeedbackEffect>
{
    IConstantForceEffect(std::nullptr_t = nullptr) noexcept {}
};

struct IForceFeedbackEffect :
    Windows::Foundation::IInspectable,
    impl::consume_t<IForceFeedbackEffect>
{
    IForceFeedbackEffect(std::nullptr_t = nullptr) noexcept {}
};

struct IForceFeedbackMotor :
    Windows::Foundation::IInspectable,
    impl::consume_t<IForceFeedbackMotor>
{
    IForceFeedbackMotor(std::nullptr_t = nullptr) noexcept {}
};

struct IPeriodicForceEffect :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPeriodicForceEffect>,
    impl::require<IPeriodicForceEffect, Windows::Gaming::Input::ForceFeedback::IForceFeedbackEffect>
{
    IPeriodicForceEffect(std::nullptr_t = nullptr) noexcept {}
};

struct IPeriodicForceEffectFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPeriodicForceEffectFactory>
{
    IPeriodicForceEffectFactory(std::nullptr_t = nullptr) noexcept {}
};

struct IRampForceEffect :
    Windows::Foundation::IInspectable,
    impl::consume_t<IRampForceEffect>,
    impl::require<IRampForceEffect, Windows::Gaming::Input::ForceFeedback::IForceFeedbackEffect>
{
    IRampForceEffect(std::nullptr_t = nullptr) noexcept {}
};

}

}
