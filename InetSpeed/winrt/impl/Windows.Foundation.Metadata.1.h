// C++/WinRT v1.0.170717.1
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "Windows.Foundation.Metadata.0.h"

namespace winrt {

namespace Windows::Foundation::Metadata {

struct IApiInformationStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IApiInformationStatics>
{
    IApiInformationStatics(std::nullptr_t = nullptr) noexcept {}
};

}

}
