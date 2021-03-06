#pragma once

#include "..\UnityEngine\ParticleSystem.h"

namespace rust 
{
	class TOD_WeatherManager : public MonoBehaviour // 0x18
	{
	public:
		UnityEngine::ParticleSystem* RainParticleSystem; // 0x18 (size: 0x8, flags: 0x6, type: 0x12)
		float FadeTime; // 0x20 (size: 0x4, flags: 0x6, type: 0xc)
		RainType Rain; // 0x24 (size: 0x4, flags: 0x6, type: 0x11)
		CloudType Clouds; // 0x28 (size: 0x4, flags: 0x6, type: 0x11)
		AtmosphereType Atmosphere; // 0x2c (size: 0x4, flags: 0x6, type: 0x11)
		float cloudOpacityMax; // 0x30 (size: 0x4, flags: 0x1, type: 0xc)
		float cloudBrightnessMax; // 0x34 (size: 0x4, flags: 0x1, type: 0xc)
		float atmosphereBrightnessMax; // 0x38 (size: 0x4, flags: 0x1, type: 0xc)
		float rainEmissionMax; // 0x3c (size: 0x4, flags: 0x1, type: 0xc)
		float cloudOpacity; // 0x40 (size: 0x4, flags: 0x1, type: 0xc)
		float cloudCoverage; // 0x44 (size: 0x4, flags: 0x1, type: 0xc)
		float cloudBrightness; // 0x48 (size: 0x4, flags: 0x1, type: 0xc)
		float atmosphereFog; // 0x4c (size: 0x4, flags: 0x1, type: 0xc)
		float atmosphereBrightness; // 0x50 (size: 0x4, flags: 0x1, type: 0xc)
		float rainEmission; // 0x54 (size: 0x4, flags: 0x1, type: 0xc)
	}; // size = 0x58
}
