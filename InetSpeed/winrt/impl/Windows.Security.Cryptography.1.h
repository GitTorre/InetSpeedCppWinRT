// C++/WinRT v1.0.170717.1
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "Windows.Storage.Streams.0.h"
#include "Windows.Security.Cryptography.0.h"

namespace winrt {

namespace Windows::Security::Cryptography {

struct ICryptographicBufferStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<ICryptographicBufferStatics>
{
    ICryptographicBufferStatics(std::nullptr_t = nullptr) noexcept {}
};

}

}
