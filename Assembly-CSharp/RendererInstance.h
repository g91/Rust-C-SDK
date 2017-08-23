#pragma once

#include "..\UnityEngine\UnicodeString*.h"

namespace rust 
{
	class RendererInstance : public ValueType // 0x0
	{
	public:
		bool IsVisible; // 0x10 (size: 0x1, flags: 0x6, type: 0x2)
		bool CastShadows; // 0x11 (size: 0x1, flags: 0x6, type: 0x2)
		bool Enabled; // 0x12 (size: 0x1, flags: 0x6, type: 0x2)
		bool RecieveShadows; // 0x13 (size: 0x1, flags: 0x6, type: 0x2)
		float Size; // 0x14 (size: 0x4, flags: 0x6, type: 0xc)
		float Distance; // 0x18 (size: 0x4, flags: 0x6, type: 0xc)
		int BoneCount; // 0x1c (size: 0x4, flags: 0x6, type: 0x8)
		int MaterialCount; // 0x20 (size: 0x4, flags: 0x6, type: 0x8)
		int VertexCount; // 0x24 (size: 0x4, flags: 0x6, type: 0x8)
		int TriangleCount; // 0x28 (size: 0x4, flags: 0x6, type: 0x8)
		int SubMeshCount; // 0x2c (size: 0x4, flags: 0x6, type: 0x8)
		int BlendShapeCount; // 0x30 (size: 0x4, flags: 0x6, type: 0x8)
		UnityEngine::UnicodeString* RenderType; // 0x38 (size: 0x8, flags: 0x6, type: 0xe)
		UnityEngine::UnicodeString* MeshName; // 0x40 (size: 0x8, flags: 0x6, type: 0xe)
		UnityEngine::UnicodeString* ObjectName; // 0x48 (size: 0x8, flags: 0x6, type: 0xe)
		UnityEngine::UnicodeString* EntityName; // 0x50 (size: 0x8, flags: 0x6, type: 0xe)
		unsigned int EntityId; // 0x58 (size: 0x4, flags: 0x6, type: 0x9)
		bool UpdateWhenOffscreen; // 0x5c (size: 0x1, flags: 0x6, type: 0x2)
		int ParticleCount; // 0x60 (size: 0x4, flags: 0x6, type: 0x8)
	}; // size = 0x68
}
