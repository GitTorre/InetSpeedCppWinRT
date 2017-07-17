// C++/WinRT v1.0.170717.1
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "Windows.Management.1.h"

namespace winrt {

namespace Windows::Management {

struct MdmAlert :
    Windows::Management::IMdmAlert
{
    MdmAlert(std::nullptr_t) noexcept {}
    MdmAlert();
};

struct MdmSession :
    Windows::Management::IMdmSession
{
    MdmSession(std::nullptr_t) noexcept {}
};

struct MdmSessionManager
{
    MdmSessionManager() = delete;
    static Windows::Foundation::Collections::IVectorView<hstring> SessionIds();
    static Windows::Management::MdmSession TryCreateSession();
    static void DeleteSessionById(param::hstring const& sessionId);
    static Windows::Management::MdmSession GetSessionById(param::hstring const& sessionId);
};

}

namespace impl {

}

}
