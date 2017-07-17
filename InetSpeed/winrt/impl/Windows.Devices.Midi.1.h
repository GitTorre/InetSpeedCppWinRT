// C++/WinRT v1.0.170717.1
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "Windows.Devices.Enumeration.0.h"
#include "Windows.Storage.Streams.0.h"
#include "Windows.Foundation.0.h"
#include "Windows.Devices.Midi.0.h"

namespace winrt {

namespace Windows::Devices::Midi {

struct IMidiChannelPressureMessage :
    Windows::Foundation::IInspectable,
    impl::consume_t<IMidiChannelPressureMessage>,
    impl::require<IMidiChannelPressureMessage, Windows::Devices::Midi::IMidiMessage>
{
    IMidiChannelPressureMessage(std::nullptr_t = nullptr) noexcept {}
};

struct IMidiChannelPressureMessageFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<IMidiChannelPressureMessageFactory>
{
    IMidiChannelPressureMessageFactory(std::nullptr_t = nullptr) noexcept {}
};

struct IMidiControlChangeMessage :
    Windows::Foundation::IInspectable,
    impl::consume_t<IMidiControlChangeMessage>,
    impl::require<IMidiControlChangeMessage, Windows::Devices::Midi::IMidiMessage>
{
    IMidiControlChangeMessage(std::nullptr_t = nullptr) noexcept {}
};

struct IMidiControlChangeMessageFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<IMidiControlChangeMessageFactory>
{
    IMidiControlChangeMessageFactory(std::nullptr_t = nullptr) noexcept {}
};

struct IMidiInPort :
    Windows::Foundation::IInspectable,
    impl::consume_t<IMidiInPort>,
    impl::require<IMidiInPort, Windows::Foundation::IClosable>
{
    IMidiInPort(std::nullptr_t = nullptr) noexcept {}
};

struct IMidiInPortStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IMidiInPortStatics>
{
    IMidiInPortStatics(std::nullptr_t = nullptr) noexcept {}
};

struct IMidiMessage :
    Windows::Foundation::IInspectable,
    impl::consume_t<IMidiMessage>
{
    IMidiMessage(std::nullptr_t = nullptr) noexcept {}
};

struct IMidiMessageReceivedEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<IMidiMessageReceivedEventArgs>
{
    IMidiMessageReceivedEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct IMidiNoteOffMessage :
    Windows::Foundation::IInspectable,
    impl::consume_t<IMidiNoteOffMessage>,
    impl::require<IMidiNoteOffMessage, Windows::Devices::Midi::IMidiMessage>
{
    IMidiNoteOffMessage(std::nullptr_t = nullptr) noexcept {}
};

struct IMidiNoteOffMessageFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<IMidiNoteOffMessageFactory>
{
    IMidiNoteOffMessageFactory(std::nullptr_t = nullptr) noexcept {}
};

struct IMidiNoteOnMessage :
    Windows::Foundation::IInspectable,
    impl::consume_t<IMidiNoteOnMessage>,
    impl::require<IMidiNoteOnMessage, Windows::Devices::Midi::IMidiMessage>
{
    IMidiNoteOnMessage(std::nullptr_t = nullptr) noexcept {}
};

struct IMidiNoteOnMessageFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<IMidiNoteOnMessageFactory>
{
    IMidiNoteOnMessageFactory(std::nullptr_t = nullptr) noexcept {}
};

struct IMidiOutPort :
    Windows::Foundation::IInspectable,
    impl::consume_t<IMidiOutPort>,
    impl::require<IMidiOutPort, Windows::Foundation::IClosable>
{
    IMidiOutPort(std::nullptr_t = nullptr) noexcept {}
};

struct IMidiOutPortStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IMidiOutPortStatics>
{
    IMidiOutPortStatics(std::nullptr_t = nullptr) noexcept {}
};

struct IMidiPitchBendChangeMessage :
    Windows::Foundation::IInspectable,
    impl::consume_t<IMidiPitchBendChangeMessage>,
    impl::require<IMidiPitchBendChangeMessage, Windows::Devices::Midi::IMidiMessage>
{
    IMidiPitchBendChangeMessage(std::nullptr_t = nullptr) noexcept {}
};

struct IMidiPitchBendChangeMessageFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<IMidiPitchBendChangeMessageFactory>
{
    IMidiPitchBendChangeMessageFactory(std::nullptr_t = nullptr) noexcept {}
};

struct IMidiPolyphonicKeyPressureMessage :
    Windows::Foundation::IInspectable,
    impl::consume_t<IMidiPolyphonicKeyPressureMessage>,
    impl::require<IMidiPolyphonicKeyPressureMessage, Windows::Devices::Midi::IMidiMessage>
{
    IMidiPolyphonicKeyPressureMessage(std::nullptr_t = nullptr) noexcept {}
};

struct IMidiPolyphonicKeyPressureMessageFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<IMidiPolyphonicKeyPressureMessageFactory>
{
    IMidiPolyphonicKeyPressureMessageFactory(std::nullptr_t = nullptr) noexcept {}
};

struct IMidiProgramChangeMessage :
    Windows::Foundation::IInspectable,
    impl::consume_t<IMidiProgramChangeMessage>,
    impl::require<IMidiProgramChangeMessage, Windows::Devices::Midi::IMidiMessage>
{
    IMidiProgramChangeMessage(std::nullptr_t = nullptr) noexcept {}
};

struct IMidiProgramChangeMessageFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<IMidiProgramChangeMessageFactory>
{
    IMidiProgramChangeMessageFactory(std::nullptr_t = nullptr) noexcept {}
};

struct IMidiSongPositionPointerMessage :
    Windows::Foundation::IInspectable,
    impl::consume_t<IMidiSongPositionPointerMessage>,
    impl::require<IMidiSongPositionPointerMessage, Windows::Devices::Midi::IMidiMessage>
{
    IMidiSongPositionPointerMessage(std::nullptr_t = nullptr) noexcept {}
};

struct IMidiSongPositionPointerMessageFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<IMidiSongPositionPointerMessageFactory>
{
    IMidiSongPositionPointerMessageFactory(std::nullptr_t = nullptr) noexcept {}
};

struct IMidiSongSelectMessage :
    Windows::Foundation::IInspectable,
    impl::consume_t<IMidiSongSelectMessage>,
    impl::require<IMidiSongSelectMessage, Windows::Devices::Midi::IMidiMessage>
{
    IMidiSongSelectMessage(std::nullptr_t = nullptr) noexcept {}
};

struct IMidiSongSelectMessageFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<IMidiSongSelectMessageFactory>
{
    IMidiSongSelectMessageFactory(std::nullptr_t = nullptr) noexcept {}
};

struct IMidiSynthesizer :
    Windows::Foundation::IInspectable,
    impl::consume_t<IMidiSynthesizer>,
    impl::require<IMidiSynthesizer, Windows::Devices::Midi::IMidiOutPort, Windows::Foundation::IClosable>
{
    IMidiSynthesizer(std::nullptr_t = nullptr) noexcept {}
};

struct IMidiSynthesizerStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IMidiSynthesizerStatics>
{
    IMidiSynthesizerStatics(std::nullptr_t = nullptr) noexcept {}
};

struct IMidiSystemExclusiveMessageFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<IMidiSystemExclusiveMessageFactory>
{
    IMidiSystemExclusiveMessageFactory(std::nullptr_t = nullptr) noexcept {}
};

struct IMidiTimeCodeMessage :
    Windows::Foundation::IInspectable,
    impl::consume_t<IMidiTimeCodeMessage>,
    impl::require<IMidiTimeCodeMessage, Windows::Devices::Midi::IMidiMessage>
{
    IMidiTimeCodeMessage(std::nullptr_t = nullptr) noexcept {}
};

struct IMidiTimeCodeMessageFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<IMidiTimeCodeMessageFactory>
{
    IMidiTimeCodeMessageFactory(std::nullptr_t = nullptr) noexcept {}
};

}

}
