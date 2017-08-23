#pragma once

#include "..\System\Xml\XPath\Expression.h"
#include "..\System\Xml\XPath\XPathNavigator.h"

namespace Mono
{
	namespace Xml
{
{
		namespace Xsl
{
	class XsltDocument : public XPathFunction // 0x0
	{
	public:
		System::Xml::XPath::Expression* arg0; // 0x10 (size: 0x8, flags: 0x1, type: 0x12)
		System::Xml::XPath::Expression* arg1; // 0x18 (size: 0x8, flags: 0x1, type: 0x12)
		System::Xml::XPath::XPathNavigator* doc; // 0x20 (size: 0x8, flags: 0x1, type: 0x12)
	}; // size = 0x28
}
