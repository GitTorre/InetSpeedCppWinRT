// C++ for the Windows Runtime v1.29
// Copyright (c) 2016 Microsoft Corporation

#pragma once


WINRT_EXPORT namespace winrt {

namespace ABI::Windows::Devices::SmartCards {

struct ICardAddedEventArgs;
struct ICardRemovedEventArgs;
struct ISmartCard;
struct ISmartCardChallengeContext;
struct ISmartCardConnect;
struct ISmartCardConnection;
struct ISmartCardPinPolicy;
struct ISmartCardPinResetDeferral;
struct ISmartCardPinResetRequest;
struct ISmartCardProvisioning;
struct ISmartCardProvisioning2;
struct ISmartCardProvisioningStatics;
struct ISmartCardProvisioningStatics2;
struct ISmartCardReader;
struct ISmartCardReaderStatics;
struct SmartCardPinResetHandler;
struct CardAddedEventArgs;
struct CardRemovedEventArgs;
struct SmartCard;
struct SmartCardChallengeContext;
struct SmartCardConnection;
struct SmartCardPinPolicy;
struct SmartCardPinResetDeferral;
struct SmartCardPinResetRequest;
struct SmartCardProvisioning;
struct SmartCardReader;

}

namespace Windows::Devices::SmartCards {

struct SmartCardPinResetHandler;
struct ICardAddedEventArgs;
struct ICardRemovedEventArgs;
struct ISmartCard;
struct ISmartCardChallengeContext;
struct ISmartCardConnect;
struct ISmartCardConnection;
struct ISmartCardPinPolicy;
struct ISmartCardPinResetDeferral;
struct ISmartCardPinResetRequest;
struct ISmartCardProvisioning;
struct ISmartCardProvisioning2;
struct ISmartCardProvisioningStatics;
struct ISmartCardProvisioningStatics2;
struct ISmartCardReader;
struct ISmartCardReaderStatics;
struct CardAddedEventArgs;
struct CardRemovedEventArgs;
struct SmartCard;
struct SmartCardChallengeContext;
struct SmartCardConnection;
struct SmartCardPinPolicy;
struct SmartCardPinResetDeferral;
struct SmartCardPinResetRequest;
struct SmartCardProvisioning;
struct SmartCardReader;

}

namespace Windows::Devices::SmartCards {

enum class SmartCardPinCharacterPolicyOption
{
    Allow = 0,
    RequireAtLeastOne = 1,
    Disallow = 2,
};

enum class SmartCardReaderKind
{
    Any = 0,
    Generic = 1,
    Tpm = 2,
    Nfc = 3,
    Uicc = 4,
    EmbeddedSE = 5,
};

enum class SmartCardReaderStatus
{
    Disconnected = 0,
    Ready = 1,
    Exclusive = 2,
};

enum class SmartCardStatus
{
    Disconnected = 0,
    Ready = 1,
    Shared = 2,
    Exclusive = 3,
    Unresponsive = 4,
};

}

}
