/*
 * =====================================================================================
 *
 *       Filename:  TalkSchemaUtil.h
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  2012年11月02日 11时07分20秒
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  jun.liu (), jun.liu@renren-inc.com
 *        Company:  renren-inc
 *
 * =====================================================================================
 */

#ifndef  TALKSCHEMAVALIDATER_H
#define  TALKSCHEMAVALIDATER_H

#include  <string>
#include  <boost/smart_ptr.hpp>
#include  <boost/thread.hpp>
#include  <xercesc/sax2/SAX2XMLReader.hpp> 

#include    "SchemaErrorHandler.h"

using namespace std;
using namespace xercesc;
using namespace boost;

typedef shared_ptr<SAX2XMLReader> SAXParserPtr;
const static size_t PARSER_POOLS_SIZE = 100;

namespace mtalk {
namespace utils {
	/**
	 * @brief 检测结果枚举类 
	 **/
	enum ValidateResult { Fail = 0, Success = 1};	
	
	/**
	 * @brief Schema检查器
	 *
	 * 类为单例类，利用构造函数和析构函数调用XMLPlatformUtils::Initialize()和XMLPlatformUtils::Terminate();
	 *
	 **/
	class TalkSchemaValidater  {
		public:
			/**
			 * @brief 验证报文是否合法
			 * 静态方法，方便调用，会调用单例类的方法
			 * 
			 * @param string message 报文正文
			 * @return ValidateResult 结果
			 */
			static ValidateResult validate(string message);

			/**
			 * @brief 析构函数
			 */
			~TalkSchemaValidater();
				
		private:
			/**
			 * @brief 构造函数
			 */
			TalkSchemaValidater();
			
			/**
			 * @brief 检验报文是否正确
			 *
			 * @param string message 报文
			 *
			 * @return bool 是否正确
			 */
			bool check(string message);
			
			/**
			 * @brief 初始化parser
			 *
			 * @return void
			 */
			void init();

		private:
			//单例实例
			static TalkSchemaValidater instance;
			//位置指针	
			int pointer_;
			//parser池
			SAXParserPtr parserPools_[PARSER_POOLS_SIZE];
			//handler池
			SchemaErrorHandlerPtr handlerPools_[PARSER_POOLS_SIZE];
			//parser互斥量
			mutex parserPoolsMutex[PARSER_POOLS_SIZE];	
	};
};
};


#endif  /*TALKSCHEMAVALIDATER_H*/
