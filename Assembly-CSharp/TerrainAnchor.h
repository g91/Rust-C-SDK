#pragma once

namespace rust 
{
	class TerrainAnchor : public PrefabAttribute // 0x98
	{
	public:
		float Extents; // 0x98 (size: 0x4, flags: 0x6, type: 0xc)
		float Offset; // 0x9c (size: 0x4, flags: 0x6, type: 0xc)
	}; // size = 0xa0
}
