/*
 * =====================================================================================
 *
 *       Filename:  TalkSchemaUtil.cpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  2012年11月02日 11时10分38秒
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  jun.liu (), jun.liu@renren-inc.com
 *        Company:  renren-inc
 *
 * =====================================================================================
 */

#include  <iostream>
#include  <xercesc/util/PlatformUtils.hpp>
#include  <xercesc/framework/MemBufInputSource.hpp>
#include <xercesc/sax2/XMLReaderFactory.hpp>

#include    "TalkSchemaValidater.h"
#include    "MyLogger.h"
#include    "MyLock.h"

using namespace std;
using namespace xercesc;


namespace mtalk {
namespace utils {


static const char SCHEMA_FILE[] = "/opt/talk/conf/xsd/talk.xsd";

TalkSchemaValidater TalkSchemaValidater::instance;


TalkSchemaValidater::TalkSchemaValidater() {
	//
	try {
		XMLPlatformUtils::Initialize();
		init();
	}
	catch (const XMLException& toCatch) {
		char* message = XMLString::transcode(toCatch.getMessage());
		LOG_SCHEMA("TalkSchemaValidater::TalkSchemaValidater catch an Exception:" << message );
		XMLString::release(&message);
	}
}



TalkSchemaValidater::~TalkSchemaValidater() {
	for(size_t i = 0; i< PARSER_POOLS_SIZE; i++ ){
		parserPools_[i].reset();	
	}
	XMLPlatformUtils::Terminate();
}

void TalkSchemaValidater::init() {
	for(size_t i = 0; i< PARSER_POOLS_SIZE; i++ ){
		try {
			shared_ptr<SAX2XMLReader> parser(XMLReaderFactory::createXMLReader());
			parser->setFeature(XMLUni::fgSAX2CoreValidation, true);
			parser->setFeature(XMLUni::fgSAX2CoreNameSpaces, true);   // optional

			parser->loadGrammar(SCHEMA_FILE, Grammar::SchemaGrammarType, true);
			parser->setFeature(XMLUni::fgXercesUseCachedGrammarInParse, true);
		
			SchemaErrorHandlerPtr handler(new SchemaErrorHandler());
			parser->setErrorHandler(handler.get());
		
			parserPools_[i] = parser;
	
			handlerPools_[i] = handler;
		}
		catch(...) {
			LOG_ERROR("TalkSchemaValidater::init catch an Exception!!");
		}
	}
}

bool TalkSchemaValidater::check(string message) {
	if(message.empty()) {
		return true;
	}
	//默认为true
	bool result = true;
	int index;
	{
		//获取parser位置
		//ScopedLock lock(pointerMutex);
		index = ++pointer_ % PARSER_POOLS_SIZE;
	}

	char  gMemBufId[] = "Processing";
	shared_ptr<MemBufInputSource> memBufPtr(new MemBufInputSource((const XMLByte*)message.c_str(), message.length(), gMemBufId, false));

	ScopedLock lock(parserPoolsMutex[index]);
	try {
		parserPools_[index]->parse(*memBufPtr.get());	
		result = parserPools_[index]->getErrorCount() == 0;
		if(!result) {
			LOG_SCHEMA("TalkSchemaValidater::check the message is  illegal : message = " << message << "\n"
						<< "errorMessage = " << handlerPools_[index]->getErrorMessage());
		}
	}
	catch (const XMLException& toCatch) {
		char* errMessage = XMLString::transcode(toCatch.getMessage());
		LOG_SCHEMA("TalkSchemaValidater::check catch an Exception:\n message=" << message << "\n" <<  errMessage );
		XMLString::release(&errMessage);
		result = false;
	}
	catch (const SAXException& toCatch) {
		char* errMessage = XMLString::transcode(toCatch.getMessage());
		LOG_SCHEMA("TalkSchemaValidater::check catch an Exception:\n message=" << message << "\n" << errMessage );
		XMLString::release(&errMessage);
		result = false;
	}
	catch (...) {
		LOG_SCHEMA("TalkSchemaValidater::check catch an Unknow Exception. message=" << message);
	}
	
	return result; 

}



ValidateResult TalkSchemaValidater::validate(string message) {
	return instance.check(message) ? Success : Fail;
}

};
};
