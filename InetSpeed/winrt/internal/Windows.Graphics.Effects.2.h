// C++ for the Windows Runtime v1.29
// Copyright (c) 2016 Microsoft Corporation

#pragma once

#include "Windows.Graphics.Effects.1.h"

WINRT_EXPORT namespace winrt {

namespace Windows::Graphics::Effects {

template <typename D>
class WINRT_EBO impl_IGraphicsEffect
{
    auto shim() const { return impl::shim<D, IGraphicsEffect>(this); }

public:

    hstring Name() const;
    void Name(hstring_ref name) const;
};

template <typename D>
class WINRT_EBO impl_IGraphicsEffectSource
{
    auto shim() const { return impl::shim<D, IGraphicsEffectSource>(this); }

public:

};

struct IGraphicsEffect :
    Windows::IInspectable,
    impl::consume<IGraphicsEffect>,
    impl::require<IGraphicsEffect, Windows::Graphics::Effects::IGraphicsEffectSource>
{
    IGraphicsEffect(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IGraphicsEffect>(m_ptr); }
};

struct IGraphicsEffectSource :
    Windows::IInspectable,
    impl::consume<IGraphicsEffectSource>
{
    IGraphicsEffectSource(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IGraphicsEffectSource>(m_ptr); }
};

}

}
