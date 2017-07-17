// C++/WinRT v1.0.170717.1
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "Windows.UI.1.h"
#include "Windows.UI.Xaml.Automation.1.h"
#include "Windows.UI.Xaml.Automation.Peers.1.h"
#include "Windows.UI.Xaml.Automation.Text.1.h"
#include "Windows.UI.Xaml.1.h"
#include "Windows.UI.Xaml.Automation.Provider.1.h"

namespace winrt {

namespace Windows::UI::Xaml::Automation::Provider {

struct IRawElementProviderSimple :
    Windows::UI::Xaml::Automation::Provider::IIRawElementProviderSimple,
    impl::base<IRawElementProviderSimple, Windows::UI::Xaml::DependencyObject>,
    impl::require<IRawElementProviderSimple, Windows::UI::Xaml::IDependencyObject, Windows::UI::Xaml::IDependencyObject2>
{
    IRawElementProviderSimple(std::nullptr_t) noexcept {}
};

}

namespace impl {

}

}
