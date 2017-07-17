// C++/WinRT v1.0.170717.1
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "Windows.Foundation.1.h"
#include "Windows.Perception.Automation.Core.1.h"

namespace winrt {

namespace Windows::Perception::Automation::Core {

struct CorePerceptionAutomation
{
    CorePerceptionAutomation() = delete;
    static void SetActivationFactoryProvider(Windows::Foundation::IGetActivationFactory const& provider);
};

}

namespace impl {

}

}
