#pragma once

namespace System
{
	namespace IO
{
	class timespec : public ValueType // 0x0
	{
	public:
		int tv_sec; // 0x10 (size: 0x4, flags: 0x6, type: 0x8)
		int tv_usec; // 0x14 (size: 0x4, flags: 0x6, type: 0x8)
	}; // size = 0x18
}
