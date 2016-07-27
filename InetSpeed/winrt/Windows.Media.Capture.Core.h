// C++ for the Windows Runtime v1.29
// Copyright (c) 2016 Microsoft Corporation

#pragma once

#include "internal\Windows.Media.Capture.3.h"
#include "internal\Windows.Foundation.3.h"
#include "internal\Windows.Media.Capture.Core.3.h"
#include "Windows.Media.Capture.h"

WINRT_EXPORT namespace winrt {

namespace impl {

template <typename D>
struct produce<D, Windows::Media::Capture::Core::IVariablePhotoCapturedEventArgs> : produce_base<D, Windows::Media::Capture::Core::IVariablePhotoCapturedEventArgs>
{
    HRESULT __stdcall get_Frame(abi_arg_out<Windows::Media::Capture::ICapturedFrame> value) noexcept override
    {
        try
        {
            *value = detach(shim().Frame());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_CaptureTimeOffset(abi_arg_out<Windows::Foundation::TimeSpan> value) noexcept override
    {
        try
        {
            *value = detach(shim().CaptureTimeOffset());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_UsedFrameControllerIndex(abi_arg_out<Windows::Foundation::IReference<uint32_t>> value) noexcept override
    {
        try
        {
            *value = detach(shim().UsedFrameControllerIndex());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_CapturedFrameControlValues(abi_arg_out<Windows::Media::Capture::ICapturedFrameControlValues> value) noexcept override
    {
        try
        {
            *value = detach(shim().CapturedFrameControlValues());
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
struct produce<D, Windows::Media::Capture::Core::IVariablePhotoSequenceCapture> : produce_base<D, Windows::Media::Capture::Core::IVariablePhotoSequenceCapture>
{
    HRESULT __stdcall abi_StartAsync(abi_arg_out<Windows::Foundation::IAsyncAction> operation) noexcept override
    {
        try
        {
            *operation = detach(shim().StartAsync());
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_StopAsync(abi_arg_out<Windows::Foundation::IAsyncAction> operation) noexcept override
    {
        try
        {
            *operation = detach(shim().StopAsync());
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_FinishAsync(abi_arg_out<Windows::Foundation::IAsyncAction> operation) noexcept override
    {
        try
        {
            *operation = detach(shim().FinishAsync());
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_PhotoCaptured(abi_arg_in<Windows::Foundation::TypedEventHandler<Windows::Media::Capture::Core::VariablePhotoSequenceCapture, Windows::Media::Capture::Core::VariablePhotoCapturedEventArgs>> handler, event_token * token) noexcept override
    {
        try
        {
            *token = detach(shim().PhotoCaptured(*reinterpret_cast<const Windows::Foundation::TypedEventHandler<Windows::Media::Capture::Core::VariablePhotoSequenceCapture, Windows::Media::Capture::Core::VariablePhotoCapturedEventArgs> *>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_PhotoCaptured(event_token token) noexcept override
    {
        try
        {
            shim().PhotoCaptured(token);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_Stopped(abi_arg_in<Windows::Foundation::TypedEventHandler<Windows::Media::Capture::Core::VariablePhotoSequenceCapture, Windows::IInspectable>> handler, event_token * token) noexcept override
    {
        try
        {
            *token = detach(shim().Stopped(*reinterpret_cast<const Windows::Foundation::TypedEventHandler<Windows::Media::Capture::Core::VariablePhotoSequenceCapture, Windows::IInspectable> *>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_Stopped(event_token token) noexcept override
    {
        try
        {
            shim().Stopped(token);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::Capture::Core::IVariablePhotoSequenceCapture2> : produce_base<D, Windows::Media::Capture::Core::IVariablePhotoSequenceCapture2>
{
    HRESULT __stdcall abi_UpdateSettingsAsync(abi_arg_out<Windows::Foundation::IAsyncAction> operation) noexcept override
    {
        try
        {
            *operation = detach(shim().UpdateSettingsAsync());
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }
};

}

namespace Windows::Media::Capture::Core {

template <typename D> Windows::Media::Capture::CapturedFrame impl_IVariablePhotoCapturedEventArgs<D>::Frame() const
{
    Windows::Media::Capture::CapturedFrame value { nullptr };
    check_hresult(shim()->get_Frame(put(value)));
    return value;
}

template <typename D> Windows::Foundation::TimeSpan impl_IVariablePhotoCapturedEventArgs<D>::CaptureTimeOffset() const
{
    Windows::Foundation::TimeSpan value {};
    check_hresult(shim()->get_CaptureTimeOffset(put(value)));
    return value;
}

template <typename D> Windows::Foundation::IReference<uint32_t> impl_IVariablePhotoCapturedEventArgs<D>::UsedFrameControllerIndex() const
{
    Windows::Foundation::IReference<uint32_t> value;
    check_hresult(shim()->get_UsedFrameControllerIndex(put(value)));
    return value;
}

template <typename D> Windows::Media::Capture::CapturedFrameControlValues impl_IVariablePhotoCapturedEventArgs<D>::CapturedFrameControlValues() const
{
    Windows::Media::Capture::CapturedFrameControlValues value { nullptr };
    check_hresult(shim()->get_CapturedFrameControlValues(put(value)));
    return value;
}

template <typename D> Windows::Foundation::IAsyncAction impl_IVariablePhotoSequenceCapture<D>::StartAsync() const
{
    Windows::Foundation::IAsyncAction operation;
    check_hresult(shim()->abi_StartAsync(put(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncAction impl_IVariablePhotoSequenceCapture<D>::StopAsync() const
{
    Windows::Foundation::IAsyncAction operation;
    check_hresult(shim()->abi_StopAsync(put(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncAction impl_IVariablePhotoSequenceCapture<D>::FinishAsync() const
{
    Windows::Foundation::IAsyncAction operation;
    check_hresult(shim()->abi_FinishAsync(put(operation)));
    return operation;
}

template <typename D> event_token impl_IVariablePhotoSequenceCapture<D>::PhotoCaptured(const Windows::Foundation::TypedEventHandler<Windows::Media::Capture::Core::VariablePhotoSequenceCapture, Windows::Media::Capture::Core::VariablePhotoCapturedEventArgs> & handler) const
{
    event_token token {};
    check_hresult(shim()->add_PhotoCaptured(get(handler), &token));
    return token;
}

template <typename D> event_revoker<IVariablePhotoSequenceCapture> impl_IVariablePhotoSequenceCapture<D>::PhotoCaptured(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::Media::Capture::Core::VariablePhotoSequenceCapture, Windows::Media::Capture::Core::VariablePhotoCapturedEventArgs> & handler) const
{
    return impl::make_event_revoker<D, IVariablePhotoSequenceCapture>(this, &ABI::Windows::Media::Capture::Core::IVariablePhotoSequenceCapture::remove_PhotoCaptured, PhotoCaptured(handler));
}

template <typename D> void impl_IVariablePhotoSequenceCapture<D>::PhotoCaptured(event_token token) const
{
    check_hresult(shim()->remove_PhotoCaptured(token));
}

template <typename D> event_token impl_IVariablePhotoSequenceCapture<D>::Stopped(const Windows::Foundation::TypedEventHandler<Windows::Media::Capture::Core::VariablePhotoSequenceCapture, Windows::IInspectable> & handler) const
{
    event_token token {};
    check_hresult(shim()->add_Stopped(get(handler), &token));
    return token;
}

template <typename D> event_revoker<IVariablePhotoSequenceCapture> impl_IVariablePhotoSequenceCapture<D>::Stopped(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::Media::Capture::Core::VariablePhotoSequenceCapture, Windows::IInspectable> & handler) const
{
    return impl::make_event_revoker<D, IVariablePhotoSequenceCapture>(this, &ABI::Windows::Media::Capture::Core::IVariablePhotoSequenceCapture::remove_Stopped, Stopped(handler));
}

template <typename D> void impl_IVariablePhotoSequenceCapture<D>::Stopped(event_token token) const
{
    check_hresult(shim()->remove_Stopped(token));
}

template <typename D> Windows::Foundation::IAsyncAction impl_IVariablePhotoSequenceCapture2<D>::UpdateSettingsAsync() const
{
    Windows::Foundation::IAsyncAction operation;
    check_hresult(shim()->abi_UpdateSettingsAsync(put(operation)));
    return operation;
}

}

}
