#pragma once

#include "..\UnityEngine\UnicodeString*.h"

namespace rust 
{
	class SimpleAvtPart : public AvtPart // 0x0
	{
	public:
		UnityEngine::UnicodeString* val; // 0x10 (size: 0x8, flags: 0x1, type: 0xe)
	}; // size = 0x18
}
