#pragma once

namespace rust 
{
	class TOD_Billboard : public MonoBehaviour // 0x18
	{
	public:
		float Altitude; // 0x18 (size: 0x4, flags: 0x6, type: 0xc)
		float Azimuth; // 0x1c (size: 0x4, flags: 0x6, type: 0xc)
		float Distance; // 0x20 (size: 0x4, flags: 0x6, type: 0xc)
		float Size; // 0x24 (size: 0x4, flags: 0x6, type: 0xc)
	}; // size = 0x28
}
