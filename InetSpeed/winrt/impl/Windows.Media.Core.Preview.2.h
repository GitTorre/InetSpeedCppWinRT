﻿// C++/WinRT v1.0.170717.1
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "Windows.Media.1.h"
#include "Windows.Media.Core.Preview.1.h"

namespace winrt {

namespace Windows::Media::Core::Preview {

struct SoundLevelBroker
{
    SoundLevelBroker() = delete;
    static Windows::Media::SoundLevel SoundLevel();
    static event_token SoundLevelChanged(Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> const& handler);
    using SoundLevelChanged_revoker = factory_event_revoker<Windows::Media::Core::Preview::ISoundLevelBrokerStatics>;
    static SoundLevelChanged_revoker SoundLevelChanged(auto_revoke_t, Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> const& handler);
    static void SoundLevelChanged(event_token const& token);
};

}

namespace impl {

}

}
