// C++/WinRT v1.0.170717.1
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "Windows.Foundation.0.h"
#include "Windows.Security.EnterpriseData.0.h"
#include "Windows.Storage.0.h"
#include "Windows.Storage.Streams.0.h"
#include "Windows.UI.0.h"
#include "Windows.Foundation.Collections.0.h"
#include "Windows.ApplicationModel.DataTransfer.0.h"

namespace winrt {

namespace Windows::ApplicationModel::DataTransfer {

struct IClipboardStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IClipboardStatics>
{
    IClipboardStatics(std::nullptr_t = nullptr) noexcept {}
};

struct IDataPackage :
    Windows::Foundation::IInspectable,
    impl::consume_t<IDataPackage>
{
    IDataPackage(std::nullptr_t = nullptr) noexcept {}
};

struct IDataPackage2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IDataPackage2>
{
    IDataPackage2(std::nullptr_t = nullptr) noexcept {}
};

struct IDataPackage3 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IDataPackage3>
{
    IDataPackage3(std::nullptr_t = nullptr) noexcept {}
};

struct IDataPackagePropertySet :
    Windows::Foundation::IInspectable,
    impl::consume_t<IDataPackagePropertySet>,
    impl::require<IDataPackagePropertySet, Windows::Foundation::Collections::IIterable<Windows::Foundation::Collections::IKeyValuePair<hstring, Windows::Foundation::IInspectable>>, Windows::Foundation::Collections::IMap<hstring, Windows::Foundation::IInspectable>>
{
    IDataPackagePropertySet(std::nullptr_t = nullptr) noexcept {}
};

struct IDataPackagePropertySet2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IDataPackagePropertySet2>
{
    IDataPackagePropertySet2(std::nullptr_t = nullptr) noexcept {}
};

struct IDataPackagePropertySet3 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IDataPackagePropertySet3>
{
    IDataPackagePropertySet3(std::nullptr_t = nullptr) noexcept {}
};

struct IDataPackagePropertySetView :
    Windows::Foundation::IInspectable,
    impl::consume_t<IDataPackagePropertySetView>,
    impl::require<IDataPackagePropertySetView, Windows::Foundation::Collections::IIterable<Windows::Foundation::Collections::IKeyValuePair<hstring, Windows::Foundation::IInspectable>>, Windows::Foundation::Collections::IMapView<hstring, Windows::Foundation::IInspectable>>
{
    IDataPackagePropertySetView(std::nullptr_t = nullptr) noexcept {}
};

struct IDataPackagePropertySetView2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IDataPackagePropertySetView2>
{
    IDataPackagePropertySetView2(std::nullptr_t = nullptr) noexcept {}
};

struct IDataPackagePropertySetView3 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IDataPackagePropertySetView3>
{
    IDataPackagePropertySetView3(std::nullptr_t = nullptr) noexcept {}
};

struct IDataPackageView :
    Windows::Foundation::IInspectable,
    impl::consume_t<IDataPackageView>
{
    IDataPackageView(std::nullptr_t = nullptr) noexcept {}
};

struct IDataPackageView2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IDataPackageView2>
{
    IDataPackageView2(std::nullptr_t = nullptr) noexcept {}
};

struct IDataPackageView3 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IDataPackageView3>
{
    IDataPackageView3(std::nullptr_t = nullptr) noexcept {}
};

struct IDataPackageView4 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IDataPackageView4>
{
    IDataPackageView4(std::nullptr_t = nullptr) noexcept {}
};

struct IDataProviderDeferral :
    Windows::Foundation::IInspectable,
    impl::consume_t<IDataProviderDeferral>
{
    IDataProviderDeferral(std::nullptr_t = nullptr) noexcept {}
};

struct IDataProviderRequest :
    Windows::Foundation::IInspectable,
    impl::consume_t<IDataProviderRequest>
{
    IDataProviderRequest(std::nullptr_t = nullptr) noexcept {}
};

struct IDataRequest :
    Windows::Foundation::IInspectable,
    impl::consume_t<IDataRequest>
{
    IDataRequest(std::nullptr_t = nullptr) noexcept {}
};

struct IDataRequestDeferral :
    Windows::Foundation::IInspectable,
    impl::consume_t<IDataRequestDeferral>
{
    IDataRequestDeferral(std::nullptr_t = nullptr) noexcept {}
};

struct IDataRequestedEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<IDataRequestedEventArgs>
{
    IDataRequestedEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct IDataTransferManager :
    Windows::Foundation::IInspectable,
    impl::consume_t<IDataTransferManager>
{
    IDataTransferManager(std::nullptr_t = nullptr) noexcept {}
};

struct IDataTransferManager2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IDataTransferManager2>
{
    IDataTransferManager2(std::nullptr_t = nullptr) noexcept {}
};

struct IDataTransferManagerStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IDataTransferManagerStatics>
{
    IDataTransferManagerStatics(std::nullptr_t = nullptr) noexcept {}
};

struct IDataTransferManagerStatics2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IDataTransferManagerStatics2>
{
    IDataTransferManagerStatics2(std::nullptr_t = nullptr) noexcept {}
};

struct IHtmlFormatHelperStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IHtmlFormatHelperStatics>
{
    IHtmlFormatHelperStatics(std::nullptr_t = nullptr) noexcept {}
};

struct IOperationCompletedEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<IOperationCompletedEventArgs>
{
    IOperationCompletedEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct IOperationCompletedEventArgs2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IOperationCompletedEventArgs2>
{
    IOperationCompletedEventArgs2(std::nullptr_t = nullptr) noexcept {}
};

struct IShareCompletedEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<IShareCompletedEventArgs>
{
    IShareCompletedEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct IShareProvider :
    Windows::Foundation::IInspectable,
    impl::consume_t<IShareProvider>
{
    IShareProvider(std::nullptr_t = nullptr) noexcept {}
};

struct IShareProviderFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<IShareProviderFactory>
{
    IShareProviderFactory(std::nullptr_t = nullptr) noexcept {}
};

struct IShareProviderOperation :
    Windows::Foundation::IInspectable,
    impl::consume_t<IShareProviderOperation>
{
    IShareProviderOperation(std::nullptr_t = nullptr) noexcept {}
};

struct IShareProvidersRequestedEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<IShareProvidersRequestedEventArgs>
{
    IShareProvidersRequestedEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct IShareTargetInfo :
    Windows::Foundation::IInspectable,
    impl::consume_t<IShareTargetInfo>
{
    IShareTargetInfo(std::nullptr_t = nullptr) noexcept {}
};

struct ISharedStorageAccessManagerStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<ISharedStorageAccessManagerStatics>
{
    ISharedStorageAccessManagerStatics(std::nullptr_t = nullptr) noexcept {}
};

struct IStandardDataFormatsStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IStandardDataFormatsStatics>
{
    IStandardDataFormatsStatics(std::nullptr_t = nullptr) noexcept {}
};

struct IStandardDataFormatsStatics2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IStandardDataFormatsStatics2>
{
    IStandardDataFormatsStatics2(std::nullptr_t = nullptr) noexcept {}
};

struct ITargetApplicationChosenEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<ITargetApplicationChosenEventArgs>
{
    ITargetApplicationChosenEventArgs(std::nullptr_t = nullptr) noexcept {}
};

}

}
