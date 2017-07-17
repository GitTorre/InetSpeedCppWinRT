// C++/WinRT v1.0.170717.1
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "Windows.Foundation.Collections.1.h"
#include "Windows.Foundation.Collections.1.h"

namespace winrt {

namespace Windows::Foundation::Collections {

struct PropertySet :
    Windows::Foundation::Collections::IPropertySet
{
    PropertySet(std::nullptr_t) noexcept {}
    PropertySet();
};

struct StringMap :
    Windows::Foundation::Collections::IMap<hstring, hstring>,
    impl::require<StringMap, Windows::Foundation::Collections::IObservableMap<hstring, hstring>>
{
    StringMap(std::nullptr_t) noexcept {}
    StringMap();
};

struct ValueSet :
    Windows::Foundation::Collections::IPropertySet
{
    ValueSet(std::nullptr_t) noexcept {}
    ValueSet();
};

}

namespace impl {

}

}
