// C++ for the Windows Runtime v1.29
// Copyright (c) 2016 Microsoft Corporation

#pragma once


WINRT_EXPORT namespace winrt {

namespace ABI::Windows::Gaming::Preview::GamesEnumeration {

struct GameListChangedEventHandler;
struct GameListRemovedEventHandler;
struct IGameListEntry;
struct IGameListStatics;
struct GameListEntry;

}

namespace Windows::Gaming::Preview::GamesEnumeration {

struct GameListChangedEventHandler;
struct GameListRemovedEventHandler;
struct IGameListEntry;
struct IGameListStatics;
struct GameList;
struct GameListEntry;

}

namespace Windows::Gaming::Preview::GamesEnumeration {

enum class GameListCategory
{
    Candidate = 0,
    ConfirmedBySystem = 1,
    ConfirmedByUser = 2,
};

}

}
