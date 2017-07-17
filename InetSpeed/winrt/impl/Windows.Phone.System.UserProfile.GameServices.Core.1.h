// C++/WinRT v1.0.170717.1
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "Windows.Foundation.0.h"
#include "Windows.Storage.Streams.0.h"
#include "Windows.Phone.System.UserProfile.GameServices.Core.0.h"

namespace winrt {

namespace Windows::Phone::System::UserProfile::GameServices::Core {

struct IGameService :
    Windows::Foundation::IInspectable,
    impl::consume_t<IGameService>
{
    IGameService(std::nullptr_t = nullptr) noexcept {}
};

struct IGameService2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IGameService2>
{
    IGameService2(std::nullptr_t = nullptr) noexcept {}
};

struct IGameServicePropertyCollection :
    Windows::Foundation::IInspectable,
    impl::consume_t<IGameServicePropertyCollection>
{
    IGameServicePropertyCollection(std::nullptr_t = nullptr) noexcept {}
};

}

}
