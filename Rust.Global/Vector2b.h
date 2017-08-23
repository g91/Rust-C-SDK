#pragma once

namespace rust 
{
	class Vector2b : public ValueType // 0x0
	{
	public:
		bool x; // 0x10 (size: 0x1, flags: 0x6, type: 0x2)
		bool y; // 0x11 (size: 0x1, flags: 0x6, type: 0x2)
	}; // size = 0x18
}
