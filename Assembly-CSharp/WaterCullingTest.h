#pragma once

#include "..\UnityEngine\List.h"

namespace rust 
{
	class WaterCullingTest : public MonoBehaviour // 0x18
	{
	public:
		UnityEngine::List<WaterCullingVolume>* list; // 0x18 (size: 0x8, flags: 0x1, type: 0x15)
	}; // size = 0x20
}
