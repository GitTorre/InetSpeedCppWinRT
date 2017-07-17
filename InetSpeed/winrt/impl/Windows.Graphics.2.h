// C++/WinRT v1.0.170717.1
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "Windows.Graphics.1.h"

namespace winrt {

namespace Windows::Graphics {

struct PointInt32
{
    int32_t X;
    int32_t Y;
};

struct RectInt32
{
    int32_t X;
    int32_t Y;
    int32_t Width;
    int32_t Height;
};

struct SizeInt32
{
    int32_t Width;
    int32_t Height;
};

}

namespace impl {

}

}
