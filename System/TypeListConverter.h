#pragma once

#include "..\System\Type.h"

namespace System
{
	namespace ComponentModel
{
	class TypeListConverter : public TypeConverter // 0x0
	{
	public:
		System::Type* types; // 0x10 (size: 0x8, flags: 0x1, type: 0x1d)
	}; // size = 0x18
}
