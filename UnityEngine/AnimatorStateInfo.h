#pragma once

namespace UnityEngine
{
	class AnimatorStateInfo : public ValueType // 0x0
	{
	public:
		int m_Name; // 0x10 (size: 0x4, flags: 0x1, type: 0x8)
		int m_Path; // 0x14 (size: 0x4, flags: 0x1, type: 0x8)
		int m_FullPath; // 0x18 (size: 0x4, flags: 0x1, type: 0x8)
		float m_NormalizedTime; // 0x1c (size: 0x4, flags: 0x1, type: 0xc)
		float m_Length; // 0x20 (size: 0x4, flags: 0x1, type: 0xc)
		float m_Speed; // 0x24 (size: 0x4, flags: 0x1, type: 0xc)
		float m_SpeedMultiplier; // 0x28 (size: 0x4, flags: 0x1, type: 0xc)
		int m_Tag; // 0x2c (size: 0x4, flags: 0x1, type: 0x8)
		int m_Loop; // 0x30 (size: 0x4, flags: 0x1, type: 0x8)
	}; // size = 0x38
}
