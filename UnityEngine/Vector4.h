#pragma once

namespace UnityEngine
{
	class Vector4 : public ValueType // 0x0
	{
	public:
		float x; // 0x10 (size: 0x4, flags: 0x6, type: 0xc)
		float y; // 0x14 (size: 0x4, flags: 0x6, type: 0xc)
		float z; // 0x18 (size: 0x4, flags: 0x6, type: 0xc)
		float w; // 0x1c (size: 0x4, flags: 0x6, type: 0xc)
	}; // size = 0x20
}