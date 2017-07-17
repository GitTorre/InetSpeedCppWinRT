// C++/WinRT v1.0.170717.1
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "Windows.Graphics.Imaging.0.h"
#include "Windows.Storage.Streams.0.h"
#include "Windows.Foundation.0.h"
#include "Windows.Devices.PointOfService.0.h"

namespace winrt {

namespace Windows::Devices::PointOfService {

struct IBarcodeScanner :
    Windows::Foundation::IInspectable,
    impl::consume_t<IBarcodeScanner>
{
    IBarcodeScanner(std::nullptr_t = nullptr) noexcept {}
};

struct IBarcodeScanner2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IBarcodeScanner2>
{
    IBarcodeScanner2(std::nullptr_t = nullptr) noexcept {}
};

struct IBarcodeScannerCapabilities :
    Windows::Foundation::IInspectable,
    impl::consume_t<IBarcodeScannerCapabilities>
{
    IBarcodeScannerCapabilities(std::nullptr_t = nullptr) noexcept {}
};

struct IBarcodeScannerCapabilities1 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IBarcodeScannerCapabilities1>
{
    IBarcodeScannerCapabilities1(std::nullptr_t = nullptr) noexcept {}
};

struct IBarcodeScannerDataReceivedEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<IBarcodeScannerDataReceivedEventArgs>
{
    IBarcodeScannerDataReceivedEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct IBarcodeScannerErrorOccurredEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<IBarcodeScannerErrorOccurredEventArgs>
{
    IBarcodeScannerErrorOccurredEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct IBarcodeScannerImagePreviewReceivedEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<IBarcodeScannerImagePreviewReceivedEventArgs>
{
    IBarcodeScannerImagePreviewReceivedEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct IBarcodeScannerReport :
    Windows::Foundation::IInspectable,
    impl::consume_t<IBarcodeScannerReport>
{
    IBarcodeScannerReport(std::nullptr_t = nullptr) noexcept {}
};

struct IBarcodeScannerStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IBarcodeScannerStatics>
{
    IBarcodeScannerStatics(std::nullptr_t = nullptr) noexcept {}
};

struct IBarcodeScannerStatics2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IBarcodeScannerStatics2>
{
    IBarcodeScannerStatics2(std::nullptr_t = nullptr) noexcept {}
};

struct IBarcodeScannerStatusUpdatedEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<IBarcodeScannerStatusUpdatedEventArgs>
{
    IBarcodeScannerStatusUpdatedEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct IBarcodeSymbologiesStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IBarcodeSymbologiesStatics>
{
    IBarcodeSymbologiesStatics(std::nullptr_t = nullptr) noexcept {}
};

struct IBarcodeSymbologiesStatics2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IBarcodeSymbologiesStatics2>
{
    IBarcodeSymbologiesStatics2(std::nullptr_t = nullptr) noexcept {}
};

struct IBarcodeSymbologyAttributes :
    Windows::Foundation::IInspectable,
    impl::consume_t<IBarcodeSymbologyAttributes>
{
    IBarcodeSymbologyAttributes(std::nullptr_t = nullptr) noexcept {}
};

struct ICashDrawer :
    Windows::Foundation::IInspectable,
    impl::consume_t<ICashDrawer>
{
    ICashDrawer(std::nullptr_t = nullptr) noexcept {}
};

struct ICashDrawerCapabilities :
    Windows::Foundation::IInspectable,
    impl::consume_t<ICashDrawerCapabilities>
{
    ICashDrawerCapabilities(std::nullptr_t = nullptr) noexcept {}
};

struct ICashDrawerCloseAlarm :
    Windows::Foundation::IInspectable,
    impl::consume_t<ICashDrawerCloseAlarm>
{
    ICashDrawerCloseAlarm(std::nullptr_t = nullptr) noexcept {}
};

struct ICashDrawerEventSource :
    Windows::Foundation::IInspectable,
    impl::consume_t<ICashDrawerEventSource>
{
    ICashDrawerEventSource(std::nullptr_t = nullptr) noexcept {}
};

struct ICashDrawerEventSourceEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<ICashDrawerEventSourceEventArgs>
{
    ICashDrawerEventSourceEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct ICashDrawerStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<ICashDrawerStatics>
{
    ICashDrawerStatics(std::nullptr_t = nullptr) noexcept {}
};

struct ICashDrawerStatics2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<ICashDrawerStatics2>
{
    ICashDrawerStatics2(std::nullptr_t = nullptr) noexcept {}
};

struct ICashDrawerStatus :
    Windows::Foundation::IInspectable,
    impl::consume_t<ICashDrawerStatus>
{
    ICashDrawerStatus(std::nullptr_t = nullptr) noexcept {}
};

struct ICashDrawerStatusUpdatedEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<ICashDrawerStatusUpdatedEventArgs>
{
    ICashDrawerStatusUpdatedEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct IClaimedBarcodeScanner :
    Windows::Foundation::IInspectable,
    impl::consume_t<IClaimedBarcodeScanner>,
    impl::require<IClaimedBarcodeScanner, Windows::Foundation::IClosable>
{
    IClaimedBarcodeScanner(std::nullptr_t = nullptr) noexcept {}
};

struct IClaimedBarcodeScanner1 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IClaimedBarcodeScanner1>,
    impl::require<IClaimedBarcodeScanner1, Windows::Foundation::IClosable>
{
    IClaimedBarcodeScanner1(std::nullptr_t = nullptr) noexcept {}
};

struct IClaimedBarcodeScanner2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IClaimedBarcodeScanner2>,
    impl::require<IClaimedBarcodeScanner2, Windows::Foundation::IClosable>
{
    IClaimedBarcodeScanner2(std::nullptr_t = nullptr) noexcept {}
};

struct IClaimedCashDrawer :
    Windows::Foundation::IInspectable,
    impl::consume_t<IClaimedCashDrawer>,
    impl::require<IClaimedCashDrawer, Windows::Foundation::IClosable>
{
    IClaimedCashDrawer(std::nullptr_t = nullptr) noexcept {}
};

struct IClaimedJournalPrinter :
    Windows::Foundation::IInspectable,
    impl::consume_t<IClaimedJournalPrinter>,
    impl::require<IClaimedJournalPrinter, Windows::Devices::PointOfService::ICommonClaimedPosPrinterStation>
{
    IClaimedJournalPrinter(std::nullptr_t = nullptr) noexcept {}
};

struct IClaimedLineDisplay :
    Windows::Foundation::IInspectable,
    impl::consume_t<IClaimedLineDisplay>,
    impl::require<IClaimedLineDisplay, Windows::Foundation::IClosable>
{
    IClaimedLineDisplay(std::nullptr_t = nullptr) noexcept {}
};

struct IClaimedLineDisplayStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IClaimedLineDisplayStatics>
{
    IClaimedLineDisplayStatics(std::nullptr_t = nullptr) noexcept {}
};

struct IClaimedMagneticStripeReader :
    Windows::Foundation::IInspectable,
    impl::consume_t<IClaimedMagneticStripeReader>,
    impl::require<IClaimedMagneticStripeReader, Windows::Foundation::IClosable>
{
    IClaimedMagneticStripeReader(std::nullptr_t = nullptr) noexcept {}
};

struct IClaimedPosPrinter :
    Windows::Foundation::IInspectable,
    impl::consume_t<IClaimedPosPrinter>,
    impl::require<IClaimedPosPrinter, Windows::Foundation::IClosable>
{
    IClaimedPosPrinter(std::nullptr_t = nullptr) noexcept {}
};

struct IClaimedReceiptPrinter :
    Windows::Foundation::IInspectable,
    impl::consume_t<IClaimedReceiptPrinter>,
    impl::require<IClaimedReceiptPrinter, Windows::Devices::PointOfService::ICommonClaimedPosPrinterStation>
{
    IClaimedReceiptPrinter(std::nullptr_t = nullptr) noexcept {}
};

struct IClaimedSlipPrinter :
    Windows::Foundation::IInspectable,
    impl::consume_t<IClaimedSlipPrinter>,
    impl::require<IClaimedSlipPrinter, Windows::Devices::PointOfService::ICommonClaimedPosPrinterStation>
{
    IClaimedSlipPrinter(std::nullptr_t = nullptr) noexcept {}
};

struct ICommonClaimedPosPrinterStation :
    Windows::Foundation::IInspectable,
    impl::consume_t<ICommonClaimedPosPrinterStation>
{
    ICommonClaimedPosPrinterStation(std::nullptr_t = nullptr) noexcept {}
};

struct ICommonPosPrintStationCapabilities :
    Windows::Foundation::IInspectable,
    impl::consume_t<ICommonPosPrintStationCapabilities>
{
    ICommonPosPrintStationCapabilities(std::nullptr_t = nullptr) noexcept {}
};

struct ICommonReceiptSlipCapabilities :
    Windows::Foundation::IInspectable,
    impl::consume_t<ICommonReceiptSlipCapabilities>,
    impl::require<ICommonReceiptSlipCapabilities, Windows::Devices::PointOfService::ICommonPosPrintStationCapabilities>
{
    ICommonReceiptSlipCapabilities(std::nullptr_t = nullptr) noexcept {}
};

struct IJournalPrinterCapabilities :
    Windows::Foundation::IInspectable,
    impl::consume_t<IJournalPrinterCapabilities>,
    impl::require<IJournalPrinterCapabilities, Windows::Devices::PointOfService::ICommonPosPrintStationCapabilities>
{
    IJournalPrinterCapabilities(std::nullptr_t = nullptr) noexcept {}
};

struct ILineDisplay :
    Windows::Foundation::IInspectable,
    impl::consume_t<ILineDisplay>,
    impl::require<ILineDisplay, Windows::Foundation::IClosable>
{
    ILineDisplay(std::nullptr_t = nullptr) noexcept {}
};

struct ILineDisplayCapabilities :
    Windows::Foundation::IInspectable,
    impl::consume_t<ILineDisplayCapabilities>
{
    ILineDisplayCapabilities(std::nullptr_t = nullptr) noexcept {}
};

struct ILineDisplayStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<ILineDisplayStatics>
{
    ILineDisplayStatics(std::nullptr_t = nullptr) noexcept {}
};

struct ILineDisplayWindow :
    Windows::Foundation::IInspectable,
    impl::consume_t<ILineDisplayWindow>,
    impl::require<ILineDisplayWindow, Windows::Foundation::IClosable>
{
    ILineDisplayWindow(std::nullptr_t = nullptr) noexcept {}
};

struct IMagneticStripeReader :
    Windows::Foundation::IInspectable,
    impl::consume_t<IMagneticStripeReader>
{
    IMagneticStripeReader(std::nullptr_t = nullptr) noexcept {}
};

struct IMagneticStripeReaderAamvaCardDataReceivedEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<IMagneticStripeReaderAamvaCardDataReceivedEventArgs>
{
    IMagneticStripeReaderAamvaCardDataReceivedEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct IMagneticStripeReaderBankCardDataReceivedEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<IMagneticStripeReaderBankCardDataReceivedEventArgs>
{
    IMagneticStripeReaderBankCardDataReceivedEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct IMagneticStripeReaderCapabilities :
    Windows::Foundation::IInspectable,
    impl::consume_t<IMagneticStripeReaderCapabilities>
{
    IMagneticStripeReaderCapabilities(std::nullptr_t = nullptr) noexcept {}
};

struct IMagneticStripeReaderCardTypesStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IMagneticStripeReaderCardTypesStatics>
{
    IMagneticStripeReaderCardTypesStatics(std::nullptr_t = nullptr) noexcept {}
};

struct IMagneticStripeReaderEncryptionAlgorithmsStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IMagneticStripeReaderEncryptionAlgorithmsStatics>
{
    IMagneticStripeReaderEncryptionAlgorithmsStatics(std::nullptr_t = nullptr) noexcept {}
};

struct IMagneticStripeReaderErrorOccurredEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<IMagneticStripeReaderErrorOccurredEventArgs>
{
    IMagneticStripeReaderErrorOccurredEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct IMagneticStripeReaderReport :
    Windows::Foundation::IInspectable,
    impl::consume_t<IMagneticStripeReaderReport>
{
    IMagneticStripeReaderReport(std::nullptr_t = nullptr) noexcept {}
};

struct IMagneticStripeReaderStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IMagneticStripeReaderStatics>
{
    IMagneticStripeReaderStatics(std::nullptr_t = nullptr) noexcept {}
};

struct IMagneticStripeReaderStatics2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IMagneticStripeReaderStatics2>
{
    IMagneticStripeReaderStatics2(std::nullptr_t = nullptr) noexcept {}
};

struct IMagneticStripeReaderStatusUpdatedEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<IMagneticStripeReaderStatusUpdatedEventArgs>
{
    IMagneticStripeReaderStatusUpdatedEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct IMagneticStripeReaderTrackData :
    Windows::Foundation::IInspectable,
    impl::consume_t<IMagneticStripeReaderTrackData>
{
    IMagneticStripeReaderTrackData(std::nullptr_t = nullptr) noexcept {}
};

struct IMagneticStripeReaderVendorSpecificCardDataReceivedEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<IMagneticStripeReaderVendorSpecificCardDataReceivedEventArgs>
{
    IMagneticStripeReaderVendorSpecificCardDataReceivedEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct IPosPrinter :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPosPrinter>
{
    IPosPrinter(std::nullptr_t = nullptr) noexcept {}
};

struct IPosPrinterCapabilities :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPosPrinterCapabilities>
{
    IPosPrinterCapabilities(std::nullptr_t = nullptr) noexcept {}
};

struct IPosPrinterCharacterSetIdsStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPosPrinterCharacterSetIdsStatics>
{
    IPosPrinterCharacterSetIdsStatics(std::nullptr_t = nullptr) noexcept {}
};

struct IPosPrinterJob :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPosPrinterJob>
{
    IPosPrinterJob(std::nullptr_t = nullptr) noexcept {}
};

struct IPosPrinterReleaseDeviceRequestedEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPosPrinterReleaseDeviceRequestedEventArgs>
{
    IPosPrinterReleaseDeviceRequestedEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct IPosPrinterStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPosPrinterStatics>
{
    IPosPrinterStatics(std::nullptr_t = nullptr) noexcept {}
};

struct IPosPrinterStatics2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPosPrinterStatics2>
{
    IPosPrinterStatics2(std::nullptr_t = nullptr) noexcept {}
};

struct IPosPrinterStatus :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPosPrinterStatus>
{
    IPosPrinterStatus(std::nullptr_t = nullptr) noexcept {}
};

struct IPosPrinterStatusUpdatedEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPosPrinterStatusUpdatedEventArgs>
{
    IPosPrinterStatusUpdatedEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct IReceiptOrSlipJob :
    Windows::Foundation::IInspectable,
    impl::consume_t<IReceiptOrSlipJob>,
    impl::require<IReceiptOrSlipJob, Windows::Devices::PointOfService::IPosPrinterJob>
{
    IReceiptOrSlipJob(std::nullptr_t = nullptr) noexcept {}
};

struct IReceiptPrintJob :
    Windows::Foundation::IInspectable,
    impl::consume_t<IReceiptPrintJob>,
    impl::require<IReceiptPrintJob, Windows::Devices::PointOfService::IPosPrinterJob, Windows::Devices::PointOfService::IReceiptOrSlipJob>
{
    IReceiptPrintJob(std::nullptr_t = nullptr) noexcept {}
};

struct IReceiptPrinterCapabilities :
    Windows::Foundation::IInspectable,
    impl::consume_t<IReceiptPrinterCapabilities>,
    impl::require<IReceiptPrinterCapabilities, Windows::Devices::PointOfService::ICommonPosPrintStationCapabilities, Windows::Devices::PointOfService::ICommonReceiptSlipCapabilities>
{
    IReceiptPrinterCapabilities(std::nullptr_t = nullptr) noexcept {}
};

struct ISlipPrinterCapabilities :
    Windows::Foundation::IInspectable,
    impl::consume_t<ISlipPrinterCapabilities>,
    impl::require<ISlipPrinterCapabilities, Windows::Devices::PointOfService::ICommonPosPrintStationCapabilities, Windows::Devices::PointOfService::ICommonReceiptSlipCapabilities>
{
    ISlipPrinterCapabilities(std::nullptr_t = nullptr) noexcept {}
};

struct IUnifiedPosErrorData :
    Windows::Foundation::IInspectable,
    impl::consume_t<IUnifiedPosErrorData>
{
    IUnifiedPosErrorData(std::nullptr_t = nullptr) noexcept {}
};

}

}
