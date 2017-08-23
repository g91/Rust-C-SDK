#pragma once

#include "..\UnityEngine\UnicodeString*.h"

namespace System
{
	namespace Security
{
{
		namespace Permissions
{
	class RegistryPermissionAttribute : public CodeAccessSecurityAttribute // 0x18
	{
	public:
		UnityEngine::UnicodeString* create; // 0x18 (size: 0x8, flags: 0x1, type: 0xe)
		UnityEngine::UnicodeString* read; // 0x20 (size: 0x8, flags: 0x1, type: 0xe)
		UnityEngine::UnicodeString* write; // 0x28 (size: 0x8, flags: 0x1, type: 0xe)
		UnityEngine::UnicodeString* changeAccessControl; // 0x30 (size: 0x8, flags: 0x1, type: 0xe)
		UnityEngine::UnicodeString* viewAccessControl; // 0x38 (size: 0x8, flags: 0x1, type: 0xe)
	}; // size = 0x40
}
