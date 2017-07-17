// C++/WinRT v1.0.170717.1
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "Windows.Data.Xml.Dom.1.h"
#include "Windows.Data.Xml.Xsl.1.h"

namespace winrt {

namespace Windows::Data::Xml::Xsl {

struct XsltProcessor :
    Windows::Data::Xml::Xsl::IXsltProcessor,
    impl::require<XsltProcessor, Windows::Data::Xml::Xsl::IXsltProcessor2>
{
    XsltProcessor(std::nullptr_t) noexcept {}
    XsltProcessor(Windows::Data::Xml::Dom::XmlDocument const& document);
};

}

namespace impl {

}

}
