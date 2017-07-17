// C++/WinRT v1.0.170717.1
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "Windows.Storage.0.h"
#include "Windows.Storage.Provider.0.h"

namespace winrt {

namespace Windows::Storage::Provider {

struct ICachedFileUpdaterStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<ICachedFileUpdaterStatics>
{
    ICachedFileUpdaterStatics(std::nullptr_t = nullptr) noexcept {}
};

struct ICachedFileUpdaterUI :
    Windows::Foundation::IInspectable,
    impl::consume_t<ICachedFileUpdaterUI>
{
    ICachedFileUpdaterUI(std::nullptr_t = nullptr) noexcept {}
};

struct ICachedFileUpdaterUI2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<ICachedFileUpdaterUI2>,
    impl::require<ICachedFileUpdaterUI2, Windows::Storage::Provider::ICachedFileUpdaterUI>
{
    ICachedFileUpdaterUI2(std::nullptr_t = nullptr) noexcept {}
};

struct IFileUpdateRequest :
    Windows::Foundation::IInspectable,
    impl::consume_t<IFileUpdateRequest>
{
    IFileUpdateRequest(std::nullptr_t = nullptr) noexcept {}
};

struct IFileUpdateRequest2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IFileUpdateRequest2>,
    impl::require<IFileUpdateRequest2, Windows::Storage::Provider::IFileUpdateRequest>
{
    IFileUpdateRequest2(std::nullptr_t = nullptr) noexcept {}
};

struct IFileUpdateRequestDeferral :
    Windows::Foundation::IInspectable,
    impl::consume_t<IFileUpdateRequestDeferral>
{
    IFileUpdateRequestDeferral(std::nullptr_t = nullptr) noexcept {}
};

struct IFileUpdateRequestedEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<IFileUpdateRequestedEventArgs>
{
    IFileUpdateRequestedEventArgs(std::nullptr_t = nullptr) noexcept {}
};

}

}
