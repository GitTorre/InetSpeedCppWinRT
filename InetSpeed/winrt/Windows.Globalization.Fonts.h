// C++ for the Windows Runtime v1.29
// Copyright (c) 2016 Microsoft Corporation

#pragma once

#include "internal\Windows.UI.Text.3.h"
#include "internal\Windows.Globalization.Fonts.3.h"
#include "Windows.Globalization.h"

WINRT_EXPORT namespace winrt {

namespace impl {

template <typename D>
struct produce<D, Windows::Globalization::Fonts::ILanguageFont> : produce_base<D, Windows::Globalization::Fonts::ILanguageFont>
{
    HRESULT __stdcall get_FontFamily(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(shim().FontFamily());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_FontWeight(abi_arg_out<Windows::UI::Text::FontWeight> weight) noexcept override
    {
        try
        {
            *weight = detach(shim().FontWeight());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_FontStretch(Windows::UI::Text::FontStretch * stretch) noexcept override
    {
        try
        {
            *stretch = detach(shim().FontStretch());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_FontStyle(Windows::UI::Text::FontStyle * style) noexcept override
    {
        try
        {
            *style = detach(shim().FontStyle());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ScaleFactor(double * scale) noexcept override
    {
        try
        {
            *scale = detach(shim().ScaleFactor());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Globalization::Fonts::ILanguageFontGroup> : produce_base<D, Windows::Globalization::Fonts::ILanguageFontGroup>
{
    HRESULT __stdcall get_UITextFont(abi_arg_out<Windows::Globalization::Fonts::ILanguageFont> value) noexcept override
    {
        try
        {
            *value = detach(shim().UITextFont());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_UIHeadingFont(abi_arg_out<Windows::Globalization::Fonts::ILanguageFont> value) noexcept override
    {
        try
        {
            *value = detach(shim().UIHeadingFont());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_UITitleFont(abi_arg_out<Windows::Globalization::Fonts::ILanguageFont> value) noexcept override
    {
        try
        {
            *value = detach(shim().UITitleFont());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_UICaptionFont(abi_arg_out<Windows::Globalization::Fonts::ILanguageFont> value) noexcept override
    {
        try
        {
            *value = detach(shim().UICaptionFont());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_UINotificationHeadingFont(abi_arg_out<Windows::Globalization::Fonts::ILanguageFont> value) noexcept override
    {
        try
        {
            *value = detach(shim().UINotificationHeadingFont());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_TraditionalDocumentFont(abi_arg_out<Windows::Globalization::Fonts::ILanguageFont> value) noexcept override
    {
        try
        {
            *value = detach(shim().TraditionalDocumentFont());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ModernDocumentFont(abi_arg_out<Windows::Globalization::Fonts::ILanguageFont> value) noexcept override
    {
        try
        {
            *value = detach(shim().ModernDocumentFont());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_DocumentHeadingFont(abi_arg_out<Windows::Globalization::Fonts::ILanguageFont> value) noexcept override
    {
        try
        {
            *value = detach(shim().DocumentHeadingFont());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_FixedWidthTextFont(abi_arg_out<Windows::Globalization::Fonts::ILanguageFont> value) noexcept override
    {
        try
        {
            *value = detach(shim().FixedWidthTextFont());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_DocumentAlternate1Font(abi_arg_out<Windows::Globalization::Fonts::ILanguageFont> value) noexcept override
    {
        try
        {
            *value = detach(shim().DocumentAlternate1Font());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_DocumentAlternate2Font(abi_arg_out<Windows::Globalization::Fonts::ILanguageFont> value) noexcept override
    {
        try
        {
            *value = detach(shim().DocumentAlternate2Font());
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
struct produce<D, Windows::Globalization::Fonts::ILanguageFontGroupFactory> : produce_base<D, Windows::Globalization::Fonts::ILanguageFontGroupFactory>
{
    HRESULT __stdcall abi_CreateLanguageFontGroup(abi_arg_in<hstring> languageTag, abi_arg_out<Windows::Globalization::Fonts::ILanguageFontGroup> recommendedFonts) noexcept override
    {
        try
        {
            *recommendedFonts = detach(shim().CreateLanguageFontGroup(*reinterpret_cast<const hstring *>(&languageTag)));
            return S_OK;
        }
        catch (...)
        {
            *recommendedFonts = nullptr;
            return impl::to_hresult();
        }
    }
};

}

namespace Windows::Globalization::Fonts {

template <typename D> Windows::Globalization::Fonts::LanguageFont impl_ILanguageFontGroup<D>::UITextFont() const
{
    Windows::Globalization::Fonts::LanguageFont value { nullptr };
    check_hresult(shim()->get_UITextFont(put(value)));
    return value;
}

template <typename D> Windows::Globalization::Fonts::LanguageFont impl_ILanguageFontGroup<D>::UIHeadingFont() const
{
    Windows::Globalization::Fonts::LanguageFont value { nullptr };
    check_hresult(shim()->get_UIHeadingFont(put(value)));
    return value;
}

template <typename D> Windows::Globalization::Fonts::LanguageFont impl_ILanguageFontGroup<D>::UITitleFont() const
{
    Windows::Globalization::Fonts::LanguageFont value { nullptr };
    check_hresult(shim()->get_UITitleFont(put(value)));
    return value;
}

template <typename D> Windows::Globalization::Fonts::LanguageFont impl_ILanguageFontGroup<D>::UICaptionFont() const
{
    Windows::Globalization::Fonts::LanguageFont value { nullptr };
    check_hresult(shim()->get_UICaptionFont(put(value)));
    return value;
}

template <typename D> Windows::Globalization::Fonts::LanguageFont impl_ILanguageFontGroup<D>::UINotificationHeadingFont() const
{
    Windows::Globalization::Fonts::LanguageFont value { nullptr };
    check_hresult(shim()->get_UINotificationHeadingFont(put(value)));
    return value;
}

template <typename D> Windows::Globalization::Fonts::LanguageFont impl_ILanguageFontGroup<D>::TraditionalDocumentFont() const
{
    Windows::Globalization::Fonts::LanguageFont value { nullptr };
    check_hresult(shim()->get_TraditionalDocumentFont(put(value)));
    return value;
}

template <typename D> Windows::Globalization::Fonts::LanguageFont impl_ILanguageFontGroup<D>::ModernDocumentFont() const
{
    Windows::Globalization::Fonts::LanguageFont value { nullptr };
    check_hresult(shim()->get_ModernDocumentFont(put(value)));
    return value;
}

template <typename D> Windows::Globalization::Fonts::LanguageFont impl_ILanguageFontGroup<D>::DocumentHeadingFont() const
{
    Windows::Globalization::Fonts::LanguageFont value { nullptr };
    check_hresult(shim()->get_DocumentHeadingFont(put(value)));
    return value;
}

template <typename D> Windows::Globalization::Fonts::LanguageFont impl_ILanguageFontGroup<D>::FixedWidthTextFont() const
{
    Windows::Globalization::Fonts::LanguageFont value { nullptr };
    check_hresult(shim()->get_FixedWidthTextFont(put(value)));
    return value;
}

template <typename D> Windows::Globalization::Fonts::LanguageFont impl_ILanguageFontGroup<D>::DocumentAlternate1Font() const
{
    Windows::Globalization::Fonts::LanguageFont value { nullptr };
    check_hresult(shim()->get_DocumentAlternate1Font(put(value)));
    return value;
}

template <typename D> Windows::Globalization::Fonts::LanguageFont impl_ILanguageFontGroup<D>::DocumentAlternate2Font() const
{
    Windows::Globalization::Fonts::LanguageFont value { nullptr };
    check_hresult(shim()->get_DocumentAlternate2Font(put(value)));
    return value;
}

template <typename D> Windows::Globalization::Fonts::LanguageFontGroup impl_ILanguageFontGroupFactory<D>::CreateLanguageFontGroup(hstring_ref languageTag) const
{
    Windows::Globalization::Fonts::LanguageFontGroup recommendedFonts { nullptr };
    check_hresult(shim()->abi_CreateLanguageFontGroup(get(languageTag), put(recommendedFonts)));
    return recommendedFonts;
}

template <typename D> hstring impl_ILanguageFont<D>::FontFamily() const
{
    hstring value;
    check_hresult(shim()->get_FontFamily(put(value)));
    return value;
}

template <typename D> Windows::UI::Text::FontWeight impl_ILanguageFont<D>::FontWeight() const
{
    Windows::UI::Text::FontWeight weight {};
    check_hresult(shim()->get_FontWeight(put(weight)));
    return weight;
}

template <typename D> Windows::UI::Text::FontStretch impl_ILanguageFont<D>::FontStretch() const
{
    Windows::UI::Text::FontStretch stretch {};
    check_hresult(shim()->get_FontStretch(&stretch));
    return stretch;
}

template <typename D> Windows::UI::Text::FontStyle impl_ILanguageFont<D>::FontStyle() const
{
    Windows::UI::Text::FontStyle style {};
    check_hresult(shim()->get_FontStyle(&style));
    return style;
}

template <typename D> double impl_ILanguageFont<D>::ScaleFactor() const
{
    double scale {};
    check_hresult(shim()->get_ScaleFactor(&scale));
    return scale;
}

inline LanguageFontGroup::LanguageFontGroup(hstring_ref languageTag) :
    LanguageFontGroup(get_activation_factory<LanguageFontGroup, ILanguageFontGroupFactory>().CreateLanguageFontGroup(languageTag))
{}

}

}
