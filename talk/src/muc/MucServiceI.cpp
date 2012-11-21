#include "MucServiceI.h"
#include "MucServer.h"
#include "utils/Singleton.h"

using namespace std;
using namespace com::xiaonei::wap::muc;

namespace mtalk{
namespace muc{
	void MucServiceI::deliverStanza(const string& stanzaStr, const Ice::Current&){
		//协议的错误检查放到这还是 MucServer中
		LOG_DEBUG("MucServiceI::deliverStanza ==> stanzaStr = " << stanzaStr);
		MY_INSTANCE(MucServer).processStanza(stanzaStr);	
	}

	void MucServiceI::forwardIq(const string& sessionId,const string& msg,const Ice::Current&){
		LOG_DEBUG("MucServiceI::forwardIq==> stanzaStr = " << msg);
		Packet packet(msg,sessionId);
		MY_INSTANCE(MucServer).processPacket(packet);	
	}

	void MucServiceI::forwardMessage(const string& sessionId,const string& msg,const Ice::Current&){
		LOG_DEBUG("MucServiceI::forwardMessage ==> stanzaStr = " << msg);
		Packet packet(msg, sessionId);
		MY_INSTANCE(MucServer).processPacket(packet);	
	}

	void MucServiceI::forwardPresence(const string& sessionId, const string& msg,const Ice::Current&){
		LOG_DEBUG("MucServiceI::forwardPresence ==> stanzaStr = " << msg);
		Packet packet(msg, sessionId);
		string packetStr = packet.toString();
		LOG_DEBUG("MucServiceI::forwardPresence ==> packet str = " << packetStr);
		MY_INSTANCE(MucServer).processPacket(packet);	
	}

};
};
