#pragma once

#include "..\UnityEngine\UnicodeString*.h"

namespace System
{
	namespace Xml
{
{
		namespace Serialization
{
	class Select : public Object // 0x0
	{
	public:
		UnityEngine::UnicodeString* TypeName; // 0x10 (size: 0x8, flags: 0x6, type: 0xe)
		UnityEngine::UnicodeString** TypeAttributes; // 0x18 (size: 0x8, flags: 0x6, type: 0x1d)
		UnityEngine::UnicodeString* TypeMember; // 0x20 (size: 0x8, flags: 0x6, type: 0xe)
	}; // size = 0x28
}
