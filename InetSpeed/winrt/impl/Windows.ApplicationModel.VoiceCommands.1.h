// C++/WinRT v1.0.170717.1
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "Windows.ApplicationModel.AppService.0.h"
#include "Windows.Globalization.0.h"
#include "Windows.Media.SpeechRecognition.0.h"
#include "Windows.Storage.0.h"
#include "Windows.ApplicationModel.VoiceCommands.0.h"

namespace winrt {

namespace Windows::ApplicationModel::VoiceCommands {

struct IVoiceCommand :
    Windows::Foundation::IInspectable,
    impl::consume_t<IVoiceCommand>
{
    IVoiceCommand(std::nullptr_t = nullptr) noexcept {}
};

struct IVoiceCommandCompletedEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<IVoiceCommandCompletedEventArgs>
{
    IVoiceCommandCompletedEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct IVoiceCommandConfirmationResult :
    Windows::Foundation::IInspectable,
    impl::consume_t<IVoiceCommandConfirmationResult>
{
    IVoiceCommandConfirmationResult(std::nullptr_t = nullptr) noexcept {}
};

struct IVoiceCommandContentTile :
    Windows::Foundation::IInspectable,
    impl::consume_t<IVoiceCommandContentTile>
{
    IVoiceCommandContentTile(std::nullptr_t = nullptr) noexcept {}
};

struct IVoiceCommandDefinition :
    Windows::Foundation::IInspectable,
    impl::consume_t<IVoiceCommandDefinition>
{
    IVoiceCommandDefinition(std::nullptr_t = nullptr) noexcept {}
};

struct IVoiceCommandDefinitionManagerStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IVoiceCommandDefinitionManagerStatics>
{
    IVoiceCommandDefinitionManagerStatics(std::nullptr_t = nullptr) noexcept {}
};

struct IVoiceCommandDisambiguationResult :
    Windows::Foundation::IInspectable,
    impl::consume_t<IVoiceCommandDisambiguationResult>
{
    IVoiceCommandDisambiguationResult(std::nullptr_t = nullptr) noexcept {}
};

struct IVoiceCommandResponse :
    Windows::Foundation::IInspectable,
    impl::consume_t<IVoiceCommandResponse>
{
    IVoiceCommandResponse(std::nullptr_t = nullptr) noexcept {}
};

struct IVoiceCommandResponseStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IVoiceCommandResponseStatics>
{
    IVoiceCommandResponseStatics(std::nullptr_t = nullptr) noexcept {}
};

struct IVoiceCommandServiceConnection :
    Windows::Foundation::IInspectable,
    impl::consume_t<IVoiceCommandServiceConnection>
{
    IVoiceCommandServiceConnection(std::nullptr_t = nullptr) noexcept {}
};

struct IVoiceCommandServiceConnectionStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IVoiceCommandServiceConnectionStatics>
{
    IVoiceCommandServiceConnectionStatics(std::nullptr_t = nullptr) noexcept {}
};

struct IVoiceCommandUserMessage :
    Windows::Foundation::IInspectable,
    impl::consume_t<IVoiceCommandUserMessage>
{
    IVoiceCommandUserMessage(std::nullptr_t = nullptr) noexcept {}
};

}

}
