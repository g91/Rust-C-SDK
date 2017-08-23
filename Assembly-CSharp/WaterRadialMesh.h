#pragma once

#include "..\UnityEngine\Mesh.h"

namespace rust 
{
	class WaterRadialMesh : public Object // 0x0
	{
	public:
		UnityEngine::Mesh* meshes; // 0x10 (size: 0x8, flags: 0x1, type: 0x1d)
		bool initialized; // 0x18 (size: 0x1, flags: 0x1, type: 0x2)
	}; // size = 0x20
}
