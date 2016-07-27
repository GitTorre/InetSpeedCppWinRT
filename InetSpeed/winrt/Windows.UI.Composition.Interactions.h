// C++ for the Windows Runtime v1.29
// Copyright (c) 2016 Microsoft Corporation

#pragma once

#include "internal\Windows.UI.Composition.3.h"
#include "internal\Windows.Foundation.3.h"
#include "internal\Windows.Foundation.Collections.3.h"
#include "internal\Windows.UI.Input.3.h"
#include "internal\Windows.UI.Composition.Interactions.3.h"
#include "Windows.UI.Composition.h"
#include "Windows.Foundation.h"
#include "Windows.Foundation.Collections.h"

WINRT_EXPORT namespace winrt {

namespace impl {

template <typename D>
struct produce<D, Windows::UI::Composition::Interactions::ICompositionInteractionSource> : produce_base<D, Windows::UI::Composition::Interactions::ICompositionInteractionSource>
{};

template <typename D>
struct produce<D, Windows::UI::Composition::Interactions::ICompositionInteractionSourceCollection> : produce_base<D, Windows::UI::Composition::Interactions::ICompositionInteractionSourceCollection>
{
    HRESULT __stdcall get_Count(int32_t * value) noexcept override
    {
        try
        {
            *value = detach(shim().Count());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_Add(abi_arg_in<Windows::UI::Composition::Interactions::ICompositionInteractionSource> value) noexcept override
    {
        try
        {
            shim().Add(*reinterpret_cast<const Windows::UI::Composition::Interactions::ICompositionInteractionSource *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_Remove(abi_arg_in<Windows::UI::Composition::Interactions::ICompositionInteractionSource> value) noexcept override
    {
        try
        {
            shim().Remove(*reinterpret_cast<const Windows::UI::Composition::Interactions::ICompositionInteractionSource *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_RemoveAll() noexcept override
    {
        try
        {
            shim().RemoveAll();
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Composition::Interactions::IInteractionTracker> : produce_base<D, Windows::UI::Composition::Interactions::IInteractionTracker>
{
    HRESULT __stdcall get_InteractionSources(abi_arg_out<Windows::UI::Composition::Interactions::ICompositionInteractionSourceCollection> value) noexcept override
    {
        try
        {
            *value = detach(shim().InteractionSources());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_IsPositionRoundingSuggested(bool * value) noexcept override
    {
        try
        {
            *value = detach(shim().IsPositionRoundingSuggested());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_MaxPosition(abi_arg_out<Windows::Foundation::Numerics::float3> value) noexcept override
    {
        try
        {
            *value = detach(shim().MaxPosition());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_MaxPosition(abi_arg_in<Windows::Foundation::Numerics::float3> value) noexcept override
    {
        try
        {
            shim().MaxPosition(*reinterpret_cast<const Windows::Foundation::Numerics::float3 *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_MaxScale(float * value) noexcept override
    {
        try
        {
            *value = detach(shim().MaxScale());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_MaxScale(float value) noexcept override
    {
        try
        {
            shim().MaxScale(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_MinPosition(abi_arg_out<Windows::Foundation::Numerics::float3> value) noexcept override
    {
        try
        {
            *value = detach(shim().MinPosition());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_MinPosition(abi_arg_in<Windows::Foundation::Numerics::float3> value) noexcept override
    {
        try
        {
            shim().MinPosition(*reinterpret_cast<const Windows::Foundation::Numerics::float3 *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_MinScale(float * value) noexcept override
    {
        try
        {
            *value = detach(shim().MinScale());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_MinScale(float value) noexcept override
    {
        try
        {
            shim().MinScale(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_NaturalRestingPosition(abi_arg_out<Windows::Foundation::Numerics::float3> value) noexcept override
    {
        try
        {
            *value = detach(shim().NaturalRestingPosition());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_NaturalRestingScale(float * value) noexcept override
    {
        try
        {
            *value = detach(shim().NaturalRestingScale());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Owner(abi_arg_out<Windows::UI::Composition::Interactions::IInteractionTrackerOwner> value) noexcept override
    {
        try
        {
            *value = detach(shim().Owner());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Position(abi_arg_out<Windows::Foundation::Numerics::float3> value) noexcept override
    {
        try
        {
            *value = detach(shim().Position());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_PositionInertiaDecayRate(abi_arg_out<Windows::Foundation::IReference<Windows::Foundation::Numerics::float3>> value) noexcept override
    {
        try
        {
            *value = detach(shim().PositionInertiaDecayRate());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_PositionInertiaDecayRate(abi_arg_in<Windows::Foundation::IReference<Windows::Foundation::Numerics::float3>> value) noexcept override
    {
        try
        {
            shim().PositionInertiaDecayRate(*reinterpret_cast<const Windows::Foundation::IReference<Windows::Foundation::Numerics::float3> *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_PositionVelocityInPixelsPerSecond(abi_arg_out<Windows::Foundation::Numerics::float3> value) noexcept override
    {
        try
        {
            *value = detach(shim().PositionVelocityInPixelsPerSecond());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Scale(float * value) noexcept override
    {
        try
        {
            *value = detach(shim().Scale());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ScaleInertiaDecayRate(abi_arg_out<Windows::Foundation::IReference<float>> value) noexcept override
    {
        try
        {
            *value = detach(shim().ScaleInertiaDecayRate());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_ScaleInertiaDecayRate(abi_arg_in<Windows::Foundation::IReference<float>> value) noexcept override
    {
        try
        {
            shim().ScaleInertiaDecayRate(*reinterpret_cast<const Windows::Foundation::IReference<float> *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ScaleVelocityInPercentPerSecond(float * value) noexcept override
    {
        try
        {
            *value = detach(shim().ScaleVelocityInPercentPerSecond());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_AdjustPositionXIfGreaterThanThreshold(float adjustment, float positionThreshold) noexcept override
    {
        try
        {
            shim().AdjustPositionXIfGreaterThanThreshold(adjustment, positionThreshold);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_AdjustPositionYIfGreaterThanThreshold(float adjustment, float positionThreshold) noexcept override
    {
        try
        {
            shim().AdjustPositionYIfGreaterThanThreshold(adjustment, positionThreshold);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_ConfigurePositionXInertiaModifiers(abi_arg_in<Windows::Foundation::Collections::IIterable<Windows::UI::Composition::Interactions::InteractionTrackerInertiaModifier>> modifiers) noexcept override
    {
        try
        {
            shim().ConfigurePositionXInertiaModifiers(*reinterpret_cast<const Windows::Foundation::Collections::IIterable<Windows::UI::Composition::Interactions::InteractionTrackerInertiaModifier> *>(&modifiers));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_ConfigurePositionYInertiaModifiers(abi_arg_in<Windows::Foundation::Collections::IIterable<Windows::UI::Composition::Interactions::InteractionTrackerInertiaModifier>> modifiers) noexcept override
    {
        try
        {
            shim().ConfigurePositionYInertiaModifiers(*reinterpret_cast<const Windows::Foundation::Collections::IIterable<Windows::UI::Composition::Interactions::InteractionTrackerInertiaModifier> *>(&modifiers));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_ConfigureScaleInertiaModifiers(abi_arg_in<Windows::Foundation::Collections::IIterable<Windows::UI::Composition::Interactions::InteractionTrackerInertiaModifier>> modifiers) noexcept override
    {
        try
        {
            shim().ConfigureScaleInertiaModifiers(*reinterpret_cast<const Windows::Foundation::Collections::IIterable<Windows::UI::Composition::Interactions::InteractionTrackerInertiaModifier> *>(&modifiers));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_TryUpdatePosition(abi_arg_in<Windows::Foundation::Numerics::float3> value, int32_t * requestId) noexcept override
    {
        try
        {
            *requestId = detach(shim().TryUpdatePosition(*reinterpret_cast<const Windows::Foundation::Numerics::float3 *>(&value)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_TryUpdatePositionBy(abi_arg_in<Windows::Foundation::Numerics::float3> amount, int32_t * requestId) noexcept override
    {
        try
        {
            *requestId = detach(shim().TryUpdatePositionBy(*reinterpret_cast<const Windows::Foundation::Numerics::float3 *>(&amount)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_TryUpdatePositionWithAnimation(abi_arg_in<Windows::UI::Composition::ICompositionAnimation> animation, int32_t * requestId) noexcept override
    {
        try
        {
            *requestId = detach(shim().TryUpdatePositionWithAnimation(*reinterpret_cast<const Windows::UI::Composition::CompositionAnimation *>(&animation)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_TryUpdatePositionWithAdditionalVelocity(abi_arg_in<Windows::Foundation::Numerics::float3> velocityInPixelsPerSecond, int32_t * requestId) noexcept override
    {
        try
        {
            *requestId = detach(shim().TryUpdatePositionWithAdditionalVelocity(*reinterpret_cast<const Windows::Foundation::Numerics::float3 *>(&velocityInPixelsPerSecond)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_TryUpdateScale(float value, abi_arg_in<Windows::Foundation::Numerics::float3> centerPoint, int32_t * requestId) noexcept override
    {
        try
        {
            *requestId = detach(shim().TryUpdateScale(value, *reinterpret_cast<const Windows::Foundation::Numerics::float3 *>(&centerPoint)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_TryUpdateScaleWithAnimation(abi_arg_in<Windows::UI::Composition::ICompositionAnimation> animation, abi_arg_in<Windows::Foundation::Numerics::float3> centerPoint, int32_t * requestId) noexcept override
    {
        try
        {
            *requestId = detach(shim().TryUpdateScaleWithAnimation(*reinterpret_cast<const Windows::UI::Composition::CompositionAnimation *>(&animation), *reinterpret_cast<const Windows::Foundation::Numerics::float3 *>(&centerPoint)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_TryUpdateScaleWithAdditionalVelocity(float velocityInPercentPerSecond, abi_arg_in<Windows::Foundation::Numerics::float3> centerPoint, int32_t * requestId) noexcept override
    {
        try
        {
            *requestId = detach(shim().TryUpdateScaleWithAdditionalVelocity(velocityInPercentPerSecond, *reinterpret_cast<const Windows::Foundation::Numerics::float3 *>(&centerPoint)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Composition::Interactions::IInteractionTrackerCustomAnimationStateEnteredArgs> : produce_base<D, Windows::UI::Composition::Interactions::IInteractionTrackerCustomAnimationStateEnteredArgs>
{
    HRESULT __stdcall get_RequestId(int32_t * value) noexcept override
    {
        try
        {
            *value = detach(shim().RequestId());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Composition::Interactions::IInteractionTrackerIdleStateEnteredArgs> : produce_base<D, Windows::UI::Composition::Interactions::IInteractionTrackerIdleStateEnteredArgs>
{
    HRESULT __stdcall get_RequestId(int32_t * value) noexcept override
    {
        try
        {
            *value = detach(shim().RequestId());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Composition::Interactions::IInteractionTrackerInertiaModifier> : produce_base<D, Windows::UI::Composition::Interactions::IInteractionTrackerInertiaModifier>
{};

template <typename D>
struct produce<D, Windows::UI::Composition::Interactions::IInteractionTrackerInertiaModifierFactory> : produce_base<D, Windows::UI::Composition::Interactions::IInteractionTrackerInertiaModifierFactory>
{};

template <typename D>
struct produce<D, Windows::UI::Composition::Interactions::IInteractionTrackerInertiaMotion> : produce_base<D, Windows::UI::Composition::Interactions::IInteractionTrackerInertiaMotion>
{
    HRESULT __stdcall get_Condition(abi_arg_out<Windows::UI::Composition::IExpressionAnimation> value) noexcept override
    {
        try
        {
            *value = detach(shim().Condition());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Condition(abi_arg_in<Windows::UI::Composition::IExpressionAnimation> value) noexcept override
    {
        try
        {
            shim().Condition(*reinterpret_cast<const Windows::UI::Composition::ExpressionAnimation *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Motion(abi_arg_out<Windows::UI::Composition::IExpressionAnimation> value) noexcept override
    {
        try
        {
            *value = detach(shim().Motion());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Motion(abi_arg_in<Windows::UI::Composition::IExpressionAnimation> value) noexcept override
    {
        try
        {
            shim().Motion(*reinterpret_cast<const Windows::UI::Composition::ExpressionAnimation *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Composition::Interactions::IInteractionTrackerInertiaMotionStatics> : produce_base<D, Windows::UI::Composition::Interactions::IInteractionTrackerInertiaMotionStatics>
{
    HRESULT __stdcall abi_Create(abi_arg_in<Windows::UI::Composition::ICompositor> compositor, abi_arg_out<Windows::UI::Composition::Interactions::IInteractionTrackerInertiaMotion> result) noexcept override
    {
        try
        {
            *result = detach(shim().Create(*reinterpret_cast<const Windows::UI::Composition::Compositor *>(&compositor)));
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Composition::Interactions::IInteractionTrackerInertiaRestingValue> : produce_base<D, Windows::UI::Composition::Interactions::IInteractionTrackerInertiaRestingValue>
{
    HRESULT __stdcall get_Condition(abi_arg_out<Windows::UI::Composition::IExpressionAnimation> value) noexcept override
    {
        try
        {
            *value = detach(shim().Condition());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Condition(abi_arg_in<Windows::UI::Composition::IExpressionAnimation> value) noexcept override
    {
        try
        {
            shim().Condition(*reinterpret_cast<const Windows::UI::Composition::ExpressionAnimation *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_RestingValue(abi_arg_out<Windows::UI::Composition::IExpressionAnimation> value) noexcept override
    {
        try
        {
            *value = detach(shim().RestingValue());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_RestingValue(abi_arg_in<Windows::UI::Composition::IExpressionAnimation> value) noexcept override
    {
        try
        {
            shim().RestingValue(*reinterpret_cast<const Windows::UI::Composition::ExpressionAnimation *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Composition::Interactions::IInteractionTrackerInertiaRestingValueStatics> : produce_base<D, Windows::UI::Composition::Interactions::IInteractionTrackerInertiaRestingValueStatics>
{
    HRESULT __stdcall abi_Create(abi_arg_in<Windows::UI::Composition::ICompositor> compositor, abi_arg_out<Windows::UI::Composition::Interactions::IInteractionTrackerInertiaRestingValue> result) noexcept override
    {
        try
        {
            *result = detach(shim().Create(*reinterpret_cast<const Windows::UI::Composition::Compositor *>(&compositor)));
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Composition::Interactions::IInteractionTrackerInertiaStateEnteredArgs> : produce_base<D, Windows::UI::Composition::Interactions::IInteractionTrackerInertiaStateEnteredArgs>
{
    HRESULT __stdcall get_ModifiedRestingPosition(abi_arg_out<Windows::Foundation::IReference<Windows::Foundation::Numerics::float3>> value) noexcept override
    {
        try
        {
            *value = detach(shim().ModifiedRestingPosition());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ModifiedRestingScale(abi_arg_out<Windows::Foundation::IReference<float>> value) noexcept override
    {
        try
        {
            *value = detach(shim().ModifiedRestingScale());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_NaturalRestingPosition(abi_arg_out<Windows::Foundation::Numerics::float3> value) noexcept override
    {
        try
        {
            *value = detach(shim().NaturalRestingPosition());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_NaturalRestingScale(float * value) noexcept override
    {
        try
        {
            *value = detach(shim().NaturalRestingScale());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_PositionVelocityInPixelsPerSecond(abi_arg_out<Windows::Foundation::Numerics::float3> value) noexcept override
    {
        try
        {
            *value = detach(shim().PositionVelocityInPixelsPerSecond());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_RequestId(int32_t * value) noexcept override
    {
        try
        {
            *value = detach(shim().RequestId());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ScaleVelocityInPercentPerSecond(float * value) noexcept override
    {
        try
        {
            *value = detach(shim().ScaleVelocityInPercentPerSecond());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Composition::Interactions::IInteractionTrackerInteractingStateEnteredArgs> : produce_base<D, Windows::UI::Composition::Interactions::IInteractionTrackerInteractingStateEnteredArgs>
{
    HRESULT __stdcall get_RequestId(int32_t * value) noexcept override
    {
        try
        {
            *value = detach(shim().RequestId());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Composition::Interactions::IInteractionTrackerOwner> : produce_base<D, Windows::UI::Composition::Interactions::IInteractionTrackerOwner>
{
    HRESULT __stdcall abi_CustomAnimationStateEntered(abi_arg_in<Windows::UI::Composition::Interactions::IInteractionTracker> sender, abi_arg_in<Windows::UI::Composition::Interactions::IInteractionTrackerCustomAnimationStateEnteredArgs> args) noexcept override
    {
        try
        {
            shim().CustomAnimationStateEntered(*reinterpret_cast<const Windows::UI::Composition::Interactions::InteractionTracker *>(&sender), *reinterpret_cast<const Windows::UI::Composition::Interactions::InteractionTrackerCustomAnimationStateEnteredArgs *>(&args));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_IdleStateEntered(abi_arg_in<Windows::UI::Composition::Interactions::IInteractionTracker> sender, abi_arg_in<Windows::UI::Composition::Interactions::IInteractionTrackerIdleStateEnteredArgs> args) noexcept override
    {
        try
        {
            shim().IdleStateEntered(*reinterpret_cast<const Windows::UI::Composition::Interactions::InteractionTracker *>(&sender), *reinterpret_cast<const Windows::UI::Composition::Interactions::InteractionTrackerIdleStateEnteredArgs *>(&args));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_InertiaStateEntered(abi_arg_in<Windows::UI::Composition::Interactions::IInteractionTracker> sender, abi_arg_in<Windows::UI::Composition::Interactions::IInteractionTrackerInertiaStateEnteredArgs> args) noexcept override
    {
        try
        {
            shim().InertiaStateEntered(*reinterpret_cast<const Windows::UI::Composition::Interactions::InteractionTracker *>(&sender), *reinterpret_cast<const Windows::UI::Composition::Interactions::InteractionTrackerInertiaStateEnteredArgs *>(&args));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_InteractingStateEntered(abi_arg_in<Windows::UI::Composition::Interactions::IInteractionTracker> sender, abi_arg_in<Windows::UI::Composition::Interactions::IInteractionTrackerInteractingStateEnteredArgs> args) noexcept override
    {
        try
        {
            shim().InteractingStateEntered(*reinterpret_cast<const Windows::UI::Composition::Interactions::InteractionTracker *>(&sender), *reinterpret_cast<const Windows::UI::Composition::Interactions::InteractionTrackerInteractingStateEnteredArgs *>(&args));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_RequestIgnored(abi_arg_in<Windows::UI::Composition::Interactions::IInteractionTracker> sender, abi_arg_in<Windows::UI::Composition::Interactions::IInteractionTrackerRequestIgnoredArgs> args) noexcept override
    {
        try
        {
            shim().RequestIgnored(*reinterpret_cast<const Windows::UI::Composition::Interactions::InteractionTracker *>(&sender), *reinterpret_cast<const Windows::UI::Composition::Interactions::InteractionTrackerRequestIgnoredArgs *>(&args));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_ValuesChanged(abi_arg_in<Windows::UI::Composition::Interactions::IInteractionTracker> sender, abi_arg_in<Windows::UI::Composition::Interactions::IInteractionTrackerValuesChangedArgs> args) noexcept override
    {
        try
        {
            shim().ValuesChanged(*reinterpret_cast<const Windows::UI::Composition::Interactions::InteractionTracker *>(&sender), *reinterpret_cast<const Windows::UI::Composition::Interactions::InteractionTrackerValuesChangedArgs *>(&args));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Composition::Interactions::IInteractionTrackerRequestIgnoredArgs> : produce_base<D, Windows::UI::Composition::Interactions::IInteractionTrackerRequestIgnoredArgs>
{
    HRESULT __stdcall get_RequestId(int32_t * value) noexcept override
    {
        try
        {
            *value = detach(shim().RequestId());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Composition::Interactions::IInteractionTrackerStatics> : produce_base<D, Windows::UI::Composition::Interactions::IInteractionTrackerStatics>
{
    HRESULT __stdcall abi_Create(abi_arg_in<Windows::UI::Composition::ICompositor> compositor, abi_arg_out<Windows::UI::Composition::Interactions::IInteractionTracker> result) noexcept override
    {
        try
        {
            *result = detach(shim().Create(*reinterpret_cast<const Windows::UI::Composition::Compositor *>(&compositor)));
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_CreateWithOwner(abi_arg_in<Windows::UI::Composition::ICompositor> compositor, abi_arg_in<Windows::UI::Composition::Interactions::IInteractionTrackerOwner> owner, abi_arg_out<Windows::UI::Composition::Interactions::IInteractionTracker> result) noexcept override
    {
        try
        {
            *result = detach(shim().CreateWithOwner(*reinterpret_cast<const Windows::UI::Composition::Compositor *>(&compositor), *reinterpret_cast<const Windows::UI::Composition::Interactions::IInteractionTrackerOwner *>(&owner)));
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Composition::Interactions::IInteractionTrackerValuesChangedArgs> : produce_base<D, Windows::UI::Composition::Interactions::IInteractionTrackerValuesChangedArgs>
{
    HRESULT __stdcall get_Position(abi_arg_out<Windows::Foundation::Numerics::float3> value) noexcept override
    {
        try
        {
            *value = detach(shim().Position());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_RequestId(int32_t * value) noexcept override
    {
        try
        {
            *value = detach(shim().RequestId());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Scale(float * value) noexcept override
    {
        try
        {
            *value = detach(shim().Scale());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Composition::Interactions::IVisualInteractionSource> : produce_base<D, Windows::UI::Composition::Interactions::IVisualInteractionSource>
{
    HRESULT __stdcall get_IsPositionXRailsEnabled(bool * value) noexcept override
    {
        try
        {
            *value = detach(shim().IsPositionXRailsEnabled());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_IsPositionXRailsEnabled(bool value) noexcept override
    {
        try
        {
            shim().IsPositionXRailsEnabled(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_IsPositionYRailsEnabled(bool * value) noexcept override
    {
        try
        {
            *value = detach(shim().IsPositionYRailsEnabled());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_IsPositionYRailsEnabled(bool value) noexcept override
    {
        try
        {
            shim().IsPositionYRailsEnabled(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ManipulationRedirectionMode(Windows::UI::Composition::Interactions::VisualInteractionSourceRedirectionMode * value) noexcept override
    {
        try
        {
            *value = detach(shim().ManipulationRedirectionMode());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_ManipulationRedirectionMode(Windows::UI::Composition::Interactions::VisualInteractionSourceRedirectionMode value) noexcept override
    {
        try
        {
            shim().ManipulationRedirectionMode(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_PositionXChainingMode(Windows::UI::Composition::Interactions::InteractionChainingMode * value) noexcept override
    {
        try
        {
            *value = detach(shim().PositionXChainingMode());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_PositionXChainingMode(Windows::UI::Composition::Interactions::InteractionChainingMode value) noexcept override
    {
        try
        {
            shim().PositionXChainingMode(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_PositionXSourceMode(Windows::UI::Composition::Interactions::InteractionSourceMode * value) noexcept override
    {
        try
        {
            *value = detach(shim().PositionXSourceMode());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_PositionXSourceMode(Windows::UI::Composition::Interactions::InteractionSourceMode value) noexcept override
    {
        try
        {
            shim().PositionXSourceMode(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_PositionYChainingMode(Windows::UI::Composition::Interactions::InteractionChainingMode * value) noexcept override
    {
        try
        {
            *value = detach(shim().PositionYChainingMode());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_PositionYChainingMode(Windows::UI::Composition::Interactions::InteractionChainingMode value) noexcept override
    {
        try
        {
            shim().PositionYChainingMode(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_PositionYSourceMode(Windows::UI::Composition::Interactions::InteractionSourceMode * value) noexcept override
    {
        try
        {
            *value = detach(shim().PositionYSourceMode());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_PositionYSourceMode(Windows::UI::Composition::Interactions::InteractionSourceMode value) noexcept override
    {
        try
        {
            shim().PositionYSourceMode(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ScaleChainingMode(Windows::UI::Composition::Interactions::InteractionChainingMode * value) noexcept override
    {
        try
        {
            *value = detach(shim().ScaleChainingMode());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_ScaleChainingMode(Windows::UI::Composition::Interactions::InteractionChainingMode value) noexcept override
    {
        try
        {
            shim().ScaleChainingMode(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ScaleSourceMode(Windows::UI::Composition::Interactions::InteractionSourceMode * value) noexcept override
    {
        try
        {
            *value = detach(shim().ScaleSourceMode());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_ScaleSourceMode(Windows::UI::Composition::Interactions::InteractionSourceMode value) noexcept override
    {
        try
        {
            shim().ScaleSourceMode(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Source(abi_arg_out<Windows::UI::Composition::IVisual> value) noexcept override
    {
        try
        {
            *value = detach(shim().Source());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_TryRedirectForManipulation(abi_arg_in<Windows::UI::Input::IPointerPoint> pointerPoint) noexcept override
    {
        try
        {
            shim().TryRedirectForManipulation(*reinterpret_cast<const Windows::UI::Input::PointerPoint *>(&pointerPoint));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Composition::Interactions::IVisualInteractionSourceStatics> : produce_base<D, Windows::UI::Composition::Interactions::IVisualInteractionSourceStatics>
{
    HRESULT __stdcall abi_Create(abi_arg_in<Windows::UI::Composition::IVisual> source, abi_arg_out<Windows::UI::Composition::Interactions::IVisualInteractionSource> result) noexcept override
    {
        try
        {
            *result = detach(shim().Create(*reinterpret_cast<const Windows::UI::Composition::Visual *>(&source)));
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }
};

}

namespace Windows::UI::Composition::Interactions {

template <typename D> int32_t impl_ICompositionInteractionSourceCollection<D>::Count() const
{
    int32_t value {};
    check_hresult(shim()->get_Count(&value));
    return value;
}

template <typename D> void impl_ICompositionInteractionSourceCollection<D>::Add(const Windows::UI::Composition::Interactions::ICompositionInteractionSource & value) const
{
    check_hresult(shim()->abi_Add(get(value)));
}

template <typename D> void impl_ICompositionInteractionSourceCollection<D>::Remove(const Windows::UI::Composition::Interactions::ICompositionInteractionSource & value) const
{
    check_hresult(shim()->abi_Remove(get(value)));
}

template <typename D> void impl_ICompositionInteractionSourceCollection<D>::RemoveAll() const
{
    check_hresult(shim()->abi_RemoveAll());
}

template <typename D> Windows::UI::Composition::Interactions::InteractionTracker impl_IInteractionTrackerStatics<D>::Create(const Windows::UI::Composition::Compositor & compositor) const
{
    Windows::UI::Composition::Interactions::InteractionTracker result { nullptr };
    check_hresult(shim()->abi_Create(get(compositor), put(result)));
    return result;
}

template <typename D> Windows::UI::Composition::Interactions::InteractionTracker impl_IInteractionTrackerStatics<D>::CreateWithOwner(const Windows::UI::Composition::Compositor & compositor, const Windows::UI::Composition::Interactions::IInteractionTrackerOwner & owner) const
{
    Windows::UI::Composition::Interactions::InteractionTracker result { nullptr };
    check_hresult(shim()->abi_CreateWithOwner(get(compositor), get(owner), put(result)));
    return result;
}

template <typename D> void impl_IInteractionTrackerOwner<D>::CustomAnimationStateEntered(const Windows::UI::Composition::Interactions::InteractionTracker & sender, const Windows::UI::Composition::Interactions::InteractionTrackerCustomAnimationStateEnteredArgs & args) const
{
    check_hresult(shim()->abi_CustomAnimationStateEntered(get(sender), get(args)));
}

template <typename D> void impl_IInteractionTrackerOwner<D>::IdleStateEntered(const Windows::UI::Composition::Interactions::InteractionTracker & sender, const Windows::UI::Composition::Interactions::InteractionTrackerIdleStateEnteredArgs & args) const
{
    check_hresult(shim()->abi_IdleStateEntered(get(sender), get(args)));
}

template <typename D> void impl_IInteractionTrackerOwner<D>::InertiaStateEntered(const Windows::UI::Composition::Interactions::InteractionTracker & sender, const Windows::UI::Composition::Interactions::InteractionTrackerInertiaStateEnteredArgs & args) const
{
    check_hresult(shim()->abi_InertiaStateEntered(get(sender), get(args)));
}

template <typename D> void impl_IInteractionTrackerOwner<D>::InteractingStateEntered(const Windows::UI::Composition::Interactions::InteractionTracker & sender, const Windows::UI::Composition::Interactions::InteractionTrackerInteractingStateEnteredArgs & args) const
{
    check_hresult(shim()->abi_InteractingStateEntered(get(sender), get(args)));
}

template <typename D> void impl_IInteractionTrackerOwner<D>::RequestIgnored(const Windows::UI::Composition::Interactions::InteractionTracker & sender, const Windows::UI::Composition::Interactions::InteractionTrackerRequestIgnoredArgs & args) const
{
    check_hresult(shim()->abi_RequestIgnored(get(sender), get(args)));
}

template <typename D> void impl_IInteractionTrackerOwner<D>::ValuesChanged(const Windows::UI::Composition::Interactions::InteractionTracker & sender, const Windows::UI::Composition::Interactions::InteractionTrackerValuesChangedArgs & args) const
{
    check_hresult(shim()->abi_ValuesChanged(get(sender), get(args)));
}

template <typename D> Windows::UI::Composition::Interactions::CompositionInteractionSourceCollection impl_IInteractionTracker<D>::InteractionSources() const
{
    Windows::UI::Composition::Interactions::CompositionInteractionSourceCollection value { nullptr };
    check_hresult(shim()->get_InteractionSources(put(value)));
    return value;
}

template <typename D> bool impl_IInteractionTracker<D>::IsPositionRoundingSuggested() const
{
    bool value {};
    check_hresult(shim()->get_IsPositionRoundingSuggested(&value));
    return value;
}

template <typename D> Windows::Foundation::Numerics::float3 impl_IInteractionTracker<D>::MaxPosition() const
{
    Windows::Foundation::Numerics::float3 value {};
    check_hresult(shim()->get_MaxPosition(put(value)));
    return value;
}

template <typename D> void impl_IInteractionTracker<D>::MaxPosition(const Windows::Foundation::Numerics::float3 & value) const
{
    check_hresult(shim()->put_MaxPosition(get(value)));
}

template <typename D> float impl_IInteractionTracker<D>::MaxScale() const
{
    float value {};
    check_hresult(shim()->get_MaxScale(&value));
    return value;
}

template <typename D> void impl_IInteractionTracker<D>::MaxScale(float value) const
{
    check_hresult(shim()->put_MaxScale(value));
}

template <typename D> Windows::Foundation::Numerics::float3 impl_IInteractionTracker<D>::MinPosition() const
{
    Windows::Foundation::Numerics::float3 value {};
    check_hresult(shim()->get_MinPosition(put(value)));
    return value;
}

template <typename D> void impl_IInteractionTracker<D>::MinPosition(const Windows::Foundation::Numerics::float3 & value) const
{
    check_hresult(shim()->put_MinPosition(get(value)));
}

template <typename D> float impl_IInteractionTracker<D>::MinScale() const
{
    float value {};
    check_hresult(shim()->get_MinScale(&value));
    return value;
}

template <typename D> void impl_IInteractionTracker<D>::MinScale(float value) const
{
    check_hresult(shim()->put_MinScale(value));
}

template <typename D> Windows::Foundation::Numerics::float3 impl_IInteractionTracker<D>::NaturalRestingPosition() const
{
    Windows::Foundation::Numerics::float3 value {};
    check_hresult(shim()->get_NaturalRestingPosition(put(value)));
    return value;
}

template <typename D> float impl_IInteractionTracker<D>::NaturalRestingScale() const
{
    float value {};
    check_hresult(shim()->get_NaturalRestingScale(&value));
    return value;
}

template <typename D> Windows::UI::Composition::Interactions::IInteractionTrackerOwner impl_IInteractionTracker<D>::Owner() const
{
    Windows::UI::Composition::Interactions::IInteractionTrackerOwner value;
    check_hresult(shim()->get_Owner(put(value)));
    return value;
}

template <typename D> Windows::Foundation::Numerics::float3 impl_IInteractionTracker<D>::Position() const
{
    Windows::Foundation::Numerics::float3 value {};
    check_hresult(shim()->get_Position(put(value)));
    return value;
}

template <typename D> Windows::Foundation::IReference<Windows::Foundation::Numerics::float3> impl_IInteractionTracker<D>::PositionInertiaDecayRate() const
{
    Windows::Foundation::IReference<Windows::Foundation::Numerics::float3> value;
    check_hresult(shim()->get_PositionInertiaDecayRate(put(value)));
    return value;
}

template <typename D> void impl_IInteractionTracker<D>::PositionInertiaDecayRate(const Windows::Foundation::IReference<Windows::Foundation::Numerics::float3> & value) const
{
    check_hresult(shim()->put_PositionInertiaDecayRate(get(value)));
}

template <typename D> Windows::Foundation::Numerics::float3 impl_IInteractionTracker<D>::PositionVelocityInPixelsPerSecond() const
{
    Windows::Foundation::Numerics::float3 value {};
    check_hresult(shim()->get_PositionVelocityInPixelsPerSecond(put(value)));
    return value;
}

template <typename D> float impl_IInteractionTracker<D>::Scale() const
{
    float value {};
    check_hresult(shim()->get_Scale(&value));
    return value;
}

template <typename D> Windows::Foundation::IReference<float> impl_IInteractionTracker<D>::ScaleInertiaDecayRate() const
{
    Windows::Foundation::IReference<float> value;
    check_hresult(shim()->get_ScaleInertiaDecayRate(put(value)));
    return value;
}

template <typename D> void impl_IInteractionTracker<D>::ScaleInertiaDecayRate(const Windows::Foundation::IReference<float> & value) const
{
    check_hresult(shim()->put_ScaleInertiaDecayRate(get(value)));
}

template <typename D> float impl_IInteractionTracker<D>::ScaleVelocityInPercentPerSecond() const
{
    float value {};
    check_hresult(shim()->get_ScaleVelocityInPercentPerSecond(&value));
    return value;
}

template <typename D> void impl_IInteractionTracker<D>::AdjustPositionXIfGreaterThanThreshold(float adjustment, float positionThreshold) const
{
    check_hresult(shim()->abi_AdjustPositionXIfGreaterThanThreshold(adjustment, positionThreshold));
}

template <typename D> void impl_IInteractionTracker<D>::AdjustPositionYIfGreaterThanThreshold(float adjustment, float positionThreshold) const
{
    check_hresult(shim()->abi_AdjustPositionYIfGreaterThanThreshold(adjustment, positionThreshold));
}

template <typename D> void impl_IInteractionTracker<D>::ConfigurePositionXInertiaModifiers(const Windows::Foundation::Collections::IIterable<Windows::UI::Composition::Interactions::InteractionTrackerInertiaModifier> & modifiers) const
{
    check_hresult(shim()->abi_ConfigurePositionXInertiaModifiers(get(modifiers)));
}

template <typename D> void impl_IInteractionTracker<D>::ConfigurePositionYInertiaModifiers(const Windows::Foundation::Collections::IIterable<Windows::UI::Composition::Interactions::InteractionTrackerInertiaModifier> & modifiers) const
{
    check_hresult(shim()->abi_ConfigurePositionYInertiaModifiers(get(modifiers)));
}

template <typename D> void impl_IInteractionTracker<D>::ConfigureScaleInertiaModifiers(const Windows::Foundation::Collections::IIterable<Windows::UI::Composition::Interactions::InteractionTrackerInertiaModifier> & modifiers) const
{
    check_hresult(shim()->abi_ConfigureScaleInertiaModifiers(get(modifiers)));
}

template <typename D> int32_t impl_IInteractionTracker<D>::TryUpdatePosition(const Windows::Foundation::Numerics::float3 & value) const
{
    int32_t requestId {};
    check_hresult(shim()->abi_TryUpdatePosition(get(value), &requestId));
    return requestId;
}

template <typename D> int32_t impl_IInteractionTracker<D>::TryUpdatePositionBy(const Windows::Foundation::Numerics::float3 & amount) const
{
    int32_t requestId {};
    check_hresult(shim()->abi_TryUpdatePositionBy(get(amount), &requestId));
    return requestId;
}

template <typename D> int32_t impl_IInteractionTracker<D>::TryUpdatePositionWithAnimation(const Windows::UI::Composition::CompositionAnimation & animation) const
{
    int32_t requestId {};
    check_hresult(shim()->abi_TryUpdatePositionWithAnimation(get(animation), &requestId));
    return requestId;
}

template <typename D> int32_t impl_IInteractionTracker<D>::TryUpdatePositionWithAdditionalVelocity(const Windows::Foundation::Numerics::float3 & velocityInPixelsPerSecond) const
{
    int32_t requestId {};
    check_hresult(shim()->abi_TryUpdatePositionWithAdditionalVelocity(get(velocityInPixelsPerSecond), &requestId));
    return requestId;
}

template <typename D> int32_t impl_IInteractionTracker<D>::TryUpdateScale(float value, const Windows::Foundation::Numerics::float3 & centerPoint) const
{
    int32_t requestId {};
    check_hresult(shim()->abi_TryUpdateScale(value, get(centerPoint), &requestId));
    return requestId;
}

template <typename D> int32_t impl_IInteractionTracker<D>::TryUpdateScaleWithAnimation(const Windows::UI::Composition::CompositionAnimation & animation, const Windows::Foundation::Numerics::float3 & centerPoint) const
{
    int32_t requestId {};
    check_hresult(shim()->abi_TryUpdateScaleWithAnimation(get(animation), get(centerPoint), &requestId));
    return requestId;
}

template <typename D> int32_t impl_IInteractionTracker<D>::TryUpdateScaleWithAdditionalVelocity(float velocityInPercentPerSecond, const Windows::Foundation::Numerics::float3 & centerPoint) const
{
    int32_t requestId {};
    check_hresult(shim()->abi_TryUpdateScaleWithAdditionalVelocity(velocityInPercentPerSecond, get(centerPoint), &requestId));
    return requestId;
}

template <typename D> int32_t impl_IInteractionTrackerCustomAnimationStateEnteredArgs<D>::RequestId() const
{
    int32_t value {};
    check_hresult(shim()->get_RequestId(&value));
    return value;
}

template <typename D> int32_t impl_IInteractionTrackerIdleStateEnteredArgs<D>::RequestId() const
{
    int32_t value {};
    check_hresult(shim()->get_RequestId(&value));
    return value;
}

template <typename D> int32_t impl_IInteractionTrackerInteractingStateEnteredArgs<D>::RequestId() const
{
    int32_t value {};
    check_hresult(shim()->get_RequestId(&value));
    return value;
}

template <typename D> Windows::UI::Composition::Interactions::InteractionTrackerInertiaRestingValue impl_IInteractionTrackerInertiaRestingValueStatics<D>::Create(const Windows::UI::Composition::Compositor & compositor) const
{
    Windows::UI::Composition::Interactions::InteractionTrackerInertiaRestingValue result { nullptr };
    check_hresult(shim()->abi_Create(get(compositor), put(result)));
    return result;
}

template <typename D> Windows::UI::Composition::ExpressionAnimation impl_IInteractionTrackerInertiaRestingValue<D>::Condition() const
{
    Windows::UI::Composition::ExpressionAnimation value { nullptr };
    check_hresult(shim()->get_Condition(put(value)));
    return value;
}

template <typename D> void impl_IInteractionTrackerInertiaRestingValue<D>::Condition(const Windows::UI::Composition::ExpressionAnimation & value) const
{
    check_hresult(shim()->put_Condition(get(value)));
}

template <typename D> Windows::UI::Composition::ExpressionAnimation impl_IInteractionTrackerInertiaRestingValue<D>::RestingValue() const
{
    Windows::UI::Composition::ExpressionAnimation value { nullptr };
    check_hresult(shim()->get_RestingValue(put(value)));
    return value;
}

template <typename D> void impl_IInteractionTrackerInertiaRestingValue<D>::RestingValue(const Windows::UI::Composition::ExpressionAnimation & value) const
{
    check_hresult(shim()->put_RestingValue(get(value)));
}

template <typename D> Windows::UI::Composition::Interactions::InteractionTrackerInertiaMotion impl_IInteractionTrackerInertiaMotionStatics<D>::Create(const Windows::UI::Composition::Compositor & compositor) const
{
    Windows::UI::Composition::Interactions::InteractionTrackerInertiaMotion result { nullptr };
    check_hresult(shim()->abi_Create(get(compositor), put(result)));
    return result;
}

template <typename D> Windows::UI::Composition::ExpressionAnimation impl_IInteractionTrackerInertiaMotion<D>::Condition() const
{
    Windows::UI::Composition::ExpressionAnimation value { nullptr };
    check_hresult(shim()->get_Condition(put(value)));
    return value;
}

template <typename D> void impl_IInteractionTrackerInertiaMotion<D>::Condition(const Windows::UI::Composition::ExpressionAnimation & value) const
{
    check_hresult(shim()->put_Condition(get(value)));
}

template <typename D> Windows::UI::Composition::ExpressionAnimation impl_IInteractionTrackerInertiaMotion<D>::Motion() const
{
    Windows::UI::Composition::ExpressionAnimation value { nullptr };
    check_hresult(shim()->get_Motion(put(value)));
    return value;
}

template <typename D> void impl_IInteractionTrackerInertiaMotion<D>::Motion(const Windows::UI::Composition::ExpressionAnimation & value) const
{
    check_hresult(shim()->put_Motion(get(value)));
}

template <typename D> Windows::Foundation::IReference<Windows::Foundation::Numerics::float3> impl_IInteractionTrackerInertiaStateEnteredArgs<D>::ModifiedRestingPosition() const
{
    Windows::Foundation::IReference<Windows::Foundation::Numerics::float3> value;
    check_hresult(shim()->get_ModifiedRestingPosition(put(value)));
    return value;
}

template <typename D> Windows::Foundation::IReference<float> impl_IInteractionTrackerInertiaStateEnteredArgs<D>::ModifiedRestingScale() const
{
    Windows::Foundation::IReference<float> value;
    check_hresult(shim()->get_ModifiedRestingScale(put(value)));
    return value;
}

template <typename D> Windows::Foundation::Numerics::float3 impl_IInteractionTrackerInertiaStateEnteredArgs<D>::NaturalRestingPosition() const
{
    Windows::Foundation::Numerics::float3 value {};
    check_hresult(shim()->get_NaturalRestingPosition(put(value)));
    return value;
}

template <typename D> float impl_IInteractionTrackerInertiaStateEnteredArgs<D>::NaturalRestingScale() const
{
    float value {};
    check_hresult(shim()->get_NaturalRestingScale(&value));
    return value;
}

template <typename D> Windows::Foundation::Numerics::float3 impl_IInteractionTrackerInertiaStateEnteredArgs<D>::PositionVelocityInPixelsPerSecond() const
{
    Windows::Foundation::Numerics::float3 value {};
    check_hresult(shim()->get_PositionVelocityInPixelsPerSecond(put(value)));
    return value;
}

template <typename D> int32_t impl_IInteractionTrackerInertiaStateEnteredArgs<D>::RequestId() const
{
    int32_t value {};
    check_hresult(shim()->get_RequestId(&value));
    return value;
}

template <typename D> float impl_IInteractionTrackerInertiaStateEnteredArgs<D>::ScaleVelocityInPercentPerSecond() const
{
    float value {};
    check_hresult(shim()->get_ScaleVelocityInPercentPerSecond(&value));
    return value;
}

template <typename D> int32_t impl_IInteractionTrackerRequestIgnoredArgs<D>::RequestId() const
{
    int32_t value {};
    check_hresult(shim()->get_RequestId(&value));
    return value;
}

template <typename D> Windows::Foundation::Numerics::float3 impl_IInteractionTrackerValuesChangedArgs<D>::Position() const
{
    Windows::Foundation::Numerics::float3 value {};
    check_hresult(shim()->get_Position(put(value)));
    return value;
}

template <typename D> int32_t impl_IInteractionTrackerValuesChangedArgs<D>::RequestId() const
{
    int32_t value {};
    check_hresult(shim()->get_RequestId(&value));
    return value;
}

template <typename D> float impl_IInteractionTrackerValuesChangedArgs<D>::Scale() const
{
    float value {};
    check_hresult(shim()->get_Scale(&value));
    return value;
}

template <typename D> Windows::UI::Composition::Interactions::VisualInteractionSource impl_IVisualInteractionSourceStatics<D>::Create(const Windows::UI::Composition::Visual & source) const
{
    Windows::UI::Composition::Interactions::VisualInteractionSource result { nullptr };
    check_hresult(shim()->abi_Create(get(source), put(result)));
    return result;
}

template <typename D> bool impl_IVisualInteractionSource<D>::IsPositionXRailsEnabled() const
{
    bool value {};
    check_hresult(shim()->get_IsPositionXRailsEnabled(&value));
    return value;
}

template <typename D> void impl_IVisualInteractionSource<D>::IsPositionXRailsEnabled(bool value) const
{
    check_hresult(shim()->put_IsPositionXRailsEnabled(value));
}

template <typename D> bool impl_IVisualInteractionSource<D>::IsPositionYRailsEnabled() const
{
    bool value {};
    check_hresult(shim()->get_IsPositionYRailsEnabled(&value));
    return value;
}

template <typename D> void impl_IVisualInteractionSource<D>::IsPositionYRailsEnabled(bool value) const
{
    check_hresult(shim()->put_IsPositionYRailsEnabled(value));
}

template <typename D> Windows::UI::Composition::Interactions::VisualInteractionSourceRedirectionMode impl_IVisualInteractionSource<D>::ManipulationRedirectionMode() const
{
    Windows::UI::Composition::Interactions::VisualInteractionSourceRedirectionMode value {};
    check_hresult(shim()->get_ManipulationRedirectionMode(&value));
    return value;
}

template <typename D> void impl_IVisualInteractionSource<D>::ManipulationRedirectionMode(Windows::UI::Composition::Interactions::VisualInteractionSourceRedirectionMode value) const
{
    check_hresult(shim()->put_ManipulationRedirectionMode(value));
}

template <typename D> Windows::UI::Composition::Interactions::InteractionChainingMode impl_IVisualInteractionSource<D>::PositionXChainingMode() const
{
    Windows::UI::Composition::Interactions::InteractionChainingMode value {};
    check_hresult(shim()->get_PositionXChainingMode(&value));
    return value;
}

template <typename D> void impl_IVisualInteractionSource<D>::PositionXChainingMode(Windows::UI::Composition::Interactions::InteractionChainingMode value) const
{
    check_hresult(shim()->put_PositionXChainingMode(value));
}

template <typename D> Windows::UI::Composition::Interactions::InteractionSourceMode impl_IVisualInteractionSource<D>::PositionXSourceMode() const
{
    Windows::UI::Composition::Interactions::InteractionSourceMode value {};
    check_hresult(shim()->get_PositionXSourceMode(&value));
    return value;
}

template <typename D> void impl_IVisualInteractionSource<D>::PositionXSourceMode(Windows::UI::Composition::Interactions::InteractionSourceMode value) const
{
    check_hresult(shim()->put_PositionXSourceMode(value));
}

template <typename D> Windows::UI::Composition::Interactions::InteractionChainingMode impl_IVisualInteractionSource<D>::PositionYChainingMode() const
{
    Windows::UI::Composition::Interactions::InteractionChainingMode value {};
    check_hresult(shim()->get_PositionYChainingMode(&value));
    return value;
}

template <typename D> void impl_IVisualInteractionSource<D>::PositionYChainingMode(Windows::UI::Composition::Interactions::InteractionChainingMode value) const
{
    check_hresult(shim()->put_PositionYChainingMode(value));
}

template <typename D> Windows::UI::Composition::Interactions::InteractionSourceMode impl_IVisualInteractionSource<D>::PositionYSourceMode() const
{
    Windows::UI::Composition::Interactions::InteractionSourceMode value {};
    check_hresult(shim()->get_PositionYSourceMode(&value));
    return value;
}

template <typename D> void impl_IVisualInteractionSource<D>::PositionYSourceMode(Windows::UI::Composition::Interactions::InteractionSourceMode value) const
{
    check_hresult(shim()->put_PositionYSourceMode(value));
}

template <typename D> Windows::UI::Composition::Interactions::InteractionChainingMode impl_IVisualInteractionSource<D>::ScaleChainingMode() const
{
    Windows::UI::Composition::Interactions::InteractionChainingMode value {};
    check_hresult(shim()->get_ScaleChainingMode(&value));
    return value;
}

template <typename D> void impl_IVisualInteractionSource<D>::ScaleChainingMode(Windows::UI::Composition::Interactions::InteractionChainingMode value) const
{
    check_hresult(shim()->put_ScaleChainingMode(value));
}

template <typename D> Windows::UI::Composition::Interactions::InteractionSourceMode impl_IVisualInteractionSource<D>::ScaleSourceMode() const
{
    Windows::UI::Composition::Interactions::InteractionSourceMode value {};
    check_hresult(shim()->get_ScaleSourceMode(&value));
    return value;
}

template <typename D> void impl_IVisualInteractionSource<D>::ScaleSourceMode(Windows::UI::Composition::Interactions::InteractionSourceMode value) const
{
    check_hresult(shim()->put_ScaleSourceMode(value));
}

template <typename D> Windows::UI::Composition::Visual impl_IVisualInteractionSource<D>::Source() const
{
    Windows::UI::Composition::Visual value { nullptr };
    check_hresult(shim()->get_Source(put(value)));
    return value;
}

template <typename D> void impl_IVisualInteractionSource<D>::TryRedirectForManipulation(const Windows::UI::Input::PointerPoint & pointerPoint) const
{
    check_hresult(shim()->abi_TryRedirectForManipulation(get(pointerPoint)));
}

inline Windows::UI::Composition::Interactions::InteractionTracker InteractionTracker::Create(const Windows::UI::Composition::Compositor & compositor)
{
    return get_activation_factory<InteractionTracker, IInteractionTrackerStatics>().Create(compositor);
}

inline Windows::UI::Composition::Interactions::InteractionTracker InteractionTracker::CreateWithOwner(const Windows::UI::Composition::Compositor & compositor, const Windows::UI::Composition::Interactions::IInteractionTrackerOwner & owner)
{
    return get_activation_factory<InteractionTracker, IInteractionTrackerStatics>().CreateWithOwner(compositor, owner);
}

inline Windows::UI::Composition::Interactions::InteractionTrackerInertiaMotion InteractionTrackerInertiaMotion::Create(const Windows::UI::Composition::Compositor & compositor)
{
    return get_activation_factory<InteractionTrackerInertiaMotion, IInteractionTrackerInertiaMotionStatics>().Create(compositor);
}

inline Windows::UI::Composition::Interactions::InteractionTrackerInertiaRestingValue InteractionTrackerInertiaRestingValue::Create(const Windows::UI::Composition::Compositor & compositor)
{
    return get_activation_factory<InteractionTrackerInertiaRestingValue, IInteractionTrackerInertiaRestingValueStatics>().Create(compositor);
}

inline Windows::UI::Composition::Interactions::VisualInteractionSource VisualInteractionSource::Create(const Windows::UI::Composition::Visual & source)
{
    return get_activation_factory<VisualInteractionSource, IVisualInteractionSourceStatics>().Create(source);
}

}

}
