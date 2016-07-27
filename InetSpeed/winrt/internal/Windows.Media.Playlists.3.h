// C++ for the Windows Runtime v1.29
// Copyright (c) 2016 Microsoft Corporation

#pragma once

#include "Windows.Media.Playlists.2.h"

WINRT_EXPORT namespace winrt {

namespace Windows::Media::Playlists {

struct WINRT_EBO Playlist :
    Windows::Media::Playlists::IPlaylist
{
    Playlist(std::nullptr_t) noexcept {}
    Playlist();
    static Windows::Foundation::IAsyncOperation<Windows::Media::Playlists::Playlist> LoadAsync(const Windows::Storage::IStorageFile & file);
};

}

}
