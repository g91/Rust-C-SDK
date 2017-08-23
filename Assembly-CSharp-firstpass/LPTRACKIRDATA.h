#pragma once

#include "..\System\UInt16.h"

namespace rust 
{
	class LPTRACKIRDATA : public ValueType // 0x0
	{
	public:
		System::UInt16 wNPStatus; // 0x10 (size: 0x2, flags: 0x6, type: 0x7)
		System::UInt16 wPFrameSignature; // 0x12 (size: 0x2, flags: 0x6, type: 0x7)
		unsigned int dwNPIOData; // 0x14 (size: 0x4, flags: 0x6, type: 0x9)
		float fNPRoll; // 0x18 (size: 0x4, flags: 0x6, type: 0xc)
		float fNPPitch; // 0x1c (size: 0x4, flags: 0x6, type: 0xc)
		float fNPYaw; // 0x20 (size: 0x4, flags: 0x6, type: 0xc)
		float fNPX; // 0x24 (size: 0x4, flags: 0x6, type: 0xc)
		float fNPY; // 0x28 (size: 0x4, flags: 0x6, type: 0xc)
		float fNPZ; // 0x2c (size: 0x4, flags: 0x6, type: 0xc)
		float fNPRawX; // 0x30 (size: 0x4, flags: 0x6, type: 0xc)
		float fNPRawY; // 0x34 (size: 0x4, flags: 0x6, type: 0xc)
		float fNPRawZ; // 0x38 (size: 0x4, flags: 0x6, type: 0xc)
		float fNPDeltaX; // 0x3c (size: 0x4, flags: 0x6, type: 0xc)
		float fNPDeltaY; // 0x40 (size: 0x4, flags: 0x6, type: 0xc)
		float fNPDeltaZ; // 0x44 (size: 0x4, flags: 0x6, type: 0xc)
		float fNPSmoothX; // 0x48 (size: 0x4, flags: 0x6, type: 0xc)
		float fNPSmoothY; // 0x4c (size: 0x4, flags: 0x6, type: 0xc)
		float fNPSmoothZ; // 0x50 (size: 0x4, flags: 0x6, type: 0xc)
	}; // size = 0x58
}
