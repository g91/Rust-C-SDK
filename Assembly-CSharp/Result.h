#pragma once

namespace rust 
{
	class Result : public ValueType // 0x0
	{
	public:
		int passed; // 0x10 (size: 0x4, flags: 0x6, type: 0x8)
		float coverage; // 0x14 (size: 0x4, flags: 0x6, type: 0xc)
		float smoothCoverage; // 0x18 (size: 0x4, flags: 0x6, type: 0xc)
		float weightedCoverage; // 0x1c (size: 0x4, flags: 0x6, type: 0xc)
		float weightedSmoothCoverage; // 0x20 (size: 0x4, flags: 0x6, type: 0xc)
		bool originOccluded; // 0x24 (size: 0x1, flags: 0x6, type: 0x2)
		int frame; // 0x28 (size: 0x4, flags: 0x6, type: 0x8)
		float originVisibility; // 0x2c (size: 0x4, flags: 0x6, type: 0xc)
		float originSmoothVisibility; // 0x30 (size: 0x4, flags: 0x6, type: 0xc)
	}; // size = 0x38
}
