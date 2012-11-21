/*
 * =====================================================================================
 *
 *       Filename:  SchemaErrorHandler.cpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  2012年11月02日 17时14分00秒
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  jun.liu (), jun.liu@renren-inc.com
 *        Company:  renren-inc
 *
 * =====================================================================================
 */

#include    "SchemaErrorHandler.h"


namespace mtalk {
namespace utils {


	SchemaErrorHandler::~SchemaErrorHandler() {
	
	}

	void SchemaErrorHandler::error(const SAXParseException & exc) {
		count ++;
		char* message = XMLString::transcode(exc.getMessage());
		errorMessage_ << count <<  ":" <<  message << "\n"; 	
		XMLString::release(&message);
	}

	const string SchemaErrorHandler::getErrorMessage() {
		string temp_ = errorMessage_.str();
		errorMessage_.str("");
		count = 0;
		return temp_;
	}

};
};
