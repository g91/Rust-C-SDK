#pragma once

namespace UnityEngine
{
	namespace SceneManagement
{
	class Scene : public ValueType // 0x0
	{
	public:
		int m_Handle; // 0x10 (size: 0x4, flags: 0x1, type: 0x8)
	}; // size = 0x18
}
