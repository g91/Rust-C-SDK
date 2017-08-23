#pragma once

namespace rust 
{
	class NoiseParameters : public ValueType // 0x0
	{
	public:
		int Octaves; // 0x10 (size: 0x4, flags: 0x6, type: 0x8)
		float Frequency; // 0x14 (size: 0x4, flags: 0x6, type: 0xc)
		float Amplitude; // 0x18 (size: 0x4, flags: 0x6, type: 0xc)
		float Offset; // 0x1c (size: 0x4, flags: 0x6, type: 0xc)
	}; // size = 0x20
}
