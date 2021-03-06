#pragma once

#include "..\System\Net\Sockets\SocketInformationOptions.h"

namespace System
{
	namespace Net
{
{
		namespace Sockets
{
	class SocketInformation : public ValueType // 0x0
	{
	public:
		System::Net::Sockets::SocketInformationOptions options; // 0x10 (size: 0x4, flags: 0x1, type: 0x11)
		unsigned char* protocol_info; // 0x18 (size: 0x8, flags: 0x1, type: 0x1d)
	}; // size = 0x20
}
