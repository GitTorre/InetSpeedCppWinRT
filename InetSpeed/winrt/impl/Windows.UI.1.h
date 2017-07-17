// C++/WinRT v1.0.170717.1
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "Windows.UI.0.h"

namespace winrt {

namespace Windows::UI {

struct IColorHelper :
    Windows::Foundation::IInspectable,
    impl::consume_t<IColorHelper>
{
    IColorHelper(std::nullptr_t = nullptr) noexcept {}
};

struct IColorHelperStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IColorHelperStatics>
{
    IColorHelperStatics(std::nullptr_t = nullptr) noexcept {}
};

struct IColorHelperStatics2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IColorHelperStatics2>
{
    IColorHelperStatics2(std::nullptr_t = nullptr) noexcept {}
};

struct IColors :
    Windows::Foundation::IInspectable,
    impl::consume_t<IColors>
{
    IColors(std::nullptr_t = nullptr) noexcept {}
};

struct IColorsStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IColorsStatics>
{
    IColorsStatics(std::nullptr_t = nullptr) noexcept {}
};

}

}
