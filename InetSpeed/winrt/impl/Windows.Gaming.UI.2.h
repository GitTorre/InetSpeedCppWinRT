﻿// C++/WinRT v1.0.170717.1
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "Windows.Gaming.UI.1.h"

namespace winrt {

namespace Windows::Gaming::UI {

struct GameBar
{
    GameBar() = delete;
    static event_token VisibilityChanged(Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> const& handler);
    using VisibilityChanged_revoker = factory_event_revoker<Windows::Gaming::UI::IGameBarStatics>;
    static VisibilityChanged_revoker VisibilityChanged(auto_revoke_t, Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> const& handler);
    static void VisibilityChanged(event_token const& token);
    static event_token IsInputRedirectedChanged(Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> const& handler);
    using IsInputRedirectedChanged_revoker = factory_event_revoker<Windows::Gaming::UI::IGameBarStatics>;
    static IsInputRedirectedChanged_revoker IsInputRedirectedChanged(auto_revoke_t, Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> const& handler);
    static void IsInputRedirectedChanged(event_token const& token);
    static bool Visible();
    static bool IsInputRedirected();
};

struct GameChatMessageReceivedEventArgs :
    Windows::Gaming::UI::IGameChatMessageReceivedEventArgs
{
    GameChatMessageReceivedEventArgs(std::nullptr_t) noexcept {}
};

struct GameChatOverlay :
    Windows::Gaming::UI::IGameChatOverlay
{
    GameChatOverlay(std::nullptr_t) noexcept {}
    static Windows::Gaming::UI::GameChatOverlay GetDefault();
};

struct GameChatOverlayMessageSource :
    Windows::Gaming::UI::IGameChatOverlayMessageSource
{
    GameChatOverlayMessageSource(std::nullptr_t) noexcept {}
    GameChatOverlayMessageSource();
};

}

namespace impl {

}

}
