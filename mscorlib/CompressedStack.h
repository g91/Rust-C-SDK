#pragma once

#include "..\System\Collections\ArrayList.h"

namespace System
{
	namespace Threading
{
	class CompressedStack : public Object // 0x0
	{
	public:
		System::Collections::ArrayList* _list; // 0x10 (size: 0x8, flags: 0x1, type: 0x12)
	}; // size = 0x18
}
