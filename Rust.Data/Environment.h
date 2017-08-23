#pragma once

namespace ProtoBuf
{
	class Environment : public Object // 0x0
	{
	public:
		__int64 dateTime; // 0x10 (size: 0x8, flags: 0x86, type: 0xa)
		float clouds; // 0x18 (size: 0x4, flags: 0x86, type: 0xc)
		float fog; // 0x1c (size: 0x4, flags: 0x86, type: 0xc)
		float wind; // 0x20 (size: 0x4, flags: 0x86, type: 0xc)
		float rain; // 0x24 (size: 0x4, flags: 0x86, type: 0xc)
		bool ShouldPool; // 0x28 (size: 0x1, flags: 0x6, type: 0x2)
		bool _disposed; // 0x29 (size: 0x1, flags: 0x1, type: 0x2)
	}; // size = 0x30
}
