#pragma once

#include "..\System\Collections\Generic\IList<System\Net\IPAddress>.h"

namespace System
{
	namespace Net
{
{
		namespace NetworkInformation
{
	class IPAddressCollection : public Object // 0x0
	{
	public:
		System::Collections::Generic::IList<System::Net::IPAddress> list; // 0x10 (size: 0x8, flags: 0x1, type: 0x15)
	}; // size = 0x18
}
