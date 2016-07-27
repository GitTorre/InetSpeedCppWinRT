// C++ for the Windows Runtime v1.29
// Copyright (c) 2016 Microsoft Corporation

#pragma once

#include "Windows.Data.Xml.Xsl.1.h"

WINRT_EXPORT namespace winrt {

namespace Windows::Data::Xml::Xsl {

template <typename D>
class WINRT_EBO impl_IXsltProcessor
{
    auto shim() const { return impl::shim<D, IXsltProcessor>(this); }

public:

    hstring TransformToString(const Windows::Data::Xml::Dom::IXmlNode & inputNode) const;
};

template <typename D>
class WINRT_EBO impl_IXsltProcessor2
{
    auto shim() const { return impl::shim<D, IXsltProcessor2>(this); }

public:

    Windows::Data::Xml::Dom::XmlDocument TransformToDocument(const Windows::Data::Xml::Dom::IXmlNode & inputNode) const;
};

template <typename D>
class WINRT_EBO impl_IXsltProcessorFactory
{
    auto shim() const { return impl::shim<D, IXsltProcessorFactory>(this); }

public:

    Windows::Data::Xml::Xsl::XsltProcessor CreateInstance(const Windows::Data::Xml::Dom::XmlDocument & document) const;
};

struct IXsltProcessor :
    Windows::IInspectable,
    impl::consume<IXsltProcessor>
{
    IXsltProcessor(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IXsltProcessor>(m_ptr); }
};

struct IXsltProcessor2 :
    Windows::IInspectable,
    impl::consume<IXsltProcessor2>
{
    IXsltProcessor2(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IXsltProcessor2>(m_ptr); }
};

struct IXsltProcessorFactory :
    Windows::IInspectable,
    impl::consume<IXsltProcessorFactory>
{
    IXsltProcessorFactory(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IXsltProcessorFactory>(m_ptr); }
};

}

}
