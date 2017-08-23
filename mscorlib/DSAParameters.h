#pragma once

namespace System
{
	namespace Security
{
{
		namespace Cryptography
{
	class DSAParameters : public ValueType // 0x0
	{
	public:
		int Counter; // 0x10 (size: 0x4, flags: 0x6, type: 0x8)
		unsigned char* G; // 0x18 (size: 0x8, flags: 0x6, type: 0x1d)
		unsigned char* J; // 0x20 (size: 0x8, flags: 0x6, type: 0x1d)
		unsigned char* P; // 0x28 (size: 0x8, flags: 0x6, type: 0x1d)
		unsigned char* Q; // 0x30 (size: 0x8, flags: 0x6, type: 0x1d)
		unsigned char* Seed; // 0x38 (size: 0x8, flags: 0x6, type: 0x1d)
		unsigned char* X; // 0x40 (size: 0x8, flags: 0x86, type: 0x1d)
		unsigned char* Y; // 0x48 (size: 0x8, flags: 0x6, type: 0x1d)
	}; // size = 0x50
}
