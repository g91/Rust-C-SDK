#pragma once

namespace rust 
{
	class NetworkVisibilityGrid : public MonoBehaviour // 0x18
	{
	public:
		int startID; // 0x18 (size: 0x4, flags: 0x6, type: 0x8)
		int gridSize; // 0x1c (size: 0x4, flags: 0x6, type: 0x8)
		int cellCount; // 0x20 (size: 0x4, flags: 0x6, type: 0x8)
		int visibilityRadius; // 0x24 (size: 0x4, flags: 0x6, type: 0x8)
		float switchTolerance; // 0x28 (size: 0x4, flags: 0x6, type: 0xc)
	}; // size = 0x30
}
