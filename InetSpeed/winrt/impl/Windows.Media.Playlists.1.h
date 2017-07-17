// C++/WinRT v1.0.170717.1
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "Windows.Storage.0.h"
#include "Windows.Media.Playlists.0.h"

namespace winrt {

namespace Windows::Media::Playlists {

struct IPlaylist :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPlaylist>
{
    IPlaylist(std::nullptr_t = nullptr) noexcept {}
};

struct IPlaylistStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPlaylistStatics>
{
    IPlaylistStatics(std::nullptr_t = nullptr) noexcept {}
};

}

}
