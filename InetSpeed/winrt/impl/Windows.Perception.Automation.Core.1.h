// C++/WinRT v1.0.170717.1
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "Windows.Foundation.0.h"
#include "Windows.Perception.Automation.Core.0.h"

namespace winrt {

namespace Windows::Perception::Automation::Core {

struct ICorePerceptionAutomationStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<ICorePerceptionAutomationStatics>
{
    ICorePerceptionAutomationStatics(std::nullptr_t = nullptr) noexcept {}
};

}

}
