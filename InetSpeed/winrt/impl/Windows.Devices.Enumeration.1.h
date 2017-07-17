// C++/WinRT v1.0.170717.1
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "Windows.ApplicationModel.Background.0.h"
#include "Windows.Foundation.0.h"
#include "Windows.Storage.Streams.0.h"
#include "Windows.UI.0.h"
#include "Windows.UI.Popups.0.h"
#include "Windows.Devices.Enumeration.0.h"

namespace winrt {

namespace Windows::Devices::Enumeration {

struct IDeviceAccessChangedEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<IDeviceAccessChangedEventArgs>
{
    IDeviceAccessChangedEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct IDeviceAccessChangedEventArgs2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IDeviceAccessChangedEventArgs2>,
    impl::require<IDeviceAccessChangedEventArgs2, Windows::Devices::Enumeration::IDeviceAccessChangedEventArgs>
{
    IDeviceAccessChangedEventArgs2(std::nullptr_t = nullptr) noexcept {}
};

struct IDeviceAccessInformation :
    Windows::Foundation::IInspectable,
    impl::consume_t<IDeviceAccessInformation>
{
    IDeviceAccessInformation(std::nullptr_t = nullptr) noexcept {}
};

struct IDeviceAccessInformationStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IDeviceAccessInformationStatics>
{
    IDeviceAccessInformationStatics(std::nullptr_t = nullptr) noexcept {}
};

struct IDeviceConnectionChangeTriggerDetails :
    Windows::Foundation::IInspectable,
    impl::consume_t<IDeviceConnectionChangeTriggerDetails>
{
    IDeviceConnectionChangeTriggerDetails(std::nullptr_t = nullptr) noexcept {}
};

struct IDeviceDisconnectButtonClickedEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<IDeviceDisconnectButtonClickedEventArgs>
{
    IDeviceDisconnectButtonClickedEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct IDeviceInformation :
    Windows::Foundation::IInspectable,
    impl::consume_t<IDeviceInformation>
{
    IDeviceInformation(std::nullptr_t = nullptr) noexcept {}
};

struct IDeviceInformation2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IDeviceInformation2>
{
    IDeviceInformation2(std::nullptr_t = nullptr) noexcept {}
};

struct IDeviceInformationCustomPairing :
    Windows::Foundation::IInspectable,
    impl::consume_t<IDeviceInformationCustomPairing>
{
    IDeviceInformationCustomPairing(std::nullptr_t = nullptr) noexcept {}
};

struct IDeviceInformationPairing :
    Windows::Foundation::IInspectable,
    impl::consume_t<IDeviceInformationPairing>
{
    IDeviceInformationPairing(std::nullptr_t = nullptr) noexcept {}
};

struct IDeviceInformationPairing2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IDeviceInformationPairing2>
{
    IDeviceInformationPairing2(std::nullptr_t = nullptr) noexcept {}
};

struct IDeviceInformationPairingStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IDeviceInformationPairingStatics>
{
    IDeviceInformationPairingStatics(std::nullptr_t = nullptr) noexcept {}
};

struct IDeviceInformationStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IDeviceInformationStatics>
{
    IDeviceInformationStatics(std::nullptr_t = nullptr) noexcept {}
};

struct IDeviceInformationStatics2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IDeviceInformationStatics2>
{
    IDeviceInformationStatics2(std::nullptr_t = nullptr) noexcept {}
};

struct IDeviceInformationUpdate :
    Windows::Foundation::IInspectable,
    impl::consume_t<IDeviceInformationUpdate>
{
    IDeviceInformationUpdate(std::nullptr_t = nullptr) noexcept {}
};

struct IDeviceInformationUpdate2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IDeviceInformationUpdate2>
{
    IDeviceInformationUpdate2(std::nullptr_t = nullptr) noexcept {}
};

struct IDevicePairingRequestedEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<IDevicePairingRequestedEventArgs>
{
    IDevicePairingRequestedEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct IDevicePairingResult :
    Windows::Foundation::IInspectable,
    impl::consume_t<IDevicePairingResult>
{
    IDevicePairingResult(std::nullptr_t = nullptr) noexcept {}
};

struct IDevicePairingSettings :
    Windows::Foundation::IInspectable,
    impl::consume_t<IDevicePairingSettings>
{
    IDevicePairingSettings(std::nullptr_t = nullptr) noexcept {}
};

struct IDevicePicker :
    Windows::Foundation::IInspectable,
    impl::consume_t<IDevicePicker>
{
    IDevicePicker(std::nullptr_t = nullptr) noexcept {}
};

struct IDevicePickerAppearance :
    Windows::Foundation::IInspectable,
    impl::consume_t<IDevicePickerAppearance>
{
    IDevicePickerAppearance(std::nullptr_t = nullptr) noexcept {}
};

struct IDevicePickerFilter :
    Windows::Foundation::IInspectable,
    impl::consume_t<IDevicePickerFilter>
{
    IDevicePickerFilter(std::nullptr_t = nullptr) noexcept {}
};

struct IDeviceSelectedEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<IDeviceSelectedEventArgs>
{
    IDeviceSelectedEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct IDeviceUnpairingResult :
    Windows::Foundation::IInspectable,
    impl::consume_t<IDeviceUnpairingResult>
{
    IDeviceUnpairingResult(std::nullptr_t = nullptr) noexcept {}
};

struct IDeviceWatcher :
    Windows::Foundation::IInspectable,
    impl::consume_t<IDeviceWatcher>
{
    IDeviceWatcher(std::nullptr_t = nullptr) noexcept {}
};

struct IDeviceWatcher2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IDeviceWatcher2>
{
    IDeviceWatcher2(std::nullptr_t = nullptr) noexcept {}
};

struct IDeviceWatcherEvent :
    Windows::Foundation::IInspectable,
    impl::consume_t<IDeviceWatcherEvent>
{
    IDeviceWatcherEvent(std::nullptr_t = nullptr) noexcept {}
};

struct IDeviceWatcherTriggerDetails :
    Windows::Foundation::IInspectable,
    impl::consume_t<IDeviceWatcherTriggerDetails>
{
    IDeviceWatcherTriggerDetails(std::nullptr_t = nullptr) noexcept {}
};

struct IEnclosureLocation :
    Windows::Foundation::IInspectable,
    impl::consume_t<IEnclosureLocation>
{
    IEnclosureLocation(std::nullptr_t = nullptr) noexcept {}
};

struct IEnclosureLocation2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IEnclosureLocation2>,
    impl::require<IEnclosureLocation2, Windows::Devices::Enumeration::IEnclosureLocation>
{
    IEnclosureLocation2(std::nullptr_t = nullptr) noexcept {}
};

}

}
