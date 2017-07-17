// C++/WinRT v1.0.170717.1
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "Windows.Foundation.1.h"
#include "Windows.Storage.1.h"
#include "Windows.Storage.Streams.1.h"
#include "Windows.Foundation.Collections.1.h"
#include "Windows.Data.Xml.Dom.1.h"

namespace winrt {

namespace Windows::Data::Xml::Dom {

struct DtdEntity :
    Windows::Data::Xml::Dom::IDtdEntity
{
    DtdEntity(std::nullptr_t) noexcept {}
};

struct DtdNotation :
    Windows::Data::Xml::Dom::IDtdNotation
{
    DtdNotation(std::nullptr_t) noexcept {}
};

struct XmlAttribute :
    Windows::Data::Xml::Dom::IXmlAttribute
{
    XmlAttribute(std::nullptr_t) noexcept {}
};

struct XmlCDataSection :
    Windows::Data::Xml::Dom::IXmlCDataSection
{
    XmlCDataSection(std::nullptr_t) noexcept {}
};

struct XmlComment :
    Windows::Data::Xml::Dom::IXmlComment
{
    XmlComment(std::nullptr_t) noexcept {}
};

struct XmlDocument :
    Windows::Data::Xml::Dom::IXmlDocument,
    impl::require<XmlDocument, Windows::Data::Xml::Dom::IXmlDocumentIO, Windows::Data::Xml::Dom::IXmlDocumentIO2>
{
    XmlDocument(std::nullptr_t) noexcept {}
    XmlDocument();
    static Windows::Foundation::IAsyncOperation<Windows::Data::Xml::Dom::XmlDocument> LoadFromUriAsync(Windows::Foundation::Uri const& uri);
    static Windows::Foundation::IAsyncOperation<Windows::Data::Xml::Dom::XmlDocument> LoadFromUriAsync(Windows::Foundation::Uri const& uri, Windows::Data::Xml::Dom::XmlLoadSettings const& loadSettings);
    static Windows::Foundation::IAsyncOperation<Windows::Data::Xml::Dom::XmlDocument> LoadFromFileAsync(Windows::Storage::IStorageFile const& file);
    static Windows::Foundation::IAsyncOperation<Windows::Data::Xml::Dom::XmlDocument> LoadFromFileAsync(Windows::Storage::IStorageFile const& file, Windows::Data::Xml::Dom::XmlLoadSettings const& loadSettings);
};

struct XmlDocumentFragment :
    Windows::Data::Xml::Dom::IXmlDocumentFragment
{
    XmlDocumentFragment(std::nullptr_t) noexcept {}
};

struct XmlDocumentType :
    Windows::Data::Xml::Dom::IXmlDocumentType
{
    XmlDocumentType(std::nullptr_t) noexcept {}
};

struct XmlDomImplementation :
    Windows::Data::Xml::Dom::IXmlDomImplementation
{
    XmlDomImplementation(std::nullptr_t) noexcept {}
};

struct XmlElement :
    Windows::Data::Xml::Dom::IXmlElement
{
    XmlElement(std::nullptr_t) noexcept {}
};

struct XmlEntityReference :
    Windows::Data::Xml::Dom::IXmlEntityReference
{
    XmlEntityReference(std::nullptr_t) noexcept {}
};

struct XmlLoadSettings :
    Windows::Data::Xml::Dom::IXmlLoadSettings
{
    XmlLoadSettings(std::nullptr_t) noexcept {}
    XmlLoadSettings();
};

struct XmlNamedNodeMap :
    Windows::Data::Xml::Dom::IXmlNamedNodeMap
{
    XmlNamedNodeMap(std::nullptr_t) noexcept {}
};

struct XmlNodeList :
    Windows::Data::Xml::Dom::IXmlNodeList
{
    XmlNodeList(std::nullptr_t) noexcept {}
};

struct XmlProcessingInstruction :
    Windows::Data::Xml::Dom::IXmlProcessingInstruction
{
    XmlProcessingInstruction(std::nullptr_t) noexcept {}
};

struct XmlText :
    Windows::Data::Xml::Dom::IXmlText
{
    XmlText(std::nullptr_t) noexcept {}
};

}

namespace impl {

}

}
