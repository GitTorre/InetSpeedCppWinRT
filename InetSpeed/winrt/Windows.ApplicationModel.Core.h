// C++ for the Windows Runtime v1.29
// Copyright (c) 2016 Microsoft Corporation

#pragma once

#include "internal\Windows.ApplicationModel.3.h"
#include "internal\Windows.Foundation.3.h"
#include "internal\Windows.UI.Core.3.h"
#include "internal\Windows.Foundation.Collections.3.h"
#include "internal\Windows.ApplicationModel.Core.3.h"
#include "Windows.ApplicationModel.h"

WINRT_EXPORT namespace winrt {

namespace impl {

template <typename D>
struct produce<D, Windows::ApplicationModel::Core::IAppListEntry> : produce_base<D, Windows::ApplicationModel::Core::IAppListEntry>
{
    HRESULT __stdcall get_DisplayInfo(abi_arg_out<Windows::ApplicationModel::IAppDisplayInfo> value) noexcept override
    {
        try
        {
            *value = detach(shim().DisplayInfo());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_LaunchAsync(abi_arg_out<Windows::Foundation::IAsyncOperation<bool>> operation) noexcept override
    {
        try
        {
            *operation = detach(shim().LaunchAsync());
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::Core::ICoreApplication> : produce_base<D, Windows::ApplicationModel::Core::ICoreApplication>
{
    HRESULT __stdcall get_Id(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(shim().Id());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_Suspending(abi_arg_in<Windows::Foundation::EventHandler<Windows::ApplicationModel::SuspendingEventArgs>> handler, event_token * token) noexcept override
    {
        try
        {
            *token = detach(shim().Suspending(*reinterpret_cast<const Windows::Foundation::EventHandler<Windows::ApplicationModel::SuspendingEventArgs> *>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_Suspending(event_token token) noexcept override
    {
        try
        {
            shim().Suspending(token);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_Resuming(abi_arg_in<Windows::Foundation::EventHandler<Windows::IInspectable>> handler, event_token * token) noexcept override
    {
        try
        {
            *token = detach(shim().Resuming(*reinterpret_cast<const Windows::Foundation::EventHandler<Windows::IInspectable> *>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_Resuming(event_token token) noexcept override
    {
        try
        {
            shim().Resuming(token);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Properties(abi_arg_out<Windows::Foundation::Collections::IPropertySet> value) noexcept override
    {
        try
        {
            *value = detach(shim().Properties());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_GetCurrentView(abi_arg_out<Windows::ApplicationModel::Core::ICoreApplicationView> value) noexcept override
    {
        try
        {
            *value = detach(shim().GetCurrentView());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_Run(abi_arg_in<Windows::ApplicationModel::Core::IFrameworkViewSource> viewSource) noexcept override
    {
        try
        {
            shim().Run(*reinterpret_cast<const Windows::ApplicationModel::Core::IFrameworkViewSource *>(&viewSource));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_RunWithActivationFactories(abi_arg_in<Windows::Foundation::IGetActivationFactory> activationFactoryCallback) noexcept override
    {
        try
        {
            shim().RunWithActivationFactories(*reinterpret_cast<const Windows::Foundation::IGetActivationFactory *>(&activationFactoryCallback));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::Core::ICoreApplication2> : produce_base<D, Windows::ApplicationModel::Core::ICoreApplication2>
{
    HRESULT __stdcall add_BackgroundActivated(abi_arg_in<Windows::Foundation::EventHandler<Windows::ApplicationModel::Activation::BackgroundActivatedEventArgs>> handler, event_token * token) noexcept override
    {
        try
        {
            *token = detach(shim().BackgroundActivated(*reinterpret_cast<const Windows::Foundation::EventHandler<Windows::ApplicationModel::Activation::BackgroundActivatedEventArgs> *>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_BackgroundActivated(event_token token) noexcept override
    {
        try
        {
            shim().BackgroundActivated(token);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_LeavingBackground(abi_arg_in<Windows::Foundation::EventHandler<Windows::ApplicationModel::LeavingBackgroundEventArgs>> handler, event_token * token) noexcept override
    {
        try
        {
            *token = detach(shim().LeavingBackground(*reinterpret_cast<const Windows::Foundation::EventHandler<Windows::ApplicationModel::LeavingBackgroundEventArgs> *>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_LeavingBackground(event_token token) noexcept override
    {
        try
        {
            shim().LeavingBackground(token);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_EnteredBackground(abi_arg_in<Windows::Foundation::EventHandler<Windows::ApplicationModel::EnteredBackgroundEventArgs>> handler, event_token * token) noexcept override
    {
        try
        {
            *token = detach(shim().EnteredBackground(*reinterpret_cast<const Windows::Foundation::EventHandler<Windows::ApplicationModel::EnteredBackgroundEventArgs> *>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_EnteredBackground(event_token token) noexcept override
    {
        try
        {
            shim().EnteredBackground(token);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_EnablePrelaunch(bool value) noexcept override
    {
        try
        {
            shim().EnablePrelaunch(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::Core::ICoreApplicationExit> : produce_base<D, Windows::ApplicationModel::Core::ICoreApplicationExit>
{
    HRESULT __stdcall abi_Exit() noexcept override
    {
        try
        {
            shim().Exit();
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_Exiting(abi_arg_in<Windows::Foundation::EventHandler<Windows::IInspectable>> handler, event_token * token) noexcept override
    {
        try
        {
            *token = detach(shim().Exiting(*reinterpret_cast<const Windows::Foundation::EventHandler<Windows::IInspectable> *>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_Exiting(event_token token) noexcept override
    {
        try
        {
            shim().Exiting(token);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::Core::ICoreApplicationUnhandledError> : produce_base<D, Windows::ApplicationModel::Core::ICoreApplicationUnhandledError>
{
    HRESULT __stdcall add_UnhandledErrorDetected(abi_arg_in<Windows::Foundation::EventHandler<Windows::ApplicationModel::Core::UnhandledErrorDetectedEventArgs>> handler, event_token * token) noexcept override
    {
        try
        {
            *token = detach(shim().UnhandledErrorDetected(*reinterpret_cast<const Windows::Foundation::EventHandler<Windows::ApplicationModel::Core::UnhandledErrorDetectedEventArgs> *>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_UnhandledErrorDetected(event_token token) noexcept override
    {
        try
        {
            shim().UnhandledErrorDetected(token);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::Core::ICoreApplicationUseCount> : produce_base<D, Windows::ApplicationModel::Core::ICoreApplicationUseCount>
{
    HRESULT __stdcall abi_IncrementApplicationUseCount() noexcept override
    {
        try
        {
            shim().IncrementApplicationUseCount();
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_DecrementApplicationUseCount() noexcept override
    {
        try
        {
            shim().DecrementApplicationUseCount();
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::Core::ICoreApplicationView> : produce_base<D, Windows::ApplicationModel::Core::ICoreApplicationView>
{
    HRESULT __stdcall get_CoreWindow(abi_arg_out<Windows::UI::Core::ICoreWindow> value) noexcept override
    {
        try
        {
            *value = detach(shim().CoreWindow());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_Activated(abi_arg_in<Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::Core::CoreApplicationView, Windows::ApplicationModel::Activation::IActivatedEventArgs>> handler, event_token * token) noexcept override
    {
        try
        {
            *token = detach(shim().Activated(*reinterpret_cast<const Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::Core::CoreApplicationView, Windows::ApplicationModel::Activation::IActivatedEventArgs> *>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_Activated(event_token token) noexcept override
    {
        try
        {
            shim().Activated(token);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_IsMain(bool * value) noexcept override
    {
        try
        {
            *value = detach(shim().IsMain());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_IsHosted(bool * value) noexcept override
    {
        try
        {
            *value = detach(shim().IsHosted());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::Core::ICoreApplicationView2> : produce_base<D, Windows::ApplicationModel::Core::ICoreApplicationView2>
{
    HRESULT __stdcall get_Dispatcher(abi_arg_out<Windows::UI::Core::ICoreDispatcher> value) noexcept override
    {
        try
        {
            *value = detach(shim().Dispatcher());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::Core::ICoreApplicationView3> : produce_base<D, Windows::ApplicationModel::Core::ICoreApplicationView3>
{
    HRESULT __stdcall get_IsComponent(bool * value) noexcept override
    {
        try
        {
            *value = detach(shim().IsComponent());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_TitleBar(abi_arg_out<Windows::ApplicationModel::Core::ICoreApplicationViewTitleBar> value) noexcept override
    {
        try
        {
            *value = detach(shim().TitleBar());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_HostedViewClosing(abi_arg_in<Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::Core::CoreApplicationView, Windows::ApplicationModel::Core::HostedViewClosingEventArgs>> handler, event_token * token) noexcept override
    {
        try
        {
            *token = detach(shim().HostedViewClosing(*reinterpret_cast<const Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::Core::CoreApplicationView, Windows::ApplicationModel::Core::HostedViewClosingEventArgs> *>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_HostedViewClosing(event_token token) noexcept override
    {
        try
        {
            shim().HostedViewClosing(token);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::Core::ICoreApplicationViewTitleBar> : produce_base<D, Windows::ApplicationModel::Core::ICoreApplicationViewTitleBar>
{
    HRESULT __stdcall put_ExtendViewIntoTitleBar(bool value) noexcept override
    {
        try
        {
            shim().ExtendViewIntoTitleBar(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ExtendViewIntoTitleBar(bool * value) noexcept override
    {
        try
        {
            *value = detach(shim().ExtendViewIntoTitleBar());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_SystemOverlayLeftInset(double * value) noexcept override
    {
        try
        {
            *value = detach(shim().SystemOverlayLeftInset());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_SystemOverlayRightInset(double * value) noexcept override
    {
        try
        {
            *value = detach(shim().SystemOverlayRightInset());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Height(double * value) noexcept override
    {
        try
        {
            *value = detach(shim().Height());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_LayoutMetricsChanged(abi_arg_in<Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::Core::CoreApplicationViewTitleBar, Windows::IInspectable>> handler, event_token * token) noexcept override
    {
        try
        {
            *token = detach(shim().LayoutMetricsChanged(*reinterpret_cast<const Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::Core::CoreApplicationViewTitleBar, Windows::IInspectable> *>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_LayoutMetricsChanged(event_token token) noexcept override
    {
        try
        {
            shim().LayoutMetricsChanged(token);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_IsVisible(bool * value) noexcept override
    {
        try
        {
            *value = detach(shim().IsVisible());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_IsVisibleChanged(abi_arg_in<Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::Core::CoreApplicationViewTitleBar, Windows::IInspectable>> handler, event_token * token) noexcept override
    {
        try
        {
            *token = detach(shim().IsVisibleChanged(*reinterpret_cast<const Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::Core::CoreApplicationViewTitleBar, Windows::IInspectable> *>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_IsVisibleChanged(event_token token) noexcept override
    {
        try
        {
            shim().IsVisibleChanged(token);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::Core::ICoreImmersiveApplication> : produce_base<D, Windows::ApplicationModel::Core::ICoreImmersiveApplication>
{
    HRESULT __stdcall get_Views(abi_arg_out<Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Core::CoreApplicationView>> value) noexcept override
    {
        try
        {
            *value = detach(shim().Views());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_CreateNewView(abi_arg_in<hstring> runtimeType, abi_arg_in<hstring> entryPoint, abi_arg_out<Windows::ApplicationModel::Core::ICoreApplicationView> view) noexcept override
    {
        try
        {
            *view = detach(shim().CreateNewView(*reinterpret_cast<const hstring *>(&runtimeType), *reinterpret_cast<const hstring *>(&entryPoint)));
            return S_OK;
        }
        catch (...)
        {
            *view = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_MainView(abi_arg_out<Windows::ApplicationModel::Core::ICoreApplicationView> value) noexcept override
    {
        try
        {
            *value = detach(shim().MainView());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::Core::ICoreImmersiveApplication2> : produce_base<D, Windows::ApplicationModel::Core::ICoreImmersiveApplication2>
{
    HRESULT __stdcall abi_CreateNewViewFromMainView(abi_arg_out<Windows::ApplicationModel::Core::ICoreApplicationView> view) noexcept override
    {
        try
        {
            *view = detach(shim().CreateNewView());
            return S_OK;
        }
        catch (...)
        {
            *view = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::Core::ICoreImmersiveApplication3> : produce_base<D, Windows::ApplicationModel::Core::ICoreImmersiveApplication3>
{
    HRESULT __stdcall abi_CreateNewViewWithViewSource(abi_arg_in<Windows::ApplicationModel::Core::IFrameworkViewSource> viewSource, abi_arg_out<Windows::ApplicationModel::Core::ICoreApplicationView> view) noexcept override
    {
        try
        {
            *view = detach(shim().CreateNewView(*reinterpret_cast<const Windows::ApplicationModel::Core::IFrameworkViewSource *>(&viewSource)));
            return S_OK;
        }
        catch (...)
        {
            *view = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::Core::IFrameworkView> : produce_base<D, Windows::ApplicationModel::Core::IFrameworkView>
{
    HRESULT __stdcall abi_Initialize(abi_arg_in<Windows::ApplicationModel::Core::ICoreApplicationView> applicationView) noexcept override
    {
        try
        {
            shim().Initialize(*reinterpret_cast<const Windows::ApplicationModel::Core::CoreApplicationView *>(&applicationView));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_SetWindow(abi_arg_in<Windows::UI::Core::ICoreWindow> window) noexcept override
    {
        try
        {
            shim().SetWindow(*reinterpret_cast<const Windows::UI::Core::CoreWindow *>(&window));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_Load(abi_arg_in<hstring> entryPoint) noexcept override
    {
        try
        {
            shim().Load(*reinterpret_cast<const hstring *>(&entryPoint));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_Run() noexcept override
    {
        try
        {
            shim().Run();
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_Uninitialize() noexcept override
    {
        try
        {
            shim().Uninitialize();
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::Core::IFrameworkViewSource> : produce_base<D, Windows::ApplicationModel::Core::IFrameworkViewSource>
{
    HRESULT __stdcall abi_CreateView(abi_arg_out<Windows::ApplicationModel::Core::IFrameworkView> viewProvider) noexcept override
    {
        try
        {
            *viewProvider = detach(shim().CreateView());
            return S_OK;
        }
        catch (...)
        {
            *viewProvider = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::Core::IHostedViewClosingEventArgs> : produce_base<D, Windows::ApplicationModel::Core::IHostedViewClosingEventArgs>
{
    HRESULT __stdcall abi_GetDeferral(abi_arg_out<Windows::Foundation::IDeferral> result) noexcept override
    {
        try
        {
            *result = detach(shim().GetDeferral());
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::Core::IUnhandledError> : produce_base<D, Windows::ApplicationModel::Core::IUnhandledError>
{
    HRESULT __stdcall get_Handled(bool * value) noexcept override
    {
        try
        {
            *value = detach(shim().Handled());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_Propagate() noexcept override
    {
        try
        {
            shim().Propagate();
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::Core::IUnhandledErrorDetectedEventArgs> : produce_base<D, Windows::ApplicationModel::Core::IUnhandledErrorDetectedEventArgs>
{
    HRESULT __stdcall get_UnhandledError(abi_arg_out<Windows::ApplicationModel::Core::IUnhandledError> value) noexcept override
    {
        try
        {
            *value = detach(shim().UnhandledError());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }
};

}

namespace Windows::ApplicationModel::Core {

template <typename D> Windows::ApplicationModel::AppDisplayInfo impl_IAppListEntry<D>::DisplayInfo() const
{
    Windows::ApplicationModel::AppDisplayInfo value { nullptr };
    check_hresult(shim()->get_DisplayInfo(put(value)));
    return value;
}

template <typename D> Windows::Foundation::IAsyncOperation<bool> impl_IAppListEntry<D>::LaunchAsync() const
{
    Windows::Foundation::IAsyncOperation<bool> operation;
    check_hresult(shim()->abi_LaunchAsync(put(operation)));
    return operation;
}

template <typename D> void impl_IFrameworkView<D>::Initialize(const Windows::ApplicationModel::Core::CoreApplicationView & applicationView) const
{
    check_hresult(shim()->abi_Initialize(get(applicationView)));
}

template <typename D> void impl_IFrameworkView<D>::SetWindow(const Windows::UI::Core::CoreWindow & window) const
{
    check_hresult(shim()->abi_SetWindow(get(window)));
}

template <typename D> void impl_IFrameworkView<D>::Load(hstring_ref entryPoint) const
{
    check_hresult(shim()->abi_Load(get(entryPoint)));
}

template <typename D> void impl_IFrameworkView<D>::Run() const
{
    check_hresult(shim()->abi_Run());
}

template <typename D> void impl_IFrameworkView<D>::Uninitialize() const
{
    check_hresult(shim()->abi_Uninitialize());
}

template <typename D> Windows::ApplicationModel::Core::IFrameworkView impl_IFrameworkViewSource<D>::CreateView() const
{
    Windows::ApplicationModel::Core::IFrameworkView viewProvider;
    check_hresult(shim()->abi_CreateView(put(viewProvider)));
    return viewProvider;
}

template <typename D> hstring impl_ICoreApplication<D>::Id() const
{
    hstring value;
    check_hresult(shim()->get_Id(put(value)));
    return value;
}

template <typename D> event_token impl_ICoreApplication<D>::Suspending(const Windows::Foundation::EventHandler<Windows::ApplicationModel::SuspendingEventArgs> & handler) const
{
    event_token token {};
    check_hresult(shim()->add_Suspending(get(handler), &token));
    return token;
}

template <typename D> event_revoker<ICoreApplication> impl_ICoreApplication<D>::Suspending(auto_revoke_t, const Windows::Foundation::EventHandler<Windows::ApplicationModel::SuspendingEventArgs> & handler) const
{
    return impl::make_event_revoker<D, ICoreApplication>(this, &ABI::Windows::ApplicationModel::Core::ICoreApplication::remove_Suspending, Suspending(handler));
}

template <typename D> void impl_ICoreApplication<D>::Suspending(event_token token) const
{
    check_hresult(shim()->remove_Suspending(token));
}

template <typename D> event_token impl_ICoreApplication<D>::Resuming(const Windows::Foundation::EventHandler<Windows::IInspectable> & handler) const
{
    event_token token {};
    check_hresult(shim()->add_Resuming(get(handler), &token));
    return token;
}

template <typename D> event_revoker<ICoreApplication> impl_ICoreApplication<D>::Resuming(auto_revoke_t, const Windows::Foundation::EventHandler<Windows::IInspectable> & handler) const
{
    return impl::make_event_revoker<D, ICoreApplication>(this, &ABI::Windows::ApplicationModel::Core::ICoreApplication::remove_Resuming, Resuming(handler));
}

template <typename D> void impl_ICoreApplication<D>::Resuming(event_token token) const
{
    check_hresult(shim()->remove_Resuming(token));
}

template <typename D> Windows::Foundation::Collections::IPropertySet impl_ICoreApplication<D>::Properties() const
{
    Windows::Foundation::Collections::IPropertySet value;
    check_hresult(shim()->get_Properties(put(value)));
    return value;
}

template <typename D> Windows::ApplicationModel::Core::CoreApplicationView impl_ICoreApplication<D>::GetCurrentView() const
{
    Windows::ApplicationModel::Core::CoreApplicationView value { nullptr };
    check_hresult(shim()->abi_GetCurrentView(put(value)));
    return value;
}

template <typename D> void impl_ICoreApplication<D>::Run(const Windows::ApplicationModel::Core::IFrameworkViewSource & viewSource) const
{
    check_hresult(shim()->abi_Run(get(viewSource)));
}

template <typename D> void impl_ICoreApplication<D>::RunWithActivationFactories(const Windows::Foundation::IGetActivationFactory & activationFactoryCallback) const
{
    check_hresult(shim()->abi_RunWithActivationFactories(get(activationFactoryCallback)));
}

template <typename D> void impl_ICoreApplicationUseCount<D>::IncrementApplicationUseCount() const
{
    check_hresult(shim()->abi_IncrementApplicationUseCount());
}

template <typename D> void impl_ICoreApplicationUseCount<D>::DecrementApplicationUseCount() const
{
    check_hresult(shim()->abi_DecrementApplicationUseCount());
}

template <typename D> void impl_ICoreApplicationExit<D>::Exit() const
{
    check_hresult(shim()->abi_Exit());
}

template <typename D> event_token impl_ICoreApplicationExit<D>::Exiting(const Windows::Foundation::EventHandler<Windows::IInspectable> & handler) const
{
    event_token token {};
    check_hresult(shim()->add_Exiting(get(handler), &token));
    return token;
}

template <typename D> event_revoker<ICoreApplicationExit> impl_ICoreApplicationExit<D>::Exiting(auto_revoke_t, const Windows::Foundation::EventHandler<Windows::IInspectable> & handler) const
{
    return impl::make_event_revoker<D, ICoreApplicationExit>(this, &ABI::Windows::ApplicationModel::Core::ICoreApplicationExit::remove_Exiting, Exiting(handler));
}

template <typename D> void impl_ICoreApplicationExit<D>::Exiting(event_token token) const
{
    check_hresult(shim()->remove_Exiting(token));
}

template <typename D> event_token impl_ICoreApplication2<D>::BackgroundActivated(const Windows::Foundation::EventHandler<Windows::ApplicationModel::Activation::BackgroundActivatedEventArgs> & handler) const
{
    event_token token {};
    check_hresult(shim()->add_BackgroundActivated(get(handler), &token));
    return token;
}

template <typename D> event_revoker<ICoreApplication2> impl_ICoreApplication2<D>::BackgroundActivated(auto_revoke_t, const Windows::Foundation::EventHandler<Windows::ApplicationModel::Activation::BackgroundActivatedEventArgs> & handler) const
{
    return impl::make_event_revoker<D, ICoreApplication2>(this, &ABI::Windows::ApplicationModel::Core::ICoreApplication2::remove_BackgroundActivated, BackgroundActivated(handler));
}

template <typename D> void impl_ICoreApplication2<D>::BackgroundActivated(event_token token) const
{
    check_hresult(shim()->remove_BackgroundActivated(token));
}

template <typename D> event_token impl_ICoreApplication2<D>::LeavingBackground(const Windows::Foundation::EventHandler<Windows::ApplicationModel::LeavingBackgroundEventArgs> & handler) const
{
    event_token token {};
    check_hresult(shim()->add_LeavingBackground(get(handler), &token));
    return token;
}

template <typename D> event_revoker<ICoreApplication2> impl_ICoreApplication2<D>::LeavingBackground(auto_revoke_t, const Windows::Foundation::EventHandler<Windows::ApplicationModel::LeavingBackgroundEventArgs> & handler) const
{
    return impl::make_event_revoker<D, ICoreApplication2>(this, &ABI::Windows::ApplicationModel::Core::ICoreApplication2::remove_LeavingBackground, LeavingBackground(handler));
}

template <typename D> void impl_ICoreApplication2<D>::LeavingBackground(event_token token) const
{
    check_hresult(shim()->remove_LeavingBackground(token));
}

template <typename D> event_token impl_ICoreApplication2<D>::EnteredBackground(const Windows::Foundation::EventHandler<Windows::ApplicationModel::EnteredBackgroundEventArgs> & handler) const
{
    event_token token {};
    check_hresult(shim()->add_EnteredBackground(get(handler), &token));
    return token;
}

template <typename D> event_revoker<ICoreApplication2> impl_ICoreApplication2<D>::EnteredBackground(auto_revoke_t, const Windows::Foundation::EventHandler<Windows::ApplicationModel::EnteredBackgroundEventArgs> & handler) const
{
    return impl::make_event_revoker<D, ICoreApplication2>(this, &ABI::Windows::ApplicationModel::Core::ICoreApplication2::remove_EnteredBackground, EnteredBackground(handler));
}

template <typename D> void impl_ICoreApplication2<D>::EnteredBackground(event_token token) const
{
    check_hresult(shim()->remove_EnteredBackground(token));
}

template <typename D> void impl_ICoreApplication2<D>::EnablePrelaunch(bool value) const
{
    check_hresult(shim()->abi_EnablePrelaunch(value));
}

template <typename D> Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Core::CoreApplicationView> impl_ICoreImmersiveApplication<D>::Views() const
{
    Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Core::CoreApplicationView> value;
    check_hresult(shim()->get_Views(put(value)));
    return value;
}

template <typename D> Windows::ApplicationModel::Core::CoreApplicationView impl_ICoreImmersiveApplication<D>::CreateNewView(hstring_ref runtimeType, hstring_ref entryPoint) const
{
    Windows::ApplicationModel::Core::CoreApplicationView view { nullptr };
    check_hresult(shim()->abi_CreateNewView(get(runtimeType), get(entryPoint), put(view)));
    return view;
}

template <typename D> Windows::ApplicationModel::Core::CoreApplicationView impl_ICoreImmersiveApplication<D>::MainView() const
{
    Windows::ApplicationModel::Core::CoreApplicationView value { nullptr };
    check_hresult(shim()->get_MainView(put(value)));
    return value;
}

template <typename D> Windows::ApplicationModel::Core::CoreApplicationView impl_ICoreImmersiveApplication2<D>::CreateNewView() const
{
    Windows::ApplicationModel::Core::CoreApplicationView view { nullptr };
    check_hresult(shim()->abi_CreateNewViewFromMainView(put(view)));
    return view;
}

template <typename D> Windows::ApplicationModel::Core::CoreApplicationView impl_ICoreImmersiveApplication3<D>::CreateNewView(const Windows::ApplicationModel::Core::IFrameworkViewSource & viewSource) const
{
    Windows::ApplicationModel::Core::CoreApplicationView view { nullptr };
    check_hresult(shim()->abi_CreateNewViewWithViewSource(get(viewSource), put(view)));
    return view;
}

template <typename D> event_token impl_ICoreApplicationUnhandledError<D>::UnhandledErrorDetected(const Windows::Foundation::EventHandler<Windows::ApplicationModel::Core::UnhandledErrorDetectedEventArgs> & handler) const
{
    event_token token {};
    check_hresult(shim()->add_UnhandledErrorDetected(get(handler), &token));
    return token;
}

template <typename D> event_revoker<ICoreApplicationUnhandledError> impl_ICoreApplicationUnhandledError<D>::UnhandledErrorDetected(auto_revoke_t, const Windows::Foundation::EventHandler<Windows::ApplicationModel::Core::UnhandledErrorDetectedEventArgs> & handler) const
{
    return impl::make_event_revoker<D, ICoreApplicationUnhandledError>(this, &ABI::Windows::ApplicationModel::Core::ICoreApplicationUnhandledError::remove_UnhandledErrorDetected, UnhandledErrorDetected(handler));
}

template <typename D> void impl_ICoreApplicationUnhandledError<D>::UnhandledErrorDetected(event_token token) const
{
    check_hresult(shim()->remove_UnhandledErrorDetected(token));
}

template <typename D> Windows::UI::Core::CoreWindow impl_ICoreApplicationView<D>::CoreWindow() const
{
    Windows::UI::Core::CoreWindow value { nullptr };
    check_hresult(shim()->get_CoreWindow(put(value)));
    return value;
}

template <typename D> event_token impl_ICoreApplicationView<D>::Activated(const Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::Core::CoreApplicationView, Windows::ApplicationModel::Activation::IActivatedEventArgs> & handler) const
{
    event_token token {};
    check_hresult(shim()->add_Activated(get(handler), &token));
    return token;
}

template <typename D> event_revoker<ICoreApplicationView> impl_ICoreApplicationView<D>::Activated(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::Core::CoreApplicationView, Windows::ApplicationModel::Activation::IActivatedEventArgs> & handler) const
{
    return impl::make_event_revoker<D, ICoreApplicationView>(this, &ABI::Windows::ApplicationModel::Core::ICoreApplicationView::remove_Activated, Activated(handler));
}

template <typename D> void impl_ICoreApplicationView<D>::Activated(event_token token) const
{
    check_hresult(shim()->remove_Activated(token));
}

template <typename D> bool impl_ICoreApplicationView<D>::IsMain() const
{
    bool value {};
    check_hresult(shim()->get_IsMain(&value));
    return value;
}

template <typename D> bool impl_ICoreApplicationView<D>::IsHosted() const
{
    bool value {};
    check_hresult(shim()->get_IsHosted(&value));
    return value;
}

template <typename D> Windows::UI::Core::CoreDispatcher impl_ICoreApplicationView2<D>::Dispatcher() const
{
    Windows::UI::Core::CoreDispatcher value { nullptr };
    check_hresult(shim()->get_Dispatcher(put(value)));
    return value;
}

template <typename D> bool impl_ICoreApplicationView3<D>::IsComponent() const
{
    bool value {};
    check_hresult(shim()->get_IsComponent(&value));
    return value;
}

template <typename D> Windows::ApplicationModel::Core::CoreApplicationViewTitleBar impl_ICoreApplicationView3<D>::TitleBar() const
{
    Windows::ApplicationModel::Core::CoreApplicationViewTitleBar value { nullptr };
    check_hresult(shim()->get_TitleBar(put(value)));
    return value;
}

template <typename D> event_token impl_ICoreApplicationView3<D>::HostedViewClosing(const Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::Core::CoreApplicationView, Windows::ApplicationModel::Core::HostedViewClosingEventArgs> & handler) const
{
    event_token token {};
    check_hresult(shim()->add_HostedViewClosing(get(handler), &token));
    return token;
}

template <typename D> event_revoker<ICoreApplicationView3> impl_ICoreApplicationView3<D>::HostedViewClosing(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::Core::CoreApplicationView, Windows::ApplicationModel::Core::HostedViewClosingEventArgs> & handler) const
{
    return impl::make_event_revoker<D, ICoreApplicationView3>(this, &ABI::Windows::ApplicationModel::Core::ICoreApplicationView3::remove_HostedViewClosing, HostedViewClosing(handler));
}

template <typename D> void impl_ICoreApplicationView3<D>::HostedViewClosing(event_token token) const
{
    check_hresult(shim()->remove_HostedViewClosing(token));
}

template <typename D> Windows::Foundation::Deferral impl_IHostedViewClosingEventArgs<D>::GetDeferral() const
{
    Windows::Foundation::Deferral result { nullptr };
    check_hresult(shim()->abi_GetDeferral(put(result)));
    return result;
}

template <typename D> void impl_ICoreApplicationViewTitleBar<D>::ExtendViewIntoTitleBar(bool value) const
{
    check_hresult(shim()->put_ExtendViewIntoTitleBar(value));
}

template <typename D> bool impl_ICoreApplicationViewTitleBar<D>::ExtendViewIntoTitleBar() const
{
    bool value {};
    check_hresult(shim()->get_ExtendViewIntoTitleBar(&value));
    return value;
}

template <typename D> double impl_ICoreApplicationViewTitleBar<D>::SystemOverlayLeftInset() const
{
    double value {};
    check_hresult(shim()->get_SystemOverlayLeftInset(&value));
    return value;
}

template <typename D> double impl_ICoreApplicationViewTitleBar<D>::SystemOverlayRightInset() const
{
    double value {};
    check_hresult(shim()->get_SystemOverlayRightInset(&value));
    return value;
}

template <typename D> double impl_ICoreApplicationViewTitleBar<D>::Height() const
{
    double value {};
    check_hresult(shim()->get_Height(&value));
    return value;
}

template <typename D> event_token impl_ICoreApplicationViewTitleBar<D>::LayoutMetricsChanged(const Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::Core::CoreApplicationViewTitleBar, Windows::IInspectable> & handler) const
{
    event_token token {};
    check_hresult(shim()->add_LayoutMetricsChanged(get(handler), &token));
    return token;
}

template <typename D> event_revoker<ICoreApplicationViewTitleBar> impl_ICoreApplicationViewTitleBar<D>::LayoutMetricsChanged(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::Core::CoreApplicationViewTitleBar, Windows::IInspectable> & handler) const
{
    return impl::make_event_revoker<D, ICoreApplicationViewTitleBar>(this, &ABI::Windows::ApplicationModel::Core::ICoreApplicationViewTitleBar::remove_LayoutMetricsChanged, LayoutMetricsChanged(handler));
}

template <typename D> void impl_ICoreApplicationViewTitleBar<D>::LayoutMetricsChanged(event_token token) const
{
    check_hresult(shim()->remove_LayoutMetricsChanged(token));
}

template <typename D> bool impl_ICoreApplicationViewTitleBar<D>::IsVisible() const
{
    bool value {};
    check_hresult(shim()->get_IsVisible(&value));
    return value;
}

template <typename D> event_token impl_ICoreApplicationViewTitleBar<D>::IsVisibleChanged(const Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::Core::CoreApplicationViewTitleBar, Windows::IInspectable> & handler) const
{
    event_token token {};
    check_hresult(shim()->add_IsVisibleChanged(get(handler), &token));
    return token;
}

template <typename D> event_revoker<ICoreApplicationViewTitleBar> impl_ICoreApplicationViewTitleBar<D>::IsVisibleChanged(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::Core::CoreApplicationViewTitleBar, Windows::IInspectable> & handler) const
{
    return impl::make_event_revoker<D, ICoreApplicationViewTitleBar>(this, &ABI::Windows::ApplicationModel::Core::ICoreApplicationViewTitleBar::remove_IsVisibleChanged, IsVisibleChanged(handler));
}

template <typename D> void impl_ICoreApplicationViewTitleBar<D>::IsVisibleChanged(event_token token) const
{
    check_hresult(shim()->remove_IsVisibleChanged(token));
}

template <typename D> Windows::ApplicationModel::Core::UnhandledError impl_IUnhandledErrorDetectedEventArgs<D>::UnhandledError() const
{
    Windows::ApplicationModel::Core::UnhandledError value { nullptr };
    check_hresult(shim()->get_UnhandledError(put(value)));
    return value;
}

template <typename D> bool impl_IUnhandledError<D>::Handled() const
{
    bool value {};
    check_hresult(shim()->get_Handled(&value));
    return value;
}

template <typename D> void impl_IUnhandledError<D>::Propagate() const
{
    check_hresult(shim()->abi_Propagate());
}

inline hstring CoreApplication::Id()
{
    return get_activation_factory<CoreApplication, ICoreApplication>().Id();
}

inline event_token CoreApplication::Suspending(const Windows::Foundation::EventHandler<Windows::ApplicationModel::SuspendingEventArgs> & handler)
{
    return get_activation_factory<CoreApplication, ICoreApplication>().Suspending(handler);
}

inline factory_event_revoker<ICoreApplication> CoreApplication::Suspending(auto_revoke_t, const Windows::Foundation::EventHandler<Windows::ApplicationModel::SuspendingEventArgs> & handler)
{
    auto factory = get_activation_factory<CoreApplication, ICoreApplication>();
    return { factory, &ABI::Windows::ApplicationModel::Core::ICoreApplication::remove_Suspending, factory.Suspending(handler) };
}

inline void CoreApplication::Suspending(event_token token)
{
    get_activation_factory<CoreApplication, ICoreApplication>().Suspending(token);
}

inline event_token CoreApplication::Resuming(const Windows::Foundation::EventHandler<Windows::IInspectable> & handler)
{
    return get_activation_factory<CoreApplication, ICoreApplication>().Resuming(handler);
}

inline factory_event_revoker<ICoreApplication> CoreApplication::Resuming(auto_revoke_t, const Windows::Foundation::EventHandler<Windows::IInspectable> & handler)
{
    auto factory = get_activation_factory<CoreApplication, ICoreApplication>();
    return { factory, &ABI::Windows::ApplicationModel::Core::ICoreApplication::remove_Resuming, factory.Resuming(handler) };
}

inline void CoreApplication::Resuming(event_token token)
{
    get_activation_factory<CoreApplication, ICoreApplication>().Resuming(token);
}

inline Windows::Foundation::Collections::IPropertySet CoreApplication::Properties()
{
    return get_activation_factory<CoreApplication, ICoreApplication>().Properties();
}

inline Windows::ApplicationModel::Core::CoreApplicationView CoreApplication::GetCurrentView()
{
    return get_activation_factory<CoreApplication, ICoreApplication>().GetCurrentView();
}

inline void CoreApplication::Run(const Windows::ApplicationModel::Core::IFrameworkViewSource & viewSource)
{
    get_activation_factory<CoreApplication, ICoreApplication>().Run(viewSource);
}

inline void CoreApplication::RunWithActivationFactories(const Windows::Foundation::IGetActivationFactory & activationFactoryCallback)
{
    get_activation_factory<CoreApplication, ICoreApplication>().RunWithActivationFactories(activationFactoryCallback);
}

inline event_token CoreApplication::BackgroundActivated(const Windows::Foundation::EventHandler<Windows::ApplicationModel::Activation::BackgroundActivatedEventArgs> & handler)
{
    return get_activation_factory<CoreApplication, ICoreApplication2>().BackgroundActivated(handler);
}

inline factory_event_revoker<ICoreApplication2> CoreApplication::BackgroundActivated(auto_revoke_t, const Windows::Foundation::EventHandler<Windows::ApplicationModel::Activation::BackgroundActivatedEventArgs> & handler)
{
    auto factory = get_activation_factory<CoreApplication, ICoreApplication2>();
    return { factory, &ABI::Windows::ApplicationModel::Core::ICoreApplication2::remove_BackgroundActivated, factory.BackgroundActivated(handler) };
}

inline void CoreApplication::BackgroundActivated(event_token token)
{
    get_activation_factory<CoreApplication, ICoreApplication2>().BackgroundActivated(token);
}

inline event_token CoreApplication::LeavingBackground(const Windows::Foundation::EventHandler<Windows::ApplicationModel::LeavingBackgroundEventArgs> & handler)
{
    return get_activation_factory<CoreApplication, ICoreApplication2>().LeavingBackground(handler);
}

inline factory_event_revoker<ICoreApplication2> CoreApplication::LeavingBackground(auto_revoke_t, const Windows::Foundation::EventHandler<Windows::ApplicationModel::LeavingBackgroundEventArgs> & handler)
{
    auto factory = get_activation_factory<CoreApplication, ICoreApplication2>();
    return { factory, &ABI::Windows::ApplicationModel::Core::ICoreApplication2::remove_LeavingBackground, factory.LeavingBackground(handler) };
}

inline void CoreApplication::LeavingBackground(event_token token)
{
    get_activation_factory<CoreApplication, ICoreApplication2>().LeavingBackground(token);
}

inline event_token CoreApplication::EnteredBackground(const Windows::Foundation::EventHandler<Windows::ApplicationModel::EnteredBackgroundEventArgs> & handler)
{
    return get_activation_factory<CoreApplication, ICoreApplication2>().EnteredBackground(handler);
}

inline factory_event_revoker<ICoreApplication2> CoreApplication::EnteredBackground(auto_revoke_t, const Windows::Foundation::EventHandler<Windows::ApplicationModel::EnteredBackgroundEventArgs> & handler)
{
    auto factory = get_activation_factory<CoreApplication, ICoreApplication2>();
    return { factory, &ABI::Windows::ApplicationModel::Core::ICoreApplication2::remove_EnteredBackground, factory.EnteredBackground(handler) };
}

inline void CoreApplication::EnteredBackground(event_token token)
{
    get_activation_factory<CoreApplication, ICoreApplication2>().EnteredBackground(token);
}

inline void CoreApplication::EnablePrelaunch(bool value)
{
    get_activation_factory<CoreApplication, ICoreApplication2>().EnablePrelaunch(value);
}

inline void CoreApplication::Exit()
{
    get_activation_factory<CoreApplication, ICoreApplicationExit>().Exit();
}

inline event_token CoreApplication::Exiting(const Windows::Foundation::EventHandler<Windows::IInspectable> & handler)
{
    return get_activation_factory<CoreApplication, ICoreApplicationExit>().Exiting(handler);
}

inline factory_event_revoker<ICoreApplicationExit> CoreApplication::Exiting(auto_revoke_t, const Windows::Foundation::EventHandler<Windows::IInspectable> & handler)
{
    auto factory = get_activation_factory<CoreApplication, ICoreApplicationExit>();
    return { factory, &ABI::Windows::ApplicationModel::Core::ICoreApplicationExit::remove_Exiting, factory.Exiting(handler) };
}

inline void CoreApplication::Exiting(event_token token)
{
    get_activation_factory<CoreApplication, ICoreApplicationExit>().Exiting(token);
}

inline event_token CoreApplication::UnhandledErrorDetected(const Windows::Foundation::EventHandler<Windows::ApplicationModel::Core::UnhandledErrorDetectedEventArgs> & handler)
{
    return get_activation_factory<CoreApplication, ICoreApplicationUnhandledError>().UnhandledErrorDetected(handler);
}

inline factory_event_revoker<ICoreApplicationUnhandledError> CoreApplication::UnhandledErrorDetected(auto_revoke_t, const Windows::Foundation::EventHandler<Windows::ApplicationModel::Core::UnhandledErrorDetectedEventArgs> & handler)
{
    auto factory = get_activation_factory<CoreApplication, ICoreApplicationUnhandledError>();
    return { factory, &ABI::Windows::ApplicationModel::Core::ICoreApplicationUnhandledError::remove_UnhandledErrorDetected, factory.UnhandledErrorDetected(handler) };
}

inline void CoreApplication::UnhandledErrorDetected(event_token token)
{
    get_activation_factory<CoreApplication, ICoreApplicationUnhandledError>().UnhandledErrorDetected(token);
}

inline void CoreApplication::IncrementApplicationUseCount()
{
    get_activation_factory<CoreApplication, ICoreApplicationUseCount>().IncrementApplicationUseCount();
}

inline void CoreApplication::DecrementApplicationUseCount()
{
    get_activation_factory<CoreApplication, ICoreApplicationUseCount>().DecrementApplicationUseCount();
}

inline Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Core::CoreApplicationView> CoreApplication::Views()
{
    return get_activation_factory<CoreApplication, ICoreImmersiveApplication>().Views();
}

inline Windows::ApplicationModel::Core::CoreApplicationView CoreApplication::CreateNewView(hstring_ref runtimeType, hstring_ref entryPoint)
{
    return get_activation_factory<CoreApplication, ICoreImmersiveApplication>().CreateNewView(runtimeType, entryPoint);
}

inline Windows::ApplicationModel::Core::CoreApplicationView CoreApplication::MainView()
{
    return get_activation_factory<CoreApplication, ICoreImmersiveApplication>().MainView();
}

inline Windows::ApplicationModel::Core::CoreApplicationView CoreApplication::CreateNewView()
{
    return get_activation_factory<CoreApplication, ICoreImmersiveApplication2>().CreateNewView();
}

inline Windows::ApplicationModel::Core::CoreApplicationView CoreApplication::CreateNewView(const Windows::ApplicationModel::Core::IFrameworkViewSource & viewSource)
{
    return get_activation_factory<CoreApplication, ICoreImmersiveApplication3>().CreateNewView(viewSource);
}

}

}
