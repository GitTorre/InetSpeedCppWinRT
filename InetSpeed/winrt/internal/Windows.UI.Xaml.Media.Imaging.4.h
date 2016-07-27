// C++ for the Windows Runtime v1.29
// Copyright (c) 2016 Microsoft Corporation

#pragma once


WINRT_EXPORT namespace winrt {

namespace Windows::UI::Xaml::Media::Imaging {

template <typename D, typename A = ABI::Windows::UI::Xaml::Media::Imaging::IXamlRenderingBackgroundTaskOverrides>
class IXamlRenderingBackgroundTaskOverridesT : public A
{
    D & shim() noexcept { return *static_cast<D *>(this); }

public:

    using IXamlRenderingBackgroundTaskOverrides = winrt::Windows::UI::Xaml::Media::Imaging::IXamlRenderingBackgroundTaskOverrides;

    void OnRun(const Windows::ApplicationModel::Background::IBackgroundTaskInstance & taskInstance)
    {
        shim().as<IXamlRenderingBackgroundTaskOverrides>().OnRun(taskInstance);
    }

    HRESULT __stdcall abi_OnRun(abi_arg_in<Windows::ApplicationModel::Background::IBackgroundTaskInstance> taskInstance) noexcept override
    {
        try
        {
            shim().OnRun(*reinterpret_cast<const Windows::ApplicationModel::Background::IBackgroundTaskInstance *>(&taskInstance));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

}

}
