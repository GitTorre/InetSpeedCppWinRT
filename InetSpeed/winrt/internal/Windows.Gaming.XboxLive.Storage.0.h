// C++ for the Windows Runtime v1.29
// Copyright (c) 2016 Microsoft Corporation

#pragma once


WINRT_EXPORT namespace winrt {

namespace ABI::Windows::Gaming::XboxLive::Storage {

struct IGameSaveBlobGetResult;
struct IGameSaveBlobInfo;
struct IGameSaveBlobInfoGetResult;
struct IGameSaveBlobInfoQuery;
struct IGameSaveContainer;
struct IGameSaveContainerInfo;
struct IGameSaveContainerInfoGetResult;
struct IGameSaveContainerInfoQuery;
struct IGameSaveOperationResult;
struct IGameSaveProvider;
struct IGameSaveProviderGetResult;
struct IGameSaveProviderStatics;
struct GameSaveBlobGetResult;
struct GameSaveBlobInfo;
struct GameSaveBlobInfoGetResult;
struct GameSaveBlobInfoQuery;
struct GameSaveContainer;
struct GameSaveContainerInfo;
struct GameSaveContainerInfoGetResult;
struct GameSaveContainerInfoQuery;
struct GameSaveOperationResult;
struct GameSaveProvider;
struct GameSaveProviderGetResult;

}

namespace Windows::Gaming::XboxLive::Storage {

struct IGameSaveBlobGetResult;
struct IGameSaveBlobInfo;
struct IGameSaveBlobInfoGetResult;
struct IGameSaveBlobInfoQuery;
struct IGameSaveContainer;
struct IGameSaveContainerInfo;
struct IGameSaveContainerInfoGetResult;
struct IGameSaveContainerInfoQuery;
struct IGameSaveOperationResult;
struct IGameSaveProvider;
struct IGameSaveProviderGetResult;
struct IGameSaveProviderStatics;
struct GameSaveBlobGetResult;
struct GameSaveBlobInfo;
struct GameSaveBlobInfoGetResult;
struct GameSaveBlobInfoQuery;
struct GameSaveContainer;
struct GameSaveContainerInfo;
struct GameSaveContainerInfoGetResult;
struct GameSaveContainerInfoQuery;
struct GameSaveOperationResult;
struct GameSaveProvider;
struct GameSaveProviderGetResult;

}

namespace Windows::Gaming::XboxLive::Storage {

enum class GameSaveErrorStatus
{
    Ok = 0,
    Abort = -2147467260,
    InvalidContainerName = -2138898431,
    NoAccess = -2138898430,
    OutOfLocalStorage = -2138898429,
    UserCanceled = -2138898428,
    UpdateTooBig = -2138898427,
    QuotaExceeded = -2138898426,
    ProvidedBufferTooSmall = -2138898425,
    BlobNotFound = -2138898424,
    NoXboxLiveInfo = -2138898423,
    ContainerNotInSync = -2138898422,
    ContainerSyncFailed = -2138898421,
    UserHasNoXboxLiveInfo = -2138898420,
    ObjectExpired = -2138898419,
};

}

}
