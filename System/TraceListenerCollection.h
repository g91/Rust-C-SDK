#pragma once

#include "..\System\Collections\ArrayList.h"

namespace System
{
	namespace Diagnostics
{
	class TraceListenerCollection : public Object // 0x0
	{
	public:
		System::Collections::ArrayList* listeners; // 0x10 (size: 0x8, flags: 0x1, type: 0x12)
	}; // size = 0x18
}
