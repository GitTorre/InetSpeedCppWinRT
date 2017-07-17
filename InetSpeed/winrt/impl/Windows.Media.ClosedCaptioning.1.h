// C++/WinRT v1.0.170717.1
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "Windows.UI.0.h"
#include "Windows.Media.ClosedCaptioning.0.h"

namespace winrt {

namespace Windows::Media::ClosedCaptioning {

struct IClosedCaptionPropertiesStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IClosedCaptionPropertiesStatics>
{
    IClosedCaptionPropertiesStatics(std::nullptr_t = nullptr) noexcept {}
};

}

}
