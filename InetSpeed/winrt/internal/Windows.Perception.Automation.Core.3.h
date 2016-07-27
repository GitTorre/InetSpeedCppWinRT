// C++ for the Windows Runtime v1.29
// Copyright (c) 2016 Microsoft Corporation

#pragma once

#include "Windows.Perception.Automation.Core.2.h"

WINRT_EXPORT namespace winrt {

namespace Windows::Perception::Automation::Core {

struct CorePerceptionAutomation
{
    CorePerceptionAutomation() = delete;
    static void SetActivationFactoryProvider(const Windows::Foundation::IGetActivationFactory & provider);
};

}

}
