﻿// C++/WinRT v1.0.170717.1
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once

namespace winrt {

namespace Windows::Graphics {

struct PointInt32;
struct RectInt32;
struct SizeInt32;

}

namespace impl {
template <> struct category<Windows::Graphics::PointInt32>{ using type = struct_category<int32_t,int32_t>; };
template <> struct category<Windows::Graphics::RectInt32>{ using type = struct_category<int32_t,int32_t,int32_t,int32_t>; };
template <> struct category<Windows::Graphics::SizeInt32>{ using type = struct_category<int32_t,int32_t>; };
template <> struct name<Windows::Graphics::PointInt32>{ static constexpr auto & value{ L"Windows.Graphics.PointInt32" }; };
template <> struct name<Windows::Graphics::RectInt32>{ static constexpr auto & value{ L"Windows.Graphics.RectInt32" }; };
template <> struct name<Windows::Graphics::SizeInt32>{ static constexpr auto & value{ L"Windows.Graphics.SizeInt32" }; };

}

}
