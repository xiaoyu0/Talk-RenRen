/*
 * =====================================================================================
 *
 *       Filename:  SchemaErrorHandler.h
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  2012年11月02日 17时06分51秒
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  jun.liu (), jun.liu@renren-inc.com
 *        Company:  renren-inc
 *
 * =====================================================================================
 */

#ifndef  SCHEMAERRORHANDLER_H
#define  SCHEMAERRORHANDLER_H

#include  <boost/smart_ptr.hpp>
#include <xercesc/sax2/DefaultHandler.hpp>
#include  <string>
#include  <sstream>

using namespace std;
using namespace boost;
using namespace xercesc;


namespace mtalk {
namespace utils {

	class SchemaErrorHandler: public DefaultHandler {
		public:
			/**
			 * @brief 构造函数
			 */
			SchemaErrorHandler() : errorMessage_(""), count(0) {
			}
			/**
			 * @brief 析构函数
			 */
			~SchemaErrorHandler();
			/**
			 * @brief 重载函数
			 */
			void error( const SAXParseException & exc);	
			/**
			 * @brief 获取错误信息
			 */
			const string getErrorMessage();

		private:
			ostringstream errorMessage_;
			int count;
	};

	typedef shared_ptr<SchemaErrorHandler> SchemaErrorHandlerPtr;
};

};



#endif  /*SCHEMAERRORHANDLER_H*/
