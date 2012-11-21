#ifndef TALK_XMPP_PROCESS_RESULT_H_
#define TALK_XMPP_PROCESS_RESULT_H_

namespace mtalk{
namespace xmpp{

	class ProcessResult {
	public :
		enum {
			OK,
			ERROR,
			REFUSE,
			NAME_NOT_FOUND,
			EMPTY,
			XML_SYNTAX_ERROR,
			DATA_INCOMPLETE,
			SESSION_NOT_FOUND,
			STREAM_ERROR,
			HAS_RESPONSE,
			SESSION_CLOSE,
			UNKNOWN_TYPE,
			ANTISPAM
		};
		
		ProcessResult():
			code_(OK),
			msg_(""){
		}

		ProcessResult(int code):
			code_(code){
		}

		ProcessResult(int code, std::string msg):
			code_(code),
			msg_(msg){
		}
		
		int getCode(){
			return code_;
		}

		void setCode(int code){
			code_ = code;
		}

		std::string getMsg(){
			return msg_;
		}

		void setMsg(std::string msg){
			msg_ = msg;
		}

		void addMsg(std::string msg){
			msg_ += msg;
		}
	
	private :
		int code_;
		std::string msg_;
	};
};
};
#endif //TALK_XMPP_PROCESS_RESULT_H_
