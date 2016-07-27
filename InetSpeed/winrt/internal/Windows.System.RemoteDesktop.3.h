// C++ for the Windows Runtime v1.29
// Copyright (c) 2016 Microsoft Corporation

#pragma once

#include "Windows.System.RemoteDesktop.2.h"

WINRT_EXPORT namespace winrt {

namespace Windows::System::RemoteDesktop {

struct InteractiveSession
{
    InteractiveSession() = delete;
    static bool IsRemote();
};

}

}
