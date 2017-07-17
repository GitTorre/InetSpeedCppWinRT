// C++/WinRT v1.0.170717.1
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "Windows.Management.Workplace.1.h"

namespace winrt {

namespace Windows::Management::Workplace {

struct MdmPolicy
{
    MdmPolicy() = delete;
    static bool IsBrowserAllowed();
    static bool IsCameraAllowed();
    static bool IsMicrosoftAccountAllowed();
    static bool IsStoreAllowed();
    static Windows::Management::Workplace::MessagingSyncPolicy GetMessagingSyncPolicy();
};

struct WorkplaceSettings
{
    WorkplaceSettings() = delete;
    static bool IsMicrosoftAccountOptional();
};

}

namespace impl {

}

}
