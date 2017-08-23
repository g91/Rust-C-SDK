#pragma once

namespace ProtoBuf
{
	class PlayerMetabolism : public Object // 0x0
	{
	public:
		float health; // 0x10 (size: 0x4, flags: 0x86, type: 0xc)
		float calories; // 0x14 (size: 0x4, flags: 0x86, type: 0xc)
		float hydration; // 0x18 (size: 0x4, flags: 0x86, type: 0xc)
		float heartrate; // 0x1c (size: 0x4, flags: 0x86, type: 0xc)
		float temperature; // 0x20 (size: 0x4, flags: 0x86, type: 0xc)
		float poison; // 0x24 (size: 0x4, flags: 0x86, type: 0xc)
		float radiation_level; // 0x28 (size: 0x4, flags: 0x86, type: 0xc)
		float wetness; // 0x2c (size: 0x4, flags: 0x86, type: 0xc)
		float dirtyness; // 0x30 (size: 0x4, flags: 0x86, type: 0xc)
		float oxygen; // 0x34 (size: 0x4, flags: 0x86, type: 0xc)
		float bleeding; // 0x38 (size: 0x4, flags: 0x86, type: 0xc)
		float radiation_poisoning; // 0x3c (size: 0x4, flags: 0x86, type: 0xc)
		float comfort; // 0x40 (size: 0x4, flags: 0x86, type: 0xc)
		float pending_health; // 0x44 (size: 0x4, flags: 0x86, type: 0xc)
		bool ShouldPool; // 0x48 (size: 0x1, flags: 0x6, type: 0x2)
		bool _disposed; // 0x49 (size: 0x1, flags: 0x1, type: 0x2)
	}; // size = 0x50
}