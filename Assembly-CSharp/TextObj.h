#pragma once

#include "..\UnityEngine\UnicodeString*.h"
#include "..\UnityEngine\Rect.h"

namespace rust 
{
	class TextObj : public BaseObject // 0x88
	{
	public:
		UnityEngine::UnicodeString* text; // 0x88 (size: 0x8, flags: 0x6, type: 0xe)
		UnityEngine::Rect rect; // 0x90 (size: 0x10, flags: 0x4, type: 0x11)
		bool draw; // 0xa0 (size: 0x1, flags: 0x4, type: 0x2)
	}; // size = 0xa8
}
