// C++ for the Windows Runtime v1.29
// Copyright (c) 2016 Microsoft Corporation

#pragma once

#include "Windows.Devices.Adc.1.h"
#include "Windows.Foundation.2.h"

WINRT_EXPORT namespace winrt {

namespace ABI::Windows::Foundation::Collections {

#ifndef WINRT_GENERIC_27547dc1_376e_5ce4_a246_34f210c8443c
#define WINRT_GENERIC_27547dc1_376e_5ce4_a246_34f210c8443c
template <> struct __declspec(uuid("27547dc1-376e-5ce4-a246-34f210c8443c")) __declspec(novtable) IVectorView<Windows::Devices::Adc::AdcController> : impl_IVectorView<Windows::Devices::Adc::AdcController> {};
#endif


}

namespace ABI::Windows::Foundation {

#ifndef WINRT_GENERIC_69420262_35c9_583f_a40e_c2694562c9e2
#define WINRT_GENERIC_69420262_35c9_583f_a40e_c2694562c9e2
template <> struct __declspec(uuid("69420262-35c9-583f-a40e-c2694562c9e2")) __declspec(novtable) IAsyncOperation<Windows::Devices::Adc::AdcController> : impl_IAsyncOperation<Windows::Devices::Adc::AdcController> {};
#endif

#ifndef WINRT_GENERIC_baf66488_202f_5d51_b05e_18606c46b808
#define WINRT_GENERIC_baf66488_202f_5d51_b05e_18606c46b808
template <> struct __declspec(uuid("baf66488-202f-5d51-b05e-18606c46b808")) __declspec(novtable) AsyncOperationCompletedHandler<Windows::Devices::Adc::AdcController> : impl_AsyncOperationCompletedHandler<Windows::Devices::Adc::AdcController> {};
#endif

#ifndef WINRT_GENERIC_1b0cddfb_d255_5a93_bcb9_de2047a3e4f3
#define WINRT_GENERIC_1b0cddfb_d255_5a93_bcb9_de2047a3e4f3
template <> struct __declspec(uuid("1b0cddfb-d255-5a93-bcb9-de2047a3e4f3")) __declspec(novtable) IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Devices::Adc::AdcController>> : impl_IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Devices::Adc::AdcController>> {};
#endif

#ifndef WINRT_GENERIC_7c4038c8_d920_53c7_a5d6_a976070d7637
#define WINRT_GENERIC_7c4038c8_d920_53c7_a5d6_a976070d7637
template <> struct __declspec(uuid("7c4038c8-d920-53c7-a5d6-a976070d7637")) __declspec(novtable) AsyncOperationCompletedHandler<Windows::Foundation::Collections::IVectorView<Windows::Devices::Adc::AdcController>> : impl_AsyncOperationCompletedHandler<Windows::Foundation::Collections::IVectorView<Windows::Devices::Adc::AdcController>> {};
#endif


}

namespace Windows::Devices::Adc {

template <typename D>
class WINRT_EBO impl_IAdcChannel
{
    auto shim() const { return impl::shim<D, IAdcChannel>(this); }

public:

    Windows::Devices::Adc::AdcController Controller() const;
    int32_t ReadValue() const;
    double ReadRatio() const;
};

template <typename D>
class WINRT_EBO impl_IAdcController
{
    auto shim() const { return impl::shim<D, IAdcController>(this); }

public:

    int32_t ChannelCount() const;
    int32_t ResolutionInBits() const;
    int32_t MinValue() const;
    int32_t MaxValue() const;
    Windows::Devices::Adc::AdcChannelMode ChannelMode() const;
    void ChannelMode(Windows::Devices::Adc::AdcChannelMode value) const;
    bool IsChannelModeSupported(Windows::Devices::Adc::AdcChannelMode channelMode) const;
    Windows::Devices::Adc::AdcChannel OpenChannel(int32_t channelNumber) const;
};

template <typename D>
class WINRT_EBO impl_IAdcControllerStatics
{
    auto shim() const { return impl::shim<D, IAdcControllerStatics>(this); }

public:

    Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Devices::Adc::AdcController>> GetControllersAsync(const Windows::Devices::Adc::Provider::IAdcProvider & provider) const;
};

template <typename D>
class WINRT_EBO impl_IAdcControllerStatics2
{
    auto shim() const { return impl::shim<D, IAdcControllerStatics2>(this); }

public:

    Windows::Foundation::IAsyncOperation<Windows::Devices::Adc::AdcController> GetDefaultAsync() const;
};

struct IAdcChannel :
    Windows::IInspectable,
    impl::consume<IAdcChannel>,
    impl::require<IAdcChannel, Windows::Foundation::IClosable>
{
    IAdcChannel(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IAdcChannel>(m_ptr); }
};

struct IAdcController :
    Windows::IInspectable,
    impl::consume<IAdcController>
{
    IAdcController(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IAdcController>(m_ptr); }
};

struct IAdcControllerStatics :
    Windows::IInspectable,
    impl::consume<IAdcControllerStatics>
{
    IAdcControllerStatics(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IAdcControllerStatics>(m_ptr); }
};

struct IAdcControllerStatics2 :
    Windows::IInspectable,
    impl::consume<IAdcControllerStatics2>
{
    IAdcControllerStatics2(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IAdcControllerStatics2>(m_ptr); }
};

}

}
