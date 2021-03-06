#pragma once

#include "..\UnityEngine\UnicodeString*.h"

namespace System
{
	namespace CodeDom
{
	class CodeLinePragma : public Object // 0x0
	{
	public:
		UnityEngine::UnicodeString* fileName; // 0x10 (size: 0x8, flags: 0x1, type: 0xe)
		int lineNumber; // 0x18 (size: 0x4, flags: 0x1, type: 0x8)
	}; // size = 0x20
}
