// C++/WinRT v1.0.170717.1
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "Windows.Storage.1.h"
#include "Windows.Storage.Provider.1.h"

namespace winrt {

namespace Windows::Storage::Provider {

struct CachedFileUpdater
{
    CachedFileUpdater() = delete;
    static void SetUpdateInformation(Windows::Storage::IStorageFile const& file, param::hstring const& contentId, Windows::Storage::Provider::ReadActivationMode const& readMode, Windows::Storage::Provider::WriteActivationMode const& writeMode, Windows::Storage::Provider::CachedFileOptions const& options);
};

struct CachedFileUpdaterUI :
    Windows::Storage::Provider::ICachedFileUpdaterUI,
    impl::require<CachedFileUpdaterUI, Windows::Storage::Provider::ICachedFileUpdaterUI2>
{
    CachedFileUpdaterUI(std::nullptr_t) noexcept {}
};

struct FileUpdateRequest :
    Windows::Storage::Provider::IFileUpdateRequest,
    impl::require<FileUpdateRequest, Windows::Storage::Provider::IFileUpdateRequest2>
{
    FileUpdateRequest(std::nullptr_t) noexcept {}
};

struct FileUpdateRequestDeferral :
    Windows::Storage::Provider::IFileUpdateRequestDeferral
{
    FileUpdateRequestDeferral(std::nullptr_t) noexcept {}
};

struct FileUpdateRequestedEventArgs :
    Windows::Storage::Provider::IFileUpdateRequestedEventArgs
{
    FileUpdateRequestedEventArgs(std::nullptr_t) noexcept {}
};

}

namespace impl {

}

}
