// C++ for the Windows Runtime v1.29
// Copyright (c) 2016 Microsoft Corporation

#pragma once

#include "internal\Windows.UI.3.h"
#include "internal\Windows.Foundation.3.h"
#include "internal\Windows.Storage.Streams.3.h"
#include "internal\Windows.UI.Text.3.h"
#include "Windows.UI.h"

WINRT_EXPORT namespace winrt {

namespace impl {

template <typename D>
struct produce<D, Windows::UI::Text::IFontWeights> : produce_base<D, Windows::UI::Text::IFontWeights>
{};

template <typename D>
struct produce<D, Windows::UI::Text::IFontWeightsStatics> : produce_base<D, Windows::UI::Text::IFontWeightsStatics>
{
    HRESULT __stdcall get_Black(abi_arg_out<Windows::UI::Text::FontWeight> value) noexcept override
    {
        try
        {
            *value = detach(shim().Black());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Bold(abi_arg_out<Windows::UI::Text::FontWeight> value) noexcept override
    {
        try
        {
            *value = detach(shim().Bold());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ExtraBlack(abi_arg_out<Windows::UI::Text::FontWeight> value) noexcept override
    {
        try
        {
            *value = detach(shim().ExtraBlack());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ExtraBold(abi_arg_out<Windows::UI::Text::FontWeight> value) noexcept override
    {
        try
        {
            *value = detach(shim().ExtraBold());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ExtraLight(abi_arg_out<Windows::UI::Text::FontWeight> value) noexcept override
    {
        try
        {
            *value = detach(shim().ExtraLight());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Light(abi_arg_out<Windows::UI::Text::FontWeight> value) noexcept override
    {
        try
        {
            *value = detach(shim().Light());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Medium(abi_arg_out<Windows::UI::Text::FontWeight> value) noexcept override
    {
        try
        {
            *value = detach(shim().Medium());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Normal(abi_arg_out<Windows::UI::Text::FontWeight> value) noexcept override
    {
        try
        {
            *value = detach(shim().Normal());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_SemiBold(abi_arg_out<Windows::UI::Text::FontWeight> value) noexcept override
    {
        try
        {
            *value = detach(shim().SemiBold());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_SemiLight(abi_arg_out<Windows::UI::Text::FontWeight> value) noexcept override
    {
        try
        {
            *value = detach(shim().SemiLight());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Thin(abi_arg_out<Windows::UI::Text::FontWeight> value) noexcept override
    {
        try
        {
            *value = detach(shim().Thin());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Text::ITextCharacterFormat> : produce_base<D, Windows::UI::Text::ITextCharacterFormat>
{
    HRESULT __stdcall get_AllCaps(Windows::UI::Text::FormatEffect * value) noexcept override
    {
        try
        {
            *value = detach(shim().AllCaps());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_AllCaps(Windows::UI::Text::FormatEffect value) noexcept override
    {
        try
        {
            shim().AllCaps(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_BackgroundColor(abi_arg_out<Windows::UI::Color> value) noexcept override
    {
        try
        {
            *value = detach(shim().BackgroundColor());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_BackgroundColor(abi_arg_in<Windows::UI::Color> value) noexcept override
    {
        try
        {
            shim().BackgroundColor(*reinterpret_cast<const Windows::UI::Color *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Bold(Windows::UI::Text::FormatEffect * value) noexcept override
    {
        try
        {
            *value = detach(shim().Bold());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Bold(Windows::UI::Text::FormatEffect value) noexcept override
    {
        try
        {
            shim().Bold(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_FontStretch(Windows::UI::Text::FontStretch * value) noexcept override
    {
        try
        {
            *value = detach(shim().FontStretch());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_FontStretch(Windows::UI::Text::FontStretch value) noexcept override
    {
        try
        {
            shim().FontStretch(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_FontStyle(Windows::UI::Text::FontStyle * value) noexcept override
    {
        try
        {
            *value = detach(shim().FontStyle());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_FontStyle(Windows::UI::Text::FontStyle value) noexcept override
    {
        try
        {
            shim().FontStyle(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ForegroundColor(abi_arg_out<Windows::UI::Color> value) noexcept override
    {
        try
        {
            *value = detach(shim().ForegroundColor());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_ForegroundColor(abi_arg_in<Windows::UI::Color> value) noexcept override
    {
        try
        {
            shim().ForegroundColor(*reinterpret_cast<const Windows::UI::Color *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Hidden(Windows::UI::Text::FormatEffect * value) noexcept override
    {
        try
        {
            *value = detach(shim().Hidden());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Hidden(Windows::UI::Text::FormatEffect value) noexcept override
    {
        try
        {
            shim().Hidden(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Italic(Windows::UI::Text::FormatEffect * value) noexcept override
    {
        try
        {
            *value = detach(shim().Italic());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Italic(Windows::UI::Text::FormatEffect value) noexcept override
    {
        try
        {
            shim().Italic(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Kerning(float * value) noexcept override
    {
        try
        {
            *value = detach(shim().Kerning());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Kerning(float value) noexcept override
    {
        try
        {
            shim().Kerning(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_LanguageTag(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(shim().LanguageTag());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_LanguageTag(abi_arg_in<hstring> value) noexcept override
    {
        try
        {
            shim().LanguageTag(*reinterpret_cast<const hstring *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_LinkType(Windows::UI::Text::LinkType * value) noexcept override
    {
        try
        {
            *value = detach(shim().LinkType());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Name(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(shim().Name());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Name(abi_arg_in<hstring> value) noexcept override
    {
        try
        {
            shim().Name(*reinterpret_cast<const hstring *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Outline(Windows::UI::Text::FormatEffect * value) noexcept override
    {
        try
        {
            *value = detach(shim().Outline());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Outline(Windows::UI::Text::FormatEffect value) noexcept override
    {
        try
        {
            shim().Outline(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Position(float * value) noexcept override
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

    HRESULT __stdcall put_Position(float value) noexcept override
    {
        try
        {
            shim().Position(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ProtectedText(Windows::UI::Text::FormatEffect * value) noexcept override
    {
        try
        {
            *value = detach(shim().ProtectedText());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_ProtectedText(Windows::UI::Text::FormatEffect value) noexcept override
    {
        try
        {
            shim().ProtectedText(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Size(float * value) noexcept override
    {
        try
        {
            *value = detach(shim().Size());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Size(float value) noexcept override
    {
        try
        {
            shim().Size(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_SmallCaps(Windows::UI::Text::FormatEffect * value) noexcept override
    {
        try
        {
            *value = detach(shim().SmallCaps());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_SmallCaps(Windows::UI::Text::FormatEffect value) noexcept override
    {
        try
        {
            shim().SmallCaps(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Spacing(float * value) noexcept override
    {
        try
        {
            *value = detach(shim().Spacing());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Spacing(float value) noexcept override
    {
        try
        {
            shim().Spacing(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Strikethrough(Windows::UI::Text::FormatEffect * value) noexcept override
    {
        try
        {
            *value = detach(shim().Strikethrough());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Strikethrough(Windows::UI::Text::FormatEffect value) noexcept override
    {
        try
        {
            shim().Strikethrough(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Subscript(Windows::UI::Text::FormatEffect * value) noexcept override
    {
        try
        {
            *value = detach(shim().Subscript());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Subscript(Windows::UI::Text::FormatEffect value) noexcept override
    {
        try
        {
            shim().Subscript(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Superscript(Windows::UI::Text::FormatEffect * value) noexcept override
    {
        try
        {
            *value = detach(shim().Superscript());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Superscript(Windows::UI::Text::FormatEffect value) noexcept override
    {
        try
        {
            shim().Superscript(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_TextScript(Windows::UI::Text::TextScript * value) noexcept override
    {
        try
        {
            *value = detach(shim().TextScript());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_TextScript(Windows::UI::Text::TextScript value) noexcept override
    {
        try
        {
            shim().TextScript(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Underline(Windows::UI::Text::UnderlineType * value) noexcept override
    {
        try
        {
            *value = detach(shim().Underline());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Underline(Windows::UI::Text::UnderlineType value) noexcept override
    {
        try
        {
            shim().Underline(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Weight(int32_t * value) noexcept override
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

    HRESULT __stdcall put_Weight(int32_t value) noexcept override
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

    HRESULT __stdcall abi_SetClone(abi_arg_in<Windows::UI::Text::ITextCharacterFormat> value) noexcept override
    {
        try
        {
            shim().SetClone(*reinterpret_cast<const Windows::UI::Text::ITextCharacterFormat *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_GetClone(abi_arg_out<Windows::UI::Text::ITextCharacterFormat> value) noexcept override
    {
        try
        {
            *value = detach(shim().GetClone());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_IsEqual(abi_arg_in<Windows::UI::Text::ITextCharacterFormat> format, bool * value) noexcept override
    {
        try
        {
            *value = detach(shim().IsEqual(*reinterpret_cast<const Windows::UI::Text::ITextCharacterFormat *>(&format)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Text::ITextConstantsStatics> : produce_base<D, Windows::UI::Text::ITextConstantsStatics>
{
    HRESULT __stdcall get_AutoColor(abi_arg_out<Windows::UI::Color> value) noexcept override
    {
        try
        {
            *value = detach(shim().AutoColor());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_MinUnitCount(int32_t * value) noexcept override
    {
        try
        {
            *value = detach(shim().MinUnitCount());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_MaxUnitCount(int32_t * value) noexcept override
    {
        try
        {
            *value = detach(shim().MaxUnitCount());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_UndefinedColor(abi_arg_out<Windows::UI::Color> value) noexcept override
    {
        try
        {
            *value = detach(shim().UndefinedColor());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_UndefinedFloatValue(float * value) noexcept override
    {
        try
        {
            *value = detach(shim().UndefinedFloatValue());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_UndefinedInt32Value(int32_t * value) noexcept override
    {
        try
        {
            *value = detach(shim().UndefinedInt32Value());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_UndefinedFontStretch(Windows::UI::Text::FontStretch * value) noexcept override
    {
        try
        {
            *value = detach(shim().UndefinedFontStretch());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_UndefinedFontStyle(Windows::UI::Text::FontStyle * value) noexcept override
    {
        try
        {
            *value = detach(shim().UndefinedFontStyle());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Text::ITextDocument> : produce_base<D, Windows::UI::Text::ITextDocument>
{
    HRESULT __stdcall get_CaretType(Windows::UI::Text::CaretType * value) noexcept override
    {
        try
        {
            *value = detach(shim().CaretType());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_CaretType(Windows::UI::Text::CaretType value) noexcept override
    {
        try
        {
            shim().CaretType(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_DefaultTabStop(float * value) noexcept override
    {
        try
        {
            *value = detach(shim().DefaultTabStop());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_DefaultTabStop(float value) noexcept override
    {
        try
        {
            shim().DefaultTabStop(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Selection(abi_arg_out<Windows::UI::Text::ITextSelection> value) noexcept override
    {
        try
        {
            *value = detach(shim().Selection());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_UndoLimit(uint32_t * value) noexcept override
    {
        try
        {
            *value = detach(shim().UndoLimit());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_UndoLimit(uint32_t value) noexcept override
    {
        try
        {
            shim().UndoLimit(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_CanCopy(bool * value) noexcept override
    {
        try
        {
            *value = detach(shim().CanCopy());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_CanPaste(bool * value) noexcept override
    {
        try
        {
            *value = detach(shim().CanPaste());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_CanRedo(bool * value) noexcept override
    {
        try
        {
            *value = detach(shim().CanRedo());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_CanUndo(bool * value) noexcept override
    {
        try
        {
            *value = detach(shim().CanUndo());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_ApplyDisplayUpdates(int32_t * count) noexcept override
    {
        try
        {
            *count = detach(shim().ApplyDisplayUpdates());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_BatchDisplayUpdates(int32_t * count) noexcept override
    {
        try
        {
            *count = detach(shim().BatchDisplayUpdates());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_BeginUndoGroup() noexcept override
    {
        try
        {
            shim().BeginUndoGroup();
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_EndUndoGroup() noexcept override
    {
        try
        {
            shim().EndUndoGroup();
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_GetDefaultCharacterFormat(abi_arg_out<Windows::UI::Text::ITextCharacterFormat> value) noexcept override
    {
        try
        {
            *value = detach(shim().GetDefaultCharacterFormat());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_GetDefaultParagraphFormat(abi_arg_out<Windows::UI::Text::ITextParagraphFormat> value) noexcept override
    {
        try
        {
            *value = detach(shim().GetDefaultParagraphFormat());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_GetRange(int32_t startPosition, int32_t endPosition, abi_arg_out<Windows::UI::Text::ITextRange> value) noexcept override
    {
        try
        {
            *value = detach(shim().GetRange(startPosition, endPosition));
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_GetRangeFromPoint(abi_arg_in<Windows::Foundation::Point> point, Windows::UI::Text::PointOptions options, abi_arg_out<Windows::UI::Text::ITextRange> value) noexcept override
    {
        try
        {
            *value = detach(shim().GetRangeFromPoint(*reinterpret_cast<const Windows::Foundation::Point *>(&point), options));
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_GetText(Windows::UI::Text::TextGetOptions options, abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            shim().GetText(options, *value);
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_LoadFromStream(Windows::UI::Text::TextSetOptions options, abi_arg_in<Windows::Storage::Streams::IRandomAccessStream> value) noexcept override
    {
        try
        {
            shim().LoadFromStream(options, *reinterpret_cast<const Windows::Storage::Streams::IRandomAccessStream *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_Redo() noexcept override
    {
        try
        {
            shim().Redo();
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_SaveToStream(Windows::UI::Text::TextGetOptions options, abi_arg_in<Windows::Storage::Streams::IRandomAccessStream> value) noexcept override
    {
        try
        {
            shim().SaveToStream(options, *reinterpret_cast<const Windows::Storage::Streams::IRandomAccessStream *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_SetDefaultCharacterFormat(abi_arg_in<Windows::UI::Text::ITextCharacterFormat> value) noexcept override
    {
        try
        {
            shim().SetDefaultCharacterFormat(*reinterpret_cast<const Windows::UI::Text::ITextCharacterFormat *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_SetDefaultParagraphFormat(abi_arg_in<Windows::UI::Text::ITextParagraphFormat> value) noexcept override
    {
        try
        {
            shim().SetDefaultParagraphFormat(*reinterpret_cast<const Windows::UI::Text::ITextParagraphFormat *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_SetText(Windows::UI::Text::TextSetOptions options, abi_arg_in<hstring> value) noexcept override
    {
        try
        {
            shim().SetText(options, *reinterpret_cast<const hstring *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_Undo() noexcept override
    {
        try
        {
            shim().Undo();
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Text::ITextParagraphFormat> : produce_base<D, Windows::UI::Text::ITextParagraphFormat>
{
    HRESULT __stdcall get_Alignment(Windows::UI::Text::ParagraphAlignment * value) noexcept override
    {
        try
        {
            *value = detach(shim().Alignment());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Alignment(Windows::UI::Text::ParagraphAlignment value) noexcept override
    {
        try
        {
            shim().Alignment(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_FirstLineIndent(float * value) noexcept override
    {
        try
        {
            *value = detach(shim().FirstLineIndent());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_KeepTogether(Windows::UI::Text::FormatEffect * value) noexcept override
    {
        try
        {
            *value = detach(shim().KeepTogether());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_KeepTogether(Windows::UI::Text::FormatEffect value) noexcept override
    {
        try
        {
            shim().KeepTogether(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_KeepWithNext(Windows::UI::Text::FormatEffect * value) noexcept override
    {
        try
        {
            *value = detach(shim().KeepWithNext());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_KeepWithNext(Windows::UI::Text::FormatEffect value) noexcept override
    {
        try
        {
            shim().KeepWithNext(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_LeftIndent(float * value) noexcept override
    {
        try
        {
            *value = detach(shim().LeftIndent());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_LineSpacing(float * value) noexcept override
    {
        try
        {
            *value = detach(shim().LineSpacing());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_LineSpacingRule(Windows::UI::Text::LineSpacingRule * value) noexcept override
    {
        try
        {
            *value = detach(shim().LineSpacingRule());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ListAlignment(Windows::UI::Text::MarkerAlignment * value) noexcept override
    {
        try
        {
            *value = detach(shim().ListAlignment());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_ListAlignment(Windows::UI::Text::MarkerAlignment value) noexcept override
    {
        try
        {
            shim().ListAlignment(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ListLevelIndex(int32_t * value) noexcept override
    {
        try
        {
            *value = detach(shim().ListLevelIndex());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_ListLevelIndex(int32_t value) noexcept override
    {
        try
        {
            shim().ListLevelIndex(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ListStart(int32_t * value) noexcept override
    {
        try
        {
            *value = detach(shim().ListStart());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_ListStart(int32_t value) noexcept override
    {
        try
        {
            shim().ListStart(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ListStyle(Windows::UI::Text::MarkerStyle * value) noexcept override
    {
        try
        {
            *value = detach(shim().ListStyle());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_ListStyle(Windows::UI::Text::MarkerStyle value) noexcept override
    {
        try
        {
            shim().ListStyle(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ListTab(float * value) noexcept override
    {
        try
        {
            *value = detach(shim().ListTab());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_ListTab(float value) noexcept override
    {
        try
        {
            shim().ListTab(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ListType(Windows::UI::Text::MarkerType * value) noexcept override
    {
        try
        {
            *value = detach(shim().ListType());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_ListType(Windows::UI::Text::MarkerType value) noexcept override
    {
        try
        {
            shim().ListType(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_NoLineNumber(Windows::UI::Text::FormatEffect * value) noexcept override
    {
        try
        {
            *value = detach(shim().NoLineNumber());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_NoLineNumber(Windows::UI::Text::FormatEffect value) noexcept override
    {
        try
        {
            shim().NoLineNumber(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_PageBreakBefore(Windows::UI::Text::FormatEffect * value) noexcept override
    {
        try
        {
            *value = detach(shim().PageBreakBefore());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_PageBreakBefore(Windows::UI::Text::FormatEffect value) noexcept override
    {
        try
        {
            shim().PageBreakBefore(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_RightIndent(float * value) noexcept override
    {
        try
        {
            *value = detach(shim().RightIndent());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_RightIndent(float value) noexcept override
    {
        try
        {
            shim().RightIndent(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_RightToLeft(Windows::UI::Text::FormatEffect * value) noexcept override
    {
        try
        {
            *value = detach(shim().RightToLeft());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_RightToLeft(Windows::UI::Text::FormatEffect value) noexcept override
    {
        try
        {
            shim().RightToLeft(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Style(Windows::UI::Text::ParagraphStyle * value) noexcept override
    {
        try
        {
            *value = detach(shim().Style());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Style(Windows::UI::Text::ParagraphStyle value) noexcept override
    {
        try
        {
            shim().Style(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_SpaceAfter(float * value) noexcept override
    {
        try
        {
            *value = detach(shim().SpaceAfter());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_SpaceAfter(float value) noexcept override
    {
        try
        {
            shim().SpaceAfter(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_SpaceBefore(float * value) noexcept override
    {
        try
        {
            *value = detach(shim().SpaceBefore());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_SpaceBefore(float value) noexcept override
    {
        try
        {
            shim().SpaceBefore(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_WidowControl(Windows::UI::Text::FormatEffect * value) noexcept override
    {
        try
        {
            *value = detach(shim().WidowControl());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_WidowControl(Windows::UI::Text::FormatEffect value) noexcept override
    {
        try
        {
            shim().WidowControl(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_TabCount(int32_t * value) noexcept override
    {
        try
        {
            *value = detach(shim().TabCount());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_AddTab(float position, Windows::UI::Text::TabAlignment align, Windows::UI::Text::TabLeader leader) noexcept override
    {
        try
        {
            shim().AddTab(position, align, leader);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_ClearAllTabs() noexcept override
    {
        try
        {
            shim().ClearAllTabs();
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_DeleteTab(float position) noexcept override
    {
        try
        {
            shim().DeleteTab(position);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_GetClone(abi_arg_out<Windows::UI::Text::ITextParagraphFormat> value) noexcept override
    {
        try
        {
            *value = detach(shim().GetClone());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_GetTab(int32_t index, float * position, Windows::UI::Text::TabAlignment * align, Windows::UI::Text::TabLeader * leader) noexcept override
    {
        try
        {
            shim().GetTab(index, *position, *align, *leader);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_IsEqual(abi_arg_in<Windows::UI::Text::ITextParagraphFormat> format, bool * value) noexcept override
    {
        try
        {
            *value = detach(shim().IsEqual(*reinterpret_cast<const Windows::UI::Text::ITextParagraphFormat *>(&format)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_SetClone(abi_arg_in<Windows::UI::Text::ITextParagraphFormat> format) noexcept override
    {
        try
        {
            shim().SetClone(*reinterpret_cast<const Windows::UI::Text::ITextParagraphFormat *>(&format));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_SetIndents(float start, float left, float right) noexcept override
    {
        try
        {
            shim().SetIndents(start, left, right);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_SetLineSpacing(Windows::UI::Text::LineSpacingRule rule, float spacing) noexcept override
    {
        try
        {
            shim().SetLineSpacing(rule, spacing);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Text::ITextRange> : produce_base<D, Windows::UI::Text::ITextRange>
{
    HRESULT __stdcall get_Character(wchar_t * value) noexcept override
    {
        try
        {
            *value = detach(shim().Character());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Character(wchar_t value) noexcept override
    {
        try
        {
            shim().Character(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_CharacterFormat(abi_arg_out<Windows::UI::Text::ITextCharacterFormat> value) noexcept override
    {
        try
        {
            *value = detach(shim().CharacterFormat());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_CharacterFormat(abi_arg_in<Windows::UI::Text::ITextCharacterFormat> value) noexcept override
    {
        try
        {
            shim().CharacterFormat(*reinterpret_cast<const Windows::UI::Text::ITextCharacterFormat *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_FormattedText(abi_arg_out<Windows::UI::Text::ITextRange> value) noexcept override
    {
        try
        {
            *value = detach(shim().FormattedText());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_FormattedText(abi_arg_in<Windows::UI::Text::ITextRange> value) noexcept override
    {
        try
        {
            shim().FormattedText(*reinterpret_cast<const Windows::UI::Text::ITextRange *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_EndPosition(int32_t * value) noexcept override
    {
        try
        {
            *value = detach(shim().EndPosition());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_EndPosition(int32_t value) noexcept override
    {
        try
        {
            shim().EndPosition(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Gravity(Windows::UI::Text::RangeGravity * value) noexcept override
    {
        try
        {
            *value = detach(shim().Gravity());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Gravity(Windows::UI::Text::RangeGravity value) noexcept override
    {
        try
        {
            shim().Gravity(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Length(int32_t * length) noexcept override
    {
        try
        {
            *length = detach(shim().Length());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Link(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(shim().Link());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Link(abi_arg_in<hstring> value) noexcept override
    {
        try
        {
            shim().Link(*reinterpret_cast<const hstring *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ParagraphFormat(abi_arg_out<Windows::UI::Text::ITextParagraphFormat> value) noexcept override
    {
        try
        {
            *value = detach(shim().ParagraphFormat());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_ParagraphFormat(abi_arg_in<Windows::UI::Text::ITextParagraphFormat> value) noexcept override
    {
        try
        {
            shim().ParagraphFormat(*reinterpret_cast<const Windows::UI::Text::ITextParagraphFormat *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_StartPosition(int32_t * value) noexcept override
    {
        try
        {
            *value = detach(shim().StartPosition());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_StartPosition(int32_t value) noexcept override
    {
        try
        {
            shim().StartPosition(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_StoryLength(int32_t * value) noexcept override
    {
        try
        {
            *value = detach(shim().StoryLength());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Text(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(shim().Text());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Text(abi_arg_in<hstring> value) noexcept override
    {
        try
        {
            shim().Text(*reinterpret_cast<const hstring *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_CanPaste(int32_t format, bool * value) noexcept override
    {
        try
        {
            *value = detach(shim().CanPaste(format));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_ChangeCase(Windows::UI::Text::LetterCase value) noexcept override
    {
        try
        {
            shim().ChangeCase(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_Collapse(bool value) noexcept override
    {
        try
        {
            shim().Collapse(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_Copy() noexcept override
    {
        try
        {
            shim().Copy();
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_Cut() noexcept override
    {
        try
        {
            shim().Cut();
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_Delete(Windows::UI::Text::TextRangeUnit unit, int32_t count, int32_t * delta) noexcept override
    {
        try
        {
            *delta = detach(shim().Delete(unit, count));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_EndOf(Windows::UI::Text::TextRangeUnit unit, bool extend, int32_t * delta) noexcept override
    {
        try
        {
            *delta = detach(shim().EndOf(unit, extend));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_Expand(Windows::UI::Text::TextRangeUnit unit, int32_t * delta) noexcept override
    {
        try
        {
            *delta = detach(shim().Expand(unit));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_FindText(abi_arg_in<hstring> value, int32_t scanLength, Windows::UI::Text::FindOptions options, int32_t * length) noexcept override
    {
        try
        {
            *length = detach(shim().FindText(*reinterpret_cast<const hstring *>(&value), scanLength, options));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_GetCharacterUtf32(uint32_t * value, int32_t offset) noexcept override
    {
        try
        {
            shim().GetCharacterUtf32(*value, offset);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_GetClone(abi_arg_out<Windows::UI::Text::ITextRange> value) noexcept override
    {
        try
        {
            *value = detach(shim().GetClone());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_GetIndex(Windows::UI::Text::TextRangeUnit unit, int32_t * index) noexcept override
    {
        try
        {
            *index = detach(shim().GetIndex(unit));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_GetPoint(Windows::UI::Text::HorizontalCharacterAlignment horizontalAlign, Windows::UI::Text::VerticalCharacterAlignment verticalAlign, Windows::UI::Text::PointOptions options, abi_arg_out<Windows::Foundation::Point> point) noexcept override
    {
        try
        {
            shim().GetPoint(horizontalAlign, verticalAlign, options, *point);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_GetRect(Windows::UI::Text::PointOptions options, abi_arg_out<Windows::Foundation::Rect> rect, int32_t * hit) noexcept override
    {
        try
        {
            shim().GetRect(options, *rect, *hit);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_GetText(Windows::UI::Text::TextGetOptions options, abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            shim().GetText(options, *value);
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_GetTextViaStream(Windows::UI::Text::TextGetOptions options, abi_arg_in<Windows::Storage::Streams::IRandomAccessStream> value) noexcept override
    {
        try
        {
            shim().GetTextViaStream(options, *reinterpret_cast<const Windows::Storage::Streams::IRandomAccessStream *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_InRange(abi_arg_in<Windows::UI::Text::ITextRange> range, bool * value) noexcept override
    {
        try
        {
            *value = detach(shim().InRange(*reinterpret_cast<const Windows::UI::Text::ITextRange *>(&range)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_InsertImage(int32_t width, int32_t height, int32_t ascent, Windows::UI::Text::VerticalCharacterAlignment verticalAlign, abi_arg_in<hstring> alternateText, abi_arg_in<Windows::Storage::Streams::IRandomAccessStream> value) noexcept override
    {
        try
        {
            shim().InsertImage(width, height, ascent, verticalAlign, *reinterpret_cast<const hstring *>(&alternateText), *reinterpret_cast<const Windows::Storage::Streams::IRandomAccessStream *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_InStory(abi_arg_in<Windows::UI::Text::ITextRange> range, bool * value) noexcept override
    {
        try
        {
            *value = detach(shim().InStory(*reinterpret_cast<const Windows::UI::Text::ITextRange *>(&range)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_IsEqual(abi_arg_in<Windows::UI::Text::ITextRange> range, bool * value) noexcept override
    {
        try
        {
            *value = detach(shim().IsEqual(*reinterpret_cast<const Windows::UI::Text::ITextRange *>(&range)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_Move(Windows::UI::Text::TextRangeUnit unit, int32_t count, int32_t * delta) noexcept override
    {
        try
        {
            *delta = detach(shim().Move(unit, count));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_MoveEnd(Windows::UI::Text::TextRangeUnit unit, int32_t count, int32_t * delta) noexcept override
    {
        try
        {
            *delta = detach(shim().MoveEnd(unit, count));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_MoveStart(Windows::UI::Text::TextRangeUnit unit, int32_t count, int32_t * delta) noexcept override
    {
        try
        {
            *delta = detach(shim().MoveStart(unit, count));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_Paste(int32_t format) noexcept override
    {
        try
        {
            shim().Paste(format);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_ScrollIntoView(Windows::UI::Text::PointOptions value) noexcept override
    {
        try
        {
            shim().ScrollIntoView(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_MatchSelection() noexcept override
    {
        try
        {
            shim().MatchSelection();
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_SetIndex(Windows::UI::Text::TextRangeUnit unit, int32_t index, bool extend) noexcept override
    {
        try
        {
            shim().SetIndex(unit, index, extend);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_SetPoint(abi_arg_in<Windows::Foundation::Point> point, Windows::UI::Text::PointOptions options, bool extend) noexcept override
    {
        try
        {
            shim().SetPoint(*reinterpret_cast<const Windows::Foundation::Point *>(&point), options, extend);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_SetRange(int32_t startPosition, int32_t endPosition) noexcept override
    {
        try
        {
            shim().SetRange(startPosition, endPosition);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_SetText(Windows::UI::Text::TextSetOptions options, abi_arg_in<hstring> value) noexcept override
    {
        try
        {
            shim().SetText(options, *reinterpret_cast<const hstring *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_SetTextViaStream(Windows::UI::Text::TextSetOptions options, abi_arg_in<Windows::Storage::Streams::IRandomAccessStream> value) noexcept override
    {
        try
        {
            shim().SetTextViaStream(options, *reinterpret_cast<const Windows::Storage::Streams::IRandomAccessStream *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_StartOf(Windows::UI::Text::TextRangeUnit unit, bool extend, int32_t * delta) noexcept override
    {
        try
        {
            *delta = detach(shim().StartOf(unit, extend));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Text::ITextSelection> : produce_base<D, Windows::UI::Text::ITextSelection>
{
    HRESULT __stdcall get_Options(Windows::UI::Text::SelectionOptions * value) noexcept override
    {
        try
        {
            *value = detach(shim().Options());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Options(Windows::UI::Text::SelectionOptions value) noexcept override
    {
        try
        {
            shim().Options(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Type(Windows::UI::Text::SelectionType * value) noexcept override
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

    HRESULT __stdcall abi_EndKey(Windows::UI::Text::TextRangeUnit unit, bool extend, int32_t * delta) noexcept override
    {
        try
        {
            *delta = detach(shim().EndKey(unit, extend));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_HomeKey(Windows::UI::Text::TextRangeUnit unit, bool extend, int32_t * delta) noexcept override
    {
        try
        {
            *delta = detach(shim().HomeKey(unit, extend));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_MoveDown(Windows::UI::Text::TextRangeUnit unit, int32_t count, bool extend, int32_t * delta) noexcept override
    {
        try
        {
            *delta = detach(shim().MoveDown(unit, count, extend));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_MoveLeft(Windows::UI::Text::TextRangeUnit unit, int32_t count, bool extend, int32_t * delta) noexcept override
    {
        try
        {
            *delta = detach(shim().MoveLeft(unit, count, extend));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_MoveRight(Windows::UI::Text::TextRangeUnit unit, int32_t count, bool extend, int32_t * delta) noexcept override
    {
        try
        {
            *delta = detach(shim().MoveRight(unit, count, extend));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_MoveUp(Windows::UI::Text::TextRangeUnit unit, int32_t count, bool extend, int32_t * delta) noexcept override
    {
        try
        {
            *delta = detach(shim().MoveUp(unit, count, extend));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_TypeText(abi_arg_in<hstring> value) noexcept override
    {
        try
        {
            shim().TypeText(*reinterpret_cast<const hstring *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

}

namespace Windows::UI::Text {

template <typename D> Windows::UI::Color impl_ITextConstantsStatics<D>::AutoColor() const
{
    Windows::UI::Color value {};
    check_hresult(shim()->get_AutoColor(put(value)));
    return value;
}

template <typename D> int32_t impl_ITextConstantsStatics<D>::MinUnitCount() const
{
    int32_t value {};
    check_hresult(shim()->get_MinUnitCount(&value));
    return value;
}

template <typename D> int32_t impl_ITextConstantsStatics<D>::MaxUnitCount() const
{
    int32_t value {};
    check_hresult(shim()->get_MaxUnitCount(&value));
    return value;
}

template <typename D> Windows::UI::Color impl_ITextConstantsStatics<D>::UndefinedColor() const
{
    Windows::UI::Color value {};
    check_hresult(shim()->get_UndefinedColor(put(value)));
    return value;
}

template <typename D> float impl_ITextConstantsStatics<D>::UndefinedFloatValue() const
{
    float value {};
    check_hresult(shim()->get_UndefinedFloatValue(&value));
    return value;
}

template <typename D> int32_t impl_ITextConstantsStatics<D>::UndefinedInt32Value() const
{
    int32_t value {};
    check_hresult(shim()->get_UndefinedInt32Value(&value));
    return value;
}

template <typename D> Windows::UI::Text::FontStretch impl_ITextConstantsStatics<D>::UndefinedFontStretch() const
{
    Windows::UI::Text::FontStretch value {};
    check_hresult(shim()->get_UndefinedFontStretch(&value));
    return value;
}

template <typename D> Windows::UI::Text::FontStyle impl_ITextConstantsStatics<D>::UndefinedFontStyle() const
{
    Windows::UI::Text::FontStyle value {};
    check_hresult(shim()->get_UndefinedFontStyle(&value));
    return value;
}

template <typename D> Windows::UI::Text::CaretType impl_ITextDocument<D>::CaretType() const
{
    Windows::UI::Text::CaretType value {};
    check_hresult(shim()->get_CaretType(&value));
    return value;
}

template <typename D> void impl_ITextDocument<D>::CaretType(Windows::UI::Text::CaretType value) const
{
    check_hresult(shim()->put_CaretType(value));
}

template <typename D> float impl_ITextDocument<D>::DefaultTabStop() const
{
    float value {};
    check_hresult(shim()->get_DefaultTabStop(&value));
    return value;
}

template <typename D> void impl_ITextDocument<D>::DefaultTabStop(float value) const
{
    check_hresult(shim()->put_DefaultTabStop(value));
}

template <typename D> Windows::UI::Text::ITextSelection impl_ITextDocument<D>::Selection() const
{
    Windows::UI::Text::ITextSelection value;
    check_hresult(shim()->get_Selection(put(value)));
    return value;
}

template <typename D> uint32_t impl_ITextDocument<D>::UndoLimit() const
{
    uint32_t value {};
    check_hresult(shim()->get_UndoLimit(&value));
    return value;
}

template <typename D> void impl_ITextDocument<D>::UndoLimit(uint32_t value) const
{
    check_hresult(shim()->put_UndoLimit(value));
}

template <typename D> bool impl_ITextDocument<D>::CanCopy() const
{
    bool value {};
    check_hresult(shim()->abi_CanCopy(&value));
    return value;
}

template <typename D> bool impl_ITextDocument<D>::CanPaste() const
{
    bool value {};
    check_hresult(shim()->abi_CanPaste(&value));
    return value;
}

template <typename D> bool impl_ITextDocument<D>::CanRedo() const
{
    bool value {};
    check_hresult(shim()->abi_CanRedo(&value));
    return value;
}

template <typename D> bool impl_ITextDocument<D>::CanUndo() const
{
    bool value {};
    check_hresult(shim()->abi_CanUndo(&value));
    return value;
}

template <typename D> int32_t impl_ITextDocument<D>::ApplyDisplayUpdates() const
{
    int32_t count {};
    check_hresult(shim()->abi_ApplyDisplayUpdates(&count));
    return count;
}

template <typename D> int32_t impl_ITextDocument<D>::BatchDisplayUpdates() const
{
    int32_t count {};
    check_hresult(shim()->abi_BatchDisplayUpdates(&count));
    return count;
}

template <typename D> void impl_ITextDocument<D>::BeginUndoGroup() const
{
    check_hresult(shim()->abi_BeginUndoGroup());
}

template <typename D> void impl_ITextDocument<D>::EndUndoGroup() const
{
    check_hresult(shim()->abi_EndUndoGroup());
}

template <typename D> Windows::UI::Text::ITextCharacterFormat impl_ITextDocument<D>::GetDefaultCharacterFormat() const
{
    Windows::UI::Text::ITextCharacterFormat value;
    check_hresult(shim()->abi_GetDefaultCharacterFormat(put(value)));
    return value;
}

template <typename D> Windows::UI::Text::ITextParagraphFormat impl_ITextDocument<D>::GetDefaultParagraphFormat() const
{
    Windows::UI::Text::ITextParagraphFormat value;
    check_hresult(shim()->abi_GetDefaultParagraphFormat(put(value)));
    return value;
}

template <typename D> Windows::UI::Text::ITextRange impl_ITextDocument<D>::GetRange(int32_t startPosition, int32_t endPosition) const
{
    Windows::UI::Text::ITextRange value;
    check_hresult(shim()->abi_GetRange(startPosition, endPosition, put(value)));
    return value;
}

template <typename D> Windows::UI::Text::ITextRange impl_ITextDocument<D>::GetRangeFromPoint(const Windows::Foundation::Point & point, Windows::UI::Text::PointOptions options) const
{
    Windows::UI::Text::ITextRange value;
    check_hresult(shim()->abi_GetRangeFromPoint(get(point), options, put(value)));
    return value;
}

template <typename D> void impl_ITextDocument<D>::GetText(Windows::UI::Text::TextGetOptions options, hstring & value) const
{
    check_hresult(shim()->abi_GetText(options, put(value)));
}

template <typename D> void impl_ITextDocument<D>::LoadFromStream(Windows::UI::Text::TextSetOptions options, const Windows::Storage::Streams::IRandomAccessStream & value) const
{
    check_hresult(shim()->abi_LoadFromStream(options, get(value)));
}

template <typename D> void impl_ITextDocument<D>::Redo() const
{
    check_hresult(shim()->abi_Redo());
}

template <typename D> void impl_ITextDocument<D>::SaveToStream(Windows::UI::Text::TextGetOptions options, const Windows::Storage::Streams::IRandomAccessStream & value) const
{
    check_hresult(shim()->abi_SaveToStream(options, get(value)));
}

template <typename D> void impl_ITextDocument<D>::SetDefaultCharacterFormat(const Windows::UI::Text::ITextCharacterFormat & value) const
{
    check_hresult(shim()->abi_SetDefaultCharacterFormat(get(value)));
}

template <typename D> void impl_ITextDocument<D>::SetDefaultParagraphFormat(const Windows::UI::Text::ITextParagraphFormat & value) const
{
    check_hresult(shim()->abi_SetDefaultParagraphFormat(get(value)));
}

template <typename D> void impl_ITextDocument<D>::SetText(Windows::UI::Text::TextSetOptions options, hstring_ref value) const
{
    check_hresult(shim()->abi_SetText(options, get(value)));
}

template <typename D> void impl_ITextDocument<D>::Undo() const
{
    check_hresult(shim()->abi_Undo());
}

template <typename D> wchar_t impl_ITextRange<D>::Character() const
{
    wchar_t value {};
    check_hresult(shim()->get_Character(&value));
    return value;
}

template <typename D> void impl_ITextRange<D>::Character(wchar_t value) const
{
    check_hresult(shim()->put_Character(value));
}

template <typename D> Windows::UI::Text::ITextCharacterFormat impl_ITextRange<D>::CharacterFormat() const
{
    Windows::UI::Text::ITextCharacterFormat value;
    check_hresult(shim()->get_CharacterFormat(put(value)));
    return value;
}

template <typename D> void impl_ITextRange<D>::CharacterFormat(const Windows::UI::Text::ITextCharacterFormat & value) const
{
    check_hresult(shim()->put_CharacterFormat(get(value)));
}

template <typename D> Windows::UI::Text::ITextRange impl_ITextRange<D>::FormattedText() const
{
    Windows::UI::Text::ITextRange value;
    check_hresult(shim()->get_FormattedText(put(value)));
    return value;
}

template <typename D> void impl_ITextRange<D>::FormattedText(const Windows::UI::Text::ITextRange & value) const
{
    check_hresult(shim()->put_FormattedText(get(value)));
}

template <typename D> int32_t impl_ITextRange<D>::EndPosition() const
{
    int32_t value {};
    check_hresult(shim()->get_EndPosition(&value));
    return value;
}

template <typename D> void impl_ITextRange<D>::EndPosition(int32_t value) const
{
    check_hresult(shim()->put_EndPosition(value));
}

template <typename D> Windows::UI::Text::RangeGravity impl_ITextRange<D>::Gravity() const
{
    Windows::UI::Text::RangeGravity value {};
    check_hresult(shim()->get_Gravity(&value));
    return value;
}

template <typename D> void impl_ITextRange<D>::Gravity(Windows::UI::Text::RangeGravity value) const
{
    check_hresult(shim()->put_Gravity(value));
}

template <typename D> int32_t impl_ITextRange<D>::Length() const
{
    int32_t length {};
    check_hresult(shim()->get_Length(&length));
    return length;
}

template <typename D> hstring impl_ITextRange<D>::Link() const
{
    hstring value;
    check_hresult(shim()->get_Link(put(value)));
    return value;
}

template <typename D> void impl_ITextRange<D>::Link(hstring_ref value) const
{
    check_hresult(shim()->put_Link(get(value)));
}

template <typename D> Windows::UI::Text::ITextParagraphFormat impl_ITextRange<D>::ParagraphFormat() const
{
    Windows::UI::Text::ITextParagraphFormat value;
    check_hresult(shim()->get_ParagraphFormat(put(value)));
    return value;
}

template <typename D> void impl_ITextRange<D>::ParagraphFormat(const Windows::UI::Text::ITextParagraphFormat & value) const
{
    check_hresult(shim()->put_ParagraphFormat(get(value)));
}

template <typename D> int32_t impl_ITextRange<D>::StartPosition() const
{
    int32_t value {};
    check_hresult(shim()->get_StartPosition(&value));
    return value;
}

template <typename D> void impl_ITextRange<D>::StartPosition(int32_t value) const
{
    check_hresult(shim()->put_StartPosition(value));
}

template <typename D> int32_t impl_ITextRange<D>::StoryLength() const
{
    int32_t value {};
    check_hresult(shim()->get_StoryLength(&value));
    return value;
}

template <typename D> hstring impl_ITextRange<D>::Text() const
{
    hstring value;
    check_hresult(shim()->get_Text(put(value)));
    return value;
}

template <typename D> void impl_ITextRange<D>::Text(hstring_ref value) const
{
    check_hresult(shim()->put_Text(get(value)));
}

template <typename D> bool impl_ITextRange<D>::CanPaste(int32_t format) const
{
    bool value {};
    check_hresult(shim()->abi_CanPaste(format, &value));
    return value;
}

template <typename D> void impl_ITextRange<D>::ChangeCase(Windows::UI::Text::LetterCase value) const
{
    check_hresult(shim()->abi_ChangeCase(value));
}

template <typename D> void impl_ITextRange<D>::Collapse(bool value) const
{
    check_hresult(shim()->abi_Collapse(value));
}

template <typename D> void impl_ITextRange<D>::Copy() const
{
    check_hresult(shim()->abi_Copy());
}

template <typename D> void impl_ITextRange<D>::Cut() const
{
    check_hresult(shim()->abi_Cut());
}

template <typename D> int32_t impl_ITextRange<D>::Delete(Windows::UI::Text::TextRangeUnit unit, int32_t count) const
{
    int32_t delta {};
    check_hresult(shim()->abi_Delete(unit, count, &delta));
    return delta;
}

template <typename D> int32_t impl_ITextRange<D>::EndOf(Windows::UI::Text::TextRangeUnit unit, bool extend) const
{
    int32_t delta {};
    check_hresult(shim()->abi_EndOf(unit, extend, &delta));
    return delta;
}

template <typename D> int32_t impl_ITextRange<D>::Expand(Windows::UI::Text::TextRangeUnit unit) const
{
    int32_t delta {};
    check_hresult(shim()->abi_Expand(unit, &delta));
    return delta;
}

template <typename D> int32_t impl_ITextRange<D>::FindText(hstring_ref value, int32_t scanLength, Windows::UI::Text::FindOptions options) const
{
    int32_t length {};
    check_hresult(shim()->abi_FindText(get(value), scanLength, options, &length));
    return length;
}

template <typename D> void impl_ITextRange<D>::GetCharacterUtf32(uint32_t & value, int32_t offset) const
{
    check_hresult(shim()->abi_GetCharacterUtf32(&value, offset));
}

template <typename D> Windows::UI::Text::ITextRange impl_ITextRange<D>::GetClone() const
{
    Windows::UI::Text::ITextRange value;
    check_hresult(shim()->abi_GetClone(put(value)));
    return value;
}

template <typename D> int32_t impl_ITextRange<D>::GetIndex(Windows::UI::Text::TextRangeUnit unit) const
{
    int32_t index {};
    check_hresult(shim()->abi_GetIndex(unit, &index));
    return index;
}

template <typename D> void impl_ITextRange<D>::GetPoint(Windows::UI::Text::HorizontalCharacterAlignment horizontalAlign, Windows::UI::Text::VerticalCharacterAlignment verticalAlign, Windows::UI::Text::PointOptions options, Windows::Foundation::Point & point) const
{
    check_hresult(shim()->abi_GetPoint(horizontalAlign, verticalAlign, options, put(point)));
}

template <typename D> void impl_ITextRange<D>::GetRect(Windows::UI::Text::PointOptions options, Windows::Foundation::Rect & rect, int32_t & hit) const
{
    check_hresult(shim()->abi_GetRect(options, put(rect), &hit));
}

template <typename D> void impl_ITextRange<D>::GetText(Windows::UI::Text::TextGetOptions options, hstring & value) const
{
    check_hresult(shim()->abi_GetText(options, put(value)));
}

template <typename D> void impl_ITextRange<D>::GetTextViaStream(Windows::UI::Text::TextGetOptions options, const Windows::Storage::Streams::IRandomAccessStream & value) const
{
    check_hresult(shim()->abi_GetTextViaStream(options, get(value)));
}

template <typename D> bool impl_ITextRange<D>::InRange(const Windows::UI::Text::ITextRange & range) const
{
    bool value {};
    check_hresult(shim()->abi_InRange(get(range), &value));
    return value;
}

template <typename D> void impl_ITextRange<D>::InsertImage(int32_t width, int32_t height, int32_t ascent, Windows::UI::Text::VerticalCharacterAlignment verticalAlign, hstring_ref alternateText, const Windows::Storage::Streams::IRandomAccessStream & value) const
{
    check_hresult(shim()->abi_InsertImage(width, height, ascent, verticalAlign, get(alternateText), get(value)));
}

template <typename D> bool impl_ITextRange<D>::InStory(const Windows::UI::Text::ITextRange & range) const
{
    bool value {};
    check_hresult(shim()->abi_InStory(get(range), &value));
    return value;
}

template <typename D> bool impl_ITextRange<D>::IsEqual(const Windows::UI::Text::ITextRange & range) const
{
    bool value {};
    check_hresult(shim()->abi_IsEqual(get(range), &value));
    return value;
}

template <typename D> int32_t impl_ITextRange<D>::Move(Windows::UI::Text::TextRangeUnit unit, int32_t count) const
{
    int32_t delta {};
    check_hresult(shim()->abi_Move(unit, count, &delta));
    return delta;
}

template <typename D> int32_t impl_ITextRange<D>::MoveEnd(Windows::UI::Text::TextRangeUnit unit, int32_t count) const
{
    int32_t delta {};
    check_hresult(shim()->abi_MoveEnd(unit, count, &delta));
    return delta;
}

template <typename D> int32_t impl_ITextRange<D>::MoveStart(Windows::UI::Text::TextRangeUnit unit, int32_t count) const
{
    int32_t delta {};
    check_hresult(shim()->abi_MoveStart(unit, count, &delta));
    return delta;
}

template <typename D> void impl_ITextRange<D>::Paste(int32_t format) const
{
    check_hresult(shim()->abi_Paste(format));
}

template <typename D> void impl_ITextRange<D>::ScrollIntoView(Windows::UI::Text::PointOptions value) const
{
    check_hresult(shim()->abi_ScrollIntoView(value));
}

template <typename D> void impl_ITextRange<D>::MatchSelection() const
{
    check_hresult(shim()->abi_MatchSelection());
}

template <typename D> void impl_ITextRange<D>::SetIndex(Windows::UI::Text::TextRangeUnit unit, int32_t index, bool extend) const
{
    check_hresult(shim()->abi_SetIndex(unit, index, extend));
}

template <typename D> void impl_ITextRange<D>::SetPoint(const Windows::Foundation::Point & point, Windows::UI::Text::PointOptions options, bool extend) const
{
    check_hresult(shim()->abi_SetPoint(get(point), options, extend));
}

template <typename D> void impl_ITextRange<D>::SetRange(int32_t startPosition, int32_t endPosition) const
{
    check_hresult(shim()->abi_SetRange(startPosition, endPosition));
}

template <typename D> void impl_ITextRange<D>::SetText(Windows::UI::Text::TextSetOptions options, hstring_ref value) const
{
    check_hresult(shim()->abi_SetText(options, get(value)));
}

template <typename D> void impl_ITextRange<D>::SetTextViaStream(Windows::UI::Text::TextSetOptions options, const Windows::Storage::Streams::IRandomAccessStream & value) const
{
    check_hresult(shim()->abi_SetTextViaStream(options, get(value)));
}

template <typename D> int32_t impl_ITextRange<D>::StartOf(Windows::UI::Text::TextRangeUnit unit, bool extend) const
{
    int32_t delta {};
    check_hresult(shim()->abi_StartOf(unit, extend, &delta));
    return delta;
}

template <typename D> Windows::UI::Text::SelectionOptions impl_ITextSelection<D>::Options() const
{
    Windows::UI::Text::SelectionOptions value {};
    check_hresult(shim()->get_Options(&value));
    return value;
}

template <typename D> void impl_ITextSelection<D>::Options(Windows::UI::Text::SelectionOptions value) const
{
    check_hresult(shim()->put_Options(value));
}

template <typename D> Windows::UI::Text::SelectionType impl_ITextSelection<D>::Type() const
{
    Windows::UI::Text::SelectionType value {};
    check_hresult(shim()->get_Type(&value));
    return value;
}

template <typename D> int32_t impl_ITextSelection<D>::EndKey(Windows::UI::Text::TextRangeUnit unit, bool extend) const
{
    int32_t delta {};
    check_hresult(shim()->abi_EndKey(unit, extend, &delta));
    return delta;
}

template <typename D> int32_t impl_ITextSelection<D>::HomeKey(Windows::UI::Text::TextRangeUnit unit, bool extend) const
{
    int32_t delta {};
    check_hresult(shim()->abi_HomeKey(unit, extend, &delta));
    return delta;
}

template <typename D> int32_t impl_ITextSelection<D>::MoveDown(Windows::UI::Text::TextRangeUnit unit, int32_t count, bool extend) const
{
    int32_t delta {};
    check_hresult(shim()->abi_MoveDown(unit, count, extend, &delta));
    return delta;
}

template <typename D> int32_t impl_ITextSelection<D>::MoveLeft(Windows::UI::Text::TextRangeUnit unit, int32_t count, bool extend) const
{
    int32_t delta {};
    check_hresult(shim()->abi_MoveLeft(unit, count, extend, &delta));
    return delta;
}

template <typename D> int32_t impl_ITextSelection<D>::MoveRight(Windows::UI::Text::TextRangeUnit unit, int32_t count, bool extend) const
{
    int32_t delta {};
    check_hresult(shim()->abi_MoveRight(unit, count, extend, &delta));
    return delta;
}

template <typename D> int32_t impl_ITextSelection<D>::MoveUp(Windows::UI::Text::TextRangeUnit unit, int32_t count, bool extend) const
{
    int32_t delta {};
    check_hresult(shim()->abi_MoveUp(unit, count, extend, &delta));
    return delta;
}

template <typename D> void impl_ITextSelection<D>::TypeText(hstring_ref value) const
{
    check_hresult(shim()->abi_TypeText(get(value)));
}

template <typename D> Windows::UI::Text::FormatEffect impl_ITextCharacterFormat<D>::AllCaps() const
{
    Windows::UI::Text::FormatEffect value {};
    check_hresult(shim()->get_AllCaps(&value));
    return value;
}

template <typename D> void impl_ITextCharacterFormat<D>::AllCaps(Windows::UI::Text::FormatEffect value) const
{
    check_hresult(shim()->put_AllCaps(value));
}

template <typename D> Windows::UI::Color impl_ITextCharacterFormat<D>::BackgroundColor() const
{
    Windows::UI::Color value {};
    check_hresult(shim()->get_BackgroundColor(put(value)));
    return value;
}

template <typename D> void impl_ITextCharacterFormat<D>::BackgroundColor(const Windows::UI::Color & value) const
{
    check_hresult(shim()->put_BackgroundColor(get(value)));
}

template <typename D> Windows::UI::Text::FormatEffect impl_ITextCharacterFormat<D>::Bold() const
{
    Windows::UI::Text::FormatEffect value {};
    check_hresult(shim()->get_Bold(&value));
    return value;
}

template <typename D> void impl_ITextCharacterFormat<D>::Bold(Windows::UI::Text::FormatEffect value) const
{
    check_hresult(shim()->put_Bold(value));
}

template <typename D> Windows::UI::Text::FontStretch impl_ITextCharacterFormat<D>::FontStretch() const
{
    Windows::UI::Text::FontStretch value {};
    check_hresult(shim()->get_FontStretch(&value));
    return value;
}

template <typename D> void impl_ITextCharacterFormat<D>::FontStretch(Windows::UI::Text::FontStretch value) const
{
    check_hresult(shim()->put_FontStretch(value));
}

template <typename D> Windows::UI::Text::FontStyle impl_ITextCharacterFormat<D>::FontStyle() const
{
    Windows::UI::Text::FontStyle value {};
    check_hresult(shim()->get_FontStyle(&value));
    return value;
}

template <typename D> void impl_ITextCharacterFormat<D>::FontStyle(Windows::UI::Text::FontStyle value) const
{
    check_hresult(shim()->put_FontStyle(value));
}

template <typename D> Windows::UI::Color impl_ITextCharacterFormat<D>::ForegroundColor() const
{
    Windows::UI::Color value {};
    check_hresult(shim()->get_ForegroundColor(put(value)));
    return value;
}

template <typename D> void impl_ITextCharacterFormat<D>::ForegroundColor(const Windows::UI::Color & value) const
{
    check_hresult(shim()->put_ForegroundColor(get(value)));
}

template <typename D> Windows::UI::Text::FormatEffect impl_ITextCharacterFormat<D>::Hidden() const
{
    Windows::UI::Text::FormatEffect value {};
    check_hresult(shim()->get_Hidden(&value));
    return value;
}

template <typename D> void impl_ITextCharacterFormat<D>::Hidden(Windows::UI::Text::FormatEffect value) const
{
    check_hresult(shim()->put_Hidden(value));
}

template <typename D> Windows::UI::Text::FormatEffect impl_ITextCharacterFormat<D>::Italic() const
{
    Windows::UI::Text::FormatEffect value {};
    check_hresult(shim()->get_Italic(&value));
    return value;
}

template <typename D> void impl_ITextCharacterFormat<D>::Italic(Windows::UI::Text::FormatEffect value) const
{
    check_hresult(shim()->put_Italic(value));
}

template <typename D> float impl_ITextCharacterFormat<D>::Kerning() const
{
    float value {};
    check_hresult(shim()->get_Kerning(&value));
    return value;
}

template <typename D> void impl_ITextCharacterFormat<D>::Kerning(float value) const
{
    check_hresult(shim()->put_Kerning(value));
}

template <typename D> hstring impl_ITextCharacterFormat<D>::LanguageTag() const
{
    hstring value;
    check_hresult(shim()->get_LanguageTag(put(value)));
    return value;
}

template <typename D> void impl_ITextCharacterFormat<D>::LanguageTag(hstring_ref value) const
{
    check_hresult(shim()->put_LanguageTag(get(value)));
}

template <typename D> Windows::UI::Text::LinkType impl_ITextCharacterFormat<D>::LinkType() const
{
    Windows::UI::Text::LinkType value {};
    check_hresult(shim()->get_LinkType(&value));
    return value;
}

template <typename D> hstring impl_ITextCharacterFormat<D>::Name() const
{
    hstring value;
    check_hresult(shim()->get_Name(put(value)));
    return value;
}

template <typename D> void impl_ITextCharacterFormat<D>::Name(hstring_ref value) const
{
    check_hresult(shim()->put_Name(get(value)));
}

template <typename D> Windows::UI::Text::FormatEffect impl_ITextCharacterFormat<D>::Outline() const
{
    Windows::UI::Text::FormatEffect value {};
    check_hresult(shim()->get_Outline(&value));
    return value;
}

template <typename D> void impl_ITextCharacterFormat<D>::Outline(Windows::UI::Text::FormatEffect value) const
{
    check_hresult(shim()->put_Outline(value));
}

template <typename D> float impl_ITextCharacterFormat<D>::Position() const
{
    float value {};
    check_hresult(shim()->get_Position(&value));
    return value;
}

template <typename D> void impl_ITextCharacterFormat<D>::Position(float value) const
{
    check_hresult(shim()->put_Position(value));
}

template <typename D> Windows::UI::Text::FormatEffect impl_ITextCharacterFormat<D>::ProtectedText() const
{
    Windows::UI::Text::FormatEffect value {};
    check_hresult(shim()->get_ProtectedText(&value));
    return value;
}

template <typename D> void impl_ITextCharacterFormat<D>::ProtectedText(Windows::UI::Text::FormatEffect value) const
{
    check_hresult(shim()->put_ProtectedText(value));
}

template <typename D> float impl_ITextCharacterFormat<D>::Size() const
{
    float value {};
    check_hresult(shim()->get_Size(&value));
    return value;
}

template <typename D> void impl_ITextCharacterFormat<D>::Size(float value) const
{
    check_hresult(shim()->put_Size(value));
}

template <typename D> Windows::UI::Text::FormatEffect impl_ITextCharacterFormat<D>::SmallCaps() const
{
    Windows::UI::Text::FormatEffect value {};
    check_hresult(shim()->get_SmallCaps(&value));
    return value;
}

template <typename D> void impl_ITextCharacterFormat<D>::SmallCaps(Windows::UI::Text::FormatEffect value) const
{
    check_hresult(shim()->put_SmallCaps(value));
}

template <typename D> float impl_ITextCharacterFormat<D>::Spacing() const
{
    float value {};
    check_hresult(shim()->get_Spacing(&value));
    return value;
}

template <typename D> void impl_ITextCharacterFormat<D>::Spacing(float value) const
{
    check_hresult(shim()->put_Spacing(value));
}

template <typename D> Windows::UI::Text::FormatEffect impl_ITextCharacterFormat<D>::Strikethrough() const
{
    Windows::UI::Text::FormatEffect value {};
    check_hresult(shim()->get_Strikethrough(&value));
    return value;
}

template <typename D> void impl_ITextCharacterFormat<D>::Strikethrough(Windows::UI::Text::FormatEffect value) const
{
    check_hresult(shim()->put_Strikethrough(value));
}

template <typename D> Windows::UI::Text::FormatEffect impl_ITextCharacterFormat<D>::Subscript() const
{
    Windows::UI::Text::FormatEffect value {};
    check_hresult(shim()->get_Subscript(&value));
    return value;
}

template <typename D> void impl_ITextCharacterFormat<D>::Subscript(Windows::UI::Text::FormatEffect value) const
{
    check_hresult(shim()->put_Subscript(value));
}

template <typename D> Windows::UI::Text::FormatEffect impl_ITextCharacterFormat<D>::Superscript() const
{
    Windows::UI::Text::FormatEffect value {};
    check_hresult(shim()->get_Superscript(&value));
    return value;
}

template <typename D> void impl_ITextCharacterFormat<D>::Superscript(Windows::UI::Text::FormatEffect value) const
{
    check_hresult(shim()->put_Superscript(value));
}

template <typename D> Windows::UI::Text::TextScript impl_ITextCharacterFormat<D>::TextScript() const
{
    Windows::UI::Text::TextScript value {};
    check_hresult(shim()->get_TextScript(&value));
    return value;
}

template <typename D> void impl_ITextCharacterFormat<D>::TextScript(Windows::UI::Text::TextScript value) const
{
    check_hresult(shim()->put_TextScript(value));
}

template <typename D> Windows::UI::Text::UnderlineType impl_ITextCharacterFormat<D>::Underline() const
{
    Windows::UI::Text::UnderlineType value {};
    check_hresult(shim()->get_Underline(&value));
    return value;
}

template <typename D> void impl_ITextCharacterFormat<D>::Underline(Windows::UI::Text::UnderlineType value) const
{
    check_hresult(shim()->put_Underline(value));
}

template <typename D> int32_t impl_ITextCharacterFormat<D>::Weight() const
{
    int32_t value {};
    check_hresult(shim()->get_Weight(&value));
    return value;
}

template <typename D> void impl_ITextCharacterFormat<D>::Weight(int32_t value) const
{
    check_hresult(shim()->put_Weight(value));
}

template <typename D> void impl_ITextCharacterFormat<D>::SetClone(const Windows::UI::Text::ITextCharacterFormat & value) const
{
    check_hresult(shim()->abi_SetClone(get(value)));
}

template <typename D> Windows::UI::Text::ITextCharacterFormat impl_ITextCharacterFormat<D>::GetClone() const
{
    Windows::UI::Text::ITextCharacterFormat value;
    check_hresult(shim()->abi_GetClone(put(value)));
    return value;
}

template <typename D> bool impl_ITextCharacterFormat<D>::IsEqual(const Windows::UI::Text::ITextCharacterFormat & format) const
{
    bool value {};
    check_hresult(shim()->abi_IsEqual(get(format), &value));
    return value;
}

template <typename D> Windows::UI::Text::ParagraphAlignment impl_ITextParagraphFormat<D>::Alignment() const
{
    Windows::UI::Text::ParagraphAlignment value {};
    check_hresult(shim()->get_Alignment(&value));
    return value;
}

template <typename D> void impl_ITextParagraphFormat<D>::Alignment(Windows::UI::Text::ParagraphAlignment value) const
{
    check_hresult(shim()->put_Alignment(value));
}

template <typename D> float impl_ITextParagraphFormat<D>::FirstLineIndent() const
{
    float value {};
    check_hresult(shim()->get_FirstLineIndent(&value));
    return value;
}

template <typename D> Windows::UI::Text::FormatEffect impl_ITextParagraphFormat<D>::KeepTogether() const
{
    Windows::UI::Text::FormatEffect value {};
    check_hresult(shim()->get_KeepTogether(&value));
    return value;
}

template <typename D> void impl_ITextParagraphFormat<D>::KeepTogether(Windows::UI::Text::FormatEffect value) const
{
    check_hresult(shim()->put_KeepTogether(value));
}

template <typename D> Windows::UI::Text::FormatEffect impl_ITextParagraphFormat<D>::KeepWithNext() const
{
    Windows::UI::Text::FormatEffect value {};
    check_hresult(shim()->get_KeepWithNext(&value));
    return value;
}

template <typename D> void impl_ITextParagraphFormat<D>::KeepWithNext(Windows::UI::Text::FormatEffect value) const
{
    check_hresult(shim()->put_KeepWithNext(value));
}

template <typename D> float impl_ITextParagraphFormat<D>::LeftIndent() const
{
    float value {};
    check_hresult(shim()->get_LeftIndent(&value));
    return value;
}

template <typename D> float impl_ITextParagraphFormat<D>::LineSpacing() const
{
    float value {};
    check_hresult(shim()->get_LineSpacing(&value));
    return value;
}

template <typename D> Windows::UI::Text::LineSpacingRule impl_ITextParagraphFormat<D>::LineSpacingRule() const
{
    Windows::UI::Text::LineSpacingRule value {};
    check_hresult(shim()->get_LineSpacingRule(&value));
    return value;
}

template <typename D> Windows::UI::Text::MarkerAlignment impl_ITextParagraphFormat<D>::ListAlignment() const
{
    Windows::UI::Text::MarkerAlignment value {};
    check_hresult(shim()->get_ListAlignment(&value));
    return value;
}

template <typename D> void impl_ITextParagraphFormat<D>::ListAlignment(Windows::UI::Text::MarkerAlignment value) const
{
    check_hresult(shim()->put_ListAlignment(value));
}

template <typename D> int32_t impl_ITextParagraphFormat<D>::ListLevelIndex() const
{
    int32_t value {};
    check_hresult(shim()->get_ListLevelIndex(&value));
    return value;
}

template <typename D> void impl_ITextParagraphFormat<D>::ListLevelIndex(int32_t value) const
{
    check_hresult(shim()->put_ListLevelIndex(value));
}

template <typename D> int32_t impl_ITextParagraphFormat<D>::ListStart() const
{
    int32_t value {};
    check_hresult(shim()->get_ListStart(&value));
    return value;
}

template <typename D> void impl_ITextParagraphFormat<D>::ListStart(int32_t value) const
{
    check_hresult(shim()->put_ListStart(value));
}

template <typename D> Windows::UI::Text::MarkerStyle impl_ITextParagraphFormat<D>::ListStyle() const
{
    Windows::UI::Text::MarkerStyle value {};
    check_hresult(shim()->get_ListStyle(&value));
    return value;
}

template <typename D> void impl_ITextParagraphFormat<D>::ListStyle(Windows::UI::Text::MarkerStyle value) const
{
    check_hresult(shim()->put_ListStyle(value));
}

template <typename D> float impl_ITextParagraphFormat<D>::ListTab() const
{
    float value {};
    check_hresult(shim()->get_ListTab(&value));
    return value;
}

template <typename D> void impl_ITextParagraphFormat<D>::ListTab(float value) const
{
    check_hresult(shim()->put_ListTab(value));
}

template <typename D> Windows::UI::Text::MarkerType impl_ITextParagraphFormat<D>::ListType() const
{
    Windows::UI::Text::MarkerType value {};
    check_hresult(shim()->get_ListType(&value));
    return value;
}

template <typename D> void impl_ITextParagraphFormat<D>::ListType(Windows::UI::Text::MarkerType value) const
{
    check_hresult(shim()->put_ListType(value));
}

template <typename D> Windows::UI::Text::FormatEffect impl_ITextParagraphFormat<D>::NoLineNumber() const
{
    Windows::UI::Text::FormatEffect value {};
    check_hresult(shim()->get_NoLineNumber(&value));
    return value;
}

template <typename D> void impl_ITextParagraphFormat<D>::NoLineNumber(Windows::UI::Text::FormatEffect value) const
{
    check_hresult(shim()->put_NoLineNumber(value));
}

template <typename D> Windows::UI::Text::FormatEffect impl_ITextParagraphFormat<D>::PageBreakBefore() const
{
    Windows::UI::Text::FormatEffect value {};
    check_hresult(shim()->get_PageBreakBefore(&value));
    return value;
}

template <typename D> void impl_ITextParagraphFormat<D>::PageBreakBefore(Windows::UI::Text::FormatEffect value) const
{
    check_hresult(shim()->put_PageBreakBefore(value));
}

template <typename D> float impl_ITextParagraphFormat<D>::RightIndent() const
{
    float value {};
    check_hresult(shim()->get_RightIndent(&value));
    return value;
}

template <typename D> void impl_ITextParagraphFormat<D>::RightIndent(float value) const
{
    check_hresult(shim()->put_RightIndent(value));
}

template <typename D> Windows::UI::Text::FormatEffect impl_ITextParagraphFormat<D>::RightToLeft() const
{
    Windows::UI::Text::FormatEffect value {};
    check_hresult(shim()->get_RightToLeft(&value));
    return value;
}

template <typename D> void impl_ITextParagraphFormat<D>::RightToLeft(Windows::UI::Text::FormatEffect value) const
{
    check_hresult(shim()->put_RightToLeft(value));
}

template <typename D> Windows::UI::Text::ParagraphStyle impl_ITextParagraphFormat<D>::Style() const
{
    Windows::UI::Text::ParagraphStyle value {};
    check_hresult(shim()->get_Style(&value));
    return value;
}

template <typename D> void impl_ITextParagraphFormat<D>::Style(Windows::UI::Text::ParagraphStyle value) const
{
    check_hresult(shim()->put_Style(value));
}

template <typename D> float impl_ITextParagraphFormat<D>::SpaceAfter() const
{
    float value {};
    check_hresult(shim()->get_SpaceAfter(&value));
    return value;
}

template <typename D> void impl_ITextParagraphFormat<D>::SpaceAfter(float value) const
{
    check_hresult(shim()->put_SpaceAfter(value));
}

template <typename D> float impl_ITextParagraphFormat<D>::SpaceBefore() const
{
    float value {};
    check_hresult(shim()->get_SpaceBefore(&value));
    return value;
}

template <typename D> void impl_ITextParagraphFormat<D>::SpaceBefore(float value) const
{
    check_hresult(shim()->put_SpaceBefore(value));
}

template <typename D> Windows::UI::Text::FormatEffect impl_ITextParagraphFormat<D>::WidowControl() const
{
    Windows::UI::Text::FormatEffect value {};
    check_hresult(shim()->get_WidowControl(&value));
    return value;
}

template <typename D> void impl_ITextParagraphFormat<D>::WidowControl(Windows::UI::Text::FormatEffect value) const
{
    check_hresult(shim()->put_WidowControl(value));
}

template <typename D> int32_t impl_ITextParagraphFormat<D>::TabCount() const
{
    int32_t value {};
    check_hresult(shim()->get_TabCount(&value));
    return value;
}

template <typename D> void impl_ITextParagraphFormat<D>::AddTab(float position, Windows::UI::Text::TabAlignment align, Windows::UI::Text::TabLeader leader) const
{
    check_hresult(shim()->abi_AddTab(position, align, leader));
}

template <typename D> void impl_ITextParagraphFormat<D>::ClearAllTabs() const
{
    check_hresult(shim()->abi_ClearAllTabs());
}

template <typename D> void impl_ITextParagraphFormat<D>::DeleteTab(float position) const
{
    check_hresult(shim()->abi_DeleteTab(position));
}

template <typename D> Windows::UI::Text::ITextParagraphFormat impl_ITextParagraphFormat<D>::GetClone() const
{
    Windows::UI::Text::ITextParagraphFormat value;
    check_hresult(shim()->abi_GetClone(put(value)));
    return value;
}

template <typename D> void impl_ITextParagraphFormat<D>::GetTab(int32_t index, float & position, Windows::UI::Text::TabAlignment & align, Windows::UI::Text::TabLeader & leader) const
{
    check_hresult(shim()->abi_GetTab(index, &position, &align, &leader));
}

template <typename D> bool impl_ITextParagraphFormat<D>::IsEqual(const Windows::UI::Text::ITextParagraphFormat & format) const
{
    bool value {};
    check_hresult(shim()->abi_IsEqual(get(format), &value));
    return value;
}

template <typename D> void impl_ITextParagraphFormat<D>::SetClone(const Windows::UI::Text::ITextParagraphFormat & format) const
{
    check_hresult(shim()->abi_SetClone(get(format)));
}

template <typename D> void impl_ITextParagraphFormat<D>::SetIndents(float start, float left, float right) const
{
    check_hresult(shim()->abi_SetIndents(start, left, right));
}

template <typename D> void impl_ITextParagraphFormat<D>::SetLineSpacing(Windows::UI::Text::LineSpacingRule rule, float spacing) const
{
    check_hresult(shim()->abi_SetLineSpacing(rule, spacing));
}

template <typename D> Windows::UI::Text::FontWeight impl_IFontWeightsStatics<D>::Black() const
{
    Windows::UI::Text::FontWeight value {};
    check_hresult(shim()->get_Black(put(value)));
    return value;
}

template <typename D> Windows::UI::Text::FontWeight impl_IFontWeightsStatics<D>::Bold() const
{
    Windows::UI::Text::FontWeight value {};
    check_hresult(shim()->get_Bold(put(value)));
    return value;
}

template <typename D> Windows::UI::Text::FontWeight impl_IFontWeightsStatics<D>::ExtraBlack() const
{
    Windows::UI::Text::FontWeight value {};
    check_hresult(shim()->get_ExtraBlack(put(value)));
    return value;
}

template <typename D> Windows::UI::Text::FontWeight impl_IFontWeightsStatics<D>::ExtraBold() const
{
    Windows::UI::Text::FontWeight value {};
    check_hresult(shim()->get_ExtraBold(put(value)));
    return value;
}

template <typename D> Windows::UI::Text::FontWeight impl_IFontWeightsStatics<D>::ExtraLight() const
{
    Windows::UI::Text::FontWeight value {};
    check_hresult(shim()->get_ExtraLight(put(value)));
    return value;
}

template <typename D> Windows::UI::Text::FontWeight impl_IFontWeightsStatics<D>::Light() const
{
    Windows::UI::Text::FontWeight value {};
    check_hresult(shim()->get_Light(put(value)));
    return value;
}

template <typename D> Windows::UI::Text::FontWeight impl_IFontWeightsStatics<D>::Medium() const
{
    Windows::UI::Text::FontWeight value {};
    check_hresult(shim()->get_Medium(put(value)));
    return value;
}

template <typename D> Windows::UI::Text::FontWeight impl_IFontWeightsStatics<D>::Normal() const
{
    Windows::UI::Text::FontWeight value {};
    check_hresult(shim()->get_Normal(put(value)));
    return value;
}

template <typename D> Windows::UI::Text::FontWeight impl_IFontWeightsStatics<D>::SemiBold() const
{
    Windows::UI::Text::FontWeight value {};
    check_hresult(shim()->get_SemiBold(put(value)));
    return value;
}

template <typename D> Windows::UI::Text::FontWeight impl_IFontWeightsStatics<D>::SemiLight() const
{
    Windows::UI::Text::FontWeight value {};
    check_hresult(shim()->get_SemiLight(put(value)));
    return value;
}

template <typename D> Windows::UI::Text::FontWeight impl_IFontWeightsStatics<D>::Thin() const
{
    Windows::UI::Text::FontWeight value {};
    check_hresult(shim()->get_Thin(put(value)));
    return value;
}

inline Windows::UI::Text::FontWeight FontWeights::Black()
{
    return get_activation_factory<FontWeights, IFontWeightsStatics>().Black();
}

inline Windows::UI::Text::FontWeight FontWeights::Bold()
{
    return get_activation_factory<FontWeights, IFontWeightsStatics>().Bold();
}

inline Windows::UI::Text::FontWeight FontWeights::ExtraBlack()
{
    return get_activation_factory<FontWeights, IFontWeightsStatics>().ExtraBlack();
}

inline Windows::UI::Text::FontWeight FontWeights::ExtraBold()
{
    return get_activation_factory<FontWeights, IFontWeightsStatics>().ExtraBold();
}

inline Windows::UI::Text::FontWeight FontWeights::ExtraLight()
{
    return get_activation_factory<FontWeights, IFontWeightsStatics>().ExtraLight();
}

inline Windows::UI::Text::FontWeight FontWeights::Light()
{
    return get_activation_factory<FontWeights, IFontWeightsStatics>().Light();
}

inline Windows::UI::Text::FontWeight FontWeights::Medium()
{
    return get_activation_factory<FontWeights, IFontWeightsStatics>().Medium();
}

inline Windows::UI::Text::FontWeight FontWeights::Normal()
{
    return get_activation_factory<FontWeights, IFontWeightsStatics>().Normal();
}

inline Windows::UI::Text::FontWeight FontWeights::SemiBold()
{
    return get_activation_factory<FontWeights, IFontWeightsStatics>().SemiBold();
}

inline Windows::UI::Text::FontWeight FontWeights::SemiLight()
{
    return get_activation_factory<FontWeights, IFontWeightsStatics>().SemiLight();
}

inline Windows::UI::Text::FontWeight FontWeights::Thin()
{
    return get_activation_factory<FontWeights, IFontWeightsStatics>().Thin();
}

inline Windows::UI::Color TextConstants::AutoColor()
{
    return get_activation_factory<TextConstants, ITextConstantsStatics>().AutoColor();
}

inline int32_t TextConstants::MinUnitCount()
{
    return get_activation_factory<TextConstants, ITextConstantsStatics>().MinUnitCount();
}

inline int32_t TextConstants::MaxUnitCount()
{
    return get_activation_factory<TextConstants, ITextConstantsStatics>().MaxUnitCount();
}

inline Windows::UI::Color TextConstants::UndefinedColor()
{
    return get_activation_factory<TextConstants, ITextConstantsStatics>().UndefinedColor();
}

inline float TextConstants::UndefinedFloatValue()
{
    return get_activation_factory<TextConstants, ITextConstantsStatics>().UndefinedFloatValue();
}

inline int32_t TextConstants::UndefinedInt32Value()
{
    return get_activation_factory<TextConstants, ITextConstantsStatics>().UndefinedInt32Value();
}

inline Windows::UI::Text::FontStretch TextConstants::UndefinedFontStretch()
{
    return get_activation_factory<TextConstants, ITextConstantsStatics>().UndefinedFontStretch();
}

inline Windows::UI::Text::FontStyle TextConstants::UndefinedFontStyle()
{
    return get_activation_factory<TextConstants, ITextConstantsStatics>().UndefinedFontStyle();
}

}

}
