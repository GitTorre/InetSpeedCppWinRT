// C++ for the Windows Runtime v1.29
// Copyright (c) 2016 Microsoft Corporation

#pragma once

#include "Windows.Perception.1.h"

WINRT_EXPORT namespace winrt {

namespace Windows::Perception {

template <typename D>
class WINRT_EBO impl_IPerceptionTimestamp
{
    auto shim() const { return impl::shim<D, IPerceptionTimestamp>(this); }

public:

    Windows::Foundation::DateTime TargetTime() const;
    Windows::Foundation::TimeSpan PredictionAmount() const;
};

template <typename D>
class WINRT_EBO impl_IPerceptionTimestampHelperStatics
{
    auto shim() const { return impl::shim<D, IPerceptionTimestampHelperStatics>(this); }

public:

    Windows::Perception::PerceptionTimestamp FromHistoricalTargetTime(const Windows::Foundation::DateTime & targetTime) const;
};

struct IPerceptionTimestamp :
    Windows::IInspectable,
    impl::consume<IPerceptionTimestamp>
{
    IPerceptionTimestamp(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IPerceptionTimestamp>(m_ptr); }
};

struct IPerceptionTimestampHelperStatics :
    Windows::IInspectable,
    impl::consume<IPerceptionTimestampHelperStatics>
{
    IPerceptionTimestampHelperStatics(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IPerceptionTimestampHelperStatics>(m_ptr); }
};

}

}
