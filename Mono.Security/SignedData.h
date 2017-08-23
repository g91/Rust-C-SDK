#pragma once

#include "..\UnityEngine\UnicodeString*.h"
#include "..\Mono\Security\PKCS7\ContentInfo.h"
#include "..\Mono\Security\X509\X509CertificateCollection.h"
#include "..\System\Collections\ArrayList.h"
#include "..\Mono\Security\PKCS7\SignerInfo.h"

namespace rust 
{
	class SignedData : public Object // 0x0
	{
	public:
		UnityEngine::UnicodeString* hashAlgorithm; // 0x10 (size: 0x8, flags: 0x1, type: 0xe)
		Mono::Security::PKCS7::ContentInfo* contentInfo; // 0x18 (size: 0x8, flags: 0x1, type: 0x12)
		Mono::Security::X509::X509CertificateCollection* certs; // 0x20 (size: 0x8, flags: 0x1, type: 0x12)
		System::Collections::ArrayList* crls; // 0x28 (size: 0x8, flags: 0x1, type: 0x12)
		Mono::Security::PKCS7::SignerInfo* signerInfo; // 0x30 (size: 0x8, flags: 0x1, type: 0x12)
		unsigned char version; // 0x38 (size: 0x1, flags: 0x1, type: 0x5)
		bool mda; // 0x39 (size: 0x1, flags: 0x1, type: 0x2)
		bool signed; // 0x3a (size: 0x1, flags: 0x1, type: 0x2)
	}; // size = 0x40
}
