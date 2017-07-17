// C++/WinRT v1.0.170717.1
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "Windows.Storage.1.h"
#include "Windows.Media.Playlists.1.h"

namespace winrt {

namespace Windows::Media::Playlists {

struct Playlist :
    Windows::Media::Playlists::IPlaylist
{
    Playlist(std::nullptr_t) noexcept {}
    Playlist();
    static Windows::Foundation::IAsyncOperation<Windows::Media::Playlists::Playlist> LoadAsync(Windows::Storage::IStorageFile const& file);
};

}

namespace impl {

}

}
