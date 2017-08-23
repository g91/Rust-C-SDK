#pragma once

#include "..\UnityEngine\UnicodeString*.h"

namespace System
{
	namespace ComponentModel
{
	class TypeDescriptionProviderAttribute : public Attribute // 0x0
	{
	public:
		UnityEngine::UnicodeString* typeName; // 0x10 (size: 0x8, flags: 0x1, type: 0xe)
	}; // size = 0x18
}
