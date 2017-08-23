#pragma once

#include "..\UnityEngine\UnicodeString*.h"
#include "..\System\Type.h"

namespace System
{
	namespace Xml
{
{
		namespace Serialization
{
	class XmlTextAttribute : public Attribute // 0x0
	{
	public:
		UnityEngine::UnicodeString* dataType; // 0x10 (size: 0x8, flags: 0x1, type: 0xe)
		System::Type* type; // 0x18 (size: 0x8, flags: 0x1, type: 0x12)
	}; // size = 0x20
}
