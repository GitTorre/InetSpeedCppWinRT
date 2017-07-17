// C++/WinRT v1.0.170717.1
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "Windows.Foundation.Collections.0.h"
#include "Windows.Foundation.Collections.0.h"

namespace winrt {

namespace Windows::Foundation::Collections {

struct IPropertySet :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPropertySet>,
    impl::require<IPropertySet, Windows::Foundation::Collections::IIterable<Windows::Foundation::Collections::IKeyValuePair<hstring, Windows::Foundation::IInspectable>>, Windows::Foundation::Collections::IMap<hstring, Windows::Foundation::IInspectable>, Windows::Foundation::Collections::IObservableMap<hstring, Windows::Foundation::IInspectable>>
{
    IPropertySet(std::nullptr_t = nullptr) noexcept {}
};

}

}
