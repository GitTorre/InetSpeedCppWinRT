// C++/WinRT v1.0.170717.1
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "Windows.ApplicationModel.0.h"
#include "Windows.Gaming.Preview.GamesEnumeration.0.h"

namespace winrt {

namespace Windows::Gaming::Preview::GamesEnumeration {

struct IGameListEntry :
    Windows::Foundation::IInspectable,
    impl::consume_t<IGameListEntry>
{
    IGameListEntry(std::nullptr_t = nullptr) noexcept {}
};

struct IGameListStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IGameListStatics>
{
    IGameListStatics(std::nullptr_t = nullptr) noexcept {}
};

}

}
