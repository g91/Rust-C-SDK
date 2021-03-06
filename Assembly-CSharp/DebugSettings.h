#pragma once

namespace rust 
{
	class DebugSettings : public Object // 0x0
	{
	public:
		bool forceFallback; // 0x10 (size: 0x1, flags: 0x6, type: 0x2)
		bool log; // 0x11 (size: 0x1, flags: 0x6, type: 0x2)
		bool showMipChain; // 0x12 (size: 0x1, flags: 0x6, type: 0x2)
		bool showMain; // 0x13 (size: 0x1, flags: 0x6, type: 0x2)
		bool showGrid; // 0x14 (size: 0x1, flags: 0x6, type: 0x2)
		bool showFallback; // 0x15 (size: 0x1, flags: 0x6, type: 0x2)
		int showMainLod; // 0x18 (size: 0x4, flags: 0x6, type: 0x8)
	}; // size = 0x20
}
