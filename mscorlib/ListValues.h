#pragma once

#include "..\System\Collections\SortedList.h"

namespace rust 
{
	class ListValues : public Object // 0x0
	{
	public:
		System::Collections::SortedList* host; // 0x10 (size: 0x8, flags: 0x1, type: 0x12)
	}; // size = 0x18
}
