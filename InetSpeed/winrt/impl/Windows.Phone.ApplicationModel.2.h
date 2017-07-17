// C++/WinRT v1.0.170717.1
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "Windows.Phone.ApplicationModel.1.h"

namespace winrt {

namespace Windows::Phone::ApplicationModel {

struct ApplicationProfile
{
    ApplicationProfile() = delete;
    static Windows::Phone::ApplicationModel::ApplicationProfileModes Modes();
};

}

namespace impl {

}

}
