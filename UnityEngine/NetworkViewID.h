#pragma once

namespace UnityEngine
{
	class NetworkViewID : public ValueType // 0x0
	{
	public:
		int a; // 0x10 (size: 0x4, flags: 0x1, type: 0x8)
		int b; // 0x14 (size: 0x4, flags: 0x1, type: 0x8)
		int c; // 0x18 (size: 0x4, flags: 0x1, type: 0x8)
	}; // size = 0x20
}
