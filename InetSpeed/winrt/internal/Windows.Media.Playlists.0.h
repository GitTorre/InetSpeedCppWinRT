// C++ for the Windows Runtime v1.29
// Copyright (c) 2016 Microsoft Corporation

#pragma once


WINRT_EXPORT namespace winrt {

namespace ABI::Windows::Media::Playlists {

struct IPlaylist;
struct IPlaylistStatics;
struct Playlist;

}

namespace Windows::Media::Playlists {

struct IPlaylist;
struct IPlaylistStatics;
struct Playlist;

}

namespace Windows::Media::Playlists {

enum class PlaylistFormat
{
    WindowsMedia = 0,
    Zune = 1,
    M3u = 2,
};

}

}
