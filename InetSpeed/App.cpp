#include "pch.h"
#include "InternetConnectionState.h"

using namespace winrt;

using namespace Windows::ApplicationModel::Activation;
using namespace Windows::Foundation;
using namespace Windows::UI;
using namespace Xaml;
using namespace Controls;
using namespace Media;
using namespace Xaml;
using namespace Controls;
using namespace Media;
using namespace InetSpeed;
using namespace std;

struct App : ApplicationT<App>
{
	void OnLaunched (LaunchActivatedEventArgs const &)
	{
		auto window = Window::Current();
		InternetDetect(window);
		ProcessPointerEvents(window);
	}

	void ProcessPointerEvents(Window const & window)
	{
		auto coreWindow = window.CoreWindow();
		coreWindow.PointerPressed([=](auto && ...)
		{
			InternetDetect(window);
		});
		coreWindow.Activate();
	}

	void InternetDetect(Window const & window) const
	{
		TextBlock text;
		if (InternetConnectionState::InternetConnected())
		{
			//No HostName specified...
			//auto speed = InternetConnectionState::GetInternetConnectionSpeed();

			//Specify target location (as a HostName) for maximum usefulness -> quickly figure out if you are on a fast connection (Fast or Average) 
			//by testing networking conditions to/from supplied domain...
			auto host = HostName(L"www.bing.com");
			UINT port = 443;
			auto speed = InternetConnectionState::GetInternetConnectionSpeed(host, port);

			auto rawspeed = to_wstring(InternetConnectionState::RawSpeed());

			if (speed == ConnectionSpeed::High)
			{
				text.Text(L"High speed connection!\nSpeed: " + rawspeed + L" \nTarget: " + host.DisplayName().c_str() + L":" + to_wstring(port));
			}
			else if (speed == ConnectionSpeed::Medium)
			{
				text.Text(L"Medium speed connection!\nSpeed: " + rawspeed + L" \nTarget: " + host.DisplayName().c_str() + L":" + to_wstring(port));
			}
			else if (speed == ConnectionSpeed::Low)
			{
				text.Text(L"Low speed connection!\nSpeed: " + rawspeed + L" \nTarget: " + host.DisplayName().c_str() + L":" + to_wstring(port));
			}
			else
			{
				text.Text(L"Connection speed unknown. Careful!");
			}
		}
		else
		{
			text.Text(L"You are not connected to the Internet...");
		}

		text.FontFamily(FontFamily(L"Segoe UI Semibold"));
		text.FontSize(72.0);
		text.Foreground(SolidColorBrush(Colors::MidnightBlue()));
		text.VerticalAlignment(VerticalAlignment::Center);
		text.TextAlignment(TextAlignment::Center);
		text.TextWrapping(TextWrapping::Wrap);
		window.Content(text);
		window.Activate();
	}
};

int __stdcall wWinMain(HINSTANCE, HINSTANCE, PWSTR, int)
{
	Application::Start([](auto &&)
	{
		make<App>();
	});
	
	return 0;
}
