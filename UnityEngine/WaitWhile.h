#pragma once

namespace UnityEngine
{
	class WaitWhile : public CustomYieldInstruction // 0x0
	{
	public:
		System.Func<bool> m_Predicate; // 0x10 (size: 0x8, flags: 0x1, type: 0x15)
	}; // size = 0x18
}