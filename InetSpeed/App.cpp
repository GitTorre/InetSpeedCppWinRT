#include "pch.h"
#include "InternetConnectionState.h"
#include <string>

using namespace winrt;

using namespace Windows::ApplicationModel::Activation;
using namespace Windows::Foundation;
using namespace Windows::ApplicationModel::Core;
using namespace Windows::UI::Core;
using namespace Windows::UI;
using namespace Windows::UI::Xaml;
using namespace Windows::UI::Xaml::Controls;
using namespace Windows::UI::Xaml::Media;
using namespace InetSpeed;
using namespace std;

struct App : ApplicationT<App>
{
public:

	void OnLaunched(LaunchActivatedEventArgs const &)
	{
		Window window = Window::Current();
		InternetDetect(window);
		ProcessPointerEvents(window);
	}

	void ProcessPointerEvents(Window const & window)
	{
		CoreWindow coreWindow = window.CoreWindow();
		coreWindow.PointerPressed([=](auto && ...)
		{
			InternetDetect(window);
		});
		coreWindow.Activate();
	}

	void InternetDetect(Window const & window)
	{
		TextBlock text;
		if (InternetConnectionState::InternetConnected())
		{
			//No HostName specified...
			//auto speed = InternetConnectionState::GetInternetConnectionSpeed();

			//Specify target location (as a HostName) for maximum usefulness -> quickly figure out if you are on a fast connection (Fast or Average) 
			//by testing networking conditions to/from supplied domain...
			HostName host = L"bing.com";
			auto speed = InternetConnectionState::GetInternetConnectionSpeedWithHostName(host);

			wstring rawspeed = to_wstring(InternetConnectionState::RawSpeed());

			if (speed == ConnectionSpeed::High)
			{
				text.Text(L"Connected High!\nSpeed: " + rawspeed + L" \nTarget: " + host.DisplayName().c_str());
			}
			else if (speed == ConnectionSpeed::Average)
			{
				text.Text(L"Connected Average!\nSpeed: " + rawspeed + L" \nTarget: " + host.DisplayName().c_str());
			}
			else if (speed == ConnectionSpeed::Low)
			{
				text.Text(L"Connected Low!\nSpeed: " + rawspeed + L" \nTarget: " + host.DisplayName().c_str());
			}
			else
			{
				text.Text(L"Connected Unknown. Careful!");
			}
		}
		else
		{
			text.Text(L"You are not connected to Internet!");
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
