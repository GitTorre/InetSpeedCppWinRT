// C++/WinRT v1.0.170717.1
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "Windows.ApplicationModel.AppService.1.h"
#include "Windows.Globalization.1.h"
#include "Windows.Media.SpeechRecognition.1.h"
#include "Windows.Storage.1.h"
#include "Windows.ApplicationModel.VoiceCommands.1.h"

namespace winrt {

namespace Windows::ApplicationModel::VoiceCommands {

struct VoiceCommand :
    Windows::ApplicationModel::VoiceCommands::IVoiceCommand
{
    VoiceCommand(std::nullptr_t) noexcept {}
};

struct VoiceCommandCompletedEventArgs :
    Windows::ApplicationModel::VoiceCommands::IVoiceCommandCompletedEventArgs
{
    VoiceCommandCompletedEventArgs(std::nullptr_t) noexcept {}
};

struct VoiceCommandConfirmationResult :
    Windows::ApplicationModel::VoiceCommands::IVoiceCommandConfirmationResult
{
    VoiceCommandConfirmationResult(std::nullptr_t) noexcept {}
};

struct VoiceCommandContentTile :
    Windows::ApplicationModel::VoiceCommands::IVoiceCommandContentTile
{
    VoiceCommandContentTile(std::nullptr_t) noexcept {}
    VoiceCommandContentTile();
};

struct VoiceCommandDefinition :
    Windows::ApplicationModel::VoiceCommands::IVoiceCommandDefinition
{
    VoiceCommandDefinition(std::nullptr_t) noexcept {}
};

struct VoiceCommandDefinitionManager
{
    VoiceCommandDefinitionManager() = delete;
    static Windows::Foundation::IAsyncAction InstallCommandDefinitionsFromStorageFileAsync(Windows::Storage::StorageFile const& file);
    static Windows::Foundation::Collections::IMapView<hstring, Windows::ApplicationModel::VoiceCommands::VoiceCommandDefinition> InstalledCommandDefinitions();
};

struct VoiceCommandDisambiguationResult :
    Windows::ApplicationModel::VoiceCommands::IVoiceCommandDisambiguationResult
{
    VoiceCommandDisambiguationResult(std::nullptr_t) noexcept {}
};

struct VoiceCommandResponse :
    Windows::ApplicationModel::VoiceCommands::IVoiceCommandResponse
{
    VoiceCommandResponse(std::nullptr_t) noexcept {}
    static uint32_t MaxSupportedVoiceCommandContentTiles();
    static Windows::ApplicationModel::VoiceCommands::VoiceCommandResponse CreateResponse(Windows::ApplicationModel::VoiceCommands::VoiceCommandUserMessage const& userMessage);
    static Windows::ApplicationModel::VoiceCommands::VoiceCommandResponse CreateResponse(Windows::ApplicationModel::VoiceCommands::VoiceCommandUserMessage const& message, param::iterable<Windows::ApplicationModel::VoiceCommands::VoiceCommandContentTile> const& contentTiles);
    static Windows::ApplicationModel::VoiceCommands::VoiceCommandResponse CreateResponseForPrompt(Windows::ApplicationModel::VoiceCommands::VoiceCommandUserMessage const& message, Windows::ApplicationModel::VoiceCommands::VoiceCommandUserMessage const& repeatMessage);
    static Windows::ApplicationModel::VoiceCommands::VoiceCommandResponse CreateResponseForPrompt(Windows::ApplicationModel::VoiceCommands::VoiceCommandUserMessage const& message, Windows::ApplicationModel::VoiceCommands::VoiceCommandUserMessage const& repeatMessage, param::iterable<Windows::ApplicationModel::VoiceCommands::VoiceCommandContentTile> const& contentTiles);
};

struct VoiceCommandServiceConnection :
    Windows::ApplicationModel::VoiceCommands::IVoiceCommandServiceConnection
{
    VoiceCommandServiceConnection(std::nullptr_t) noexcept {}
    static Windows::ApplicationModel::VoiceCommands::VoiceCommandServiceConnection FromAppServiceTriggerDetails(Windows::ApplicationModel::AppService::AppServiceTriggerDetails const& triggerDetails);
};

struct VoiceCommandUserMessage :
    Windows::ApplicationModel::VoiceCommands::IVoiceCommandUserMessage
{
    VoiceCommandUserMessage(std::nullptr_t) noexcept {}
    VoiceCommandUserMessage();
};

}

namespace impl {

}

}
