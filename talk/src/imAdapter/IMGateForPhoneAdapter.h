#ifndef TALK_IM_GATE_FOR_PHONE_ADAPTER_H_
#define TALK_IM_GATE_FOR_PHONE_ADAPTER_H_

#include <string>
#include <vector>
#include <Ice/Ice.h>
#include "IMTalkChannel.h"
#include "ice_src/IMGateForPhone.h"
#include  <boost/asio.hpp>
#include  <boost/date_time/posix_time/posix_time.hpp>
#include  <boost/thread.hpp>
#include "protocolChanger/ProtocolChanger.h"



using namespace com::xiaonei::talk::gate;
using namespace std;

namespace mtalk{
namespace im{
	class IMGateForPhoneAdapter{
	public :
		IMGateForPhoneAdapter(int cluster = 5);
		
		void open();

		void online(long userId, int appId = 110);

		void offline(long userId, int appId = 110);
		
		void heartBeat(std::vector<int> userIds);

		void sendMessage(long fromId, long toId, const string& message, long msgkey = 0);
		
		void NotifyMessageSended(long  userId, long mid);
		
		void setAvailable();

	private :
		int index_;
		IMGateForPhoneManagerPrx getPrx(long id);
		int cluster_;
//		bool available_;
//		boost::asio::io_service ios_;
//		boost::asio::deadline_timer timer_;
		IMTalkChannel imTalkChannel_;
		std::vector<IMGateForPhoneManagerPrx> managerPrxList_;
        boost::shared_ptr<protocolChang::ProtocolChanger>  changerPtr_ ;
	};
};
};
#endif //TALK_IM_GATE_FOR_PHONE_ADAPTER_H_
