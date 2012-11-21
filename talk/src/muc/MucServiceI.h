/**
* @file MucServiceI.h
* @brief muc ice服务实现类
* @author wang.yu@renren-inc.com  chenxi.hou@renren-inc.com
* @version 1.0
* @date 2012-05-14
*/
#ifndef TALK_MUC_MUCSERVICE_I_H_
#define TALK_MUC_MUCSERVICE_I_H_

#include <string>
#include <Ice/Ice.h>
#include "ice_src/MucService.h"


namespace mtalk{
namespace muc{
	
	class MucServiceI :public com::xiaonei::wap::muc::MucService{

		virtual void deliverStanza(const std::string& mucStanzaStr, const Ice::Current&);
		
		void forwardIq(const std::string& sessionId,const std::string& msg,const Ice::Current&);

		void forwardMessage(const std::string& sessionId,const std::string& msg,const Ice::Current&);

		void forwardPresence(const std::string& sessionId,const std::string& msg,const Ice::Current&);

	};

};
};
#endif
