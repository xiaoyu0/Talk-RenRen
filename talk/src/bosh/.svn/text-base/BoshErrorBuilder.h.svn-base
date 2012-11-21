/**
* @file BoshErrorBuilder.h
* @brief	bosh协议的错误定义
* @author you.zhou@renren-inc.com
* @version 1.0
* @date 2011-07-15
*/
#ifndef TALK_BOSH_BOSH_ERROR_BUILDER_H_
#define TALK_BOSH_BOSH_ERROR_BUILDER_H_

#include <string>

namespace mtalk{
namespace bosh{

	class BoshErrorBuilder{
	public :
		static std::string itemNotFound(const std::string& text, bool isTerminate = true){
			return baseError("item-not-found", text, isTerminate);
		}

		static std::string badRequest(const std::string& text, bool isTerminate = true){
			return baseError("bad-request", text, isTerminate);
		}

		static std::string internalServerError(const std::string& text, bool isTerminate = true){
			return baseError("internal-server-error", text, isTerminate);
		}

		static std::string authCheckFailure(){
			return "<body type='terminate' condition='auth-check-failure'><failure/></body>";
		}

	private :
		static std::string baseError(const std::string& condition, const std::string& text, bool isTerminate){
			std::ostringstream os;
			if(text.empty()){
				os << "<body ";
				if(isTerminate){
					os << "type='terminate' ";
				}
				os << "condition='" << condition << "'"
					<< " xmlns='http://jabber.org/protocol/httpbind'/>";
			}else {
				os << "<body ";
				if(isTerminate){
					os << "type='terminate' ";
				}
				os << "condition='" << condition << "'"
					<< " xmlns='http://jabber.org/protocol/httpbind'>"
					<< "<text>" << text << "</text></body>";
			}
			return os.str();
		}
	};
};
};
#endif //TALK_BOSH_BOSH_ERROR_BUILDER_H_
