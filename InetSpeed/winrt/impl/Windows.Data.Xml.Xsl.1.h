// C++/WinRT v1.0.170717.1
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "Windows.Data.Xml.Dom.0.h"
#include "Windows.Data.Xml.Xsl.0.h"

namespace winrt {

namespace Windows::Data::Xml::Xsl {

struct IXsltProcessor :
    Windows::Foundation::IInspectable,
    impl::consume_t<IXsltProcessor>
{
    IXsltProcessor(std::nullptr_t = nullptr) noexcept {}
};

struct IXsltProcessor2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IXsltProcessor2>
{
    IXsltProcessor2(std::nullptr_t = nullptr) noexcept {}
};

struct IXsltProcessorFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<IXsltProcessorFactory>
{
    IXsltProcessorFactory(std::nullptr_t = nullptr) noexcept {}
};

}

}
