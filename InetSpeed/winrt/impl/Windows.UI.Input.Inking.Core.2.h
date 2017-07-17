// C++/WinRT v1.0.170717.1
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "Windows.UI.Core.1.h"
#include "Windows.UI.Input.Inking.1.h"
#include "Windows.UI.Input.Inking.Core.1.h"

namespace winrt {

namespace Windows::UI::Input::Inking::Core {

struct CoreInkIndependentInputSource :
    Windows::UI::Input::Inking::Core::ICoreInkIndependentInputSource
{
    CoreInkIndependentInputSource(std::nullptr_t) noexcept {}
    static Windows::UI::Input::Inking::Core::CoreInkIndependentInputSource Create(Windows::UI::Input::Inking::InkPresenter const& inkPresenter);
};

struct CoreWetStrokeUpdateEventArgs :
    Windows::UI::Input::Inking::Core::ICoreWetStrokeUpdateEventArgs
{
    CoreWetStrokeUpdateEventArgs(std::nullptr_t) noexcept {}
};

struct CoreWetStrokeUpdateSource :
    Windows::UI::Input::Inking::Core::ICoreWetStrokeUpdateSource
{
    CoreWetStrokeUpdateSource(std::nullptr_t) noexcept {}
    static Windows::UI::Input::Inking::Core::CoreWetStrokeUpdateSource Create(Windows::UI::Input::Inking::InkPresenter const& inkPresenter);
};

}

namespace impl {

}

}
