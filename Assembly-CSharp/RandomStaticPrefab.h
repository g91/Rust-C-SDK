#pragma once

#include "..\UnityEngine\UnicodeString*.h"

namespace rust 
{
	class RandomStaticPrefab : public MonoBehaviour // 0x18
	{
	public:
		UnityEngine::UnicodeString* ResourceFolder; // 0x18 (size: 0x8, flags: 0x6, type: 0xe)
		float Probability; // 0x20 (size: 0x4, flags: 0x6, type: 0xc)
	}; // size = 0x28
}
