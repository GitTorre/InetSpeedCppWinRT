// C++ for the Windows Runtime v1.29
// Copyright (c) 2016 Microsoft Corporation

#pragma once


WINRT_EXPORT namespace winrt {

namespace ABI::Windows::Management::Workplace {

struct IMdmAllowPolicyStatics;
struct IMdmPolicyStatics2;
struct IWorkplaceSettingsStatics;

}

namespace Windows::Management::Workplace {

struct IMdmAllowPolicyStatics;
struct IMdmPolicyStatics2;
struct IWorkplaceSettingsStatics;
struct MdmPolicy;
struct WorkplaceSettings;

}

namespace Windows::Management::Workplace {

enum class MessagingSyncPolicy
{
    Disallowed = 0,
    Allowed = 1,
    Required = 2,
};

}

}
