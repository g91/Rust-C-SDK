#pragma once

namespace rust 
{
	class InstanceData : public Object // 0x0
	{
	public:
		int dataInt; // 0x10 (size: 0x4, flags: 0x86, type: 0x8)
		int blueprintTarget; // 0x14 (size: 0x4, flags: 0x86, type: 0x8)
		int blueprintAmount; // 0x18 (size: 0x4, flags: 0x86, type: 0x8)
		bool ShouldPool; // 0x1c (size: 0x1, flags: 0x6, type: 0x2)
		bool _disposed; // 0x1d (size: 0x1, flags: 0x1, type: 0x2)
	}; // size = 0x20
}
