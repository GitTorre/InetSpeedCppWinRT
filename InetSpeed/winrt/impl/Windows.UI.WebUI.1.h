// C++/WinRT v1.0.170717.1
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "Windows.ApplicationModel.0.h"
#include "Windows.ApplicationModel.Activation.0.h"
#include "Windows.ApplicationModel.Appointments.AppointmentsProvider.0.h"
#include "Windows.ApplicationModel.Background.0.h"
#include "Windows.ApplicationModel.Calls.0.h"
#include "Windows.ApplicationModel.Contacts.0.h"
#include "Windows.ApplicationModel.Contacts.Provider.0.h"
#include "Windows.ApplicationModel.DataTransfer.ShareTarget.0.h"
#include "Windows.ApplicationModel.Search.0.h"
#include "Windows.ApplicationModel.UserDataAccounts.Provider.0.h"
#include "Windows.ApplicationModel.Wallet.0.h"
#include "Windows.Devices.Enumeration.0.h"
#include "Windows.Devices.Printers.Extensions.0.h"
#include "Windows.Foundation.0.h"
#include "Windows.Foundation.Collections.0.h"
#include "Windows.Media.SpeechRecognition.0.h"
#include "Windows.Security.Authentication.Web.0.h"
#include "Windows.Security.Authentication.Web.Provider.0.h"
#include "Windows.Storage.0.h"
#include "Windows.Storage.Pickers.Provider.0.h"
#include "Windows.Storage.Provider.0.h"
#include "Windows.Storage.Search.0.h"
#include "Windows.System.0.h"
#include "Windows.Graphics.Printing.0.h"
#include "Windows.UI.WebUI.0.h"

namespace winrt {

namespace Windows::UI::WebUI {

struct IActivatedDeferral :
    Windows::Foundation::IInspectable,
    impl::consume_t<IActivatedDeferral>
{
    IActivatedDeferral(std::nullptr_t = nullptr) noexcept {}
};

struct IActivatedEventArgsDeferral :
    Windows::Foundation::IInspectable,
    impl::consume_t<IActivatedEventArgsDeferral>
{
    IActivatedEventArgsDeferral(std::nullptr_t = nullptr) noexcept {}
};

struct IActivatedOperation :
    Windows::Foundation::IInspectable,
    impl::consume_t<IActivatedOperation>
{
    IActivatedOperation(std::nullptr_t = nullptr) noexcept {}
};

struct IHtmlPrintDocumentSource :
    Windows::Foundation::IInspectable,
    impl::consume_t<IHtmlPrintDocumentSource>,
    impl::require<IHtmlPrintDocumentSource, Windows::Graphics::Printing::IPrintDocumentSource>
{
    IHtmlPrintDocumentSource(std::nullptr_t = nullptr) noexcept {}
};

struct IWebUIActivationStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IWebUIActivationStatics>
{
    IWebUIActivationStatics(std::nullptr_t = nullptr) noexcept {}
};

struct IWebUIActivationStatics2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IWebUIActivationStatics2>
{
    IWebUIActivationStatics2(std::nullptr_t = nullptr) noexcept {}
};

struct IWebUIBackgroundTaskInstance :
    Windows::Foundation::IInspectable,
    impl::consume_t<IWebUIBackgroundTaskInstance>
{
    IWebUIBackgroundTaskInstance(std::nullptr_t = nullptr) noexcept {}
};

struct IWebUIBackgroundTaskInstanceStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IWebUIBackgroundTaskInstanceStatics>
{
    IWebUIBackgroundTaskInstanceStatics(std::nullptr_t = nullptr) noexcept {}
};

struct IWebUINavigatedDeferral :
    Windows::Foundation::IInspectable,
    impl::consume_t<IWebUINavigatedDeferral>
{
    IWebUINavigatedDeferral(std::nullptr_t = nullptr) noexcept {}
};

struct IWebUINavigatedEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<IWebUINavigatedEventArgs>
{
    IWebUINavigatedEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct IWebUINavigatedOperation :
    Windows::Foundation::IInspectable,
    impl::consume_t<IWebUINavigatedOperation>
{
    IWebUINavigatedOperation(std::nullptr_t = nullptr) noexcept {}
};

}

}
