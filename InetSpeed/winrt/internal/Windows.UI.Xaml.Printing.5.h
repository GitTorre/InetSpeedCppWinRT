// C++ for the Windows Runtime v1.29
// Copyright (c) 2016 Microsoft Corporation

#pragma once


WINRT_EXPORT namespace winrt {

namespace Windows::UI::Xaml::Printing {

template <typename D, typename ... Interfaces> struct PrintDocumentT :
    overrides<D, Windows::IInspectable, Interfaces ...>,
    impl::require<D, Windows::UI::Xaml::Printing::IPrintDocument, Windows::UI::Xaml::IDependencyObject, Windows::UI::Xaml::IDependencyObject2>
{
    using composable = PrintDocument;

protected:

    PrintDocumentT()
    {
        get_activation_factory<PrintDocument, IPrintDocumentFactory>().CreateInstance(*this, m_inner);
    }
};

}

}
