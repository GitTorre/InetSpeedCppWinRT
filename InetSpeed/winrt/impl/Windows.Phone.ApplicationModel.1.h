// C++/WinRT v1.0.170717.1
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "Windows.Phone.ApplicationModel.0.h"

namespace winrt {

namespace Windows::Phone::ApplicationModel {

struct IApplicationProfileStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IApplicationProfileStatics>
{
    IApplicationProfileStatics(std::nullptr_t = nullptr) noexcept {}
};

}

}
