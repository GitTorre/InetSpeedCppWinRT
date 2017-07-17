// C++/WinRT v1.0.170717.1
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "Windows.Graphics.DirectX.1.h"
#include "Windows.Foundation.1.h"
#include "Windows.Graphics.DirectX.Direct3D11.1.h"

namespace winrt {

namespace Windows::Graphics::DirectX::Direct3D11 {

struct Direct3DMultisampleDescription
{
    int32_t Count;
    int32_t Quality;
};

struct Direct3DSurfaceDescription
{
    int32_t Width;
    int32_t Height;
    Windows::Graphics::DirectX::DirectXPixelFormat Format;
    Windows::Graphics::DirectX::Direct3D11::Direct3DMultisampleDescription MultisampleDescription;
};

}

namespace impl {

}

}
