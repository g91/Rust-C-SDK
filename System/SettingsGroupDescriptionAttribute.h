#pragma once

#include "..\UnityEngine\UnicodeString*.h"

namespace System
{
	namespace Configuration
{
	class SettingsGroupDescriptionAttribute : public Attribute // 0x0
	{
	public:
		UnityEngine::UnicodeString* desc; // 0x10 (size: 0x8, flags: 0x1, type: 0xe)
	}; // size = 0x18
}
