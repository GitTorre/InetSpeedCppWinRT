// C++/WinRT v1.0.170717.1
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "Windows.Foundation.Metadata.1.h"

namespace winrt {

namespace Windows::Foundation::Metadata {

struct ApiInformation
{
    ApiInformation() = delete;
    static bool IsTypePresent(param::hstring const& typeName);
    static bool IsMethodPresent(param::hstring const& typeName, param::hstring const& methodName);
    static bool IsMethodPresent(param::hstring const& typeName, param::hstring const& methodName, uint32_t inputParameterCount);
    static bool IsEventPresent(param::hstring const& typeName, param::hstring const& eventName);
    static bool IsPropertyPresent(param::hstring const& typeName, param::hstring const& propertyName);
    static bool IsReadOnlyPropertyPresent(param::hstring const& typeName, param::hstring const& propertyName);
    static bool IsWriteablePropertyPresent(param::hstring const& typeName, param::hstring const& propertyName);
    static bool IsEnumNamedValuePresent(param::hstring const& enumTypeName, param::hstring const& valueName);
    static bool IsApiContractPresent(param::hstring const& contractName, uint16_t majorVersion);
    static bool IsApiContractPresent(param::hstring const& contractName, uint16_t majorVersion, uint16_t minorVersion);
};

}

namespace impl {

}

}
