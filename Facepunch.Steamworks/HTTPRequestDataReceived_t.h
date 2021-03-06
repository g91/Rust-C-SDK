#pragma once

namespace SteamNative
{
	class HTTPRequestDataReceived_t : public ValueType // 0x0
	{
	public:
		unsigned int Request; // 0x10 (size: 0x4, flags: 0x6, type: 0x9)
		unsigned __int64 ContextValue; // 0x18 (size: 0x8, flags: 0x6, type: 0xb)
		unsigned int COffset; // 0x20 (size: 0x4, flags: 0x6, type: 0x9)
		unsigned int CBytesReceived; // 0x24 (size: 0x4, flags: 0x6, type: 0x9)
	}; // size = 0x28
}
