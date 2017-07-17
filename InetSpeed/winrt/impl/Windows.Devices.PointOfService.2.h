﻿// C++/WinRT v1.0.170717.1
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "Windows.Graphics.Imaging.1.h"
#include "Windows.Storage.Streams.1.h"
#include "Windows.Foundation.1.h"
#include "Windows.Devices.PointOfService.1.h"

namespace winrt {

namespace Windows::Devices::PointOfService {

struct BarcodeScanner :
    Windows::Devices::PointOfService::IBarcodeScanner,
    impl::require<BarcodeScanner, Windows::Devices::PointOfService::IBarcodeScanner2, Windows::Foundation::IClosable>
{
    BarcodeScanner(std::nullptr_t) noexcept {}
    static Windows::Foundation::IAsyncOperation<Windows::Devices::PointOfService::BarcodeScanner> GetDefaultAsync();
    static Windows::Foundation::IAsyncOperation<Windows::Devices::PointOfService::BarcodeScanner> FromIdAsync(param::hstring const& deviceId);
    static hstring GetDeviceSelector();
    static hstring GetDeviceSelector(Windows::Devices::PointOfService::PosConnectionTypes const& connectionTypes);
};

struct BarcodeScannerCapabilities :
    Windows::Devices::PointOfService::IBarcodeScannerCapabilities,
    impl::require<BarcodeScannerCapabilities, Windows::Devices::PointOfService::IBarcodeScannerCapabilities1>
{
    BarcodeScannerCapabilities(std::nullptr_t) noexcept {}
};

struct BarcodeScannerDataReceivedEventArgs :
    Windows::Devices::PointOfService::IBarcodeScannerDataReceivedEventArgs
{
    BarcodeScannerDataReceivedEventArgs(std::nullptr_t) noexcept {}
};

struct BarcodeScannerErrorOccurredEventArgs :
    Windows::Devices::PointOfService::IBarcodeScannerErrorOccurredEventArgs
{
    BarcodeScannerErrorOccurredEventArgs(std::nullptr_t) noexcept {}
};

struct BarcodeScannerImagePreviewReceivedEventArgs :
    Windows::Devices::PointOfService::IBarcodeScannerImagePreviewReceivedEventArgs
{
    BarcodeScannerImagePreviewReceivedEventArgs(std::nullptr_t) noexcept {}
};

struct BarcodeScannerReport :
    Windows::Devices::PointOfService::IBarcodeScannerReport
{
    BarcodeScannerReport(std::nullptr_t) noexcept {}
};

struct BarcodeScannerStatusUpdatedEventArgs :
    Windows::Devices::PointOfService::IBarcodeScannerStatusUpdatedEventArgs
{
    BarcodeScannerStatusUpdatedEventArgs(std::nullptr_t) noexcept {}
};

struct BarcodeSymbologies
{
    BarcodeSymbologies() = delete;
    static uint32_t Unknown();
    static uint32_t Ean8();
    static uint32_t Ean8Add2();
    static uint32_t Ean8Add5();
    static uint32_t Eanv();
    static uint32_t EanvAdd2();
    static uint32_t EanvAdd5();
    static uint32_t Ean13();
    static uint32_t Ean13Add2();
    static uint32_t Ean13Add5();
    static uint32_t Isbn();
    static uint32_t IsbnAdd5();
    static uint32_t Ismn();
    static uint32_t IsmnAdd2();
    static uint32_t IsmnAdd5();
    static uint32_t Issn();
    static uint32_t IssnAdd2();
    static uint32_t IssnAdd5();
    static uint32_t Ean99();
    static uint32_t Ean99Add2();
    static uint32_t Ean99Add5();
    static uint32_t Upca();
    static uint32_t UpcaAdd2();
    static uint32_t UpcaAdd5();
    static uint32_t Upce();
    static uint32_t UpceAdd2();
    static uint32_t UpceAdd5();
    static uint32_t UpcCoupon();
    static uint32_t TfStd();
    static uint32_t TfDis();
    static uint32_t TfInt();
    static uint32_t TfInd();
    static uint32_t TfMat();
    static uint32_t TfIata();
    static uint32_t Gs1DatabarType1();
    static uint32_t Gs1DatabarType2();
    static uint32_t Gs1DatabarType3();
    static uint32_t Code39();
    static uint32_t Code39Ex();
    static uint32_t Trioptic39();
    static uint32_t Code32();
    static uint32_t Pzn();
    static uint32_t Code93();
    static uint32_t Code93Ex();
    static uint32_t Code128();
    static uint32_t Gs1128();
    static uint32_t Gs1128Coupon();
    static uint32_t UccEan128();
    static uint32_t Sisac();
    static uint32_t Isbt();
    static uint32_t Codabar();
    static uint32_t Code11();
    static uint32_t Msi();
    static uint32_t Plessey();
    static uint32_t Telepen();
    static uint32_t Code16k();
    static uint32_t CodablockA();
    static uint32_t CodablockF();
    static uint32_t Codablock128();
    static uint32_t Code49();
    static uint32_t Aztec();
    static uint32_t DataCode();
    static uint32_t DataMatrix();
    static uint32_t HanXin();
    static uint32_t Maxicode();
    static uint32_t MicroPdf417();
    static uint32_t MicroQr();
    static uint32_t Pdf417();
    static uint32_t Qr();
    static uint32_t MsTag();
    static uint32_t Ccab();
    static uint32_t Ccc();
    static uint32_t Tlc39();
    static uint32_t AusPost();
    static uint32_t CanPost();
    static uint32_t ChinaPost();
    static uint32_t DutchKix();
    static uint32_t InfoMail();
    static uint32_t ItalianPost25();
    static uint32_t ItalianPost39();
    static uint32_t JapanPost();
    static uint32_t KoreanPost();
    static uint32_t SwedenPost();
    static uint32_t UkPost();
    static uint32_t UsIntelligent();
    static uint32_t UsIntelligentPkg();
    static uint32_t UsPlanet();
    static uint32_t UsPostNet();
    static uint32_t Us4StateFics();
    static uint32_t OcrA();
    static uint32_t OcrB();
    static uint32_t Micr();
    static uint32_t ExtendedBase();
    static hstring GetName(uint32_t scanDataType);
    static uint32_t Gs1DWCode();
};

struct BarcodeSymbologyAttributes :
    Windows::Devices::PointOfService::IBarcodeSymbologyAttributes
{
    BarcodeSymbologyAttributes(std::nullptr_t) noexcept {}
};

struct CashDrawer :
    Windows::Devices::PointOfService::ICashDrawer,
    impl::require<CashDrawer, Windows::Foundation::IClosable>
{
    CashDrawer(std::nullptr_t) noexcept {}
    static Windows::Foundation::IAsyncOperation<Windows::Devices::PointOfService::CashDrawer> GetDefaultAsync();
    static Windows::Foundation::IAsyncOperation<Windows::Devices::PointOfService::CashDrawer> FromIdAsync(param::hstring const& deviceId);
    static hstring GetDeviceSelector();
    static hstring GetDeviceSelector(Windows::Devices::PointOfService::PosConnectionTypes const& connectionTypes);
};

struct CashDrawerCapabilities :
    Windows::Devices::PointOfService::ICashDrawerCapabilities
{
    CashDrawerCapabilities(std::nullptr_t) noexcept {}
};

struct CashDrawerCloseAlarm :
    Windows::Devices::PointOfService::ICashDrawerCloseAlarm
{
    CashDrawerCloseAlarm(std::nullptr_t) noexcept {}
};

struct CashDrawerClosedEventArgs :
    Windows::Devices::PointOfService::ICashDrawerEventSourceEventArgs
{
    CashDrawerClosedEventArgs(std::nullptr_t) noexcept {}
};

struct CashDrawerEventSource :
    Windows::Devices::PointOfService::ICashDrawerEventSource
{
    CashDrawerEventSource(std::nullptr_t) noexcept {}
};

struct CashDrawerOpenedEventArgs :
    Windows::Devices::PointOfService::ICashDrawerEventSourceEventArgs
{
    CashDrawerOpenedEventArgs(std::nullptr_t) noexcept {}
};

struct CashDrawerStatus :
    Windows::Devices::PointOfService::ICashDrawerStatus
{
    CashDrawerStatus(std::nullptr_t) noexcept {}
};

struct CashDrawerStatusUpdatedEventArgs :
    Windows::Devices::PointOfService::ICashDrawerStatusUpdatedEventArgs
{
    CashDrawerStatusUpdatedEventArgs(std::nullptr_t) noexcept {}
};

struct ClaimedBarcodeScanner :
    Windows::Devices::PointOfService::IClaimedBarcodeScanner,
    impl::require<ClaimedBarcodeScanner, Windows::Devices::PointOfService::IClaimedBarcodeScanner1, Windows::Devices::PointOfService::IClaimedBarcodeScanner2>
{
    ClaimedBarcodeScanner(std::nullptr_t) noexcept {}
};

struct ClaimedCashDrawer :
    Windows::Devices::PointOfService::IClaimedCashDrawer
{
    ClaimedCashDrawer(std::nullptr_t) noexcept {}
};

struct ClaimedJournalPrinter :
    Windows::Devices::PointOfService::IClaimedJournalPrinter
{
    ClaimedJournalPrinter(std::nullptr_t) noexcept {}
};

struct ClaimedLineDisplay :
    Windows::Devices::PointOfService::IClaimedLineDisplay
{
    ClaimedLineDisplay(std::nullptr_t) noexcept {}
    static Windows::Foundation::IAsyncOperation<Windows::Devices::PointOfService::ClaimedLineDisplay> FromIdAsync(param::hstring const& deviceId);
    static hstring GetDeviceSelector();
    static hstring GetDeviceSelector(Windows::Devices::PointOfService::PosConnectionTypes const& connectionTypes);
};

struct ClaimedMagneticStripeReader :
    Windows::Devices::PointOfService::IClaimedMagneticStripeReader
{
    ClaimedMagneticStripeReader(std::nullptr_t) noexcept {}
};

struct ClaimedPosPrinter :
    Windows::Devices::PointOfService::IClaimedPosPrinter
{
    ClaimedPosPrinter(std::nullptr_t) noexcept {}
};

struct ClaimedReceiptPrinter :
    Windows::Devices::PointOfService::IClaimedReceiptPrinter
{
    ClaimedReceiptPrinter(std::nullptr_t) noexcept {}
};

struct ClaimedSlipPrinter :
    Windows::Devices::PointOfService::IClaimedSlipPrinter
{
    ClaimedSlipPrinter(std::nullptr_t) noexcept {}
};

struct JournalPrintJob :
    Windows::Devices::PointOfService::IPosPrinterJob
{
    JournalPrintJob(std::nullptr_t) noexcept {}
};

struct JournalPrinterCapabilities :
    Windows::Devices::PointOfService::IJournalPrinterCapabilities
{
    JournalPrinterCapabilities(std::nullptr_t) noexcept {}
};

struct LineDisplay :
    Windows::Devices::PointOfService::ILineDisplay
{
    LineDisplay(std::nullptr_t) noexcept {}
    static Windows::Foundation::IAsyncOperation<Windows::Devices::PointOfService::LineDisplay> FromIdAsync(param::hstring const& deviceId);
    static Windows::Foundation::IAsyncOperation<Windows::Devices::PointOfService::LineDisplay> GetDefaultAsync();
    static hstring GetDeviceSelector();
    static hstring GetDeviceSelector(Windows::Devices::PointOfService::PosConnectionTypes const& connectionTypes);
};

struct LineDisplayCapabilities :
    Windows::Devices::PointOfService::ILineDisplayCapabilities
{
    LineDisplayCapabilities(std::nullptr_t) noexcept {}
};

struct LineDisplayWindow :
    Windows::Devices::PointOfService::ILineDisplayWindow
{
    LineDisplayWindow(std::nullptr_t) noexcept {}
};

struct MagneticStripeReader :
    Windows::Devices::PointOfService::IMagneticStripeReader,
    impl::require<MagneticStripeReader, Windows::Foundation::IClosable>
{
    MagneticStripeReader(std::nullptr_t) noexcept {}
    static Windows::Foundation::IAsyncOperation<Windows::Devices::PointOfService::MagneticStripeReader> GetDefaultAsync();
    static Windows::Foundation::IAsyncOperation<Windows::Devices::PointOfService::MagneticStripeReader> FromIdAsync(param::hstring const& deviceId);
    static hstring GetDeviceSelector();
    static hstring GetDeviceSelector(Windows::Devices::PointOfService::PosConnectionTypes const& connectionTypes);
};

struct MagneticStripeReaderAamvaCardDataReceivedEventArgs :
    Windows::Devices::PointOfService::IMagneticStripeReaderAamvaCardDataReceivedEventArgs
{
    MagneticStripeReaderAamvaCardDataReceivedEventArgs(std::nullptr_t) noexcept {}
};

struct MagneticStripeReaderBankCardDataReceivedEventArgs :
    Windows::Devices::PointOfService::IMagneticStripeReaderBankCardDataReceivedEventArgs
{
    MagneticStripeReaderBankCardDataReceivedEventArgs(std::nullptr_t) noexcept {}
};

struct MagneticStripeReaderCapabilities :
    Windows::Devices::PointOfService::IMagneticStripeReaderCapabilities
{
    MagneticStripeReaderCapabilities(std::nullptr_t) noexcept {}
};

struct MagneticStripeReaderCardTypes
{
    MagneticStripeReaderCardTypes() = delete;
    static uint32_t Unknown();
    static uint32_t Bank();
    static uint32_t Aamva();
    static uint32_t ExtendedBase();
};

struct MagneticStripeReaderEncryptionAlgorithms
{
    MagneticStripeReaderEncryptionAlgorithms() = delete;
    static uint32_t None();
    static uint32_t TripleDesDukpt();
    static uint32_t ExtendedBase();
};

struct MagneticStripeReaderErrorOccurredEventArgs :
    Windows::Devices::PointOfService::IMagneticStripeReaderErrorOccurredEventArgs
{
    MagneticStripeReaderErrorOccurredEventArgs(std::nullptr_t) noexcept {}
};

struct MagneticStripeReaderReport :
    Windows::Devices::PointOfService::IMagneticStripeReaderReport
{
    MagneticStripeReaderReport(std::nullptr_t) noexcept {}
};

struct MagneticStripeReaderStatusUpdatedEventArgs :
    Windows::Devices::PointOfService::IMagneticStripeReaderStatusUpdatedEventArgs
{
    MagneticStripeReaderStatusUpdatedEventArgs(std::nullptr_t) noexcept {}
};

struct MagneticStripeReaderTrackData :
    Windows::Devices::PointOfService::IMagneticStripeReaderTrackData
{
    MagneticStripeReaderTrackData(std::nullptr_t) noexcept {}
};

struct MagneticStripeReaderVendorSpecificCardDataReceivedEventArgs :
    Windows::Devices::PointOfService::IMagneticStripeReaderVendorSpecificCardDataReceivedEventArgs
{
    MagneticStripeReaderVendorSpecificCardDataReceivedEventArgs(std::nullptr_t) noexcept {}
};

struct PosPrinter :
    Windows::Devices::PointOfService::IPosPrinter,
    impl::require<PosPrinter, Windows::Foundation::IClosable>
{
    PosPrinter(std::nullptr_t) noexcept {}
    static Windows::Foundation::IAsyncOperation<Windows::Devices::PointOfService::PosPrinter> GetDefaultAsync();
    static Windows::Foundation::IAsyncOperation<Windows::Devices::PointOfService::PosPrinter> FromIdAsync(param::hstring const& deviceId);
    static hstring GetDeviceSelector();
    static hstring GetDeviceSelector(Windows::Devices::PointOfService::PosConnectionTypes const& connectionTypes);
};

struct PosPrinterCapabilities :
    Windows::Devices::PointOfService::IPosPrinterCapabilities
{
    PosPrinterCapabilities(std::nullptr_t) noexcept {}
};

struct PosPrinterCharacterSetIds
{
    PosPrinterCharacterSetIds() = delete;
    static uint32_t Utf16LE();
    static uint32_t Ascii();
    static uint32_t Ansi();
};

struct PosPrinterReleaseDeviceRequestedEventArgs :
    Windows::Devices::PointOfService::IPosPrinterReleaseDeviceRequestedEventArgs
{
    PosPrinterReleaseDeviceRequestedEventArgs(std::nullptr_t) noexcept {}
};

struct PosPrinterStatus :
    Windows::Devices::PointOfService::IPosPrinterStatus
{
    PosPrinterStatus(std::nullptr_t) noexcept {}
};

struct PosPrinterStatusUpdatedEventArgs :
    Windows::Devices::PointOfService::IPosPrinterStatusUpdatedEventArgs
{
    PosPrinterStatusUpdatedEventArgs(std::nullptr_t) noexcept {}
};

struct ReceiptPrintJob :
    Windows::Devices::PointOfService::IReceiptPrintJob
{
    ReceiptPrintJob(std::nullptr_t) noexcept {}
};

struct ReceiptPrinterCapabilities :
    Windows::Devices::PointOfService::IReceiptPrinterCapabilities
{
    ReceiptPrinterCapabilities(std::nullptr_t) noexcept {}
};

struct SlipPrintJob :
    Windows::Devices::PointOfService::IReceiptOrSlipJob
{
    SlipPrintJob(std::nullptr_t) noexcept {}
};

struct SlipPrinterCapabilities :
    Windows::Devices::PointOfService::ISlipPrinterCapabilities
{
    SlipPrinterCapabilities(std::nullptr_t) noexcept {}
};

struct UnifiedPosErrorData :
    Windows::Devices::PointOfService::IUnifiedPosErrorData
{
    UnifiedPosErrorData(std::nullptr_t) noexcept {}
};

}

namespace impl {

}

}
