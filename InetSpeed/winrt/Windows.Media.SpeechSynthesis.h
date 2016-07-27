// C++ for the Windows Runtime v1.29
// Copyright (c) 2016 Microsoft Corporation

#pragma once

#include "internal\Windows.Foundation.Collections.3.h"
#include "internal\Windows.Foundation.3.h"
#include "internal\Windows.Media.SpeechSynthesis.3.h"
#include "Windows.Media.h"
#include "Windows.Foundation.h"
#include "Windows.Storage.Streams.h"

WINRT_EXPORT namespace winrt {

namespace impl {

template <typename D>
struct produce<D, Windows::Media::SpeechSynthesis::IInstalledVoicesStatic> : produce_base<D, Windows::Media::SpeechSynthesis::IInstalledVoicesStatic>
{
    HRESULT __stdcall get_AllVoices(abi_arg_out<Windows::Foundation::Collections::IVectorView<Windows::Media::SpeechSynthesis::VoiceInformation>> value) noexcept override
    {
        try
        {
            *value = detach(shim().AllVoices());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_DefaultVoice(abi_arg_out<Windows::Media::SpeechSynthesis::IVoiceInformation> value) noexcept override
    {
        try
        {
            *value = detach(shim().DefaultVoice());
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
struct produce<D, Windows::Media::SpeechSynthesis::ISpeechSynthesisStream> : produce_base<D, Windows::Media::SpeechSynthesis::ISpeechSynthesisStream>
{
    HRESULT __stdcall get_Markers(abi_arg_out<Windows::Foundation::Collections::IVectorView<Windows::Media::IMediaMarker>> value) noexcept override
    {
        try
        {
            *value = detach(shim().Markers());
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
struct produce<D, Windows::Media::SpeechSynthesis::ISpeechSynthesizer> : produce_base<D, Windows::Media::SpeechSynthesis::ISpeechSynthesizer>
{
    HRESULT __stdcall abi_SynthesizeTextToStreamAsync(abi_arg_in<hstring> text, abi_arg_out<Windows::Foundation::IAsyncOperation<Windows::Media::SpeechSynthesis::SpeechSynthesisStream>> operation) noexcept override
    {
        try
        {
            *operation = detach(shim().SynthesizeTextToStreamAsync(*reinterpret_cast<const hstring *>(&text)));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_SynthesizeSsmlToStreamAsync(abi_arg_in<hstring> Ssml, abi_arg_out<Windows::Foundation::IAsyncOperation<Windows::Media::SpeechSynthesis::SpeechSynthesisStream>> operation) noexcept override
    {
        try
        {
            *operation = detach(shim().SynthesizeSsmlToStreamAsync(*reinterpret_cast<const hstring *>(&Ssml)));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Voice(abi_arg_in<Windows::Media::SpeechSynthesis::IVoiceInformation> value) noexcept override
    {
        try
        {
            shim().Voice(*reinterpret_cast<const Windows::Media::SpeechSynthesis::VoiceInformation *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Voice(abi_arg_out<Windows::Media::SpeechSynthesis::IVoiceInformation> value) noexcept override
    {
        try
        {
            *value = detach(shim().Voice());
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
struct produce<D, Windows::Media::SpeechSynthesis::IVoiceInformation> : produce_base<D, Windows::Media::SpeechSynthesis::IVoiceInformation>
{
    HRESULT __stdcall get_DisplayName(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(shim().DisplayName());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

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

    HRESULT __stdcall get_Language(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(shim().Language());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Description(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(shim().Description());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Gender(Windows::Media::SpeechSynthesis::VoiceGender * value) noexcept override
    {
        try
        {
            *value = detach(shim().Gender());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

}

namespace Windows::Media::SpeechSynthesis {

template <typename D> hstring impl_IVoiceInformation<D>::DisplayName() const
{
    hstring value;
    check_hresult(shim()->get_DisplayName(put(value)));
    return value;
}

template <typename D> hstring impl_IVoiceInformation<D>::Id() const
{
    hstring value;
    check_hresult(shim()->get_Id(put(value)));
    return value;
}

template <typename D> hstring impl_IVoiceInformation<D>::Language() const
{
    hstring value;
    check_hresult(shim()->get_Language(put(value)));
    return value;
}

template <typename D> hstring impl_IVoiceInformation<D>::Description() const
{
    hstring value;
    check_hresult(shim()->get_Description(put(value)));
    return value;
}

template <typename D> Windows::Media::SpeechSynthesis::VoiceGender impl_IVoiceInformation<D>::Gender() const
{
    Windows::Media::SpeechSynthesis::VoiceGender value {};
    check_hresult(shim()->get_Gender(&value));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVectorView<Windows::Media::SpeechSynthesis::VoiceInformation> impl_IInstalledVoicesStatic<D>::AllVoices() const
{
    Windows::Foundation::Collections::IVectorView<Windows::Media::SpeechSynthesis::VoiceInformation> value;
    check_hresult(shim()->get_AllVoices(put(value)));
    return value;
}

template <typename D> Windows::Media::SpeechSynthesis::VoiceInformation impl_IInstalledVoicesStatic<D>::DefaultVoice() const
{
    Windows::Media::SpeechSynthesis::VoiceInformation value { nullptr };
    check_hresult(shim()->get_DefaultVoice(put(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVectorView<Windows::Media::IMediaMarker> impl_ISpeechSynthesisStream<D>::Markers() const
{
    Windows::Foundation::Collections::IVectorView<Windows::Media::IMediaMarker> value;
    check_hresult(shim()->get_Markers(put(value)));
    return value;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Media::SpeechSynthesis::SpeechSynthesisStream> impl_ISpeechSynthesizer<D>::SynthesizeTextToStreamAsync(hstring_ref text) const
{
    Windows::Foundation::IAsyncOperation<Windows::Media::SpeechSynthesis::SpeechSynthesisStream> operation;
    check_hresult(shim()->abi_SynthesizeTextToStreamAsync(get(text), put(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Media::SpeechSynthesis::SpeechSynthesisStream> impl_ISpeechSynthesizer<D>::SynthesizeSsmlToStreamAsync(hstring_ref Ssml) const
{
    Windows::Foundation::IAsyncOperation<Windows::Media::SpeechSynthesis::SpeechSynthesisStream> operation;
    check_hresult(shim()->abi_SynthesizeSsmlToStreamAsync(get(Ssml), put(operation)));
    return operation;
}

template <typename D> void impl_ISpeechSynthesizer<D>::Voice(const Windows::Media::SpeechSynthesis::VoiceInformation & value) const
{
    check_hresult(shim()->put_Voice(get(value)));
}

template <typename D> Windows::Media::SpeechSynthesis::VoiceInformation impl_ISpeechSynthesizer<D>::Voice() const
{
    Windows::Media::SpeechSynthesis::VoiceInformation value { nullptr };
    check_hresult(shim()->get_Voice(put(value)));
    return value;
}

inline SpeechSynthesizer::SpeechSynthesizer() :
    SpeechSynthesizer(activate_instance<SpeechSynthesizer>())
{}

inline Windows::Foundation::Collections::IVectorView<Windows::Media::SpeechSynthesis::VoiceInformation> SpeechSynthesizer::AllVoices()
{
    return get_activation_factory<SpeechSynthesizer, IInstalledVoicesStatic>().AllVoices();
}

inline Windows::Media::SpeechSynthesis::VoiceInformation SpeechSynthesizer::DefaultVoice()
{
    return get_activation_factory<SpeechSynthesizer, IInstalledVoicesStatic>().DefaultVoice();
}

}

}
