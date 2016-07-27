// C++ for the Windows Runtime v1.29
// Copyright (c) 2016 Microsoft Corporation

#pragma once

#include "internal\Windows.Foundation.3.h"
#include "internal\Windows.Foundation.Collections.3.h"
#include "internal\Windows.Media.Capture.3.h"
#include "internal\Windows.Media.MediaProperties.3.h"
#include "internal\Windows.Media.Devices.Core.3.h"
#include "internal\Windows.Media.Devices.3.h"
#include "Windows.Media.h"

WINRT_EXPORT namespace winrt {

namespace Windows::Media::Devices {

template <typename L> CallControlEventHandler::CallControlEventHandler(L lambda) :
    CallControlEventHandler(impl::make_delegate<impl_CallControlEventHandler<L>, CallControlEventHandler>(std::forward<L>(lambda)))
{}

template <typename F> CallControlEventHandler::CallControlEventHandler(F * function) :
    CallControlEventHandler([=](auto && ... args) { function(args ...); })
{}

template <typename O, typename M> CallControlEventHandler::CallControlEventHandler(O * object, M method) :
    CallControlEventHandler([=](auto && ... args) { ((*object).*(method))(args ...); })
{}

inline void CallControlEventHandler::operator()(const Windows::Media::Devices::CallControl & sender) const
{
    check_hresult((*this)->abi_Invoke(get(sender)));
}

template <typename L> DialRequestedEventHandler::DialRequestedEventHandler(L lambda) :
    DialRequestedEventHandler(impl::make_delegate<impl_DialRequestedEventHandler<L>, DialRequestedEventHandler>(std::forward<L>(lambda)))
{}

template <typename F> DialRequestedEventHandler::DialRequestedEventHandler(F * function) :
    DialRequestedEventHandler([=](auto && ... args) { function(args ...); })
{}

template <typename O, typename M> DialRequestedEventHandler::DialRequestedEventHandler(O * object, M method) :
    DialRequestedEventHandler([=](auto && ... args) { ((*object).*(method))(args ...); })
{}

inline void DialRequestedEventHandler::operator()(const Windows::Media::Devices::CallControl & sender, const Windows::Media::Devices::DialRequestedEventArgs & e) const
{
    check_hresult((*this)->abi_Invoke(get(sender), get(e)));
}

template <typename L> KeypadPressedEventHandler::KeypadPressedEventHandler(L lambda) :
    KeypadPressedEventHandler(impl::make_delegate<impl_KeypadPressedEventHandler<L>, KeypadPressedEventHandler>(std::forward<L>(lambda)))
{}

template <typename F> KeypadPressedEventHandler::KeypadPressedEventHandler(F * function) :
    KeypadPressedEventHandler([=](auto && ... args) { function(args ...); })
{}

template <typename O, typename M> KeypadPressedEventHandler::KeypadPressedEventHandler(O * object, M method) :
    KeypadPressedEventHandler([=](auto && ... args) { ((*object).*(method))(args ...); })
{}

inline void KeypadPressedEventHandler::operator()(const Windows::Media::Devices::CallControl & sender, const Windows::Media::Devices::KeypadPressedEventArgs & e) const
{
    check_hresult((*this)->abi_Invoke(get(sender), get(e)));
}

template <typename L> RedialRequestedEventHandler::RedialRequestedEventHandler(L lambda) :
    RedialRequestedEventHandler(impl::make_delegate<impl_RedialRequestedEventHandler<L>, RedialRequestedEventHandler>(std::forward<L>(lambda)))
{}

template <typename F> RedialRequestedEventHandler::RedialRequestedEventHandler(F * function) :
    RedialRequestedEventHandler([=](auto && ... args) { function(args ...); })
{}

template <typename O, typename M> RedialRequestedEventHandler::RedialRequestedEventHandler(O * object, M method) :
    RedialRequestedEventHandler([=](auto && ... args) { ((*object).*(method))(args ...); })
{}

inline void RedialRequestedEventHandler::operator()(const Windows::Media::Devices::CallControl & sender, const Windows::Media::Devices::RedialRequestedEventArgs & e) const
{
    check_hresult((*this)->abi_Invoke(get(sender), get(e)));
}

}

namespace impl {

template <typename D>
struct produce<D, Windows::Media::Devices::IAdvancedPhotoCaptureSettings> : produce_base<D, Windows::Media::Devices::IAdvancedPhotoCaptureSettings>
{
    HRESULT __stdcall get_Mode(Windows::Media::Devices::AdvancedPhotoMode * value) noexcept override
    {
        try
        {
            *value = detach(shim().Mode());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Mode(Windows::Media::Devices::AdvancedPhotoMode value) noexcept override
    {
        try
        {
            shim().Mode(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::Devices::IAdvancedPhotoControl> : produce_base<D, Windows::Media::Devices::IAdvancedPhotoControl>
{
    HRESULT __stdcall get_Supported(bool * value) noexcept override
    {
        try
        {
            *value = detach(shim().Supported());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_SupportedModes(abi_arg_out<Windows::Foundation::Collections::IVectorView<winrt::Windows::Media::Devices::AdvancedPhotoMode>> value) noexcept override
    {
        try
        {
            *value = detach(shim().SupportedModes());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Mode(Windows::Media::Devices::AdvancedPhotoMode * value) noexcept override
    {
        try
        {
            *value = detach(shim().Mode());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_Configure(abi_arg_in<Windows::Media::Devices::IAdvancedPhotoCaptureSettings> settings) noexcept override
    {
        try
        {
            shim().Configure(*reinterpret_cast<const Windows::Media::Devices::AdvancedPhotoCaptureSettings *>(&settings));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::Devices::IAdvancedVideoCaptureDeviceController> : produce_base<D, Windows::Media::Devices::IAdvancedVideoCaptureDeviceController>
{
    HRESULT __stdcall abi_SetDeviceProperty(abi_arg_in<hstring> propertyId, abi_arg_in<Windows::IInspectable> propertyValue) noexcept override
    {
        try
        {
            shim().SetDeviceProperty(*reinterpret_cast<const hstring *>(&propertyId), *reinterpret_cast<const Windows::IInspectable *>(&propertyValue));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_GetDeviceProperty(abi_arg_in<hstring> propertyId, abi_arg_out<Windows::IInspectable> propertyValue) noexcept override
    {
        try
        {
            *propertyValue = detach(shim().GetDeviceProperty(*reinterpret_cast<const hstring *>(&propertyId)));
            return S_OK;
        }
        catch (...)
        {
            *propertyValue = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::Devices::IAdvancedVideoCaptureDeviceController2> : produce_base<D, Windows::Media::Devices::IAdvancedVideoCaptureDeviceController2>
{
    HRESULT __stdcall get_LowLagPhotoSequence(abi_arg_out<Windows::Media::Devices::ILowLagPhotoSequenceControl> value) noexcept override
    {
        try
        {
            *value = detach(shim().LowLagPhotoSequence());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_LowLagPhoto(abi_arg_out<Windows::Media::Devices::ILowLagPhotoControl> value) noexcept override
    {
        try
        {
            *value = detach(shim().LowLagPhoto());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_SceneModeControl(abi_arg_out<Windows::Media::Devices::ISceneModeControl> value) noexcept override
    {
        try
        {
            *value = detach(shim().SceneModeControl());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_TorchControl(abi_arg_out<Windows::Media::Devices::ITorchControl> value) noexcept override
    {
        try
        {
            *value = detach(shim().TorchControl());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_FlashControl(abi_arg_out<Windows::Media::Devices::IFlashControl> value) noexcept override
    {
        try
        {
            *value = detach(shim().FlashControl());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_WhiteBalanceControl(abi_arg_out<Windows::Media::Devices::IWhiteBalanceControl> value) noexcept override
    {
        try
        {
            *value = detach(shim().WhiteBalanceControl());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ExposureControl(abi_arg_out<Windows::Media::Devices::IExposureControl> value) noexcept override
    {
        try
        {
            *value = detach(shim().ExposureControl());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_FocusControl(abi_arg_out<Windows::Media::Devices::IFocusControl> value) noexcept override
    {
        try
        {
            *value = detach(shim().FocusControl());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ExposureCompensationControl(abi_arg_out<Windows::Media::Devices::IExposureCompensationControl> value) noexcept override
    {
        try
        {
            *value = detach(shim().ExposureCompensationControl());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_IsoSpeedControl(abi_arg_out<Windows::Media::Devices::IIsoSpeedControl> value) noexcept override
    {
        try
        {
            *value = detach(shim().IsoSpeedControl());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_RegionsOfInterestControl(abi_arg_out<Windows::Media::Devices::IRegionsOfInterestControl> value) noexcept override
    {
        try
        {
            *value = detach(shim().RegionsOfInterestControl());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_PrimaryUse(Windows::Media::Devices::CaptureUse * value) noexcept override
    {
        try
        {
            *value = detach(shim().PrimaryUse());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_PrimaryUse(Windows::Media::Devices::CaptureUse value) noexcept override
    {
        try
        {
            shim().PrimaryUse(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::Devices::IAdvancedVideoCaptureDeviceController3> : produce_base<D, Windows::Media::Devices::IAdvancedVideoCaptureDeviceController3>
{
    HRESULT __stdcall get_VariablePhotoSequenceController(abi_arg_out<Windows::Media::Devices::Core::IVariablePhotoSequenceController> value) noexcept override
    {
        try
        {
            *value = detach(shim().VariablePhotoSequenceController());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_PhotoConfirmationControl(abi_arg_out<Windows::Media::Devices::IPhotoConfirmationControl> value) noexcept override
    {
        try
        {
            *value = detach(shim().PhotoConfirmationControl());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ZoomControl(abi_arg_out<Windows::Media::Devices::IZoomControl> value) noexcept override
    {
        try
        {
            *value = detach(shim().ZoomControl());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::Devices::IAdvancedVideoCaptureDeviceController4> : produce_base<D, Windows::Media::Devices::IAdvancedVideoCaptureDeviceController4>
{
    HRESULT __stdcall get_ExposurePriorityVideoControl(abi_arg_out<Windows::Media::Devices::IExposurePriorityVideoControl> value) noexcept override
    {
        try
        {
            *value = detach(shim().ExposurePriorityVideoControl());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_DesiredOptimization(Windows::Media::Devices::MediaCaptureOptimization * value) noexcept override
    {
        try
        {
            *value = detach(shim().DesiredOptimization());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_DesiredOptimization(Windows::Media::Devices::MediaCaptureOptimization value) noexcept override
    {
        try
        {
            shim().DesiredOptimization(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_HdrVideoControl(abi_arg_out<Windows::Media::Devices::IHdrVideoControl> value) noexcept override
    {
        try
        {
            *value = detach(shim().HdrVideoControl());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_OpticalImageStabilizationControl(abi_arg_out<Windows::Media::Devices::IOpticalImageStabilizationControl> value) noexcept override
    {
        try
        {
            *value = detach(shim().OpticalImageStabilizationControl());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_AdvancedPhotoControl(abi_arg_out<Windows::Media::Devices::IAdvancedPhotoControl> value) noexcept override
    {
        try
        {
            *value = detach(shim().AdvancedPhotoControl());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::Devices::IAudioDeviceController> : produce_base<D, Windows::Media::Devices::IAudioDeviceController>
{
    HRESULT __stdcall put_Muted(bool value) noexcept override
    {
        try
        {
            shim().Muted(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Muted(bool * value) noexcept override
    {
        try
        {
            *value = detach(shim().Muted());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_VolumePercent(float value) noexcept override
    {
        try
        {
            shim().VolumePercent(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_VolumePercent(float * value) noexcept override
    {
        try
        {
            *value = detach(shim().VolumePercent());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::Devices::ICallControl> : produce_base<D, Windows::Media::Devices::ICallControl>
{
    HRESULT __stdcall abi_IndicateNewIncomingCall(bool enableRinger, abi_arg_in<hstring> callerId, uint64_t * callToken) noexcept override
    {
        try
        {
            *callToken = detach(shim().IndicateNewIncomingCall(enableRinger, *reinterpret_cast<const hstring *>(&callerId)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_IndicateNewOutgoingCall(uint64_t * callToken) noexcept override
    {
        try
        {
            *callToken = detach(shim().IndicateNewOutgoingCall());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_IndicateActiveCall(uint64_t callToken) noexcept override
    {
        try
        {
            shim().IndicateActiveCall(callToken);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_EndCall(uint64_t callToken) noexcept override
    {
        try
        {
            shim().EndCall(callToken);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_HasRinger(bool * value) noexcept override
    {
        try
        {
            *value = detach(shim().HasRinger());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_AnswerRequested(abi_arg_in<Windows::Media::Devices::CallControlEventHandler> handler, event_token * token) noexcept override
    {
        try
        {
            *token = detach(shim().AnswerRequested(*reinterpret_cast<const Windows::Media::Devices::CallControlEventHandler *>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_AnswerRequested(event_token token) noexcept override
    {
        try
        {
            shim().AnswerRequested(token);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_HangUpRequested(abi_arg_in<Windows::Media::Devices::CallControlEventHandler> handler, event_token * token) noexcept override
    {
        try
        {
            *token = detach(shim().HangUpRequested(*reinterpret_cast<const Windows::Media::Devices::CallControlEventHandler *>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_HangUpRequested(event_token token) noexcept override
    {
        try
        {
            shim().HangUpRequested(token);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_DialRequested(abi_arg_in<Windows::Media::Devices::DialRequestedEventHandler> handler, event_token * token) noexcept override
    {
        try
        {
            *token = detach(shim().DialRequested(*reinterpret_cast<const Windows::Media::Devices::DialRequestedEventHandler *>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_DialRequested(event_token token) noexcept override
    {
        try
        {
            shim().DialRequested(token);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_RedialRequested(abi_arg_in<Windows::Media::Devices::RedialRequestedEventHandler> handler, event_token * token) noexcept override
    {
        try
        {
            *token = detach(shim().RedialRequested(*reinterpret_cast<const Windows::Media::Devices::RedialRequestedEventHandler *>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_RedialRequested(event_token token) noexcept override
    {
        try
        {
            shim().RedialRequested(token);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_KeypadPressed(abi_arg_in<Windows::Media::Devices::KeypadPressedEventHandler> handler, event_token * token) noexcept override
    {
        try
        {
            *token = detach(shim().KeypadPressed(*reinterpret_cast<const Windows::Media::Devices::KeypadPressedEventHandler *>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_KeypadPressed(event_token token) noexcept override
    {
        try
        {
            shim().KeypadPressed(token);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_AudioTransferRequested(abi_arg_in<Windows::Media::Devices::CallControlEventHandler> handler, event_token * token) noexcept override
    {
        try
        {
            *token = detach(shim().AudioTransferRequested(*reinterpret_cast<const Windows::Media::Devices::CallControlEventHandler *>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_AudioTransferRequested(event_token token) noexcept override
    {
        try
        {
            shim().AudioTransferRequested(token);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::Devices::ICallControlStatics> : produce_base<D, Windows::Media::Devices::ICallControlStatics>
{
    HRESULT __stdcall abi_GetDefault(abi_arg_out<Windows::Media::Devices::ICallControl> callControl) noexcept override
    {
        try
        {
            *callControl = detach(shim().GetDefault());
            return S_OK;
        }
        catch (...)
        {
            *callControl = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_FromId(abi_arg_in<hstring> deviceId, abi_arg_out<Windows::Media::Devices::ICallControl> callControl) noexcept override
    {
        try
        {
            *callControl = detach(shim().FromId(*reinterpret_cast<const hstring *>(&deviceId)));
            return S_OK;
        }
        catch (...)
        {
            *callControl = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::Devices::IDefaultAudioDeviceChangedEventArgs> : produce_base<D, Windows::Media::Devices::IDefaultAudioDeviceChangedEventArgs>
{
    HRESULT __stdcall get_Id(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(shim().Id());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Role(Windows::Media::Devices::AudioDeviceRole * value) noexcept override
    {
        try
        {
            *value = detach(shim().Role());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::Devices::IDialRequestedEventArgs> : produce_base<D, Windows::Media::Devices::IDialRequestedEventArgs>
{
    HRESULT __stdcall abi_Handled() noexcept override
    {
        try
        {
            shim().Handled();
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Contact(abi_arg_out<Windows::IInspectable> value) noexcept override
    {
        try
        {
            *value = detach(shim().Contact());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::Devices::IExposureCompensationControl> : produce_base<D, Windows::Media::Devices::IExposureCompensationControl>
{
    HRESULT __stdcall get_Supported(bool * value) noexcept override
    {
        try
        {
            *value = detach(shim().Supported());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Min(float * value) noexcept override
    {
        try
        {
            *value = detach(shim().Min());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Max(float * value) noexcept override
    {
        try
        {
            *value = detach(shim().Max());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Step(float * value) noexcept override
    {
        try
        {
            *value = detach(shim().Step());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Value(float * value) noexcept override
    {
        try
        {
            *value = detach(shim().Value());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_SetValueAsync(float value, abi_arg_out<Windows::Foundation::IAsyncAction> asyncInfo) noexcept override
    {
        try
        {
            *asyncInfo = detach(shim().SetValueAsync(value));
            return S_OK;
        }
        catch (...)
        {
            *asyncInfo = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::Devices::IExposureControl> : produce_base<D, Windows::Media::Devices::IExposureControl>
{
    HRESULT __stdcall get_Supported(bool * value) noexcept override
    {
        try
        {
            *value = detach(shim().Supported());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Auto(bool * value) noexcept override
    {
        try
        {
            *value = detach(shim().Auto());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_SetAutoAsync(bool value, abi_arg_out<Windows::Foundation::IAsyncAction> asyncInfo) noexcept override
    {
        try
        {
            *asyncInfo = detach(shim().SetAutoAsync(value));
            return S_OK;
        }
        catch (...)
        {
            *asyncInfo = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Min(abi_arg_out<Windows::Foundation::TimeSpan> value) noexcept override
    {
        try
        {
            *value = detach(shim().Min());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Max(abi_arg_out<Windows::Foundation::TimeSpan> value) noexcept override
    {
        try
        {
            *value = detach(shim().Max());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Step(abi_arg_out<Windows::Foundation::TimeSpan> value) noexcept override
    {
        try
        {
            *value = detach(shim().Step());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Value(abi_arg_out<Windows::Foundation::TimeSpan> value) noexcept override
    {
        try
        {
            *value = detach(shim().Value());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_SetValueAsync(abi_arg_in<Windows::Foundation::TimeSpan> shutterDuration, abi_arg_out<Windows::Foundation::IAsyncAction> asyncInfo) noexcept override
    {
        try
        {
            *asyncInfo = detach(shim().SetValueAsync(*reinterpret_cast<const Windows::Foundation::TimeSpan *>(&shutterDuration)));
            return S_OK;
        }
        catch (...)
        {
            *asyncInfo = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::Devices::IExposurePriorityVideoControl> : produce_base<D, Windows::Media::Devices::IExposurePriorityVideoControl>
{
    HRESULT __stdcall get_Supported(bool * value) noexcept override
    {
        try
        {
            *value = detach(shim().Supported());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Enabled(bool * value) noexcept override
    {
        try
        {
            *value = detach(shim().Enabled());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Enabled(bool value) noexcept override
    {
        try
        {
            shim().Enabled(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::Devices::IFlashControl> : produce_base<D, Windows::Media::Devices::IFlashControl>
{
    HRESULT __stdcall get_Supported(bool * value) noexcept override
    {
        try
        {
            *value = detach(shim().Supported());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_PowerSupported(bool * value) noexcept override
    {
        try
        {
            *value = detach(shim().PowerSupported());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_RedEyeReductionSupported(bool * value) noexcept override
    {
        try
        {
            *value = detach(shim().RedEyeReductionSupported());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Enabled(bool * value) noexcept override
    {
        try
        {
            *value = detach(shim().Enabled());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Enabled(bool value) noexcept override
    {
        try
        {
            shim().Enabled(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Auto(bool * value) noexcept override
    {
        try
        {
            *value = detach(shim().Auto());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Auto(bool value) noexcept override
    {
        try
        {
            shim().Auto(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_RedEyeReduction(bool * value) noexcept override
    {
        try
        {
            *value = detach(shim().RedEyeReduction());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_RedEyeReduction(bool value) noexcept override
    {
        try
        {
            shim().RedEyeReduction(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_PowerPercent(float * value) noexcept override
    {
        try
        {
            *value = detach(shim().PowerPercent());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_PowerPercent(float value) noexcept override
    {
        try
        {
            shim().PowerPercent(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::Devices::IFlashControl2> : produce_base<D, Windows::Media::Devices::IFlashControl2>
{
    HRESULT __stdcall get_AssistantLightSupported(bool * value) noexcept override
    {
        try
        {
            *value = detach(shim().AssistantLightSupported());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_AssistantLightEnabled(bool * value) noexcept override
    {
        try
        {
            *value = detach(shim().AssistantLightEnabled());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_AssistantLightEnabled(bool value) noexcept override
    {
        try
        {
            shim().AssistantLightEnabled(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::Devices::IFocusControl> : produce_base<D, Windows::Media::Devices::IFocusControl>
{
    HRESULT __stdcall get_Supported(bool * value) noexcept override
    {
        try
        {
            *value = detach(shim().Supported());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_SupportedPresets(abi_arg_out<Windows::Foundation::Collections::IVectorView<winrt::Windows::Media::Devices::FocusPreset>> value) noexcept override
    {
        try
        {
            *value = detach(shim().SupportedPresets());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Preset(Windows::Media::Devices::FocusPreset * value) noexcept override
    {
        try
        {
            *value = detach(shim().Preset());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_SetPresetAsync(Windows::Media::Devices::FocusPreset preset, abi_arg_out<Windows::Foundation::IAsyncAction> asyncInfo) noexcept override
    {
        try
        {
            *asyncInfo = detach(shim().SetPresetAsync(preset));
            return S_OK;
        }
        catch (...)
        {
            *asyncInfo = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_SetPresetWithCompletionOptionAsync(Windows::Media::Devices::FocusPreset preset, bool completeBeforeFocus, abi_arg_out<Windows::Foundation::IAsyncAction> asyncInfo) noexcept override
    {
        try
        {
            *asyncInfo = detach(shim().SetPresetAsync(preset, completeBeforeFocus));
            return S_OK;
        }
        catch (...)
        {
            *asyncInfo = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Min(uint32_t * value) noexcept override
    {
        try
        {
            *value = detach(shim().Min());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Max(uint32_t * value) noexcept override
    {
        try
        {
            *value = detach(shim().Max());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Step(uint32_t * value) noexcept override
    {
        try
        {
            *value = detach(shim().Step());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Value(uint32_t * value) noexcept override
    {
        try
        {
            *value = detach(shim().Value());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_SetValueAsync(uint32_t focus, abi_arg_out<Windows::Foundation::IAsyncAction> asyncInfo) noexcept override
    {
        try
        {
            *asyncInfo = detach(shim().SetValueAsync(focus));
            return S_OK;
        }
        catch (...)
        {
            *asyncInfo = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_FocusAsync(abi_arg_out<Windows::Foundation::IAsyncAction> asyncInfo) noexcept override
    {
        try
        {
            *asyncInfo = detach(shim().FocusAsync());
            return S_OK;
        }
        catch (...)
        {
            *asyncInfo = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::Devices::IFocusControl2> : produce_base<D, Windows::Media::Devices::IFocusControl2>
{
    HRESULT __stdcall get_FocusChangedSupported(bool * value) noexcept override
    {
        try
        {
            *value = detach(shim().FocusChangedSupported());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_WaitForFocusSupported(bool * value) noexcept override
    {
        try
        {
            *value = detach(shim().WaitForFocusSupported());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_SupportedFocusModes(abi_arg_out<Windows::Foundation::Collections::IVectorView<winrt::Windows::Media::Devices::FocusMode>> value) noexcept override
    {
        try
        {
            *value = detach(shim().SupportedFocusModes());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_SupportedFocusDistances(abi_arg_out<Windows::Foundation::Collections::IVectorView<winrt::Windows::Media::Devices::ManualFocusDistance>> value) noexcept override
    {
        try
        {
            *value = detach(shim().SupportedFocusDistances());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_SupportedFocusRanges(abi_arg_out<Windows::Foundation::Collections::IVectorView<winrt::Windows::Media::Devices::AutoFocusRange>> value) noexcept override
    {
        try
        {
            *value = detach(shim().SupportedFocusRanges());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Mode(Windows::Media::Devices::FocusMode * value) noexcept override
    {
        try
        {
            *value = detach(shim().Mode());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_FocusState(Windows::Media::Devices::MediaCaptureFocusState * value) noexcept override
    {
        try
        {
            *value = detach(shim().FocusState());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_UnlockAsync(abi_arg_out<Windows::Foundation::IAsyncAction> asyncInfo) noexcept override
    {
        try
        {
            *asyncInfo = detach(shim().UnlockAsync());
            return S_OK;
        }
        catch (...)
        {
            *asyncInfo = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_LockAsync(abi_arg_out<Windows::Foundation::IAsyncAction> asyncInfo) noexcept override
    {
        try
        {
            *asyncInfo = detach(shim().LockAsync());
            return S_OK;
        }
        catch (...)
        {
            *asyncInfo = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_Configure(abi_arg_in<Windows::Media::Devices::IFocusSettings> settings) noexcept override
    {
        try
        {
            shim().Configure(*reinterpret_cast<const Windows::Media::Devices::FocusSettings *>(&settings));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::Devices::IFocusSettings> : produce_base<D, Windows::Media::Devices::IFocusSettings>
{
    HRESULT __stdcall get_Mode(Windows::Media::Devices::FocusMode * value) noexcept override
    {
        try
        {
            *value = detach(shim().Mode());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Mode(Windows::Media::Devices::FocusMode value) noexcept override
    {
        try
        {
            shim().Mode(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_AutoFocusRange(Windows::Media::Devices::AutoFocusRange * value) noexcept override
    {
        try
        {
            *value = detach(shim().AutoFocusRange());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_AutoFocusRange(Windows::Media::Devices::AutoFocusRange value) noexcept override
    {
        try
        {
            shim().AutoFocusRange(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Value(abi_arg_out<Windows::Foundation::IReference<uint32_t>> value) noexcept override
    {
        try
        {
            *value = detach(shim().Value());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Value(abi_arg_in<Windows::Foundation::IReference<uint32_t>> value) noexcept override
    {
        try
        {
            shim().Value(*reinterpret_cast<const Windows::Foundation::IReference<uint32_t> *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Distance(abi_arg_out<Windows::Foundation::IReference<winrt::Windows::Media::Devices::ManualFocusDistance>> value) noexcept override
    {
        try
        {
            *value = detach(shim().Distance());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Distance(abi_arg_in<Windows::Foundation::IReference<winrt::Windows::Media::Devices::ManualFocusDistance>> value) noexcept override
    {
        try
        {
            shim().Distance(*reinterpret_cast<const Windows::Foundation::IReference<winrt::Windows::Media::Devices::ManualFocusDistance> *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_WaitForFocus(bool * value) noexcept override
    {
        try
        {
            *value = detach(shim().WaitForFocus());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_WaitForFocus(bool value) noexcept override
    {
        try
        {
            shim().WaitForFocus(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_DisableDriverFallback(bool * value) noexcept override
    {
        try
        {
            *value = detach(shim().DisableDriverFallback());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_DisableDriverFallback(bool value) noexcept override
    {
        try
        {
            shim().DisableDriverFallback(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::Devices::IHdrVideoControl> : produce_base<D, Windows::Media::Devices::IHdrVideoControl>
{
    HRESULT __stdcall get_Supported(bool * value) noexcept override
    {
        try
        {
            *value = detach(shim().Supported());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_SupportedModes(abi_arg_out<Windows::Foundation::Collections::IVectorView<winrt::Windows::Media::Devices::HdrVideoMode>> value) noexcept override
    {
        try
        {
            *value = detach(shim().SupportedModes());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Mode(Windows::Media::Devices::HdrVideoMode * value) noexcept override
    {
        try
        {
            *value = detach(shim().Mode());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Mode(Windows::Media::Devices::HdrVideoMode value) noexcept override
    {
        try
        {
            shim().Mode(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::Devices::IIsoSpeedControl> : produce_base<D, Windows::Media::Devices::IIsoSpeedControl>
{
    HRESULT __stdcall get_Supported(bool * value) noexcept override
    {
        try
        {
            *value = detach(shim().Supported());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_SupportedPresets(abi_arg_out<Windows::Foundation::Collections::IVectorView<winrt::Windows::Media::Devices::IsoSpeedPreset>> value) noexcept override
    {
        try
        {
            *value = detach(shim().SupportedPresets());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Preset(Windows::Media::Devices::IsoSpeedPreset * value) noexcept override
    {
        try
        {
            *value = detach(shim().Preset());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_SetPresetAsync(Windows::Media::Devices::IsoSpeedPreset preset, abi_arg_out<Windows::Foundation::IAsyncAction> asyncInfo) noexcept override
    {
        try
        {
            *asyncInfo = detach(shim().SetPresetAsync(preset));
            return S_OK;
        }
        catch (...)
        {
            *asyncInfo = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::Devices::IIsoSpeedControl2> : produce_base<D, Windows::Media::Devices::IIsoSpeedControl2>
{
    HRESULT __stdcall get_Min(uint32_t * value) noexcept override
    {
        try
        {
            *value = detach(shim().Min());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Max(uint32_t * value) noexcept override
    {
        try
        {
            *value = detach(shim().Max());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Step(uint32_t * value) noexcept override
    {
        try
        {
            *value = detach(shim().Step());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Value(uint32_t * value) noexcept override
    {
        try
        {
            *value = detach(shim().Value());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_SetValueAsync(uint32_t isoSpeed, abi_arg_out<Windows::Foundation::IAsyncAction> asyncInfo) noexcept override
    {
        try
        {
            *asyncInfo = detach(shim().SetValueAsync(isoSpeed));
            return S_OK;
        }
        catch (...)
        {
            *asyncInfo = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Auto(bool * value) noexcept override
    {
        try
        {
            *value = detach(shim().Auto());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_SetAutoAsync(abi_arg_out<Windows::Foundation::IAsyncAction> asyncInfo) noexcept override
    {
        try
        {
            *asyncInfo = detach(shim().SetAutoAsync());
            return S_OK;
        }
        catch (...)
        {
            *asyncInfo = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::Devices::IKeypadPressedEventArgs> : produce_base<D, Windows::Media::Devices::IKeypadPressedEventArgs>
{
    HRESULT __stdcall get_TelephonyKey(Windows::Media::Devices::TelephonyKey * telephonyKey) noexcept override
    {
        try
        {
            *telephonyKey = detach(shim().TelephonyKey());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::Devices::ILowLagPhotoControl> : produce_base<D, Windows::Media::Devices::ILowLagPhotoControl>
{
    HRESULT __stdcall abi_GetHighestConcurrentFrameRate(abi_arg_in<Windows::Media::MediaProperties::IMediaEncodingProperties> captureProperties, abi_arg_out<Windows::Media::MediaProperties::IMediaRatio> value) noexcept override
    {
        try
        {
            *value = detach(shim().GetHighestConcurrentFrameRate(*reinterpret_cast<const Windows::Media::MediaProperties::IMediaEncodingProperties *>(&captureProperties)));
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_GetCurrentFrameRate(abi_arg_out<Windows::Media::MediaProperties::IMediaRatio> value) noexcept override
    {
        try
        {
            *value = detach(shim().GetCurrentFrameRate());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ThumbnailEnabled(bool * value) noexcept override
    {
        try
        {
            *value = detach(shim().ThumbnailEnabled());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_ThumbnailEnabled(bool value) noexcept override
    {
        try
        {
            shim().ThumbnailEnabled(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ThumbnailFormat(Windows::Media::MediaProperties::MediaThumbnailFormat * value) noexcept override
    {
        try
        {
            *value = detach(shim().ThumbnailFormat());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_ThumbnailFormat(Windows::Media::MediaProperties::MediaThumbnailFormat value) noexcept override
    {
        try
        {
            shim().ThumbnailFormat(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_DesiredThumbnailSize(uint32_t * value) noexcept override
    {
        try
        {
            *value = detach(shim().DesiredThumbnailSize());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_DesiredThumbnailSize(uint32_t value) noexcept override
    {
        try
        {
            shim().DesiredThumbnailSize(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_HardwareAcceleratedThumbnailSupported(uint32_t * value) noexcept override
    {
        try
        {
            *value = detach(shim().HardwareAcceleratedThumbnailSupported());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::Devices::ILowLagPhotoSequenceControl> : produce_base<D, Windows::Media::Devices::ILowLagPhotoSequenceControl>
{
    HRESULT __stdcall get_Supported(bool * value) noexcept override
    {
        try
        {
            *value = detach(shim().Supported());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_MaxPastPhotos(uint32_t * value) noexcept override
    {
        try
        {
            *value = detach(shim().MaxPastPhotos());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_MaxPhotosPerSecond(float * value) noexcept override
    {
        try
        {
            *value = detach(shim().MaxPhotosPerSecond());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_PastPhotoLimit(uint32_t * value) noexcept override
    {
        try
        {
            *value = detach(shim().PastPhotoLimit());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_PastPhotoLimit(uint32_t value) noexcept override
    {
        try
        {
            shim().PastPhotoLimit(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_PhotosPerSecondLimit(float * value) noexcept override
    {
        try
        {
            *value = detach(shim().PhotosPerSecondLimit());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_PhotosPerSecondLimit(float value) noexcept override
    {
        try
        {
            shim().PhotosPerSecondLimit(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_GetHighestConcurrentFrameRate(abi_arg_in<Windows::Media::MediaProperties::IMediaEncodingProperties> captureProperties, abi_arg_out<Windows::Media::MediaProperties::IMediaRatio> value) noexcept override
    {
        try
        {
            *value = detach(shim().GetHighestConcurrentFrameRate(*reinterpret_cast<const Windows::Media::MediaProperties::IMediaEncodingProperties *>(&captureProperties)));
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_GetCurrentFrameRate(abi_arg_out<Windows::Media::MediaProperties::IMediaRatio> value) noexcept override
    {
        try
        {
            *value = detach(shim().GetCurrentFrameRate());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ThumbnailEnabled(bool * value) noexcept override
    {
        try
        {
            *value = detach(shim().ThumbnailEnabled());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_ThumbnailEnabled(bool value) noexcept override
    {
        try
        {
            shim().ThumbnailEnabled(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ThumbnailFormat(Windows::Media::MediaProperties::MediaThumbnailFormat * value) noexcept override
    {
        try
        {
            *value = detach(shim().ThumbnailFormat());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_ThumbnailFormat(Windows::Media::MediaProperties::MediaThumbnailFormat value) noexcept override
    {
        try
        {
            shim().ThumbnailFormat(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_DesiredThumbnailSize(uint32_t * value) noexcept override
    {
        try
        {
            *value = detach(shim().DesiredThumbnailSize());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_DesiredThumbnailSize(uint32_t value) noexcept override
    {
        try
        {
            shim().DesiredThumbnailSize(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_HardwareAcceleratedThumbnailSupported(uint32_t * value) noexcept override
    {
        try
        {
            *value = detach(shim().HardwareAcceleratedThumbnailSupported());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::Devices::IMediaDeviceControl> : produce_base<D, Windows::Media::Devices::IMediaDeviceControl>
{
    HRESULT __stdcall get_Capabilities(abi_arg_out<Windows::Media::Devices::IMediaDeviceControlCapabilities> value) noexcept override
    {
        try
        {
            *value = detach(shim().Capabilities());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_TryGetValue(double * value, bool * succeeded) noexcept override
    {
        try
        {
            *succeeded = detach(shim().TryGetValue(*value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_TrySetValue(double value, bool * succeeded) noexcept override
    {
        try
        {
            *succeeded = detach(shim().TrySetValue(value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_TryGetAuto(bool * value, bool * succeeded) noexcept override
    {
        try
        {
            *succeeded = detach(shim().TryGetAuto(*value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_TrySetAuto(bool value, bool * succeeded) noexcept override
    {
        try
        {
            *succeeded = detach(shim().TrySetAuto(value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::Devices::IMediaDeviceControlCapabilities> : produce_base<D, Windows::Media::Devices::IMediaDeviceControlCapabilities>
{
    HRESULT __stdcall get_Supported(bool * value) noexcept override
    {
        try
        {
            *value = detach(shim().Supported());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Min(double * value) noexcept override
    {
        try
        {
            *value = detach(shim().Min());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Max(double * value) noexcept override
    {
        try
        {
            *value = detach(shim().Max());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Step(double * value) noexcept override
    {
        try
        {
            *value = detach(shim().Step());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Default(double * value) noexcept override
    {
        try
        {
            *value = detach(shim().Default());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_AutoModeSupported(bool * value) noexcept override
    {
        try
        {
            *value = detach(shim().AutoModeSupported());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::Devices::IMediaDeviceController> : produce_base<D, Windows::Media::Devices::IMediaDeviceController>
{
    HRESULT __stdcall abi_GetAvailableMediaStreamProperties(Windows::Media::Capture::MediaStreamType mediaStreamType, abi_arg_out<Windows::Foundation::Collections::IVectorView<Windows::Media::MediaProperties::IMediaEncodingProperties>> value) noexcept override
    {
        try
        {
            *value = detach(shim().GetAvailableMediaStreamProperties(mediaStreamType));
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_GetMediaStreamProperties(Windows::Media::Capture::MediaStreamType mediaStreamType, abi_arg_out<Windows::Media::MediaProperties::IMediaEncodingProperties> value) noexcept override
    {
        try
        {
            *value = detach(shim().GetMediaStreamProperties(mediaStreamType));
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_SetMediaStreamPropertiesAsync(Windows::Media::Capture::MediaStreamType mediaStreamType, abi_arg_in<Windows::Media::MediaProperties::IMediaEncodingProperties> mediaEncodingProperties, abi_arg_out<Windows::Foundation::IAsyncAction> asyncInfo) noexcept override
    {
        try
        {
            *asyncInfo = detach(shim().SetMediaStreamPropertiesAsync(mediaStreamType, *reinterpret_cast<const Windows::Media::MediaProperties::IMediaEncodingProperties *>(&mediaEncodingProperties)));
            return S_OK;
        }
        catch (...)
        {
            *asyncInfo = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::Devices::IMediaDeviceStatics> : produce_base<D, Windows::Media::Devices::IMediaDeviceStatics>
{
    HRESULT __stdcall abi_GetAudioCaptureSelector(abi_arg_out<hstring> selector) noexcept override
    {
        try
        {
            *selector = detach(shim().GetAudioCaptureSelector());
            return S_OK;
        }
        catch (...)
        {
            *selector = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_GetAudioRenderSelector(abi_arg_out<hstring> selector) noexcept override
    {
        try
        {
            *selector = detach(shim().GetAudioRenderSelector());
            return S_OK;
        }
        catch (...)
        {
            *selector = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_GetVideoCaptureSelector(abi_arg_out<hstring> selector) noexcept override
    {
        try
        {
            *selector = detach(shim().GetVideoCaptureSelector());
            return S_OK;
        }
        catch (...)
        {
            *selector = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_GetDefaultAudioCaptureId(Windows::Media::Devices::AudioDeviceRole role, abi_arg_out<hstring> deviceId) noexcept override
    {
        try
        {
            *deviceId = detach(shim().GetDefaultAudioCaptureId(role));
            return S_OK;
        }
        catch (...)
        {
            *deviceId = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_GetDefaultAudioRenderId(Windows::Media::Devices::AudioDeviceRole role, abi_arg_out<hstring> deviceId) noexcept override
    {
        try
        {
            *deviceId = detach(shim().GetDefaultAudioRenderId(role));
            return S_OK;
        }
        catch (...)
        {
            *deviceId = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_DefaultAudioCaptureDeviceChanged(abi_arg_in<Windows::Foundation::TypedEventHandler<Windows::IInspectable, Windows::Media::Devices::DefaultAudioCaptureDeviceChangedEventArgs>> handler, event_token * cookie) noexcept override
    {
        try
        {
            *cookie = detach(shim().DefaultAudioCaptureDeviceChanged(*reinterpret_cast<const Windows::Foundation::TypedEventHandler<Windows::IInspectable, Windows::Media::Devices::DefaultAudioCaptureDeviceChangedEventArgs> *>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_DefaultAudioCaptureDeviceChanged(event_token cookie) noexcept override
    {
        try
        {
            shim().DefaultAudioCaptureDeviceChanged(cookie);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_DefaultAudioRenderDeviceChanged(abi_arg_in<Windows::Foundation::TypedEventHandler<Windows::IInspectable, Windows::Media::Devices::DefaultAudioRenderDeviceChangedEventArgs>> handler, event_token * cookie) noexcept override
    {
        try
        {
            *cookie = detach(shim().DefaultAudioRenderDeviceChanged(*reinterpret_cast<const Windows::Foundation::TypedEventHandler<Windows::IInspectable, Windows::Media::Devices::DefaultAudioRenderDeviceChangedEventArgs> *>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_DefaultAudioRenderDeviceChanged(event_token cookie) noexcept override
    {
        try
        {
            shim().DefaultAudioRenderDeviceChanged(cookie);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::Devices::IOpticalImageStabilizationControl> : produce_base<D, Windows::Media::Devices::IOpticalImageStabilizationControl>
{
    HRESULT __stdcall get_Supported(bool * value) noexcept override
    {
        try
        {
            *value = detach(shim().Supported());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_SupportedModes(abi_arg_out<Windows::Foundation::Collections::IVectorView<winrt::Windows::Media::Devices::OpticalImageStabilizationMode>> value) noexcept override
    {
        try
        {
            *value = detach(shim().SupportedModes());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Mode(Windows::Media::Devices::OpticalImageStabilizationMode * value) noexcept override
    {
        try
        {
            *value = detach(shim().Mode());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Mode(Windows::Media::Devices::OpticalImageStabilizationMode value) noexcept override
    {
        try
        {
            shim().Mode(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::Devices::IPhotoConfirmationControl> : produce_base<D, Windows::Media::Devices::IPhotoConfirmationControl>
{
    HRESULT __stdcall get_Supported(bool * pbSupported) noexcept override
    {
        try
        {
            *pbSupported = detach(shim().Supported());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Enabled(bool * value) noexcept override
    {
        try
        {
            *value = detach(shim().Enabled());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Enabled(bool value) noexcept override
    {
        try
        {
            shim().Enabled(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_PixelFormat(Windows::Media::MediaProperties::MediaPixelFormat * format) noexcept override
    {
        try
        {
            *format = detach(shim().PixelFormat());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_PixelFormat(Windows::Media::MediaProperties::MediaPixelFormat format) noexcept override
    {
        try
        {
            shim().PixelFormat(format);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::Devices::IRedialRequestedEventArgs> : produce_base<D, Windows::Media::Devices::IRedialRequestedEventArgs>
{
    HRESULT __stdcall abi_Handled() noexcept override
    {
        try
        {
            shim().Handled();
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::Devices::IRegionOfInterest> : produce_base<D, Windows::Media::Devices::IRegionOfInterest>
{
    HRESULT __stdcall get_AutoFocusEnabled(bool * value) noexcept override
    {
        try
        {
            *value = detach(shim().AutoFocusEnabled());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_AutoFocusEnabled(bool value) noexcept override
    {
        try
        {
            shim().AutoFocusEnabled(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_AutoWhiteBalanceEnabled(bool * value) noexcept override
    {
        try
        {
            *value = detach(shim().AutoWhiteBalanceEnabled());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_AutoWhiteBalanceEnabled(bool value) noexcept override
    {
        try
        {
            shim().AutoWhiteBalanceEnabled(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_AutoExposureEnabled(bool * value) noexcept override
    {
        try
        {
            *value = detach(shim().AutoExposureEnabled());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_AutoExposureEnabled(bool value) noexcept override
    {
        try
        {
            shim().AutoExposureEnabled(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Bounds(abi_arg_out<Windows::Foundation::Rect> value) noexcept override
    {
        try
        {
            *value = detach(shim().Bounds());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Bounds(abi_arg_in<Windows::Foundation::Rect> value) noexcept override
    {
        try
        {
            shim().Bounds(*reinterpret_cast<const Windows::Foundation::Rect *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::Devices::IRegionOfInterest2> : produce_base<D, Windows::Media::Devices::IRegionOfInterest2>
{
    HRESULT __stdcall get_Type(Windows::Media::Devices::RegionOfInterestType * value) noexcept override
    {
        try
        {
            *value = detach(shim().Type());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Type(Windows::Media::Devices::RegionOfInterestType value) noexcept override
    {
        try
        {
            shim().Type(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_BoundsNormalized(bool * value) noexcept override
    {
        try
        {
            *value = detach(shim().BoundsNormalized());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_BoundsNormalized(bool value) noexcept override
    {
        try
        {
            shim().BoundsNormalized(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Weight(uint32_t * value) noexcept override
    {
        try
        {
            *value = detach(shim().Weight());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Weight(uint32_t value) noexcept override
    {
        try
        {
            shim().Weight(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::Devices::IRegionsOfInterestControl> : produce_base<D, Windows::Media::Devices::IRegionsOfInterestControl>
{
    HRESULT __stdcall get_MaxRegions(uint32_t * value) noexcept override
    {
        try
        {
            *value = detach(shim().MaxRegions());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_SetRegionsAsync(abi_arg_in<Windows::Foundation::Collections::IIterable<Windows::Media::Devices::RegionOfInterest>> regions, abi_arg_out<Windows::Foundation::IAsyncAction> asyncInfo) noexcept override
    {
        try
        {
            *asyncInfo = detach(shim().SetRegionsAsync(*reinterpret_cast<const Windows::Foundation::Collections::IIterable<Windows::Media::Devices::RegionOfInterest> *>(&regions)));
            return S_OK;
        }
        catch (...)
        {
            *asyncInfo = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_SetRegionsWithLockAsync(abi_arg_in<Windows::Foundation::Collections::IIterable<Windows::Media::Devices::RegionOfInterest>> regions, bool lockValues, abi_arg_out<Windows::Foundation::IAsyncAction> asyncInfo) noexcept override
    {
        try
        {
            *asyncInfo = detach(shim().SetRegionsAsync(*reinterpret_cast<const Windows::Foundation::Collections::IIterable<Windows::Media::Devices::RegionOfInterest> *>(&regions), lockValues));
            return S_OK;
        }
        catch (...)
        {
            *asyncInfo = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_ClearRegionsAsync(abi_arg_out<Windows::Foundation::IAsyncAction> asyncInfo) noexcept override
    {
        try
        {
            *asyncInfo = detach(shim().ClearRegionsAsync());
            return S_OK;
        }
        catch (...)
        {
            *asyncInfo = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_AutoFocusSupported(bool * value) noexcept override
    {
        try
        {
            *value = detach(shim().AutoFocusSupported());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_AutoWhiteBalanceSupported(bool * value) noexcept override
    {
        try
        {
            *value = detach(shim().AutoWhiteBalanceSupported());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_AutoExposureSupported(bool * value) noexcept override
    {
        try
        {
            *value = detach(shim().AutoExposureSupported());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::Devices::ISceneModeControl> : produce_base<D, Windows::Media::Devices::ISceneModeControl>
{
    HRESULT __stdcall get_SupportedModes(abi_arg_out<Windows::Foundation::Collections::IVectorView<winrt::Windows::Media::Devices::CaptureSceneMode>> value) noexcept override
    {
        try
        {
            *value = detach(shim().SupportedModes());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Value(Windows::Media::Devices::CaptureSceneMode * value) noexcept override
    {
        try
        {
            *value = detach(shim().Value());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_SetValueAsync(Windows::Media::Devices::CaptureSceneMode sceneMode, abi_arg_out<Windows::Foundation::IAsyncAction> asyncInfo) noexcept override
    {
        try
        {
            *asyncInfo = detach(shim().SetValueAsync(sceneMode));
            return S_OK;
        }
        catch (...)
        {
            *asyncInfo = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::Devices::ITorchControl> : produce_base<D, Windows::Media::Devices::ITorchControl>
{
    HRESULT __stdcall get_Supported(bool * value) noexcept override
    {
        try
        {
            *value = detach(shim().Supported());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_PowerSupported(bool * value) noexcept override
    {
        try
        {
            *value = detach(shim().PowerSupported());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Enabled(bool * value) noexcept override
    {
        try
        {
            *value = detach(shim().Enabled());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Enabled(bool value) noexcept override
    {
        try
        {
            shim().Enabled(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_PowerPercent(float * value) noexcept override
    {
        try
        {
            *value = detach(shim().PowerPercent());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_PowerPercent(float value) noexcept override
    {
        try
        {
            shim().PowerPercent(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::Devices::IVideoDeviceController> : produce_base<D, Windows::Media::Devices::IVideoDeviceController>
{
    HRESULT __stdcall get_Brightness(abi_arg_out<Windows::Media::Devices::IMediaDeviceControl> value) noexcept override
    {
        try
        {
            *value = detach(shim().Brightness());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Contrast(abi_arg_out<Windows::Media::Devices::IMediaDeviceControl> value) noexcept override
    {
        try
        {
            *value = detach(shim().Contrast());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Hue(abi_arg_out<Windows::Media::Devices::IMediaDeviceControl> value) noexcept override
    {
        try
        {
            *value = detach(shim().Hue());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_WhiteBalance(abi_arg_out<Windows::Media::Devices::IMediaDeviceControl> value) noexcept override
    {
        try
        {
            *value = detach(shim().WhiteBalance());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_BacklightCompensation(abi_arg_out<Windows::Media::Devices::IMediaDeviceControl> value) noexcept override
    {
        try
        {
            *value = detach(shim().BacklightCompensation());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Pan(abi_arg_out<Windows::Media::Devices::IMediaDeviceControl> value) noexcept override
    {
        try
        {
            *value = detach(shim().Pan());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Tilt(abi_arg_out<Windows::Media::Devices::IMediaDeviceControl> value) noexcept override
    {
        try
        {
            *value = detach(shim().Tilt());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Zoom(abi_arg_out<Windows::Media::Devices::IMediaDeviceControl> value) noexcept override
    {
        try
        {
            *value = detach(shim().Zoom());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Roll(abi_arg_out<Windows::Media::Devices::IMediaDeviceControl> value) noexcept override
    {
        try
        {
            *value = detach(shim().Roll());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Exposure(abi_arg_out<Windows::Media::Devices::IMediaDeviceControl> value) noexcept override
    {
        try
        {
            *value = detach(shim().Exposure());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Focus(abi_arg_out<Windows::Media::Devices::IMediaDeviceControl> value) noexcept override
    {
        try
        {
            *value = detach(shim().Focus());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_TrySetPowerlineFrequency(Windows::Media::Capture::PowerlineFrequency value, bool * succeeded) noexcept override
    {
        try
        {
            *succeeded = detach(shim().TrySetPowerlineFrequency(value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_TryGetPowerlineFrequency(Windows::Media::Capture::PowerlineFrequency * value, bool * succeeded) noexcept override
    {
        try
        {
            *succeeded = detach(shim().TryGetPowerlineFrequency(*value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::Devices::IWhiteBalanceControl> : produce_base<D, Windows::Media::Devices::IWhiteBalanceControl>
{
    HRESULT __stdcall get_Supported(bool * value) noexcept override
    {
        try
        {
            *value = detach(shim().Supported());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Preset(Windows::Media::Devices::ColorTemperaturePreset * value) noexcept override
    {
        try
        {
            *value = detach(shim().Preset());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_SetPresetAsync(Windows::Media::Devices::ColorTemperaturePreset preset, abi_arg_out<Windows::Foundation::IAsyncAction> asyncInfo) noexcept override
    {
        try
        {
            *asyncInfo = detach(shim().SetPresetAsync(preset));
            return S_OK;
        }
        catch (...)
        {
            *asyncInfo = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Min(uint32_t * value) noexcept override
    {
        try
        {
            *value = detach(shim().Min());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Max(uint32_t * value) noexcept override
    {
        try
        {
            *value = detach(shim().Max());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Step(uint32_t * value) noexcept override
    {
        try
        {
            *value = detach(shim().Step());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Value(uint32_t * value) noexcept override
    {
        try
        {
            *value = detach(shim().Value());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_SetValueAsync(uint32_t temperature, abi_arg_out<Windows::Foundation::IAsyncAction> asyncInfo) noexcept override
    {
        try
        {
            *asyncInfo = detach(shim().SetValueAsync(temperature));
            return S_OK;
        }
        catch (...)
        {
            *asyncInfo = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::Devices::IZoomControl> : produce_base<D, Windows::Media::Devices::IZoomControl>
{
    HRESULT __stdcall get_Supported(bool * value) noexcept override
    {
        try
        {
            *value = detach(shim().Supported());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Min(float * value) noexcept override
    {
        try
        {
            *value = detach(shim().Min());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Max(float * value) noexcept override
    {
        try
        {
            *value = detach(shim().Max());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Step(float * value) noexcept override
    {
        try
        {
            *value = detach(shim().Step());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Value(float * value) noexcept override
    {
        try
        {
            *value = detach(shim().Value());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Value(float value) noexcept override
    {
        try
        {
            shim().Value(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::Devices::IZoomControl2> : produce_base<D, Windows::Media::Devices::IZoomControl2>
{
    HRESULT __stdcall get_SupportedModes(abi_arg_out<Windows::Foundation::Collections::IVectorView<winrt::Windows::Media::Devices::ZoomTransitionMode>> value) noexcept override
    {
        try
        {
            *value = detach(shim().SupportedModes());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Mode(Windows::Media::Devices::ZoomTransitionMode * value) noexcept override
    {
        try
        {
            *value = detach(shim().Mode());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_Configure(abi_arg_in<Windows::Media::Devices::IZoomSettings> settings) noexcept override
    {
        try
        {
            shim().Configure(*reinterpret_cast<const Windows::Media::Devices::ZoomSettings *>(&settings));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::Devices::IZoomSettings> : produce_base<D, Windows::Media::Devices::IZoomSettings>
{
    HRESULT __stdcall get_Mode(Windows::Media::Devices::ZoomTransitionMode * value) noexcept override
    {
        try
        {
            *value = detach(shim().Mode());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Mode(Windows::Media::Devices::ZoomTransitionMode value) noexcept override
    {
        try
        {
            shim().Mode(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Value(float * value) noexcept override
    {
        try
        {
            *value = detach(shim().Value());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Value(float value) noexcept override
    {
        try
        {
            shim().Value(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

}

namespace Windows::Media::Devices {

template <typename D> hstring impl_IDefaultAudioDeviceChangedEventArgs<D>::Id() const
{
    hstring value;
    check_hresult(shim()->get_Id(put(value)));
    return value;
}

template <typename D> Windows::Media::Devices::AudioDeviceRole impl_IDefaultAudioDeviceChangedEventArgs<D>::Role() const
{
    Windows::Media::Devices::AudioDeviceRole value {};
    check_hresult(shim()->get_Role(&value));
    return value;
}

template <typename D> hstring impl_IMediaDeviceStatics<D>::GetAudioCaptureSelector() const
{
    hstring selector;
    check_hresult(shim()->abi_GetAudioCaptureSelector(put(selector)));
    return selector;
}

template <typename D> hstring impl_IMediaDeviceStatics<D>::GetAudioRenderSelector() const
{
    hstring selector;
    check_hresult(shim()->abi_GetAudioRenderSelector(put(selector)));
    return selector;
}

template <typename D> hstring impl_IMediaDeviceStatics<D>::GetVideoCaptureSelector() const
{
    hstring selector;
    check_hresult(shim()->abi_GetVideoCaptureSelector(put(selector)));
    return selector;
}

template <typename D> hstring impl_IMediaDeviceStatics<D>::GetDefaultAudioCaptureId(Windows::Media::Devices::AudioDeviceRole role) const
{
    hstring deviceId;
    check_hresult(shim()->abi_GetDefaultAudioCaptureId(role, put(deviceId)));
    return deviceId;
}

template <typename D> hstring impl_IMediaDeviceStatics<D>::GetDefaultAudioRenderId(Windows::Media::Devices::AudioDeviceRole role) const
{
    hstring deviceId;
    check_hresult(shim()->abi_GetDefaultAudioRenderId(role, put(deviceId)));
    return deviceId;
}

template <typename D> event_token impl_IMediaDeviceStatics<D>::DefaultAudioCaptureDeviceChanged(const Windows::Foundation::TypedEventHandler<Windows::IInspectable, Windows::Media::Devices::DefaultAudioCaptureDeviceChangedEventArgs> & handler) const
{
    event_token cookie {};
    check_hresult(shim()->add_DefaultAudioCaptureDeviceChanged(get(handler), &cookie));
    return cookie;
}

template <typename D> event_revoker<IMediaDeviceStatics> impl_IMediaDeviceStatics<D>::DefaultAudioCaptureDeviceChanged(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::IInspectable, Windows::Media::Devices::DefaultAudioCaptureDeviceChangedEventArgs> & handler) const
{
    return impl::make_event_revoker<D, IMediaDeviceStatics>(this, &ABI::Windows::Media::Devices::IMediaDeviceStatics::remove_DefaultAudioCaptureDeviceChanged, DefaultAudioCaptureDeviceChanged(handler));
}

template <typename D> void impl_IMediaDeviceStatics<D>::DefaultAudioCaptureDeviceChanged(event_token cookie) const
{
    check_hresult(shim()->remove_DefaultAudioCaptureDeviceChanged(cookie));
}

template <typename D> event_token impl_IMediaDeviceStatics<D>::DefaultAudioRenderDeviceChanged(const Windows::Foundation::TypedEventHandler<Windows::IInspectable, Windows::Media::Devices::DefaultAudioRenderDeviceChangedEventArgs> & handler) const
{
    event_token cookie {};
    check_hresult(shim()->add_DefaultAudioRenderDeviceChanged(get(handler), &cookie));
    return cookie;
}

template <typename D> event_revoker<IMediaDeviceStatics> impl_IMediaDeviceStatics<D>::DefaultAudioRenderDeviceChanged(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::IInspectable, Windows::Media::Devices::DefaultAudioRenderDeviceChangedEventArgs> & handler) const
{
    return impl::make_event_revoker<D, IMediaDeviceStatics>(this, &ABI::Windows::Media::Devices::IMediaDeviceStatics::remove_DefaultAudioRenderDeviceChanged, DefaultAudioRenderDeviceChanged(handler));
}

template <typename D> void impl_IMediaDeviceStatics<D>::DefaultAudioRenderDeviceChanged(event_token cookie) const
{
    check_hresult(shim()->remove_DefaultAudioRenderDeviceChanged(cookie));
}

template <typename D> Windows::Foundation::Collections::IVectorView<winrt::Windows::Media::Devices::CaptureSceneMode> impl_ISceneModeControl<D>::SupportedModes() const
{
    Windows::Foundation::Collections::IVectorView<winrt::Windows::Media::Devices::CaptureSceneMode> value;
    check_hresult(shim()->get_SupportedModes(put(value)));
    return value;
}

template <typename D> Windows::Media::Devices::CaptureSceneMode impl_ISceneModeControl<D>::Value() const
{
    Windows::Media::Devices::CaptureSceneMode value {};
    check_hresult(shim()->get_Value(&value));
    return value;
}

template <typename D> Windows::Foundation::IAsyncAction impl_ISceneModeControl<D>::SetValueAsync(Windows::Media::Devices::CaptureSceneMode sceneMode) const
{
    Windows::Foundation::IAsyncAction asyncInfo;
    check_hresult(shim()->abi_SetValueAsync(sceneMode, put(asyncInfo)));
    return asyncInfo;
}

template <typename D> bool impl_ITorchControl<D>::Supported() const
{
    bool value {};
    check_hresult(shim()->get_Supported(&value));
    return value;
}

template <typename D> bool impl_ITorchControl<D>::PowerSupported() const
{
    bool value {};
    check_hresult(shim()->get_PowerSupported(&value));
    return value;
}

template <typename D> bool impl_ITorchControl<D>::Enabled() const
{
    bool value {};
    check_hresult(shim()->get_Enabled(&value));
    return value;
}

template <typename D> void impl_ITorchControl<D>::Enabled(bool value) const
{
    check_hresult(shim()->put_Enabled(value));
}

template <typename D> float impl_ITorchControl<D>::PowerPercent() const
{
    float value {};
    check_hresult(shim()->get_PowerPercent(&value));
    return value;
}

template <typename D> void impl_ITorchControl<D>::PowerPercent(float value) const
{
    check_hresult(shim()->put_PowerPercent(value));
}

template <typename D> bool impl_IFlashControl<D>::Supported() const
{
    bool value {};
    check_hresult(shim()->get_Supported(&value));
    return value;
}

template <typename D> bool impl_IFlashControl<D>::PowerSupported() const
{
    bool value {};
    check_hresult(shim()->get_PowerSupported(&value));
    return value;
}

template <typename D> bool impl_IFlashControl<D>::RedEyeReductionSupported() const
{
    bool value {};
    check_hresult(shim()->get_RedEyeReductionSupported(&value));
    return value;
}

template <typename D> bool impl_IFlashControl<D>::Enabled() const
{
    bool value {};
    check_hresult(shim()->get_Enabled(&value));
    return value;
}

template <typename D> void impl_IFlashControl<D>::Enabled(bool value) const
{
    check_hresult(shim()->put_Enabled(value));
}

template <typename D> bool impl_IFlashControl<D>::Auto() const
{
    bool value {};
    check_hresult(shim()->get_Auto(&value));
    return value;
}

template <typename D> void impl_IFlashControl<D>::Auto(bool value) const
{
    check_hresult(shim()->put_Auto(value));
}

template <typename D> bool impl_IFlashControl<D>::RedEyeReduction() const
{
    bool value {};
    check_hresult(shim()->get_RedEyeReduction(&value));
    return value;
}

template <typename D> void impl_IFlashControl<D>::RedEyeReduction(bool value) const
{
    check_hresult(shim()->put_RedEyeReduction(value));
}

template <typename D> float impl_IFlashControl<D>::PowerPercent() const
{
    float value {};
    check_hresult(shim()->get_PowerPercent(&value));
    return value;
}

template <typename D> void impl_IFlashControl<D>::PowerPercent(float value) const
{
    check_hresult(shim()->put_PowerPercent(value));
}

template <typename D> bool impl_IFlashControl2<D>::AssistantLightSupported() const
{
    bool value {};
    check_hresult(shim()->get_AssistantLightSupported(&value));
    return value;
}

template <typename D> bool impl_IFlashControl2<D>::AssistantLightEnabled() const
{
    bool value {};
    check_hresult(shim()->get_AssistantLightEnabled(&value));
    return value;
}

template <typename D> void impl_IFlashControl2<D>::AssistantLightEnabled(bool value) const
{
    check_hresult(shim()->put_AssistantLightEnabled(value));
}

template <typename D> bool impl_IExposureCompensationControl<D>::Supported() const
{
    bool value {};
    check_hresult(shim()->get_Supported(&value));
    return value;
}

template <typename D> float impl_IExposureCompensationControl<D>::Min() const
{
    float value {};
    check_hresult(shim()->get_Min(&value));
    return value;
}

template <typename D> float impl_IExposureCompensationControl<D>::Max() const
{
    float value {};
    check_hresult(shim()->get_Max(&value));
    return value;
}

template <typename D> float impl_IExposureCompensationControl<D>::Step() const
{
    float value {};
    check_hresult(shim()->get_Step(&value));
    return value;
}

template <typename D> float impl_IExposureCompensationControl<D>::Value() const
{
    float value {};
    check_hresult(shim()->get_Value(&value));
    return value;
}

template <typename D> Windows::Foundation::IAsyncAction impl_IExposureCompensationControl<D>::SetValueAsync(float value) const
{
    Windows::Foundation::IAsyncAction asyncInfo;
    check_hresult(shim()->abi_SetValueAsync(value, put(asyncInfo)));
    return asyncInfo;
}

template <typename D> bool impl_IIsoSpeedControl<D>::Supported() const
{
    bool value {};
    check_hresult(shim()->get_Supported(&value));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVectorView<winrt::Windows::Media::Devices::IsoSpeedPreset> impl_IIsoSpeedControl<D>::SupportedPresets() const
{
    Windows::Foundation::Collections::IVectorView<winrt::Windows::Media::Devices::IsoSpeedPreset> value;
    check_hresult(shim()->get_SupportedPresets(put(value)));
    return value;
}

template <typename D> Windows::Media::Devices::IsoSpeedPreset impl_IIsoSpeedControl<D>::Preset() const
{
    Windows::Media::Devices::IsoSpeedPreset value {};
    check_hresult(shim()->get_Preset(&value));
    return value;
}

template <typename D> Windows::Foundation::IAsyncAction impl_IIsoSpeedControl<D>::SetPresetAsync(Windows::Media::Devices::IsoSpeedPreset preset) const
{
    Windows::Foundation::IAsyncAction asyncInfo;
    check_hresult(shim()->abi_SetPresetAsync(preset, put(asyncInfo)));
    return asyncInfo;
}

template <typename D> uint32_t impl_IIsoSpeedControl2<D>::Min() const
{
    uint32_t value {};
    check_hresult(shim()->get_Min(&value));
    return value;
}

template <typename D> uint32_t impl_IIsoSpeedControl2<D>::Max() const
{
    uint32_t value {};
    check_hresult(shim()->get_Max(&value));
    return value;
}

template <typename D> uint32_t impl_IIsoSpeedControl2<D>::Step() const
{
    uint32_t value {};
    check_hresult(shim()->get_Step(&value));
    return value;
}

template <typename D> uint32_t impl_IIsoSpeedControl2<D>::Value() const
{
    uint32_t value {};
    check_hresult(shim()->get_Value(&value));
    return value;
}

template <typename D> Windows::Foundation::IAsyncAction impl_IIsoSpeedControl2<D>::SetValueAsync(uint32_t isoSpeed) const
{
    Windows::Foundation::IAsyncAction asyncInfo;
    check_hresult(shim()->abi_SetValueAsync(isoSpeed, put(asyncInfo)));
    return asyncInfo;
}

template <typename D> bool impl_IIsoSpeedControl2<D>::Auto() const
{
    bool value {};
    check_hresult(shim()->get_Auto(&value));
    return value;
}

template <typename D> Windows::Foundation::IAsyncAction impl_IIsoSpeedControl2<D>::SetAutoAsync() const
{
    Windows::Foundation::IAsyncAction asyncInfo;
    check_hresult(shim()->abi_SetAutoAsync(put(asyncInfo)));
    return asyncInfo;
}

template <typename D> bool impl_IWhiteBalanceControl<D>::Supported() const
{
    bool value {};
    check_hresult(shim()->get_Supported(&value));
    return value;
}

template <typename D> Windows::Media::Devices::ColorTemperaturePreset impl_IWhiteBalanceControl<D>::Preset() const
{
    Windows::Media::Devices::ColorTemperaturePreset value {};
    check_hresult(shim()->get_Preset(&value));
    return value;
}

template <typename D> Windows::Foundation::IAsyncAction impl_IWhiteBalanceControl<D>::SetPresetAsync(Windows::Media::Devices::ColorTemperaturePreset preset) const
{
    Windows::Foundation::IAsyncAction asyncInfo;
    check_hresult(shim()->abi_SetPresetAsync(preset, put(asyncInfo)));
    return asyncInfo;
}

template <typename D> uint32_t impl_IWhiteBalanceControl<D>::Min() const
{
    uint32_t value {};
    check_hresult(shim()->get_Min(&value));
    return value;
}

template <typename D> uint32_t impl_IWhiteBalanceControl<D>::Max() const
{
    uint32_t value {};
    check_hresult(shim()->get_Max(&value));
    return value;
}

template <typename D> uint32_t impl_IWhiteBalanceControl<D>::Step() const
{
    uint32_t value {};
    check_hresult(shim()->get_Step(&value));
    return value;
}

template <typename D> uint32_t impl_IWhiteBalanceControl<D>::Value() const
{
    uint32_t value {};
    check_hresult(shim()->get_Value(&value));
    return value;
}

template <typename D> Windows::Foundation::IAsyncAction impl_IWhiteBalanceControl<D>::SetValueAsync(uint32_t temperature) const
{
    Windows::Foundation::IAsyncAction asyncInfo;
    check_hresult(shim()->abi_SetValueAsync(temperature, put(asyncInfo)));
    return asyncInfo;
}

template <typename D> bool impl_IExposureControl<D>::Supported() const
{
    bool value {};
    check_hresult(shim()->get_Supported(&value));
    return value;
}

template <typename D> bool impl_IExposureControl<D>::Auto() const
{
    bool value {};
    check_hresult(shim()->get_Auto(&value));
    return value;
}

template <typename D> Windows::Foundation::IAsyncAction impl_IExposureControl<D>::SetAutoAsync(bool value) const
{
    Windows::Foundation::IAsyncAction asyncInfo;
    check_hresult(shim()->abi_SetAutoAsync(value, put(asyncInfo)));
    return asyncInfo;
}

template <typename D> Windows::Foundation::TimeSpan impl_IExposureControl<D>::Min() const
{
    Windows::Foundation::TimeSpan value {};
    check_hresult(shim()->get_Min(put(value)));
    return value;
}

template <typename D> Windows::Foundation::TimeSpan impl_IExposureControl<D>::Max() const
{
    Windows::Foundation::TimeSpan value {};
    check_hresult(shim()->get_Max(put(value)));
    return value;
}

template <typename D> Windows::Foundation::TimeSpan impl_IExposureControl<D>::Step() const
{
    Windows::Foundation::TimeSpan value {};
    check_hresult(shim()->get_Step(put(value)));
    return value;
}

template <typename D> Windows::Foundation::TimeSpan impl_IExposureControl<D>::Value() const
{
    Windows::Foundation::TimeSpan value {};
    check_hresult(shim()->get_Value(put(value)));
    return value;
}

template <typename D> Windows::Foundation::IAsyncAction impl_IExposureControl<D>::SetValueAsync(const Windows::Foundation::TimeSpan & shutterDuration) const
{
    Windows::Foundation::IAsyncAction asyncInfo;
    check_hresult(shim()->abi_SetValueAsync(get(shutterDuration), put(asyncInfo)));
    return asyncInfo;
}

template <typename D> Windows::Media::Devices::ZoomTransitionMode impl_IZoomSettings<D>::Mode() const
{
    Windows::Media::Devices::ZoomTransitionMode value {};
    check_hresult(shim()->get_Mode(&value));
    return value;
}

template <typename D> void impl_IZoomSettings<D>::Mode(Windows::Media::Devices::ZoomTransitionMode value) const
{
    check_hresult(shim()->put_Mode(value));
}

template <typename D> float impl_IZoomSettings<D>::Value() const
{
    float value {};
    check_hresult(shim()->get_Value(&value));
    return value;
}

template <typename D> void impl_IZoomSettings<D>::Value(float value) const
{
    check_hresult(shim()->put_Value(value));
}

template <typename D> bool impl_IZoomControl<D>::Supported() const
{
    bool value {};
    check_hresult(shim()->get_Supported(&value));
    return value;
}

template <typename D> float impl_IZoomControl<D>::Min() const
{
    float value {};
    check_hresult(shim()->get_Min(&value));
    return value;
}

template <typename D> float impl_IZoomControl<D>::Max() const
{
    float value {};
    check_hresult(shim()->get_Max(&value));
    return value;
}

template <typename D> float impl_IZoomControl<D>::Step() const
{
    float value {};
    check_hresult(shim()->get_Step(&value));
    return value;
}

template <typename D> float impl_IZoomControl<D>::Value() const
{
    float value {};
    check_hresult(shim()->get_Value(&value));
    return value;
}

template <typename D> void impl_IZoomControl<D>::Value(float value) const
{
    check_hresult(shim()->put_Value(value));
}

template <typename D> Windows::Foundation::Collections::IVectorView<winrt::Windows::Media::Devices::ZoomTransitionMode> impl_IZoomControl2<D>::SupportedModes() const
{
    Windows::Foundation::Collections::IVectorView<winrt::Windows::Media::Devices::ZoomTransitionMode> value;
    check_hresult(shim()->get_SupportedModes(put(value)));
    return value;
}

template <typename D> Windows::Media::Devices::ZoomTransitionMode impl_IZoomControl2<D>::Mode() const
{
    Windows::Media::Devices::ZoomTransitionMode value {};
    check_hresult(shim()->get_Mode(&value));
    return value;
}

template <typename D> void impl_IZoomControl2<D>::Configure(const Windows::Media::Devices::ZoomSettings & settings) const
{
    check_hresult(shim()->abi_Configure(get(settings)));
}

template <typename D> Windows::Media::Devices::FocusMode impl_IFocusSettings<D>::Mode() const
{
    Windows::Media::Devices::FocusMode value {};
    check_hresult(shim()->get_Mode(&value));
    return value;
}

template <typename D> void impl_IFocusSettings<D>::Mode(Windows::Media::Devices::FocusMode value) const
{
    check_hresult(shim()->put_Mode(value));
}

template <typename D> Windows::Media::Devices::AutoFocusRange impl_IFocusSettings<D>::AutoFocusRange() const
{
    Windows::Media::Devices::AutoFocusRange value {};
    check_hresult(shim()->get_AutoFocusRange(&value));
    return value;
}

template <typename D> void impl_IFocusSettings<D>::AutoFocusRange(Windows::Media::Devices::AutoFocusRange value) const
{
    check_hresult(shim()->put_AutoFocusRange(value));
}

template <typename D> Windows::Foundation::IReference<uint32_t> impl_IFocusSettings<D>::Value() const
{
    Windows::Foundation::IReference<uint32_t> value;
    check_hresult(shim()->get_Value(put(value)));
    return value;
}

template <typename D> void impl_IFocusSettings<D>::Value(const Windows::Foundation::IReference<uint32_t> & value) const
{
    check_hresult(shim()->put_Value(get(value)));
}

template <typename D> Windows::Foundation::IReference<winrt::Windows::Media::Devices::ManualFocusDistance> impl_IFocusSettings<D>::Distance() const
{
    Windows::Foundation::IReference<winrt::Windows::Media::Devices::ManualFocusDistance> value;
    check_hresult(shim()->get_Distance(put(value)));
    return value;
}

template <typename D> void impl_IFocusSettings<D>::Distance(const Windows::Foundation::IReference<winrt::Windows::Media::Devices::ManualFocusDistance> & value) const
{
    check_hresult(shim()->put_Distance(get(value)));
}

template <typename D> bool impl_IFocusSettings<D>::WaitForFocus() const
{
    bool value {};
    check_hresult(shim()->get_WaitForFocus(&value));
    return value;
}

template <typename D> void impl_IFocusSettings<D>::WaitForFocus(bool value) const
{
    check_hresult(shim()->put_WaitForFocus(value));
}

template <typename D> bool impl_IFocusSettings<D>::DisableDriverFallback() const
{
    bool value {};
    check_hresult(shim()->get_DisableDriverFallback(&value));
    return value;
}

template <typename D> void impl_IFocusSettings<D>::DisableDriverFallback(bool value) const
{
    check_hresult(shim()->put_DisableDriverFallback(value));
}

template <typename D> bool impl_IFocusControl<D>::Supported() const
{
    bool value {};
    check_hresult(shim()->get_Supported(&value));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVectorView<winrt::Windows::Media::Devices::FocusPreset> impl_IFocusControl<D>::SupportedPresets() const
{
    Windows::Foundation::Collections::IVectorView<winrt::Windows::Media::Devices::FocusPreset> value;
    check_hresult(shim()->get_SupportedPresets(put(value)));
    return value;
}

template <typename D> Windows::Media::Devices::FocusPreset impl_IFocusControl<D>::Preset() const
{
    Windows::Media::Devices::FocusPreset value {};
    check_hresult(shim()->get_Preset(&value));
    return value;
}

template <typename D> Windows::Foundation::IAsyncAction impl_IFocusControl<D>::SetPresetAsync(Windows::Media::Devices::FocusPreset preset) const
{
    Windows::Foundation::IAsyncAction asyncInfo;
    check_hresult(shim()->abi_SetPresetAsync(preset, put(asyncInfo)));
    return asyncInfo;
}

template <typename D> Windows::Foundation::IAsyncAction impl_IFocusControl<D>::SetPresetAsync(Windows::Media::Devices::FocusPreset preset, bool completeBeforeFocus) const
{
    Windows::Foundation::IAsyncAction asyncInfo;
    check_hresult(shim()->abi_SetPresetWithCompletionOptionAsync(preset, completeBeforeFocus, put(asyncInfo)));
    return asyncInfo;
}

template <typename D> uint32_t impl_IFocusControl<D>::Min() const
{
    uint32_t value {};
    check_hresult(shim()->get_Min(&value));
    return value;
}

template <typename D> uint32_t impl_IFocusControl<D>::Max() const
{
    uint32_t value {};
    check_hresult(shim()->get_Max(&value));
    return value;
}

template <typename D> uint32_t impl_IFocusControl<D>::Step() const
{
    uint32_t value {};
    check_hresult(shim()->get_Step(&value));
    return value;
}

template <typename D> uint32_t impl_IFocusControl<D>::Value() const
{
    uint32_t value {};
    check_hresult(shim()->get_Value(&value));
    return value;
}

template <typename D> Windows::Foundation::IAsyncAction impl_IFocusControl<D>::SetValueAsync(uint32_t focus) const
{
    Windows::Foundation::IAsyncAction asyncInfo;
    check_hresult(shim()->abi_SetValueAsync(focus, put(asyncInfo)));
    return asyncInfo;
}

template <typename D> Windows::Foundation::IAsyncAction impl_IFocusControl<D>::FocusAsync() const
{
    Windows::Foundation::IAsyncAction asyncInfo;
    check_hresult(shim()->abi_FocusAsync(put(asyncInfo)));
    return asyncInfo;
}

template <typename D> bool impl_IFocusControl2<D>::FocusChangedSupported() const
{
    bool value {};
    check_hresult(shim()->get_FocusChangedSupported(&value));
    return value;
}

template <typename D> bool impl_IFocusControl2<D>::WaitForFocusSupported() const
{
    bool value {};
    check_hresult(shim()->get_WaitForFocusSupported(&value));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVectorView<winrt::Windows::Media::Devices::FocusMode> impl_IFocusControl2<D>::SupportedFocusModes() const
{
    Windows::Foundation::Collections::IVectorView<winrt::Windows::Media::Devices::FocusMode> value;
    check_hresult(shim()->get_SupportedFocusModes(put(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVectorView<winrt::Windows::Media::Devices::ManualFocusDistance> impl_IFocusControl2<D>::SupportedFocusDistances() const
{
    Windows::Foundation::Collections::IVectorView<winrt::Windows::Media::Devices::ManualFocusDistance> value;
    check_hresult(shim()->get_SupportedFocusDistances(put(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVectorView<winrt::Windows::Media::Devices::AutoFocusRange> impl_IFocusControl2<D>::SupportedFocusRanges() const
{
    Windows::Foundation::Collections::IVectorView<winrt::Windows::Media::Devices::AutoFocusRange> value;
    check_hresult(shim()->get_SupportedFocusRanges(put(value)));
    return value;
}

template <typename D> Windows::Media::Devices::FocusMode impl_IFocusControl2<D>::Mode() const
{
    Windows::Media::Devices::FocusMode value {};
    check_hresult(shim()->get_Mode(&value));
    return value;
}

template <typename D> Windows::Media::Devices::MediaCaptureFocusState impl_IFocusControl2<D>::FocusState() const
{
    Windows::Media::Devices::MediaCaptureFocusState value {};
    check_hresult(shim()->get_FocusState(&value));
    return value;
}

template <typename D> Windows::Foundation::IAsyncAction impl_IFocusControl2<D>::UnlockAsync() const
{
    Windows::Foundation::IAsyncAction asyncInfo;
    check_hresult(shim()->abi_UnlockAsync(put(asyncInfo)));
    return asyncInfo;
}

template <typename D> Windows::Foundation::IAsyncAction impl_IFocusControl2<D>::LockAsync() const
{
    Windows::Foundation::IAsyncAction asyncInfo;
    check_hresult(shim()->abi_LockAsync(put(asyncInfo)));
    return asyncInfo;
}

template <typename D> void impl_IFocusControl2<D>::Configure(const Windows::Media::Devices::FocusSettings & settings) const
{
    check_hresult(shim()->abi_Configure(get(settings)));
}

template <typename D> bool impl_IRegionOfInterest<D>::AutoFocusEnabled() const
{
    bool value {};
    check_hresult(shim()->get_AutoFocusEnabled(&value));
    return value;
}

template <typename D> void impl_IRegionOfInterest<D>::AutoFocusEnabled(bool value) const
{
    check_hresult(shim()->put_AutoFocusEnabled(value));
}

template <typename D> bool impl_IRegionOfInterest<D>::AutoWhiteBalanceEnabled() const
{
    bool value {};
    check_hresult(shim()->get_AutoWhiteBalanceEnabled(&value));
    return value;
}

template <typename D> void impl_IRegionOfInterest<D>::AutoWhiteBalanceEnabled(bool value) const
{
    check_hresult(shim()->put_AutoWhiteBalanceEnabled(value));
}

template <typename D> bool impl_IRegionOfInterest<D>::AutoExposureEnabled() const
{
    bool value {};
    check_hresult(shim()->get_AutoExposureEnabled(&value));
    return value;
}

template <typename D> void impl_IRegionOfInterest<D>::AutoExposureEnabled(bool value) const
{
    check_hresult(shim()->put_AutoExposureEnabled(value));
}

template <typename D> Windows::Foundation::Rect impl_IRegionOfInterest<D>::Bounds() const
{
    Windows::Foundation::Rect value {};
    check_hresult(shim()->get_Bounds(put(value)));
    return value;
}

template <typename D> void impl_IRegionOfInterest<D>::Bounds(const Windows::Foundation::Rect & value) const
{
    check_hresult(shim()->put_Bounds(get(value)));
}

template <typename D> Windows::Media::Devices::RegionOfInterestType impl_IRegionOfInterest2<D>::Type() const
{
    Windows::Media::Devices::RegionOfInterestType value {};
    check_hresult(shim()->get_Type(&value));
    return value;
}

template <typename D> void impl_IRegionOfInterest2<D>::Type(Windows::Media::Devices::RegionOfInterestType value) const
{
    check_hresult(shim()->put_Type(value));
}

template <typename D> bool impl_IRegionOfInterest2<D>::BoundsNormalized() const
{
    bool value {};
    check_hresult(shim()->get_BoundsNormalized(&value));
    return value;
}

template <typename D> void impl_IRegionOfInterest2<D>::BoundsNormalized(bool value) const
{
    check_hresult(shim()->put_BoundsNormalized(value));
}

template <typename D> uint32_t impl_IRegionOfInterest2<D>::Weight() const
{
    uint32_t value {};
    check_hresult(shim()->get_Weight(&value));
    return value;
}

template <typename D> void impl_IRegionOfInterest2<D>::Weight(uint32_t value) const
{
    check_hresult(shim()->put_Weight(value));
}

template <typename D> uint32_t impl_IRegionsOfInterestControl<D>::MaxRegions() const
{
    uint32_t value {};
    check_hresult(shim()->get_MaxRegions(&value));
    return value;
}

template <typename D> Windows::Foundation::IAsyncAction impl_IRegionsOfInterestControl<D>::SetRegionsAsync(const Windows::Foundation::Collections::IIterable<Windows::Media::Devices::RegionOfInterest> & regions) const
{
    Windows::Foundation::IAsyncAction asyncInfo;
    check_hresult(shim()->abi_SetRegionsAsync(get(regions), put(asyncInfo)));
    return asyncInfo;
}

template <typename D> Windows::Foundation::IAsyncAction impl_IRegionsOfInterestControl<D>::SetRegionsAsync(const Windows::Foundation::Collections::IIterable<Windows::Media::Devices::RegionOfInterest> & regions, bool lockValues) const
{
    Windows::Foundation::IAsyncAction asyncInfo;
    check_hresult(shim()->abi_SetRegionsWithLockAsync(get(regions), lockValues, put(asyncInfo)));
    return asyncInfo;
}

template <typename D> Windows::Foundation::IAsyncAction impl_IRegionsOfInterestControl<D>::ClearRegionsAsync() const
{
    Windows::Foundation::IAsyncAction asyncInfo;
    check_hresult(shim()->abi_ClearRegionsAsync(put(asyncInfo)));
    return asyncInfo;
}

template <typename D> bool impl_IRegionsOfInterestControl<D>::AutoFocusSupported() const
{
    bool value {};
    check_hresult(shim()->get_AutoFocusSupported(&value));
    return value;
}

template <typename D> bool impl_IRegionsOfInterestControl<D>::AutoWhiteBalanceSupported() const
{
    bool value {};
    check_hresult(shim()->get_AutoWhiteBalanceSupported(&value));
    return value;
}

template <typename D> bool impl_IRegionsOfInterestControl<D>::AutoExposureSupported() const
{
    bool value {};
    check_hresult(shim()->get_AutoExposureSupported(&value));
    return value;
}

template <typename D> bool impl_IExposurePriorityVideoControl<D>::Supported() const
{
    bool value {};
    check_hresult(shim()->get_Supported(&value));
    return value;
}

template <typename D> bool impl_IExposurePriorityVideoControl<D>::Enabled() const
{
    bool value {};
    check_hresult(shim()->get_Enabled(&value));
    return value;
}

template <typename D> void impl_IExposurePriorityVideoControl<D>::Enabled(bool value) const
{
    check_hresult(shim()->put_Enabled(value));
}

template <typename D> bool impl_IHdrVideoControl<D>::Supported() const
{
    bool value {};
    check_hresult(shim()->get_Supported(&value));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVectorView<winrt::Windows::Media::Devices::HdrVideoMode> impl_IHdrVideoControl<D>::SupportedModes() const
{
    Windows::Foundation::Collections::IVectorView<winrt::Windows::Media::Devices::HdrVideoMode> value;
    check_hresult(shim()->get_SupportedModes(put(value)));
    return value;
}

template <typename D> Windows::Media::Devices::HdrVideoMode impl_IHdrVideoControl<D>::Mode() const
{
    Windows::Media::Devices::HdrVideoMode value {};
    check_hresult(shim()->get_Mode(&value));
    return value;
}

template <typename D> void impl_IHdrVideoControl<D>::Mode(Windows::Media::Devices::HdrVideoMode value) const
{
    check_hresult(shim()->put_Mode(value));
}

template <typename D> Windows::Media::Devices::AdvancedPhotoMode impl_IAdvancedPhotoCaptureSettings<D>::Mode() const
{
    Windows::Media::Devices::AdvancedPhotoMode value {};
    check_hresult(shim()->get_Mode(&value));
    return value;
}

template <typename D> void impl_IAdvancedPhotoCaptureSettings<D>::Mode(Windows::Media::Devices::AdvancedPhotoMode value) const
{
    check_hresult(shim()->put_Mode(value));
}

template <typename D> bool impl_IAdvancedPhotoControl<D>::Supported() const
{
    bool value {};
    check_hresult(shim()->get_Supported(&value));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVectorView<winrt::Windows::Media::Devices::AdvancedPhotoMode> impl_IAdvancedPhotoControl<D>::SupportedModes() const
{
    Windows::Foundation::Collections::IVectorView<winrt::Windows::Media::Devices::AdvancedPhotoMode> value;
    check_hresult(shim()->get_SupportedModes(put(value)));
    return value;
}

template <typename D> Windows::Media::Devices::AdvancedPhotoMode impl_IAdvancedPhotoControl<D>::Mode() const
{
    Windows::Media::Devices::AdvancedPhotoMode value {};
    check_hresult(shim()->get_Mode(&value));
    return value;
}

template <typename D> void impl_IAdvancedPhotoControl<D>::Configure(const Windows::Media::Devices::AdvancedPhotoCaptureSettings & settings) const
{
    check_hresult(shim()->abi_Configure(get(settings)));
}

template <typename D> bool impl_IOpticalImageStabilizationControl<D>::Supported() const
{
    bool value {};
    check_hresult(shim()->get_Supported(&value));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVectorView<winrt::Windows::Media::Devices::OpticalImageStabilizationMode> impl_IOpticalImageStabilizationControl<D>::SupportedModes() const
{
    Windows::Foundation::Collections::IVectorView<winrt::Windows::Media::Devices::OpticalImageStabilizationMode> value;
    check_hresult(shim()->get_SupportedModes(put(value)));
    return value;
}

template <typename D> Windows::Media::Devices::OpticalImageStabilizationMode impl_IOpticalImageStabilizationControl<D>::Mode() const
{
    Windows::Media::Devices::OpticalImageStabilizationMode value {};
    check_hresult(shim()->get_Mode(&value));
    return value;
}

template <typename D> void impl_IOpticalImageStabilizationControl<D>::Mode(Windows::Media::Devices::OpticalImageStabilizationMode value) const
{
    check_hresult(shim()->put_Mode(value));
}

template <typename D> Windows::Foundation::Collections::IVectorView<Windows::Media::MediaProperties::IMediaEncodingProperties> impl_IMediaDeviceController<D>::GetAvailableMediaStreamProperties(Windows::Media::Capture::MediaStreamType mediaStreamType) const
{
    Windows::Foundation::Collections::IVectorView<Windows::Media::MediaProperties::IMediaEncodingProperties> value;
    check_hresult(shim()->abi_GetAvailableMediaStreamProperties(mediaStreamType, put(value)));
    return value;
}

template <typename D> Windows::Media::MediaProperties::IMediaEncodingProperties impl_IMediaDeviceController<D>::GetMediaStreamProperties(Windows::Media::Capture::MediaStreamType mediaStreamType) const
{
    Windows::Media::MediaProperties::IMediaEncodingProperties value;
    check_hresult(shim()->abi_GetMediaStreamProperties(mediaStreamType, put(value)));
    return value;
}

template <typename D> Windows::Foundation::IAsyncAction impl_IMediaDeviceController<D>::SetMediaStreamPropertiesAsync(Windows::Media::Capture::MediaStreamType mediaStreamType, const Windows::Media::MediaProperties::IMediaEncodingProperties & mediaEncodingProperties) const
{
    Windows::Foundation::IAsyncAction asyncInfo;
    check_hresult(shim()->abi_SetMediaStreamPropertiesAsync(mediaStreamType, get(mediaEncodingProperties), put(asyncInfo)));
    return asyncInfo;
}

template <typename D> void impl_IAudioDeviceController<D>::Muted(bool value) const
{
    check_hresult(shim()->put_Muted(value));
}

template <typename D> bool impl_IAudioDeviceController<D>::Muted() const
{
    bool value {};
    check_hresult(shim()->get_Muted(&value));
    return value;
}

template <typename D> void impl_IAudioDeviceController<D>::VolumePercent(float value) const
{
    check_hresult(shim()->put_VolumePercent(value));
}

template <typename D> float impl_IAudioDeviceController<D>::VolumePercent() const
{
    float value {};
    check_hresult(shim()->get_VolumePercent(&value));
    return value;
}

template <typename D> Windows::Media::Devices::MediaDeviceControl impl_IVideoDeviceController<D>::Brightness() const
{
    Windows::Media::Devices::MediaDeviceControl value { nullptr };
    check_hresult(shim()->get_Brightness(put(value)));
    return value;
}

template <typename D> Windows::Media::Devices::MediaDeviceControl impl_IVideoDeviceController<D>::Contrast() const
{
    Windows::Media::Devices::MediaDeviceControl value { nullptr };
    check_hresult(shim()->get_Contrast(put(value)));
    return value;
}

template <typename D> Windows::Media::Devices::MediaDeviceControl impl_IVideoDeviceController<D>::Hue() const
{
    Windows::Media::Devices::MediaDeviceControl value { nullptr };
    check_hresult(shim()->get_Hue(put(value)));
    return value;
}

template <typename D> Windows::Media::Devices::MediaDeviceControl impl_IVideoDeviceController<D>::WhiteBalance() const
{
    Windows::Media::Devices::MediaDeviceControl value { nullptr };
    check_hresult(shim()->get_WhiteBalance(put(value)));
    return value;
}

template <typename D> Windows::Media::Devices::MediaDeviceControl impl_IVideoDeviceController<D>::BacklightCompensation() const
{
    Windows::Media::Devices::MediaDeviceControl value { nullptr };
    check_hresult(shim()->get_BacklightCompensation(put(value)));
    return value;
}

template <typename D> Windows::Media::Devices::MediaDeviceControl impl_IVideoDeviceController<D>::Pan() const
{
    Windows::Media::Devices::MediaDeviceControl value { nullptr };
    check_hresult(shim()->get_Pan(put(value)));
    return value;
}

template <typename D> Windows::Media::Devices::MediaDeviceControl impl_IVideoDeviceController<D>::Tilt() const
{
    Windows::Media::Devices::MediaDeviceControl value { nullptr };
    check_hresult(shim()->get_Tilt(put(value)));
    return value;
}

template <typename D> Windows::Media::Devices::MediaDeviceControl impl_IVideoDeviceController<D>::Zoom() const
{
    Windows::Media::Devices::MediaDeviceControl value { nullptr };
    check_hresult(shim()->get_Zoom(put(value)));
    return value;
}

template <typename D> Windows::Media::Devices::MediaDeviceControl impl_IVideoDeviceController<D>::Roll() const
{
    Windows::Media::Devices::MediaDeviceControl value { nullptr };
    check_hresult(shim()->get_Roll(put(value)));
    return value;
}

template <typename D> Windows::Media::Devices::MediaDeviceControl impl_IVideoDeviceController<D>::Exposure() const
{
    Windows::Media::Devices::MediaDeviceControl value { nullptr };
    check_hresult(shim()->get_Exposure(put(value)));
    return value;
}

template <typename D> Windows::Media::Devices::MediaDeviceControl impl_IVideoDeviceController<D>::Focus() const
{
    Windows::Media::Devices::MediaDeviceControl value { nullptr };
    check_hresult(shim()->get_Focus(put(value)));
    return value;
}

template <typename D> bool impl_IVideoDeviceController<D>::TrySetPowerlineFrequency(Windows::Media::Capture::PowerlineFrequency value) const
{
    bool succeeded {};
    check_hresult(shim()->abi_TrySetPowerlineFrequency(value, &succeeded));
    return succeeded;
}

template <typename D> bool impl_IVideoDeviceController<D>::TryGetPowerlineFrequency(Windows::Media::Capture::PowerlineFrequency & value) const
{
    bool succeeded {};
    check_hresult(shim()->abi_TryGetPowerlineFrequency(&value, &succeeded));
    return succeeded;
}

template <typename D> Windows::Media::Devices::LowLagPhotoSequenceControl impl_IAdvancedVideoCaptureDeviceController2<D>::LowLagPhotoSequence() const
{
    Windows::Media::Devices::LowLagPhotoSequenceControl value { nullptr };
    check_hresult(shim()->get_LowLagPhotoSequence(put(value)));
    return value;
}

template <typename D> Windows::Media::Devices::LowLagPhotoControl impl_IAdvancedVideoCaptureDeviceController2<D>::LowLagPhoto() const
{
    Windows::Media::Devices::LowLagPhotoControl value { nullptr };
    check_hresult(shim()->get_LowLagPhoto(put(value)));
    return value;
}

template <typename D> Windows::Media::Devices::SceneModeControl impl_IAdvancedVideoCaptureDeviceController2<D>::SceneModeControl() const
{
    Windows::Media::Devices::SceneModeControl value { nullptr };
    check_hresult(shim()->get_SceneModeControl(put(value)));
    return value;
}

template <typename D> Windows::Media::Devices::TorchControl impl_IAdvancedVideoCaptureDeviceController2<D>::TorchControl() const
{
    Windows::Media::Devices::TorchControl value { nullptr };
    check_hresult(shim()->get_TorchControl(put(value)));
    return value;
}

template <typename D> Windows::Media::Devices::FlashControl impl_IAdvancedVideoCaptureDeviceController2<D>::FlashControl() const
{
    Windows::Media::Devices::FlashControl value { nullptr };
    check_hresult(shim()->get_FlashControl(put(value)));
    return value;
}

template <typename D> Windows::Media::Devices::WhiteBalanceControl impl_IAdvancedVideoCaptureDeviceController2<D>::WhiteBalanceControl() const
{
    Windows::Media::Devices::WhiteBalanceControl value { nullptr };
    check_hresult(shim()->get_WhiteBalanceControl(put(value)));
    return value;
}

template <typename D> Windows::Media::Devices::ExposureControl impl_IAdvancedVideoCaptureDeviceController2<D>::ExposureControl() const
{
    Windows::Media::Devices::ExposureControl value { nullptr };
    check_hresult(shim()->get_ExposureControl(put(value)));
    return value;
}

template <typename D> Windows::Media::Devices::FocusControl impl_IAdvancedVideoCaptureDeviceController2<D>::FocusControl() const
{
    Windows::Media::Devices::FocusControl value { nullptr };
    check_hresult(shim()->get_FocusControl(put(value)));
    return value;
}

template <typename D> Windows::Media::Devices::ExposureCompensationControl impl_IAdvancedVideoCaptureDeviceController2<D>::ExposureCompensationControl() const
{
    Windows::Media::Devices::ExposureCompensationControl value { nullptr };
    check_hresult(shim()->get_ExposureCompensationControl(put(value)));
    return value;
}

template <typename D> Windows::Media::Devices::IsoSpeedControl impl_IAdvancedVideoCaptureDeviceController2<D>::IsoSpeedControl() const
{
    Windows::Media::Devices::IsoSpeedControl value { nullptr };
    check_hresult(shim()->get_IsoSpeedControl(put(value)));
    return value;
}

template <typename D> Windows::Media::Devices::RegionsOfInterestControl impl_IAdvancedVideoCaptureDeviceController2<D>::RegionsOfInterestControl() const
{
    Windows::Media::Devices::RegionsOfInterestControl value { nullptr };
    check_hresult(shim()->get_RegionsOfInterestControl(put(value)));
    return value;
}

template <typename D> Windows::Media::Devices::CaptureUse impl_IAdvancedVideoCaptureDeviceController2<D>::PrimaryUse() const
{
    Windows::Media::Devices::CaptureUse value {};
    check_hresult(shim()->get_PrimaryUse(&value));
    return value;
}

template <typename D> void impl_IAdvancedVideoCaptureDeviceController2<D>::PrimaryUse(Windows::Media::Devices::CaptureUse value) const
{
    check_hresult(shim()->put_PrimaryUse(value));
}

template <typename D> Windows::Media::Devices::Core::VariablePhotoSequenceController impl_IAdvancedVideoCaptureDeviceController3<D>::VariablePhotoSequenceController() const
{
    Windows::Media::Devices::Core::VariablePhotoSequenceController value { nullptr };
    check_hresult(shim()->get_VariablePhotoSequenceController(put(value)));
    return value;
}

template <typename D> Windows::Media::Devices::PhotoConfirmationControl impl_IAdvancedVideoCaptureDeviceController3<D>::PhotoConfirmationControl() const
{
    Windows::Media::Devices::PhotoConfirmationControl value { nullptr };
    check_hresult(shim()->get_PhotoConfirmationControl(put(value)));
    return value;
}

template <typename D> Windows::Media::Devices::ZoomControl impl_IAdvancedVideoCaptureDeviceController3<D>::ZoomControl() const
{
    Windows::Media::Devices::ZoomControl value { nullptr };
    check_hresult(shim()->get_ZoomControl(put(value)));
    return value;
}

template <typename D> Windows::Media::Devices::ExposurePriorityVideoControl impl_IAdvancedVideoCaptureDeviceController4<D>::ExposurePriorityVideoControl() const
{
    Windows::Media::Devices::ExposurePriorityVideoControl value { nullptr };
    check_hresult(shim()->get_ExposurePriorityVideoControl(put(value)));
    return value;
}

template <typename D> Windows::Media::Devices::MediaCaptureOptimization impl_IAdvancedVideoCaptureDeviceController4<D>::DesiredOptimization() const
{
    Windows::Media::Devices::MediaCaptureOptimization value {};
    check_hresult(shim()->get_DesiredOptimization(&value));
    return value;
}

template <typename D> void impl_IAdvancedVideoCaptureDeviceController4<D>::DesiredOptimization(Windows::Media::Devices::MediaCaptureOptimization value) const
{
    check_hresult(shim()->put_DesiredOptimization(value));
}

template <typename D> Windows::Media::Devices::HdrVideoControl impl_IAdvancedVideoCaptureDeviceController4<D>::HdrVideoControl() const
{
    Windows::Media::Devices::HdrVideoControl value { nullptr };
    check_hresult(shim()->get_HdrVideoControl(put(value)));
    return value;
}

template <typename D> Windows::Media::Devices::OpticalImageStabilizationControl impl_IAdvancedVideoCaptureDeviceController4<D>::OpticalImageStabilizationControl() const
{
    Windows::Media::Devices::OpticalImageStabilizationControl value { nullptr };
    check_hresult(shim()->get_OpticalImageStabilizationControl(put(value)));
    return value;
}

template <typename D> Windows::Media::Devices::AdvancedPhotoControl impl_IAdvancedVideoCaptureDeviceController4<D>::AdvancedPhotoControl() const
{
    Windows::Media::Devices::AdvancedPhotoControl value { nullptr };
    check_hresult(shim()->get_AdvancedPhotoControl(put(value)));
    return value;
}

template <typename D> Windows::Media::Devices::MediaDeviceControlCapabilities impl_IMediaDeviceControl<D>::Capabilities() const
{
    Windows::Media::Devices::MediaDeviceControlCapabilities value { nullptr };
    check_hresult(shim()->get_Capabilities(put(value)));
    return value;
}

template <typename D> bool impl_IMediaDeviceControl<D>::TryGetValue(double & value) const
{
    bool succeeded {};
    check_hresult(shim()->abi_TryGetValue(&value, &succeeded));
    return succeeded;
}

template <typename D> bool impl_IMediaDeviceControl<D>::TrySetValue(double value) const
{
    bool succeeded {};
    check_hresult(shim()->abi_TrySetValue(value, &succeeded));
    return succeeded;
}

template <typename D> bool impl_IMediaDeviceControl<D>::TryGetAuto(bool & value) const
{
    bool succeeded {};
    check_hresult(shim()->abi_TryGetAuto(&value, &succeeded));
    return succeeded;
}

template <typename D> bool impl_IMediaDeviceControl<D>::TrySetAuto(bool value) const
{
    bool succeeded {};
    check_hresult(shim()->abi_TrySetAuto(value, &succeeded));
    return succeeded;
}

template <typename D> bool impl_IMediaDeviceControlCapabilities<D>::Supported() const
{
    bool value {};
    check_hresult(shim()->get_Supported(&value));
    return value;
}

template <typename D> double impl_IMediaDeviceControlCapabilities<D>::Min() const
{
    double value {};
    check_hresult(shim()->get_Min(&value));
    return value;
}

template <typename D> double impl_IMediaDeviceControlCapabilities<D>::Max() const
{
    double value {};
    check_hresult(shim()->get_Max(&value));
    return value;
}

template <typename D> double impl_IMediaDeviceControlCapabilities<D>::Step() const
{
    double value {};
    check_hresult(shim()->get_Step(&value));
    return value;
}

template <typename D> double impl_IMediaDeviceControlCapabilities<D>::Default() const
{
    double value {};
    check_hresult(shim()->get_Default(&value));
    return value;
}

template <typename D> bool impl_IMediaDeviceControlCapabilities<D>::AutoModeSupported() const
{
    bool value {};
    check_hresult(shim()->get_AutoModeSupported(&value));
    return value;
}

template <typename D> void impl_IAdvancedVideoCaptureDeviceController<D>::SetDeviceProperty(hstring_ref propertyId, const Windows::IInspectable & propertyValue) const
{
    check_hresult(shim()->abi_SetDeviceProperty(get(propertyId), get(propertyValue)));
}

template <typename D> Windows::IInspectable impl_IAdvancedVideoCaptureDeviceController<D>::GetDeviceProperty(hstring_ref propertyId) const
{
    Windows::IInspectable propertyValue;
    check_hresult(shim()->abi_GetDeviceProperty(get(propertyId), put(propertyValue)));
    return propertyValue;
}

template <typename D> bool impl_ILowLagPhotoSequenceControl<D>::Supported() const
{
    bool value {};
    check_hresult(shim()->get_Supported(&value));
    return value;
}

template <typename D> uint32_t impl_ILowLagPhotoSequenceControl<D>::MaxPastPhotos() const
{
    uint32_t value {};
    check_hresult(shim()->get_MaxPastPhotos(&value));
    return value;
}

template <typename D> float impl_ILowLagPhotoSequenceControl<D>::MaxPhotosPerSecond() const
{
    float value {};
    check_hresult(shim()->get_MaxPhotosPerSecond(&value));
    return value;
}

template <typename D> uint32_t impl_ILowLagPhotoSequenceControl<D>::PastPhotoLimit() const
{
    uint32_t value {};
    check_hresult(shim()->get_PastPhotoLimit(&value));
    return value;
}

template <typename D> void impl_ILowLagPhotoSequenceControl<D>::PastPhotoLimit(uint32_t value) const
{
    check_hresult(shim()->put_PastPhotoLimit(value));
}

template <typename D> float impl_ILowLagPhotoSequenceControl<D>::PhotosPerSecondLimit() const
{
    float value {};
    check_hresult(shim()->get_PhotosPerSecondLimit(&value));
    return value;
}

template <typename D> void impl_ILowLagPhotoSequenceControl<D>::PhotosPerSecondLimit(float value) const
{
    check_hresult(shim()->put_PhotosPerSecondLimit(value));
}

template <typename D> Windows::Media::MediaProperties::MediaRatio impl_ILowLagPhotoSequenceControl<D>::GetHighestConcurrentFrameRate(const Windows::Media::MediaProperties::IMediaEncodingProperties & captureProperties) const
{
    Windows::Media::MediaProperties::MediaRatio value { nullptr };
    check_hresult(shim()->abi_GetHighestConcurrentFrameRate(get(captureProperties), put(value)));
    return value;
}

template <typename D> Windows::Media::MediaProperties::MediaRatio impl_ILowLagPhotoSequenceControl<D>::GetCurrentFrameRate() const
{
    Windows::Media::MediaProperties::MediaRatio value { nullptr };
    check_hresult(shim()->abi_GetCurrentFrameRate(put(value)));
    return value;
}

template <typename D> bool impl_ILowLagPhotoSequenceControl<D>::ThumbnailEnabled() const
{
    bool value {};
    check_hresult(shim()->get_ThumbnailEnabled(&value));
    return value;
}

template <typename D> void impl_ILowLagPhotoSequenceControl<D>::ThumbnailEnabled(bool value) const
{
    check_hresult(shim()->put_ThumbnailEnabled(value));
}

template <typename D> Windows::Media::MediaProperties::MediaThumbnailFormat impl_ILowLagPhotoSequenceControl<D>::ThumbnailFormat() const
{
    Windows::Media::MediaProperties::MediaThumbnailFormat value {};
    check_hresult(shim()->get_ThumbnailFormat(&value));
    return value;
}

template <typename D> void impl_ILowLagPhotoSequenceControl<D>::ThumbnailFormat(Windows::Media::MediaProperties::MediaThumbnailFormat value) const
{
    check_hresult(shim()->put_ThumbnailFormat(value));
}

template <typename D> uint32_t impl_ILowLagPhotoSequenceControl<D>::DesiredThumbnailSize() const
{
    uint32_t value {};
    check_hresult(shim()->get_DesiredThumbnailSize(&value));
    return value;
}

template <typename D> void impl_ILowLagPhotoSequenceControl<D>::DesiredThumbnailSize(uint32_t value) const
{
    check_hresult(shim()->put_DesiredThumbnailSize(value));
}

template <typename D> uint32_t impl_ILowLagPhotoSequenceControl<D>::HardwareAcceleratedThumbnailSupported() const
{
    uint32_t value {};
    check_hresult(shim()->get_HardwareAcceleratedThumbnailSupported(&value));
    return value;
}

template <typename D> Windows::Media::MediaProperties::MediaRatio impl_ILowLagPhotoControl<D>::GetHighestConcurrentFrameRate(const Windows::Media::MediaProperties::IMediaEncodingProperties & captureProperties) const
{
    Windows::Media::MediaProperties::MediaRatio value { nullptr };
    check_hresult(shim()->abi_GetHighestConcurrentFrameRate(get(captureProperties), put(value)));
    return value;
}

template <typename D> Windows::Media::MediaProperties::MediaRatio impl_ILowLagPhotoControl<D>::GetCurrentFrameRate() const
{
    Windows::Media::MediaProperties::MediaRatio value { nullptr };
    check_hresult(shim()->abi_GetCurrentFrameRate(put(value)));
    return value;
}

template <typename D> bool impl_ILowLagPhotoControl<D>::ThumbnailEnabled() const
{
    bool value {};
    check_hresult(shim()->get_ThumbnailEnabled(&value));
    return value;
}

template <typename D> void impl_ILowLagPhotoControl<D>::ThumbnailEnabled(bool value) const
{
    check_hresult(shim()->put_ThumbnailEnabled(value));
}

template <typename D> Windows::Media::MediaProperties::MediaThumbnailFormat impl_ILowLagPhotoControl<D>::ThumbnailFormat() const
{
    Windows::Media::MediaProperties::MediaThumbnailFormat value {};
    check_hresult(shim()->get_ThumbnailFormat(&value));
    return value;
}

template <typename D> void impl_ILowLagPhotoControl<D>::ThumbnailFormat(Windows::Media::MediaProperties::MediaThumbnailFormat value) const
{
    check_hresult(shim()->put_ThumbnailFormat(value));
}

template <typename D> uint32_t impl_ILowLagPhotoControl<D>::DesiredThumbnailSize() const
{
    uint32_t value {};
    check_hresult(shim()->get_DesiredThumbnailSize(&value));
    return value;
}

template <typename D> void impl_ILowLagPhotoControl<D>::DesiredThumbnailSize(uint32_t value) const
{
    check_hresult(shim()->put_DesiredThumbnailSize(value));
}

template <typename D> uint32_t impl_ILowLagPhotoControl<D>::HardwareAcceleratedThumbnailSupported() const
{
    uint32_t value {};
    check_hresult(shim()->get_HardwareAcceleratedThumbnailSupported(&value));
    return value;
}

template <typename D> bool impl_IPhotoConfirmationControl<D>::Supported() const
{
    bool pbSupported {};
    check_hresult(shim()->get_Supported(&pbSupported));
    return pbSupported;
}

template <typename D> bool impl_IPhotoConfirmationControl<D>::Enabled() const
{
    bool value {};
    check_hresult(shim()->get_Enabled(&value));
    return value;
}

template <typename D> void impl_IPhotoConfirmationControl<D>::Enabled(bool value) const
{
    check_hresult(shim()->put_Enabled(value));
}

template <typename D> Windows::Media::MediaProperties::MediaPixelFormat impl_IPhotoConfirmationControl<D>::PixelFormat() const
{
    Windows::Media::MediaProperties::MediaPixelFormat format {};
    check_hresult(shim()->get_PixelFormat(&format));
    return format;
}

template <typename D> void impl_IPhotoConfirmationControl<D>::PixelFormat(Windows::Media::MediaProperties::MediaPixelFormat format) const
{
    check_hresult(shim()->put_PixelFormat(format));
}

template <typename D> void impl_IDialRequestedEventArgs<D>::Handled() const
{
    check_hresult(shim()->abi_Handled());
}

template <typename D> Windows::IInspectable impl_IDialRequestedEventArgs<D>::Contact() const
{
    Windows::IInspectable value;
    check_hresult(shim()->get_Contact(put(value)));
    return value;
}

template <typename D> void impl_IRedialRequestedEventArgs<D>::Handled() const
{
    check_hresult(shim()->abi_Handled());
}

template <typename D> Windows::Media::Devices::TelephonyKey impl_IKeypadPressedEventArgs<D>::TelephonyKey() const
{
    Windows::Media::Devices::TelephonyKey telephonyKey {};
    check_hresult(shim()->get_TelephonyKey(&telephonyKey));
    return telephonyKey;
}

template <typename D> uint64_t impl_ICallControl<D>::IndicateNewIncomingCall(bool enableRinger, hstring_ref callerId) const
{
    uint64_t callToken {};
    check_hresult(shim()->abi_IndicateNewIncomingCall(enableRinger, get(callerId), &callToken));
    return callToken;
}

template <typename D> uint64_t impl_ICallControl<D>::IndicateNewOutgoingCall() const
{
    uint64_t callToken {};
    check_hresult(shim()->abi_IndicateNewOutgoingCall(&callToken));
    return callToken;
}

template <typename D> void impl_ICallControl<D>::IndicateActiveCall(uint64_t callToken) const
{
    check_hresult(shim()->abi_IndicateActiveCall(callToken));
}

template <typename D> void impl_ICallControl<D>::EndCall(uint64_t callToken) const
{
    check_hresult(shim()->abi_EndCall(callToken));
}

template <typename D> bool impl_ICallControl<D>::HasRinger() const
{
    bool value {};
    check_hresult(shim()->get_HasRinger(&value));
    return value;
}

template <typename D> event_token impl_ICallControl<D>::AnswerRequested(const Windows::Media::Devices::CallControlEventHandler & handler) const
{
    event_token token {};
    check_hresult(shim()->add_AnswerRequested(get(handler), &token));
    return token;
}

template <typename D> event_revoker<ICallControl> impl_ICallControl<D>::AnswerRequested(auto_revoke_t, const Windows::Media::Devices::CallControlEventHandler & handler) const
{
    return impl::make_event_revoker<D, ICallControl>(this, &ABI::Windows::Media::Devices::ICallControl::remove_AnswerRequested, AnswerRequested(handler));
}

template <typename D> void impl_ICallControl<D>::AnswerRequested(event_token token) const
{
    check_hresult(shim()->remove_AnswerRequested(token));
}

template <typename D> event_token impl_ICallControl<D>::HangUpRequested(const Windows::Media::Devices::CallControlEventHandler & handler) const
{
    event_token token {};
    check_hresult(shim()->add_HangUpRequested(get(handler), &token));
    return token;
}

template <typename D> event_revoker<ICallControl> impl_ICallControl<D>::HangUpRequested(auto_revoke_t, const Windows::Media::Devices::CallControlEventHandler & handler) const
{
    return impl::make_event_revoker<D, ICallControl>(this, &ABI::Windows::Media::Devices::ICallControl::remove_HangUpRequested, HangUpRequested(handler));
}

template <typename D> void impl_ICallControl<D>::HangUpRequested(event_token token) const
{
    check_hresult(shim()->remove_HangUpRequested(token));
}

template <typename D> event_token impl_ICallControl<D>::DialRequested(const Windows::Media::Devices::DialRequestedEventHandler & handler) const
{
    event_token token {};
    check_hresult(shim()->add_DialRequested(get(handler), &token));
    return token;
}

template <typename D> event_revoker<ICallControl> impl_ICallControl<D>::DialRequested(auto_revoke_t, const Windows::Media::Devices::DialRequestedEventHandler & handler) const
{
    return impl::make_event_revoker<D, ICallControl>(this, &ABI::Windows::Media::Devices::ICallControl::remove_DialRequested, DialRequested(handler));
}

template <typename D> void impl_ICallControl<D>::DialRequested(event_token token) const
{
    check_hresult(shim()->remove_DialRequested(token));
}

template <typename D> event_token impl_ICallControl<D>::RedialRequested(const Windows::Media::Devices::RedialRequestedEventHandler & handler) const
{
    event_token token {};
    check_hresult(shim()->add_RedialRequested(get(handler), &token));
    return token;
}

template <typename D> event_revoker<ICallControl> impl_ICallControl<D>::RedialRequested(auto_revoke_t, const Windows::Media::Devices::RedialRequestedEventHandler & handler) const
{
    return impl::make_event_revoker<D, ICallControl>(this, &ABI::Windows::Media::Devices::ICallControl::remove_RedialRequested, RedialRequested(handler));
}

template <typename D> void impl_ICallControl<D>::RedialRequested(event_token token) const
{
    check_hresult(shim()->remove_RedialRequested(token));
}

template <typename D> event_token impl_ICallControl<D>::KeypadPressed(const Windows::Media::Devices::KeypadPressedEventHandler & handler) const
{
    event_token token {};
    check_hresult(shim()->add_KeypadPressed(get(handler), &token));
    return token;
}

template <typename D> event_revoker<ICallControl> impl_ICallControl<D>::KeypadPressed(auto_revoke_t, const Windows::Media::Devices::KeypadPressedEventHandler & handler) const
{
    return impl::make_event_revoker<D, ICallControl>(this, &ABI::Windows::Media::Devices::ICallControl::remove_KeypadPressed, KeypadPressed(handler));
}

template <typename D> void impl_ICallControl<D>::KeypadPressed(event_token token) const
{
    check_hresult(shim()->remove_KeypadPressed(token));
}

template <typename D> event_token impl_ICallControl<D>::AudioTransferRequested(const Windows::Media::Devices::CallControlEventHandler & handler) const
{
    event_token token {};
    check_hresult(shim()->add_AudioTransferRequested(get(handler), &token));
    return token;
}

template <typename D> event_revoker<ICallControl> impl_ICallControl<D>::AudioTransferRequested(auto_revoke_t, const Windows::Media::Devices::CallControlEventHandler & handler) const
{
    return impl::make_event_revoker<D, ICallControl>(this, &ABI::Windows::Media::Devices::ICallControl::remove_AudioTransferRequested, AudioTransferRequested(handler));
}

template <typename D> void impl_ICallControl<D>::AudioTransferRequested(event_token token) const
{
    check_hresult(shim()->remove_AudioTransferRequested(token));
}

template <typename D> Windows::Media::Devices::CallControl impl_ICallControlStatics<D>::GetDefault() const
{
    Windows::Media::Devices::CallControl callControl { nullptr };
    check_hresult(shim()->abi_GetDefault(put(callControl)));
    return callControl;
}

template <typename D> Windows::Media::Devices::CallControl impl_ICallControlStatics<D>::FromId(hstring_ref deviceId) const
{
    Windows::Media::Devices::CallControl callControl { nullptr };
    check_hresult(shim()->abi_FromId(get(deviceId), put(callControl)));
    return callControl;
}

inline AdvancedPhotoCaptureSettings::AdvancedPhotoCaptureSettings() :
    AdvancedPhotoCaptureSettings(activate_instance<AdvancedPhotoCaptureSettings>())
{}

inline Windows::Media::Devices::CallControl CallControl::GetDefault()
{
    return get_activation_factory<CallControl, ICallControlStatics>().GetDefault();
}

inline Windows::Media::Devices::CallControl CallControl::FromId(hstring_ref deviceId)
{
    return get_activation_factory<CallControl, ICallControlStatics>().FromId(deviceId);
}

inline FocusSettings::FocusSettings() :
    FocusSettings(activate_instance<FocusSettings>())
{}

inline hstring MediaDevice::GetAudioCaptureSelector()
{
    return get_activation_factory<MediaDevice, IMediaDeviceStatics>().GetAudioCaptureSelector();
}

inline hstring MediaDevice::GetAudioRenderSelector()
{
    return get_activation_factory<MediaDevice, IMediaDeviceStatics>().GetAudioRenderSelector();
}

inline hstring MediaDevice::GetVideoCaptureSelector()
{
    return get_activation_factory<MediaDevice, IMediaDeviceStatics>().GetVideoCaptureSelector();
}

inline hstring MediaDevice::GetDefaultAudioCaptureId(Windows::Media::Devices::AudioDeviceRole role)
{
    return get_activation_factory<MediaDevice, IMediaDeviceStatics>().GetDefaultAudioCaptureId(role);
}

inline hstring MediaDevice::GetDefaultAudioRenderId(Windows::Media::Devices::AudioDeviceRole role)
{
    return get_activation_factory<MediaDevice, IMediaDeviceStatics>().GetDefaultAudioRenderId(role);
}

inline event_token MediaDevice::DefaultAudioCaptureDeviceChanged(const Windows::Foundation::TypedEventHandler<Windows::IInspectable, Windows::Media::Devices::DefaultAudioCaptureDeviceChangedEventArgs> & handler)
{
    return get_activation_factory<MediaDevice, IMediaDeviceStatics>().DefaultAudioCaptureDeviceChanged(handler);
}

inline factory_event_revoker<IMediaDeviceStatics> MediaDevice::DefaultAudioCaptureDeviceChanged(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::IInspectable, Windows::Media::Devices::DefaultAudioCaptureDeviceChangedEventArgs> & handler)
{
    auto factory = get_activation_factory<MediaDevice, IMediaDeviceStatics>();
    return { factory, &ABI::Windows::Media::Devices::IMediaDeviceStatics::remove_DefaultAudioCaptureDeviceChanged, factory.DefaultAudioCaptureDeviceChanged(handler) };
}

inline void MediaDevice::DefaultAudioCaptureDeviceChanged(event_token cookie)
{
    get_activation_factory<MediaDevice, IMediaDeviceStatics>().DefaultAudioCaptureDeviceChanged(cookie);
}

inline event_token MediaDevice::DefaultAudioRenderDeviceChanged(const Windows::Foundation::TypedEventHandler<Windows::IInspectable, Windows::Media::Devices::DefaultAudioRenderDeviceChangedEventArgs> & handler)
{
    return get_activation_factory<MediaDevice, IMediaDeviceStatics>().DefaultAudioRenderDeviceChanged(handler);
}

inline factory_event_revoker<IMediaDeviceStatics> MediaDevice::DefaultAudioRenderDeviceChanged(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::IInspectable, Windows::Media::Devices::DefaultAudioRenderDeviceChangedEventArgs> & handler)
{
    auto factory = get_activation_factory<MediaDevice, IMediaDeviceStatics>();
    return { factory, &ABI::Windows::Media::Devices::IMediaDeviceStatics::remove_DefaultAudioRenderDeviceChanged, factory.DefaultAudioRenderDeviceChanged(handler) };
}

inline void MediaDevice::DefaultAudioRenderDeviceChanged(event_token cookie)
{
    get_activation_factory<MediaDevice, IMediaDeviceStatics>().DefaultAudioRenderDeviceChanged(cookie);
}

inline RegionOfInterest::RegionOfInterest() :
    RegionOfInterest(activate_instance<RegionOfInterest>())
{}

inline ZoomSettings::ZoomSettings() :
    ZoomSettings(activate_instance<ZoomSettings>())
{}

}

}
