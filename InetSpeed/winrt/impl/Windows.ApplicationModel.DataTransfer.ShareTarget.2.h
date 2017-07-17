// C++/WinRT v1.0.170717.1
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "Windows.ApplicationModel.DataTransfer.1.h"
#include "Windows.Storage.Streams.1.h"
#include "Windows.ApplicationModel.DataTransfer.ShareTarget.1.h"

namespace winrt {

namespace Windows::ApplicationModel::DataTransfer::ShareTarget {

struct QuickLink :
    Windows::ApplicationModel::DataTransfer::ShareTarget::IQuickLink
{
    QuickLink(std::nullptr_t) noexcept {}
    QuickLink();
};

struct ShareOperation :
    Windows::ApplicationModel::DataTransfer::ShareTarget::IShareOperation,
    impl::require<ShareOperation, Windows::ApplicationModel::DataTransfer::ShareTarget::IShareOperation2>
{
    ShareOperation(std::nullptr_t) noexcept {}
};

}

namespace impl {

}

}
