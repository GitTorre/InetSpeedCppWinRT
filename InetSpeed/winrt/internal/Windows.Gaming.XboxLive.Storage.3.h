// C++ for the Windows Runtime v1.29
// Copyright (c) 2016 Microsoft Corporation

#pragma once

#include "Windows.Gaming.XboxLive.Storage.2.h"

WINRT_EXPORT namespace winrt {

namespace Windows::Gaming::XboxLive::Storage {

struct WINRT_EBO GameSaveBlobGetResult :
    Windows::Gaming::XboxLive::Storage::IGameSaveBlobGetResult
{
    GameSaveBlobGetResult(std::nullptr_t) noexcept {}
};

struct WINRT_EBO GameSaveBlobInfo :
    Windows::Gaming::XboxLive::Storage::IGameSaveBlobInfo
{
    GameSaveBlobInfo(std::nullptr_t) noexcept {}
};

struct WINRT_EBO GameSaveBlobInfoGetResult :
    Windows::Gaming::XboxLive::Storage::IGameSaveBlobInfoGetResult
{
    GameSaveBlobInfoGetResult(std::nullptr_t) noexcept {}
};

struct WINRT_EBO GameSaveBlobInfoQuery :
    Windows::Gaming::XboxLive::Storage::IGameSaveBlobInfoQuery
{
    GameSaveBlobInfoQuery(std::nullptr_t) noexcept {}
};

struct WINRT_EBO GameSaveContainer :
    Windows::Gaming::XboxLive::Storage::IGameSaveContainer
{
    GameSaveContainer(std::nullptr_t) noexcept {}
};

struct WINRT_EBO GameSaveContainerInfo :
    Windows::Gaming::XboxLive::Storage::IGameSaveContainerInfo
{
    GameSaveContainerInfo(std::nullptr_t) noexcept {}
};

struct WINRT_EBO GameSaveContainerInfoGetResult :
    Windows::Gaming::XboxLive::Storage::IGameSaveContainerInfoGetResult
{
    GameSaveContainerInfoGetResult(std::nullptr_t) noexcept {}
};

struct WINRT_EBO GameSaveContainerInfoQuery :
    Windows::Gaming::XboxLive::Storage::IGameSaveContainerInfoQuery
{
    GameSaveContainerInfoQuery(std::nullptr_t) noexcept {}
};

struct WINRT_EBO GameSaveOperationResult :
    Windows::Gaming::XboxLive::Storage::IGameSaveOperationResult
{
    GameSaveOperationResult(std::nullptr_t) noexcept {}
};

struct WINRT_EBO GameSaveProvider :
    Windows::Gaming::XboxLive::Storage::IGameSaveProvider
{
    GameSaveProvider(std::nullptr_t) noexcept {}
    static Windows::Foundation::IAsyncOperation<Windows::Gaming::XboxLive::Storage::GameSaveProviderGetResult> GetForUserAsync(const Windows::System::User & user, hstring_ref serviceConfigId);
    static Windows::Foundation::IAsyncOperation<Windows::Gaming::XboxLive::Storage::GameSaveProviderGetResult> GetSyncOnDemandForUserAsync(const Windows::System::User & user, hstring_ref serviceConfigId);
};

struct WINRT_EBO GameSaveProviderGetResult :
    Windows::Gaming::XboxLive::Storage::IGameSaveProviderGetResult
{
    GameSaveProviderGetResult(std::nullptr_t) noexcept {}
};

}

}
