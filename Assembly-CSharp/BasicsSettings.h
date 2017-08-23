#pragma once

namespace rust 
{
	class BasicsSettings : public ValueType // 0x0
	{
	public:
		float temperatureShift; // 0x10 (size: 0x4, flags: 0x6, type: 0xc)
		float tint; // 0x14 (size: 0x4, flags: 0x6, type: 0xc)
		float hue; // 0x18 (size: 0x4, flags: 0x6, type: 0xc)
		float saturation; // 0x1c (size: 0x4, flags: 0x6, type: 0xc)
		float vibrance; // 0x20 (size: 0x4, flags: 0x6, type: 0xc)
		float value; // 0x24 (size: 0x4, flags: 0x6, type: 0xc)
		float contrast; // 0x28 (size: 0x4, flags: 0x6, type: 0xc)
		float gain; // 0x2c (size: 0x4, flags: 0x6, type: 0xc)
		float gamma; // 0x30 (size: 0x4, flags: 0x6, type: 0xc)
	}; // size = 0x38
}