#pragma once

#include "..\UnityEngine\UnicodeString*.h"
#include "..\System\Type.h"
#include "..\System\Reflection\Emit\TypeBuilder.h"
#include "..\System\Reflection\Emit\CustomAttributeBuilder.h"
#include "..\System\Reflection\Emit\MethodBuilder.h"
#include "..\System\Reflection\EventAttributes.h"

namespace System
{
	namespace Reflection
{
{
		namespace Emit
{
	class EventBuilder : public Object // 0x0
	{
	public:
		UnityEngine::UnicodeString* name; // 0x10 (size: 0x8, flags: 0x3, type: 0xe)
		System::Type* type; // 0x18 (size: 0x8, flags: 0x1, type: 0x12)
		System::Reflection::Emit::TypeBuilder* typeb; // 0x20 (size: 0x8, flags: 0x1, type: 0x12)
		System::Reflection::Emit::CustomAttributeBuilder* cattrs; // 0x28 (size: 0x8, flags: 0x1, type: 0x1d)
		System::Reflection::Emit::MethodBuilder* add_method; // 0x30 (size: 0x8, flags: 0x3, type: 0x12)
		System::Reflection::Emit::MethodBuilder* remove_method; // 0x38 (size: 0x8, flags: 0x3, type: 0x12)
		System::Reflection::Emit::MethodBuilder* raise_method; // 0x40 (size: 0x8, flags: 0x3, type: 0x12)
		System::Reflection::Emit::MethodBuilder* other_methods; // 0x48 (size: 0x8, flags: 0x3, type: 0x1d)
		System::Reflection::EventAttributes attrs; // 0x50 (size: 0x4, flags: 0x3, type: 0x11)
		int table_idx; // 0x54 (size: 0x4, flags: 0x1, type: 0x8)
	}; // size = 0x58
}
