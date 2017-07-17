// C++/WinRT v1.0.170717.1
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "Windows.Graphics.Printing.0.h"
#include "Windows.UI.Xaml.0.h"
#include "Windows.UI.Xaml.Printing.0.h"

namespace winrt {

namespace Windows::UI::Xaml::Printing {

struct IAddPagesEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<IAddPagesEventArgs>
{
    IAddPagesEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct IGetPreviewPageEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<IGetPreviewPageEventArgs>
{
    IGetPreviewPageEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct IPaginateEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPaginateEventArgs>
{
    IPaginateEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct IPrintDocument :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPrintDocument>
{
    IPrintDocument(std::nullptr_t = nullptr) noexcept {}
};

struct IPrintDocumentFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPrintDocumentFactory>
{
    IPrintDocumentFactory(std::nullptr_t = nullptr) noexcept {}
};

struct IPrintDocumentStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPrintDocumentStatics>
{
    IPrintDocumentStatics(std::nullptr_t = nullptr) noexcept {}
};

}

}
