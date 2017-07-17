// C++/WinRT v1.0.170717.1
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "Windows.ApplicationModel.CommunicationBlocking.0.h"

namespace winrt {

namespace Windows::ApplicationModel::CommunicationBlocking {

struct ICommunicationBlockingAccessManagerStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<ICommunicationBlockingAccessManagerStatics>
{
    ICommunicationBlockingAccessManagerStatics(std::nullptr_t = nullptr) noexcept {}
};

struct ICommunicationBlockingAppManagerStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<ICommunicationBlockingAppManagerStatics>
{
    ICommunicationBlockingAppManagerStatics(std::nullptr_t = nullptr) noexcept {}
};

struct ICommunicationBlockingAppManagerStatics2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<ICommunicationBlockingAppManagerStatics2>,
    impl::require<ICommunicationBlockingAppManagerStatics2, Windows::ApplicationModel::CommunicationBlocking::ICommunicationBlockingAppManagerStatics>
{
    ICommunicationBlockingAppManagerStatics2(std::nullptr_t = nullptr) noexcept {}
};

}

}
