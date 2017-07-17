// C++/WinRT v1.0.170717.1
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "Windows.ApplicationModel.DataTransfer.0.h"
#include "Windows.Storage.Streams.0.h"
#include "Windows.ApplicationModel.DataTransfer.ShareTarget.0.h"

namespace winrt {

namespace Windows::ApplicationModel::DataTransfer::ShareTarget {

struct IQuickLink :
    Windows::Foundation::IInspectable,
    impl::consume_t<IQuickLink>
{
    IQuickLink(std::nullptr_t = nullptr) noexcept {}
};

struct IShareOperation :
    Windows::Foundation::IInspectable,
    impl::consume_t<IShareOperation>
{
    IShareOperation(std::nullptr_t = nullptr) noexcept {}
};

struct IShareOperation2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IShareOperation2>
{
    IShareOperation2(std::nullptr_t = nullptr) noexcept {}
};

}

}
