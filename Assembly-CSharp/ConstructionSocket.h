#pragma once

namespace rust 
{
	class ConstructionSocket : public Socket_Base // 0xe0
	{
	public:
		Type socketType; // 0xe0 (size: 0x4, flags: 0x6, type: 0x11)
		int rotationDegrees; // 0xe4 (size: 0x4, flags: 0x6, type: 0x8)
		int rotationOffset; // 0xe8 (size: 0x4, flags: 0x6, type: 0x8)
		bool restrictPlacementAngle; // 0xec (size: 0x1, flags: 0x6, type: 0x2)
		float faceAngle; // 0xf0 (size: 0x4, flags: 0x6, type: 0xc)
		float angleAllowed; // 0xf4 (size: 0x4, flags: 0x6, type: 0xc)
		float support; // 0xf8 (size: 0x4, flags: 0x6, type: 0xc)
	}; // size = 0x100
}
