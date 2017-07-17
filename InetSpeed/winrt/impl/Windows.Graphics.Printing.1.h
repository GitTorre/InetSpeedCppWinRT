// C++/WinRT v1.0.170717.1
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "Windows.ApplicationModel.DataTransfer.0.h"
#include "Windows.Storage.Streams.0.h"
#include "Windows.Graphics.Printing.0.h"

namespace winrt {

namespace Windows::Graphics::Printing {

struct IPrintDocumentSource :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPrintDocumentSource>
{
    IPrintDocumentSource(std::nullptr_t = nullptr) noexcept {}
};

struct IPrintManager :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPrintManager>
{
    IPrintManager(std::nullptr_t = nullptr) noexcept {}
};

struct IPrintManagerStatic :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPrintManagerStatic>
{
    IPrintManagerStatic(std::nullptr_t = nullptr) noexcept {}
};

struct IPrintManagerStatic2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPrintManagerStatic2>
{
    IPrintManagerStatic2(std::nullptr_t = nullptr) noexcept {}
};

struct IPrintPageInfo :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPrintPageInfo>
{
    IPrintPageInfo(std::nullptr_t = nullptr) noexcept {}
};

struct IPrintTask :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPrintTask>
{
    IPrintTask(std::nullptr_t = nullptr) noexcept {}
};

struct IPrintTask2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPrintTask2>
{
    IPrintTask2(std::nullptr_t = nullptr) noexcept {}
};

struct IPrintTaskCompletedEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPrintTaskCompletedEventArgs>
{
    IPrintTaskCompletedEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct IPrintTaskOptions :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPrintTaskOptions>
{
    IPrintTaskOptions(std::nullptr_t = nullptr) noexcept {}
};

struct IPrintTaskOptionsCore :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPrintTaskOptionsCore>
{
    IPrintTaskOptionsCore(std::nullptr_t = nullptr) noexcept {}
};

struct IPrintTaskOptionsCoreProperties :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPrintTaskOptionsCoreProperties>
{
    IPrintTaskOptionsCoreProperties(std::nullptr_t = nullptr) noexcept {}
};

struct IPrintTaskOptionsCoreUIConfiguration :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPrintTaskOptionsCoreUIConfiguration>
{
    IPrintTaskOptionsCoreUIConfiguration(std::nullptr_t = nullptr) noexcept {}
};

struct IPrintTaskProgressingEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPrintTaskProgressingEventArgs>
{
    IPrintTaskProgressingEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct IPrintTaskRequest :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPrintTaskRequest>
{
    IPrintTaskRequest(std::nullptr_t = nullptr) noexcept {}
};

struct IPrintTaskRequestedDeferral :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPrintTaskRequestedDeferral>
{
    IPrintTaskRequestedDeferral(std::nullptr_t = nullptr) noexcept {}
};

struct IPrintTaskRequestedEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPrintTaskRequestedEventArgs>
{
    IPrintTaskRequestedEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct IPrintTaskSourceRequestedArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPrintTaskSourceRequestedArgs>
{
    IPrintTaskSourceRequestedArgs(std::nullptr_t = nullptr) noexcept {}
};

struct IPrintTaskSourceRequestedDeferral :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPrintTaskSourceRequestedDeferral>
{
    IPrintTaskSourceRequestedDeferral(std::nullptr_t = nullptr) noexcept {}
};

struct IPrintTaskTargetDeviceSupport :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPrintTaskTargetDeviceSupport>
{
    IPrintTaskTargetDeviceSupport(std::nullptr_t = nullptr) noexcept {}
};

struct IStandardPrintTaskOptionsStatic :
    Windows::Foundation::IInspectable,
    impl::consume_t<IStandardPrintTaskOptionsStatic>
{
    IStandardPrintTaskOptionsStatic(std::nullptr_t = nullptr) noexcept {}
};

struct IStandardPrintTaskOptionsStatic2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IStandardPrintTaskOptionsStatic2>
{
    IStandardPrintTaskOptionsStatic2(std::nullptr_t = nullptr) noexcept {}
};

}

}
