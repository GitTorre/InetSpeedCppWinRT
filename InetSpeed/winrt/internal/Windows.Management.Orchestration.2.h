// C++ for the Windows Runtime v1.29
// Copyright (c) 2016 Microsoft Corporation

#pragma once

#include "Windows.Management.Orchestration.1.h"
#include "Windows.Foundation.2.h"

WINRT_EXPORT namespace winrt {

namespace Windows::Management::Orchestration {

template <typename D>
class WINRT_EBO impl_ICurrentAppOrchestration
{
    auto shim() const { return impl::shim<D, ICurrentAppOrchestration>(this); }

public:

    Windows::Management::Orchestration::SingleAppModeContext StartSingleAppMode() const;
};

template <typename D>
class WINRT_EBO impl_ICurrentAppOrchestrationStatics
{
    auto shim() const { return impl::shim<D, ICurrentAppOrchestrationStatics>(this); }

public:

    Windows::Management::Orchestration::CurrentAppOrchestration GetForCurrentView() const;
};

template <typename D>
class WINRT_EBO impl_ISingleAppModeContext
{
    auto shim() const { return impl::shim<D, ISingleAppModeContext>(this); }

public:

};

struct ICurrentAppOrchestration :
    Windows::IInspectable,
    impl::consume<ICurrentAppOrchestration>
{
    ICurrentAppOrchestration(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<ICurrentAppOrchestration>(m_ptr); }
};

struct ICurrentAppOrchestrationStatics :
    Windows::IInspectable,
    impl::consume<ICurrentAppOrchestrationStatics>
{
    ICurrentAppOrchestrationStatics(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<ICurrentAppOrchestrationStatics>(m_ptr); }
};

struct ISingleAppModeContext :
    Windows::IInspectable,
    impl::consume<ISingleAppModeContext>,
    impl::require<ISingleAppModeContext, Windows::Foundation::IClosable>
{
    ISingleAppModeContext(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<ISingleAppModeContext>(m_ptr); }
};

}

}
