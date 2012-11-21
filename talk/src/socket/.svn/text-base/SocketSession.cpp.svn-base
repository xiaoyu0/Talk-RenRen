#include <ctime>
#include <limits.h>
#include <iostream>
#include <sstream>
#include <string>
#include <boost/lexical_cast.hpp>
#include <boost/shared_ptr.hpp>
#include "SocketSession.h"
#include "SocketServer.h"
#include "talk/SessionListener.h"
//#include "BoshErrorBuilder.h"
#include "constant/ResultCode.h"
#include "utils/MyLogger.h"
#include "utils/MyLock.h"
#include "utils/I18nTranslate.h"

using namespace std;
using namespace mtalk::constant;
using namespace mtalk::utils;
using namespace mtalk::utils::i18n;

	namespace mtalk{
		namespace socket{

			SocketSession::SocketSession(string sessionId)
				:Session(sessionId)
			{
				lastActivity_ = std::time(NULL);	

				LOG_DEBUG("SocketSession::SocketSession => Create SocketSession: sid : " << getSessionId() );
			}

			SocketSession::~SocketSession(){
				LOG_DEBUG("SocketSession::~SocketSession => Destroy session : sid = " << getSessionId() << " , uid = " << getUserId());
			}

			void   SocketSession::initXMPPTagHandler(boost::shared_ptr<tagParser::TagHandler> handler){
				tagParserPtr_.reset(new tagParser::TagParser(handler));
			}



            bool SocketSession::deliver(const long fromId, const string message, const MessageType::Type type, const long mid) { 
                return deliver(fromId, message, (int)type, mid);
            }

            bool SocketSession::deliver(const long fromId, const string message, const int type, const long mid){

                LOG_W(fromId, "SocketSession::deliver", type, message);
                // 国际化
                std::string i18nStr(message);
				LOG_DEBUG("SocketSession::deliver:: msg = "<<message);
				//cout<<getLang()<<endl;
                if (pack(getLang(), i18nStr)){
                    LOG_ERROR("SocketSession::response => I18nTranslate error msg=["<<message.c_str()<<"]");
                    LOG_W(fromId, "I18n::pack", type, "error");
                    return false;
                }

                MY_INSTANCE(SocketServer).deliverMsg(getConnectionId(), i18nStr );
				return 1;
			}

			bool SocketSession::feed(const std::string msg){
                boost::shared_ptr<SocketSession> sptr = boost::dynamic_pointer_cast<SocketSession>(shared_from_this());
			if(!tagParserPtr_)
				return 0;
			return	tagParserPtr_->feed(sptr, msg);    
			}

			void SocketSession::responseEmpty(){
						}

			void SocketSession::close(bool notifyManagerDelete){
				for(size_t i = 0; i < sessionListeners_.size(); i++){
					sessionListeners_[i]->sessionClosed(shared_from_this());
				}
				if(notifyManagerDelete){
					managerListenerPtr_->sessionClosed(shared_from_this());
				}
			}	

			bool  SocketSession::check(){

				time_t now = time(NULL);
				//检查不活跃期超时(activity)
				if(now - getLastActivity() > getWait()){
					LOG_DEBUG("SocketSession::check => del a session : sid = " << getSessionId() << " userId = " << getUserId());
					LOG_TRACE_ACTION(" sockSessionTimeOut"<<" | "<<getUserId()<<" | "<<getSessionId()<<" | "<<getCAppId()<<" | "<<"000000");
					internalClose();
					return 1;
				} 			
				return 0;
			}

			void SocketSession::internalClose(){ 
				for(size_t i = 0; i < sessionListeners_.size(); i++){
					sessionListeners_[i]->sessionClosed(shared_from_this());
				}
			}


		};
};
