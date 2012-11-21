#include <sstream>
#include "IMGateForPhoneAdapter.h"
#include "utils/MyLogger.h"
namespace mtalk{
	namespace im{
		IMGateForPhoneAdapter::IMGateForPhoneAdapter(int cluster) :
			cluster_(cluster){
				imTalkChannel_.init();
				LOG_INFO("IMGateForPhoneAdapter::IMGateForPhoneAdapter => Created");
			}

		void IMGateForPhoneAdapter::open(){
				managerPrxList_.resize(cluster_);
				for(int i = 0; i < cluster_; i++){
						std::ostringstream name;
						name << "M@IMGateForPhone" << i;
						managerPrxList_[i] = imTalkChannel_.stringToProxyOneway<IMGateForPhoneManagerPrx>(name.str());
				}
				LOG_INFO("IMGateForPhoneAdapter::open => Open");
				changerPtr_.reset( new protocolChang::ProtocolChanger());

		}

		void IMGateForPhoneAdapter::setAvailable(){
			LOG_INFO("IMGateForPhoneAdapter::setAvailable => Online and offline interface available");
		}

		IMGateForPhoneManagerPrx IMGateForPhoneAdapter::getPrx(long id){
			return managerPrxList_[id%cluster_];
		}

		void IMGateForPhoneAdapter::sendMessage(long fromId, long toId, const string& message, long msgkey){

            LOG_W(fromId, "IMGateForPhoneAdapter::sendMessage", -1, message);

				int fromRenRenId  = changerPtr_->getRenRenIdBySiXinId(fromId);
				int toRenRenId  = changerPtr_->getRenRenIdBySiXinId(toId);
				if(fromRenRenId == -1 || toRenRenId == -1){
						return ;
				}

				try{
					//	getPrx(fromRenRenId)->SendMessage(fromRenRenId, toRenRenId, message);
						getPrx(fromRenRenId)->SendMessageWithMsgkey(fromRenRenId, toRenRenId, msgkey, message);

						LOG_INFO("IMGateForPhoneAdapter::sendMessage|" << fromRenRenId
										<< "|" << toRenRenId << "|"<<msgkey <<"|"<< message);
				}catch(std::exception &e){
						LOG_ERROR("IMGateForPhoneAdapter sendMessage Error "<<e.what()) 
				}catch(...){
						LOG_ERROR("IMGateForPhoneAdapter sendMessage Error unknow") 
				}
		}




		void IMGateForPhoneAdapter::online(long userId, int appId){
				try{
						getPrx(userId)->PhoneUserOnline(userId);
						LOG_DEBUG("IMGateForPhoneAdapter::online => uid = " << userId);
						LOG_IM_ACTION("online|"<<userId<<"|"<<appId)
				}catch(std::exception &e){
						LOG_ERROR("IMGateForPhoneAdapter online Error " << e.what() << "  userId = " << userId); 
						LOG_IM_ACTION("online|"<<userId<<"|"<<appId);
				}catch(...){
						LOG_ERROR("IMGateForPhoneAdapter online  Error unknow, userId = " << userId);
						LOG_IM_ACTION("online|"<<userId<<"|"<<appId);
				}
		}

		void IMGateForPhoneAdapter::offline(long userId, int appId){
				try{
						getPrx(userId)->PhoneUserOffline(userId);
						LOG_DEBUG("IMGateForPhoneAdapter::offline => uid = " << userId);
						LOG_IM_ACTION("offline|"<<userId<<"|"<<appId);
				}catch(std::exception &e){
						LOG_IM_ACTION("offline|"<<userId<<"|"<<appId);
						LOG_ERROR("IMGateForPhoneAdapter offline Error "<<e.what()) ;
				}catch(...){
						LOG_ERROR("IMGateForPhoneAdapter offline Error unknow") ;
						LOG_IM_ACTION("offline|"<<userId<<"|"<<appId)
				}
		}


		void IMGateForPhoneAdapter::heartBeat(std::vector<int> userIds){
				try{
						getPrx(index_++)->HeartBeat(userIds);
				}catch(std::exception &e){
						LOG_ERROR("IMGateForPhoneAdapter heartBeat Error "<<e.what()) 
				}
		}

		void IMGateForPhoneAdapter::NotifyMessageSended(long userId, long mid){

            LOG_W(userId, "IMGateForPhoneAdapter::NotifyMessageSended", -1, "");
            
				userId = changerPtr_->getRenRenIdBySiXinId(userId);
				if(userId == -1){
						return ;
				}

				try{
						getPrx(userId)->NotifyMessageSended(userId, mid);
						LOG_INFO("NotifyIMMessageSent|" << userId <<"|"<<mid);
				}catch(std::exception &e){
						LOG_ERROR("IMGateForPhoneAdapter NotifyMessageSended Error "<<e.what()) 
				}
		}
	};
};
