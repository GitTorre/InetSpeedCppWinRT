// C++/WinRT v1.0.170717.1
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "Windows.Globalization.0.h"
#include "Windows.Storage.0.h"
#include "Windows.Foundation.0.h"
#include "Windows.Media.SpeechRecognition.0.h"

namespace winrt {

namespace Windows::Media::SpeechRecognition {

struct ISpeechContinuousRecognitionCompletedEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<ISpeechContinuousRecognitionCompletedEventArgs>
{
    ISpeechContinuousRecognitionCompletedEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct ISpeechContinuousRecognitionResultGeneratedEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<ISpeechContinuousRecognitionResultGeneratedEventArgs>
{
    ISpeechContinuousRecognitionResultGeneratedEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct ISpeechContinuousRecognitionSession :
    Windows::Foundation::IInspectable,
    impl::consume_t<ISpeechContinuousRecognitionSession>
{
    ISpeechContinuousRecognitionSession(std::nullptr_t = nullptr) noexcept {}
};

struct ISpeechRecognitionCompilationResult :
    Windows::Foundation::IInspectable,
    impl::consume_t<ISpeechRecognitionCompilationResult>
{
    ISpeechRecognitionCompilationResult(std::nullptr_t = nullptr) noexcept {}
};

struct ISpeechRecognitionConstraint :
    Windows::Foundation::IInspectable,
    impl::consume_t<ISpeechRecognitionConstraint>
{
    ISpeechRecognitionConstraint(std::nullptr_t = nullptr) noexcept {}
};

struct ISpeechRecognitionGrammarFileConstraint :
    Windows::Foundation::IInspectable,
    impl::consume_t<ISpeechRecognitionGrammarFileConstraint>,
    impl::require<ISpeechRecognitionGrammarFileConstraint, Windows::Media::SpeechRecognition::ISpeechRecognitionConstraint>
{
    ISpeechRecognitionGrammarFileConstraint(std::nullptr_t = nullptr) noexcept {}
};

struct ISpeechRecognitionGrammarFileConstraintFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<ISpeechRecognitionGrammarFileConstraintFactory>
{
    ISpeechRecognitionGrammarFileConstraintFactory(std::nullptr_t = nullptr) noexcept {}
};

struct ISpeechRecognitionHypothesis :
    Windows::Foundation::IInspectable,
    impl::consume_t<ISpeechRecognitionHypothesis>
{
    ISpeechRecognitionHypothesis(std::nullptr_t = nullptr) noexcept {}
};

struct ISpeechRecognitionHypothesisGeneratedEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<ISpeechRecognitionHypothesisGeneratedEventArgs>
{
    ISpeechRecognitionHypothesisGeneratedEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct ISpeechRecognitionListConstraint :
    Windows::Foundation::IInspectable,
    impl::consume_t<ISpeechRecognitionListConstraint>,
    impl::require<ISpeechRecognitionListConstraint, Windows::Media::SpeechRecognition::ISpeechRecognitionConstraint>
{
    ISpeechRecognitionListConstraint(std::nullptr_t = nullptr) noexcept {}
};

struct ISpeechRecognitionListConstraintFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<ISpeechRecognitionListConstraintFactory>
{
    ISpeechRecognitionListConstraintFactory(std::nullptr_t = nullptr) noexcept {}
};

struct ISpeechRecognitionQualityDegradingEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<ISpeechRecognitionQualityDegradingEventArgs>
{
    ISpeechRecognitionQualityDegradingEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct ISpeechRecognitionResult :
    Windows::Foundation::IInspectable,
    impl::consume_t<ISpeechRecognitionResult>
{
    ISpeechRecognitionResult(std::nullptr_t = nullptr) noexcept {}
};

struct ISpeechRecognitionResult2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<ISpeechRecognitionResult2>
{
    ISpeechRecognitionResult2(std::nullptr_t = nullptr) noexcept {}
};

struct ISpeechRecognitionSemanticInterpretation :
    Windows::Foundation::IInspectable,
    impl::consume_t<ISpeechRecognitionSemanticInterpretation>
{
    ISpeechRecognitionSemanticInterpretation(std::nullptr_t = nullptr) noexcept {}
};

struct ISpeechRecognitionTopicConstraint :
    Windows::Foundation::IInspectable,
    impl::consume_t<ISpeechRecognitionTopicConstraint>,
    impl::require<ISpeechRecognitionTopicConstraint, Windows::Media::SpeechRecognition::ISpeechRecognitionConstraint>
{
    ISpeechRecognitionTopicConstraint(std::nullptr_t = nullptr) noexcept {}
};

struct ISpeechRecognitionTopicConstraintFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<ISpeechRecognitionTopicConstraintFactory>
{
    ISpeechRecognitionTopicConstraintFactory(std::nullptr_t = nullptr) noexcept {}
};

struct ISpeechRecognitionVoiceCommandDefinitionConstraint :
    Windows::Foundation::IInspectable,
    impl::consume_t<ISpeechRecognitionVoiceCommandDefinitionConstraint>,
    impl::require<ISpeechRecognitionVoiceCommandDefinitionConstraint, Windows::Media::SpeechRecognition::ISpeechRecognitionConstraint>
{
    ISpeechRecognitionVoiceCommandDefinitionConstraint(std::nullptr_t = nullptr) noexcept {}
};

struct ISpeechRecognizer :
    Windows::Foundation::IInspectable,
    impl::consume_t<ISpeechRecognizer>,
    impl::require<ISpeechRecognizer, Windows::Foundation::IClosable>
{
    ISpeechRecognizer(std::nullptr_t = nullptr) noexcept {}
};

struct ISpeechRecognizer2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<ISpeechRecognizer2>
{
    ISpeechRecognizer2(std::nullptr_t = nullptr) noexcept {}
};

struct ISpeechRecognizerFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<ISpeechRecognizerFactory>
{
    ISpeechRecognizerFactory(std::nullptr_t = nullptr) noexcept {}
};

struct ISpeechRecognizerStateChangedEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<ISpeechRecognizerStateChangedEventArgs>
{
    ISpeechRecognizerStateChangedEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct ISpeechRecognizerStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<ISpeechRecognizerStatics>
{
    ISpeechRecognizerStatics(std::nullptr_t = nullptr) noexcept {}
};

struct ISpeechRecognizerTimeouts :
    Windows::Foundation::IInspectable,
    impl::consume_t<ISpeechRecognizerTimeouts>
{
    ISpeechRecognizerTimeouts(std::nullptr_t = nullptr) noexcept {}
};

struct ISpeechRecognizerUIOptions :
    Windows::Foundation::IInspectable,
    impl::consume_t<ISpeechRecognizerUIOptions>
{
    ISpeechRecognizerUIOptions(std::nullptr_t = nullptr) noexcept {}
};

struct IVoiceCommandManager :
    Windows::Foundation::IInspectable,
    impl::consume_t<IVoiceCommandManager>
{
    IVoiceCommandManager(std::nullptr_t = nullptr) noexcept {}
};

struct IVoiceCommandSet :
    Windows::Foundation::IInspectable,
    impl::consume_t<IVoiceCommandSet>
{
    IVoiceCommandSet(std::nullptr_t = nullptr) noexcept {}
};

}

}
