// C++/WinRT v1.0.170717.1
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "Windows.Foundation.Collections.0.h"
#include "Windows.Globalization.Collation.0.h"

namespace winrt {

namespace Windows::Globalization::Collation {

struct ICharacterGrouping :
    Windows::Foundation::IInspectable,
    impl::consume_t<ICharacterGrouping>
{
    ICharacterGrouping(std::nullptr_t = nullptr) noexcept {}
};

struct ICharacterGroupings :
    Windows::Foundation::IInspectable,
    impl::consume_t<ICharacterGroupings>,
    impl::require<ICharacterGroupings, Windows::Foundation::Collections::IIterable<Windows::Globalization::Collation::CharacterGrouping>, Windows::Foundation::Collections::IVectorView<Windows::Globalization::Collation::CharacterGrouping>>
{
    ICharacterGroupings(std::nullptr_t = nullptr) noexcept {}
};

struct ICharacterGroupingsFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<ICharacterGroupingsFactory>
{
    ICharacterGroupingsFactory(std::nullptr_t = nullptr) noexcept {}
};

}

}
