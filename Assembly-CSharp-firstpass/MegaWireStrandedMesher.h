#pragma once

#include "..\UnityEngine\Matrix4x4.h"
#include "..\UnityEngine\Vector3.h"

namespace rust 
{
	class MegaWireStrandedMesher : public MegaWireMesher // 0x18
	{
	public:
		UnityEngine::Vector3* cross; // 0x18 (size: 0x8, flags: 0x1, type: 0x1d)
		UnityEngine::Vector3* cnorms; // 0x20 (size: 0x8, flags: 0x1, type: 0x1d)
		UnityEngine::Matrix4x4 wtm; // 0x28 (size: 0x40, flags: 0x1, type: 0x11)
		int sides; // 0x68 (size: 0x4, flags: 0x6, type: 0x8)
		int segments; // 0x6c (size: 0x4, flags: 0x6, type: 0x8)
		float uvtwist; // 0x70 (size: 0x4, flags: 0x6, type: 0xc)
		float uvtilex; // 0x74 (size: 0x4, flags: 0x6, type: 0xc)
		float uvtiley; // 0x78 (size: 0x4, flags: 0x6, type: 0xc)
		int strands; // 0x7c (size: 0x4, flags: 0x6, type: 0x8)
		float offset; // 0x80 (size: 0x4, flags: 0x6, type: 0xc)
		float Twist; // 0x84 (size: 0x4, flags: 0x6, type: 0xc)
		bool cap; // 0x88 (size: 0x1, flags: 0x6, type: 0x2)
		float strandRadius; // 0x8c (size: 0x4, flags: 0x6, type: 0xc)
		float SegsPerUnit; // 0x90 (size: 0x4, flags: 0x6, type: 0xc)
		float TwistPerUnit; // 0x94 (size: 0x4, flags: 0x6, type: 0xc)
		bool calcBounds; // 0x98 (size: 0x1, flags: 0x6, type: 0x2)
		bool calcTangents; // 0x99 (size: 0x1, flags: 0x6, type: 0x2)
		bool genuv; // 0x9a (size: 0x1, flags: 0x6, type: 0x2)
		bool linInterp; // 0x9b (size: 0x1, flags: 0x6, type: 0x2)
		UnityEngine::Vector3 ropeup; // 0x9c (size: 0xc, flags: 0x1, type: 0x11)
	}; // size = 0xa8
}
