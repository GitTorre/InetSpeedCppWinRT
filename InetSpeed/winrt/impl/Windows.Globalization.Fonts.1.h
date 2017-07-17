// C++/WinRT v1.0.170717.1
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "Windows.UI.Text.0.h"
#include "Windows.Globalization.Fonts.0.h"

namespace winrt {

namespace Windows::Globalization::Fonts {

struct ILanguageFont :
    Windows::Foundation::IInspectable,
    impl::consume_t<ILanguageFont>
{
    ILanguageFont(std::nullptr_t = nullptr) noexcept {}
};

struct ILanguageFontGroup :
    Windows::Foundation::IInspectable,
    impl::consume_t<ILanguageFontGroup>
{
    ILanguageFontGroup(std::nullptr_t = nullptr) noexcept {}
};

struct ILanguageFontGroupFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<ILanguageFontGroupFactory>
{
    ILanguageFontGroupFactory(std::nullptr_t = nullptr) noexcept {}
};

}

}
