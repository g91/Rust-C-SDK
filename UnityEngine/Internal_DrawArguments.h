#pragma once

#include "..\UnityEngine\Rect.h"

namespace UnityEngine
{
	class Internal_DrawArguments : public ValueType // 0x0
	{
	public:
		__int64 target; // 0x10 (size: 0x8, flags: 0x6, type: 0x18)
		UnityEngine::Rect position; // 0x18 (size: 0x10, flags: 0x6, type: 0x11)
		int isHover; // 0x28 (size: 0x4, flags: 0x6, type: 0x8)
		int isActive; // 0x2c (size: 0x4, flags: 0x6, type: 0x8)
		int on; // 0x30 (size: 0x4, flags: 0x6, type: 0x8)
		int hasKeyboardFocus; // 0x34 (size: 0x4, flags: 0x6, type: 0x8)
	}; // size = 0x38
}
