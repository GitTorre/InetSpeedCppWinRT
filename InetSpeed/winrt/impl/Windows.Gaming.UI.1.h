// C++/WinRT v1.0.170717.1
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "Windows.Gaming.UI.0.h"

namespace winrt {

namespace Windows::Gaming::UI {

struct IGameBarStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IGameBarStatics>
{
    IGameBarStatics(std::nullptr_t = nullptr) noexcept {}
};

struct IGameChatMessageReceivedEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<IGameChatMessageReceivedEventArgs>
{
    IGameChatMessageReceivedEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct IGameChatOverlay :
    Windows::Foundation::IInspectable,
    impl::consume_t<IGameChatOverlay>
{
    IGameChatOverlay(std::nullptr_t = nullptr) noexcept {}
};

struct IGameChatOverlayMessageSource :
    Windows::Foundation::IInspectable,
    impl::consume_t<IGameChatOverlayMessageSource>
{
    IGameChatOverlayMessageSource(std::nullptr_t = nullptr) noexcept {}
};

struct IGameChatOverlayStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IGameChatOverlayStatics>
{
    IGameChatOverlayStatics(std::nullptr_t = nullptr) noexcept {}
};

}

}
