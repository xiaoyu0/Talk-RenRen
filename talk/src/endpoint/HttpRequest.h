/**
* @file HttpRequest.h
* @brief	一次请求的request对象，保存请求的相关信息
* 			包括对http请求的解析
* @author you.zhou@renren-inc.com
* @version 1.0
* @date 2011-07-06
*/
#ifndef TALK_ENDPOINT_HTTP_REQUEST_H_
#define TALK_ENDPOINT_HTTP_REQUEST_H_

#include <string>
#include <map>
#include <boost/shared_ptr.hpp>
#include "utils/MyLogger.h"
#include "pugixml/pugixml.hpp"

namespace mtalk{
namespace endpoint{

	class HttpRequest{
	public :
		/**
		* @brief	用于http协议解析的结果码
		*/
		typedef enum{
			PARSER_SUCCESS, //解析成功
			PARSER_FAILURE,   //解析失败
			PARSER_CONTINUE //解析未完，继续读取
		} ParserResult;

		HttpRequest();

		~HttpRequest();

		/**
		* @brief	对请求的http 内容进行解析
		*
		* @param	requestStr
		*
		* @return	
		*/
		ParserResult parser(const std::string& requestStr);

		std::string getParam(const std::string& key) const{
			std::map<std::string, std::string>::const_iterator it = params_.find(key);
			if(it != params_.end()){
				return it->second;
			} else {
				return "";
			}
		}

		std::map<std::string, std::string> getParams(){
			return params_;
		}

		std::map<std::string, std::string> getHeaders(){
			return headers_;
		}

		std::string getHeader(const std::string& key) const{
			std::map<std::string, std::string>::const_iterator it = headers_.find(key);
			if(it != headers_.end()){
				return it->second;
			} else {
				return "";
			}
		}
	
		std::string getProtocal() const { return protocal_; }
		
		std::string getUri() const { return uri_; }

		std::string getMethod() const { return method_; }
		
		std::string getUrl() const { return url_; }
		
		std::string getQueryStr() const { return queryStr_; }

		std::string getBody() const { return body_; }
		
		std::string getRemoteAddress() const { return remoteAddress_; }

		void setRemoteAddress(const std::string& remoteAddress){
			remoteAddress_ = remoteAddress;
		}
		
		void setMsgNode(const pugi::xml_node& msgNode){
			msgNode_ = msgNode;
		}

		pugi::xml_node getMsgNode() const { return msgNode_; }

		void setSessionId(const std::string& sessionId){
			sessionId_ = sessionId;
		}

		std::string getSessionId() const { return sessionId_; }

	private :

		/// Check if a byte is an HTTP character.
		static bool is_char(int c);

		/// Check if a byte is an HTTP control character.
		static bool is_ctl(int c);

		/// Check if a byte is defined as an HTTP tspecial character.
		static bool is_tspecial(int c);

		/// Check if a byte is a digit.
		static bool is_digit(int c);

		/// The current state of the parser.
		enum state
		{
			start,
			method,
			uri_start,
			uri,
			protocal,
			expecting_newline_1,
			header_line_start,
			header_lws,
			header_name,
			space_before_header_value,
			header_value,
			expecting_newline_2,
			expecting_newline_3,
			body_content
		} state_;

		ParserResult consume(char c);
		ParserResult status_;

		std::string method_;
		std::string protocal_;
		std::string uri_;
		std::string url_;
		std::string body_;
		std::string queryStr_;
		std::string remoteAddress_;

		pugi::xml_node msgNode_;

		std::string sessionId_;

		std::map<std::string, std::string> params_;
		std::map<std::string, std::string> headers_;

		std::string headerName_;
		std::string headerValue_;
		size_t contentLength_;
	};

};
};
#endif //TALK_ENDPOINT_HTTP_REQUEST_H_
