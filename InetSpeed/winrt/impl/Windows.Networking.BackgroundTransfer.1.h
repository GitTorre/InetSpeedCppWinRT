// C++/WinRT v1.0.170717.1
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "Windows.ApplicationModel.Background.0.h"
#include "Windows.Foundation.0.h"
#include "Windows.Security.Credentials.0.h"
#include "Windows.Storage.0.h"
#include "Windows.Storage.Streams.0.h"
#include "Windows.UI.Notifications.0.h"
#include "Windows.Web.0.h"
#include "Windows.Networking.BackgroundTransfer.0.h"

namespace winrt {

namespace Windows::Networking::BackgroundTransfer {

struct IBackgroundDownloader :
    Windows::Foundation::IInspectable,
    impl::consume_t<IBackgroundDownloader>,
    impl::require<IBackgroundDownloader, Windows::Networking::BackgroundTransfer::IBackgroundTransferBase>
{
    IBackgroundDownloader(std::nullptr_t = nullptr) noexcept {}
};

struct IBackgroundDownloader2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IBackgroundDownloader2>
{
    IBackgroundDownloader2(std::nullptr_t = nullptr) noexcept {}
};

struct IBackgroundDownloader3 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IBackgroundDownloader3>
{
    IBackgroundDownloader3(std::nullptr_t = nullptr) noexcept {}
};

struct IBackgroundDownloaderFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<IBackgroundDownloaderFactory>
{
    IBackgroundDownloaderFactory(std::nullptr_t = nullptr) noexcept {}
};

struct IBackgroundDownloaderStaticMethods :
    Windows::Foundation::IInspectable,
    impl::consume_t<IBackgroundDownloaderStaticMethods>
{
    IBackgroundDownloaderStaticMethods(std::nullptr_t = nullptr) noexcept {}
};

struct IBackgroundDownloaderStaticMethods2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IBackgroundDownloaderStaticMethods2>
{
    IBackgroundDownloaderStaticMethods2(std::nullptr_t = nullptr) noexcept {}
};

struct [[deprecated("IBackgroundDownloaderUserConsent is deprecated and may not work on all platforms. For more info, see MSDN.")]] IBackgroundDownloaderUserConsent :
    Windows::Foundation::IInspectable,
    impl::consume_t<IBackgroundDownloaderUserConsent>
{
    IBackgroundDownloaderUserConsent(std::nullptr_t = nullptr) noexcept {}
};

struct IBackgroundTransferBase :
    Windows::Foundation::IInspectable,
    impl::consume_t<IBackgroundTransferBase>
{
    IBackgroundTransferBase(std::nullptr_t = nullptr) noexcept {}
};

struct IBackgroundTransferCompletionGroup :
    Windows::Foundation::IInspectable,
    impl::consume_t<IBackgroundTransferCompletionGroup>
{
    IBackgroundTransferCompletionGroup(std::nullptr_t = nullptr) noexcept {}
};

struct IBackgroundTransferCompletionGroupTriggerDetails :
    Windows::Foundation::IInspectable,
    impl::consume_t<IBackgroundTransferCompletionGroupTriggerDetails>
{
    IBackgroundTransferCompletionGroupTriggerDetails(std::nullptr_t = nullptr) noexcept {}
};

struct IBackgroundTransferContentPart :
    Windows::Foundation::IInspectable,
    impl::consume_t<IBackgroundTransferContentPart>
{
    IBackgroundTransferContentPart(std::nullptr_t = nullptr) noexcept {}
};

struct IBackgroundTransferContentPartFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<IBackgroundTransferContentPartFactory>
{
    IBackgroundTransferContentPartFactory(std::nullptr_t = nullptr) noexcept {}
};

struct IBackgroundTransferErrorStaticMethods :
    Windows::Foundation::IInspectable,
    impl::consume_t<IBackgroundTransferErrorStaticMethods>
{
    IBackgroundTransferErrorStaticMethods(std::nullptr_t = nullptr) noexcept {}
};

struct IBackgroundTransferGroup :
    Windows::Foundation::IInspectable,
    impl::consume_t<IBackgroundTransferGroup>
{
    IBackgroundTransferGroup(std::nullptr_t = nullptr) noexcept {}
};

struct IBackgroundTransferGroupStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IBackgroundTransferGroupStatics>
{
    IBackgroundTransferGroupStatics(std::nullptr_t = nullptr) noexcept {}
};

struct IBackgroundTransferOperation :
    Windows::Foundation::IInspectable,
    impl::consume_t<IBackgroundTransferOperation>
{
    IBackgroundTransferOperation(std::nullptr_t = nullptr) noexcept {}
};

struct IBackgroundTransferOperationPriority :
    Windows::Foundation::IInspectable,
    impl::consume_t<IBackgroundTransferOperationPriority>
{
    IBackgroundTransferOperationPriority(std::nullptr_t = nullptr) noexcept {}
};

struct IBackgroundUploader :
    Windows::Foundation::IInspectable,
    impl::consume_t<IBackgroundUploader>,
    impl::require<IBackgroundUploader, Windows::Networking::BackgroundTransfer::IBackgroundTransferBase>
{
    IBackgroundUploader(std::nullptr_t = nullptr) noexcept {}
};

struct IBackgroundUploader2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IBackgroundUploader2>
{
    IBackgroundUploader2(std::nullptr_t = nullptr) noexcept {}
};

struct IBackgroundUploader3 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IBackgroundUploader3>
{
    IBackgroundUploader3(std::nullptr_t = nullptr) noexcept {}
};

struct IBackgroundUploaderFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<IBackgroundUploaderFactory>
{
    IBackgroundUploaderFactory(std::nullptr_t = nullptr) noexcept {}
};

struct IBackgroundUploaderStaticMethods :
    Windows::Foundation::IInspectable,
    impl::consume_t<IBackgroundUploaderStaticMethods>
{
    IBackgroundUploaderStaticMethods(std::nullptr_t = nullptr) noexcept {}
};

struct IBackgroundUploaderStaticMethods2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IBackgroundUploaderStaticMethods2>
{
    IBackgroundUploaderStaticMethods2(std::nullptr_t = nullptr) noexcept {}
};

struct [[deprecated("IBackgroundUploaderUserConsent is deprecated and may not work on all platforms. For more info, see MSDN.")]] IBackgroundUploaderUserConsent :
    Windows::Foundation::IInspectable,
    impl::consume_t<IBackgroundUploaderUserConsent>
{
    IBackgroundUploaderUserConsent(std::nullptr_t = nullptr) noexcept {}
};

struct IContentPrefetcher :
    Windows::Foundation::IInspectable,
    impl::consume_t<IContentPrefetcher>
{
    IContentPrefetcher(std::nullptr_t = nullptr) noexcept {}
};

struct IContentPrefetcherTime :
    Windows::Foundation::IInspectable,
    impl::consume_t<IContentPrefetcherTime>
{
    IContentPrefetcherTime(std::nullptr_t = nullptr) noexcept {}
};

struct IDownloadOperation :
    Windows::Foundation::IInspectable,
    impl::consume_t<IDownloadOperation>,
    impl::require<IDownloadOperation, Windows::Networking::BackgroundTransfer::IBackgroundTransferOperation>
{
    IDownloadOperation(std::nullptr_t = nullptr) noexcept {}
};

struct IDownloadOperation2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IDownloadOperation2>
{
    IDownloadOperation2(std::nullptr_t = nullptr) noexcept {}
};

struct IResponseInformation :
    Windows::Foundation::IInspectable,
    impl::consume_t<IResponseInformation>
{
    IResponseInformation(std::nullptr_t = nullptr) noexcept {}
};

struct [[deprecated("IUnconstrainedTransferRequestResult is deprecated and may not work on all platforms. For more info, see MSDN.")]] IUnconstrainedTransferRequestResult :
    Windows::Foundation::IInspectable,
    impl::consume_t<IUnconstrainedTransferRequestResult>
{
    IUnconstrainedTransferRequestResult(std::nullptr_t = nullptr) noexcept {}
};

struct IUploadOperation :
    Windows::Foundation::IInspectable,
    impl::consume_t<IUploadOperation>,
    impl::require<IUploadOperation, Windows::Networking::BackgroundTransfer::IBackgroundTransferOperation>
{
    IUploadOperation(std::nullptr_t = nullptr) noexcept {}
};

struct IUploadOperation2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IUploadOperation2>
{
    IUploadOperation2(std::nullptr_t = nullptr) noexcept {}
};

}

}
