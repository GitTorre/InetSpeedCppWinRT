// C++/WinRT v1.0.170717.1
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "Windows.UI.Core.0.h"
#include "Windows.UI.Input.Inking.0.h"
#include "Windows.UI.Input.Inking.Core.0.h"

namespace winrt {

namespace Windows::UI::Input::Inking::Core {

struct ICoreInkIndependentInputSource :
    Windows::Foundation::IInspectable,
    impl::consume_t<ICoreInkIndependentInputSource>
{
    ICoreInkIndependentInputSource(std::nullptr_t = nullptr) noexcept {}
};

struct ICoreInkIndependentInputSourceStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<ICoreInkIndependentInputSourceStatics>
{
    ICoreInkIndependentInputSourceStatics(std::nullptr_t = nullptr) noexcept {}
};

struct ICoreWetStrokeUpdateEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<ICoreWetStrokeUpdateEventArgs>
{
    ICoreWetStrokeUpdateEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct ICoreWetStrokeUpdateSource :
    Windows::Foundation::IInspectable,
    impl::consume_t<ICoreWetStrokeUpdateSource>
{
    ICoreWetStrokeUpdateSource(std::nullptr_t = nullptr) noexcept {}
};

struct ICoreWetStrokeUpdateSourceStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<ICoreWetStrokeUpdateSourceStatics>
{
    ICoreWetStrokeUpdateSourceStatics(std::nullptr_t = nullptr) noexcept {}
};

}

}
