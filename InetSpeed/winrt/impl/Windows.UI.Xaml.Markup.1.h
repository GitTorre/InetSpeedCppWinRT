// C++/WinRT v1.0.170717.1
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "Windows.Foundation.0.h"
#include "Windows.Storage.Streams.0.h"
#include "Windows.UI.Xaml.0.h"
#include "Windows.UI.Xaml.Interop.0.h"
#include "Windows.UI.Xaml.Markup.0.h"

namespace winrt {

namespace Windows::UI::Xaml::Markup {

struct IComponentConnector :
    Windows::Foundation::IInspectable,
    impl::consume_t<IComponentConnector>
{
    IComponentConnector(std::nullptr_t = nullptr) noexcept {}
};

struct IComponentConnector2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IComponentConnector2>
{
    IComponentConnector2(std::nullptr_t = nullptr) noexcept {}
};

struct IDataTemplateComponent :
    Windows::Foundation::IInspectable,
    impl::consume_t<IDataTemplateComponent>
{
    IDataTemplateComponent(std::nullptr_t = nullptr) noexcept {}
};

struct IXamlBinaryWriter :
    Windows::Foundation::IInspectable,
    impl::consume_t<IXamlBinaryWriter>
{
    IXamlBinaryWriter(std::nullptr_t = nullptr) noexcept {}
};

struct IXamlBinaryWriterStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IXamlBinaryWriterStatics>
{
    IXamlBinaryWriterStatics(std::nullptr_t = nullptr) noexcept {}
};

struct IXamlBindingHelper :
    Windows::Foundation::IInspectable,
    impl::consume_t<IXamlBindingHelper>
{
    IXamlBindingHelper(std::nullptr_t = nullptr) noexcept {}
};

struct IXamlBindingHelperStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IXamlBindingHelperStatics>
{
    IXamlBindingHelperStatics(std::nullptr_t = nullptr) noexcept {}
};

struct IXamlMarkupHelper :
    Windows::Foundation::IInspectable,
    impl::consume_t<IXamlMarkupHelper>
{
    IXamlMarkupHelper(std::nullptr_t = nullptr) noexcept {}
};

struct IXamlMarkupHelperStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IXamlMarkupHelperStatics>
{
    IXamlMarkupHelperStatics(std::nullptr_t = nullptr) noexcept {}
};

struct IXamlMember :
    Windows::Foundation::IInspectable,
    impl::consume_t<IXamlMember>
{
    IXamlMember(std::nullptr_t = nullptr) noexcept {}
};

struct IXamlMetadataProvider :
    Windows::Foundation::IInspectable,
    impl::consume_t<IXamlMetadataProvider>
{
    IXamlMetadataProvider(std::nullptr_t = nullptr) noexcept {}
};

struct IXamlReader :
    Windows::Foundation::IInspectable,
    impl::consume_t<IXamlReader>
{
    IXamlReader(std::nullptr_t = nullptr) noexcept {}
};

struct IXamlReaderStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IXamlReaderStatics>
{
    IXamlReaderStatics(std::nullptr_t = nullptr) noexcept {}
};

struct IXamlType :
    Windows::Foundation::IInspectable,
    impl::consume_t<IXamlType>
{
    IXamlType(std::nullptr_t = nullptr) noexcept {}
};

}

}
