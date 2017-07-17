// C++/WinRT v1.0.170717.1
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "Windows.Gaming.Input.ForceFeedback.1.h"

namespace winrt {

namespace Windows::Gaming::Input::ForceFeedback {

struct ConditionForceEffect :
    Windows::Gaming::Input::ForceFeedback::IForceFeedbackEffect,
    impl::require<ConditionForceEffect, Windows::Gaming::Input::ForceFeedback::IConditionForceEffect>
{
    ConditionForceEffect(std::nullptr_t) noexcept {}
    ConditionForceEffect(Windows::Gaming::Input::ForceFeedback::ConditionForceEffectKind const& effectKind);
};

struct ConstantForceEffect :
    Windows::Gaming::Input::ForceFeedback::IForceFeedbackEffect,
    impl::require<ConstantForceEffect, Windows::Gaming::Input::ForceFeedback::IConstantForceEffect>
{
    ConstantForceEffect(std::nullptr_t) noexcept {}
    ConstantForceEffect();
};

struct ForceFeedbackMotor :
    Windows::Gaming::Input::ForceFeedback::IForceFeedbackMotor
{
    ForceFeedbackMotor(std::nullptr_t) noexcept {}
};

struct PeriodicForceEffect :
    Windows::Gaming::Input::ForceFeedback::IForceFeedbackEffect,
    impl::require<PeriodicForceEffect, Windows::Gaming::Input::ForceFeedback::IPeriodicForceEffect>
{
    PeriodicForceEffect(std::nullptr_t) noexcept {}
    PeriodicForceEffect(Windows::Gaming::Input::ForceFeedback::PeriodicForceEffectKind const& effectKind);
};

struct RampForceEffect :
    Windows::Gaming::Input::ForceFeedback::IForceFeedbackEffect,
    impl::require<RampForceEffect, Windows::Gaming::Input::ForceFeedback::IRampForceEffect>
{
    RampForceEffect(std::nullptr_t) noexcept {}
    RampForceEffect();
};

}

namespace impl {

}

}
