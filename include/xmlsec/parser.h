/** 
 * XMLSec library
 *
 * XML Parser transform
 *
 * See Copyright for the status of this software.
 * 
 * Author: Aleksey Sanin <aleksey@aleksey.com>
 */
#ifndef __XMLSEC_PARSER_H__
#define __XMLSEC_PARSER_H__    

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */ 

#include <libxml/tree.h>

#include <xmlsec/xmlsec.h>
#include <xmlsec/transforms.h>


XMLSEC_EXPORT xmlDocPtr		xmlSecParseFile		(const char *filename);
XMLSEC_EXPORT xmlDocPtr		xmlSecParseMemory	(const unsigned char *buffer, 
							 size_t size,
							 int recovery);
XMLSEC_EXPORT xmlDocPtr		xmlSecParseMemoryExt	(const unsigned char *prefix, 
							 size_t prefixSize,
							 const unsigned char *buffer, 
							 size_t bufferSize, 
							 const unsigned char *postfix, 
							 size_t postfixSize);


/**
 * xmlSecTransformXmlParserId:
 * 
 * The XML Parser transform klass.
 */
#define xmlSecTransformXmlParserId \
	xmlSecTransformXmlParserGetKlass()
XMLSEC_EXPORT xmlSecTransformId	xmlSecTransformXmlParserGetKlass	(void);


#ifdef __cplusplus
}
#endif /* __cplusplus */

#endif /* __XMLSEC_PARSER_H__ */

