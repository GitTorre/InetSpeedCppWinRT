// C++ for the Windows Runtime v1.29
// Copyright (c) 2016 Microsoft Corporation

#pragma once

#include "Windows.Data.Html.1.h"

WINRT_EXPORT namespace winrt {

namespace Windows::Data::Html {

template <typename D>
class WINRT_EBO impl_IHtmlUtilities
{
    auto shim() const { return impl::shim<D, IHtmlUtilities>(this); }

public:

    hstring ConvertToText(hstring_ref html) const;
};

struct IHtmlUtilities :
    Windows::IInspectable,
    impl::consume<IHtmlUtilities>
{
    IHtmlUtilities(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IHtmlUtilities>(m_ptr); }
};

}

}
