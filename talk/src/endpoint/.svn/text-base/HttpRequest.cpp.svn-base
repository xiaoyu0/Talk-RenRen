#include <vector>
#include <boost/lexical_cast.hpp>
#include <boost/algorithm/string.hpp>
#include "HttpRequest.h"
#include "utils/Url.h"
#include "utils/MyLogger.h"

using namespace std;
using namespace boost;
using namespace boost::algorithm;
using namespace mtalk::utils;

namespace mtalk{
namespace endpoint{

	HttpRequest::HttpRequest():
		state_(start),
		contentLength_(0){
		LOG_DEBUG("HttpRequest::HttpRequest => Created");
	}

	HttpRequest::~HttpRequest(){
		LOG_DEBUG("HttpRequest::~HttpRequest => Destroy");
	}
	
	HttpRequest::ParserResult HttpRequest::parser(const string& requestStr){

		for(size_t i = 0; i < requestStr.size(); ++i){
			status_ = consume(requestStr[i]);
			if(status_ != PARSER_CONTINUE){
				break;
			}
		}

		if(status_ == PARSER_SUCCESS){
		    //wap网关传过来的url 可能是带有http://
            if(url_.find("http://") == 0) {
                iterator_range<string::iterator> rge = find_nth(url_, "/", 2); 
                size_t pos = rge.begin() - url_.begin();
                url_ = url_.substr(pos);
            }   
	
			size_t p = url_.find('?');
			if (p != string::npos){
				uri_ = url_.substr(0, p);
				queryStr_ = url_.substr(p+1);
			} else {
				uri_ = url_;
				queryStr_ = "";
			}
			method_ = to_upper_copy(method_);
			if (method_ == "GET"){
				//read param
				if(!queryStr_.empty()){
					vector<string> paramList;
					split(paramList, queryStr_, is_any_of("&"), token_compress_on);
					for(unsigned int i = 0; i < paramList.size(); i++){
						string kv = paramList[i];
						unsigned int p = kv.find("=");
						params_[kv.substr(0, p)] = urlDecode(kv.substr(p+1));
					}
				}
			}
		}

		return status_;
	}

	inline HttpRequest::ParserResult HttpRequest::consume(char input){
		switch (state_)
		{
			case start:
				if (!is_char(input) || is_ctl(input) || is_tspecial(input))
				{
					return PARSER_FAILURE;
				}
				else
				{
					state_ = method;
					method_.push_back(input);
					return PARSER_CONTINUE;
				}
			case method:
				if (input == ' ')
				{
					state_ = uri;
					return PARSER_CONTINUE;
				}
				else if (!is_char(input) || is_ctl(input) || is_tspecial(input))
				{
					return PARSER_FAILURE;
				}
				else
				{
					method_.push_back(input);
					return PARSER_CONTINUE;
				}
			case uri:
				if (input == ' ')
				{
					state_ = protocal;
					return PARSER_CONTINUE;
				}
				else if (is_ctl(input))
				{
					return PARSER_FAILURE;
				}
				else
				{
					url_.push_back(input);
					return PARSER_CONTINUE;
				}
			case protocal:
				if (is_digit(input) || input == 'H' || input == 'T'
					|| input =='P' || input == '/' || input == '.'){
					protocal_.push_back(input);
					return PARSER_CONTINUE;
				} else if (input == '\r'){
					state_ = expecting_newline_1;
					return PARSER_CONTINUE;
				} else {
					return PARSER_FAILURE;
				}
			case expecting_newline_1:
				if (input == '\n')
				{
					state_ = header_line_start;
					return PARSER_CONTINUE;
				}
				else
				{
					return PARSER_FAILURE;
				}
			case header_line_start:
				if (input == '\r')
				{
					if(!headerName_.empty()){
						headers_[headerName_] = headerValue_;
						headerName_.clear();
						headerValue_.clear();
					}
					state_ = expecting_newline_3;
					return PARSER_CONTINUE;
				}
				else if (!headerName_.empty() && (input == ' ' || input == '\t'))
				{
					state_ = header_lws;
					return PARSER_CONTINUE;
				}
				else if (!is_char(input) || is_ctl(input) || is_tspecial(input))
				{
					return PARSER_FAILURE;
				}
				else
				{
					if(!headerName_.empty()){
						headers_[headerName_] = headerValue_;
						headerName_.clear();
						headerValue_.clear();
					}
					headerName_.push_back(input);
					state_ = header_name;
					return PARSER_CONTINUE;
				}
			case header_lws:
				if (input == '\r')
				{
					state_ = expecting_newline_2;
					return PARSER_CONTINUE;
				}
				else if (input == ' ' || input == '\t')
				{
					return PARSER_CONTINUE;
				}
				else if (is_ctl(input))
				{
					return PARSER_FAILURE;
				}
				else
				{
					state_ = header_value;
					headerValue_.push_back(input);
					return PARSER_CONTINUE;
				}
			case header_name:
				if (input == ':')
				{
					state_ = space_before_header_value;
					return PARSER_CONTINUE;
				}
				else if (!is_char(input) || is_ctl(input) || is_tspecial(input))
				{
					return PARSER_FAILURE;
				}
				else
				{
					headerName_.push_back(input);
					return PARSER_CONTINUE;
				}
			case space_before_header_value:
				if (input == ' ')
				{
					state_ = header_value;
					return PARSER_CONTINUE;
				}
				else
				{
					return PARSER_FAILURE;
				}
			case header_value:
				if (input == '\r')
				{
					state_ = expecting_newline_2;
					return PARSER_CONTINUE;
				}
				else if (is_ctl(input))
				{
					return PARSER_FAILURE;
				}
				else
				{
					headerValue_.push_back(input);
					return PARSER_CONTINUE;
				}
			case expecting_newline_2:
				if (input == '\n')
				{
					state_ = header_line_start;
					return PARSER_CONTINUE;
				}
				else
				{
					return PARSER_FAILURE;
				}
			case expecting_newline_3:
				if (input == '\n'){
					if (method_ == "POST"){
						string cls = getHeader("Content-Length");
						if(cls.empty()){
							return PARSER_SUCCESS;
						}

						try{
							contentLength_ = boost::lexical_cast<int>(cls);
						} catch (boost::bad_lexical_cast &){
							return PARSER_FAILURE;
						}

						if (contentLength_ == 0){
							return PARSER_SUCCESS;
						} else {
							state_ = body_content;
							return PARSER_CONTINUE;
						}
					} else {
						return PARSER_SUCCESS;
					}
				} else {
					return PARSER_FAILURE;
				}
			case body_content :
				body_.push_back(input);
				if(body_.size() == contentLength_){
					return PARSER_SUCCESS;
				} else {
					return PARSER_CONTINUE;
				}
			default:
				return PARSER_FAILURE;
		}
	}

	bool HttpRequest::is_char(int c)
	{
		return c >= 0 && c <= 127;
	}

	bool HttpRequest::is_ctl(int c)
	{
		return (c >= 0 && c <= 31) || (c == 127);
	}

	bool HttpRequest::is_tspecial(int c)
	{
		switch (c)
		{
			case '(': case ')': case '<': case '>': case '@':
			case ',': case ';': case ':': case '\\': case '"':
			case '/': case '[': case ']': case '?': case '=':
			case '{': case '}': case ' ': case '\t':
				return true;
			default:
				return false;
		}
	}

	bool HttpRequest::is_digit(int c)
	{
		return c >= '0' && c <= '9';
	}

};
};
