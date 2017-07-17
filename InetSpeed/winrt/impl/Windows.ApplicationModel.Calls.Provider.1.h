// C++/WinRT v1.0.170717.1
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "Windows.Storage.0.h"
#include "Windows.ApplicationModel.Calls.Provider.0.h"

namespace winrt {

namespace Windows::ApplicationModel::Calls::Provider {

struct IPhoneCallOrigin :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPhoneCallOrigin>
{
    IPhoneCallOrigin(std::nullptr_t = nullptr) noexcept {}
};

struct IPhoneCallOrigin2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPhoneCallOrigin2>,
    impl::require<IPhoneCallOrigin2, Windows::ApplicationModel::Calls::Provider::IPhoneCallOrigin>
{
    IPhoneCallOrigin2(std::nullptr_t = nullptr) noexcept {}
};

struct IPhoneCallOrigin3 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPhoneCallOrigin3>,
    impl::require<IPhoneCallOrigin3, Windows::ApplicationModel::Calls::Provider::IPhoneCallOrigin, Windows::ApplicationModel::Calls::Provider::IPhoneCallOrigin2>
{
    IPhoneCallOrigin3(std::nullptr_t = nullptr) noexcept {}
};

struct IPhoneCallOriginManagerStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPhoneCallOriginManagerStatics>
{
    IPhoneCallOriginManagerStatics(std::nullptr_t = nullptr) noexcept {}
};

struct IPhoneCallOriginManagerStatics2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPhoneCallOriginManagerStatics2>,
    impl::require<IPhoneCallOriginManagerStatics2, Windows::ApplicationModel::Calls::Provider::IPhoneCallOriginManagerStatics>
{
    IPhoneCallOriginManagerStatics2(std::nullptr_t = nullptr) noexcept {}
};

}

}
