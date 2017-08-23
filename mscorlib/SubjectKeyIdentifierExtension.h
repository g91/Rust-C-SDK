#pragma once

namespace Mono
{
	namespace Security
{
{
		namespace X509
{
{
{
			namespace Extensions
{
	class SubjectKeyIdentifierExtension : public X509Extension // 0x28
	{
	public:
		unsigned char* ski; // 0x28 (size: 0x8, flags: 0x1, type: 0x1d)
	}; // size = 0x30
}
