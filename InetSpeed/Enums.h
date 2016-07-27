#pragma once
namespace InetSpeed
{
	enum class ConnectionSpeed
	{
		High,
		Average,
		Low,
		Unknown
	};

	enum class ConnectionType
	{
		Cellular,
		WiFi,
		LAN,
		None
	};
}