// C++/WinRT v1.0.170717.1
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "Windows.UI.Text.1.h"
#include "Windows.Globalization.Fonts.1.h"

namespace winrt {

namespace Windows::Globalization::Fonts {

struct LanguageFont :
    Windows::Globalization::Fonts::ILanguageFont
{
    LanguageFont(std::nullptr_t) noexcept {}
};

struct LanguageFontGroup :
    Windows::Globalization::Fonts::ILanguageFontGroup
{
    LanguageFontGroup(std::nullptr_t) noexcept {}
    LanguageFontGroup(param::hstring const& languageTag);
};

}

namespace impl {

}

}
