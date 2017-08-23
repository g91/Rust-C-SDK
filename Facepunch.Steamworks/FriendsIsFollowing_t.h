#pragma once

#include "..\SteamNative\Result.h"

namespace SteamNative
{
	class FriendsIsFollowing_t : public ValueType // 0x0
	{
	public:
		SteamNative::Result Result; // 0x10 (size: 0x4, flags: 0x6, type: 0x11)
		unsigned __int64 SteamID; // 0x14 (size: 0x8, flags: 0x6, type: 0xb)
		bool IsFollowing; // 0x1c (size: 0x1, flags: 0x1006, type: 0x2)
	}; // size = 0x20
}
