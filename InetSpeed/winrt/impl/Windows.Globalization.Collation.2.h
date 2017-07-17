// C++/WinRT v1.0.170717.1
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "Windows.Foundation.Collections.1.h"
#include "Windows.Globalization.Collation.1.h"

namespace winrt {

namespace Windows::Globalization::Collation {

struct CharacterGrouping :
    Windows::Globalization::Collation::ICharacterGrouping
{
    CharacterGrouping(std::nullptr_t) noexcept {}
};

struct CharacterGroupings :
    Windows::Globalization::Collation::ICharacterGroupings
{
    CharacterGroupings(std::nullptr_t) noexcept {}
    CharacterGroupings();
    CharacterGroupings(param::hstring const& language);
};

}

namespace impl {

}

}
