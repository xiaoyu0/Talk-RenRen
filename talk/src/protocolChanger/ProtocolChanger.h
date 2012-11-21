#ifndef  PROTOCOL_CHANGER_H_
#define  PROTOCOL_CHANGER_H_

#include  <string>
#include  "proxy/BindServiceProxy.h"
#include  "pugixml/pugixml.hpp"
#include  "xmpp/JID.h"
#include  "proxy/ProxyRegister.h"
#include  <boost/shared_ptr.hpp>

namespace mtalk{
namespace protocolChang{


class Changer{
    public :
        virtual long  changToSixin(const std::string& clientDomin, pugi::xml_node& xmlNode, long savedSixin = 0) = 0;
        virtual long  changBack(const std::string& clientDomin, pugi::xml_node& xmlNode, long savedRenRenId = 0) = 0 ;
        Changer();
        virtual    ~Changer();
        com::renren::sixin::account::BindAccountEnum   getUserAccountType(const mtalk::xmpp::JID& jid);
        long  getRenRenIdBySiXinId(long renrenId);
        long  getSixinIdByRenRenId(long SixinId);
		std::map<long, long> getRenRenIdSeqBySiXinIds(std::vector<long> sixinIds);
		std::map<long, long> getSiXinIdSeqByRenRenIds(std::vector<long> renrenIds);

	protected :
		//用于处理单聊和群聊 私信助手feed 信息的函数
		void processPureSixinAccount(pugi::xml_node& node);

    protected :
         boost::shared_ptr<mtalk::proxy::BindServiceProxy>  bindServiceProxyPtr_;
};





class  ChatChanger : public Changer{
    public:
        virtual long  changToSixin(const std::string& clientDomin, pugi::xml_node& xmlNode, long savedSixin = 0) ;
        virtual long  changBack(const std::string& clientDomin, pugi::xml_node& xmlNode, long savedRenRenId = 0)  ;
};




class     GroupChatChanger: public Changer{
    public: 
        virtual long  changToSixin(const std::string& clientDomin, pugi::xml_node& xmlNode, long savedSixin = 0) ;
        virtual long  changBack(const std::string& clientDomin, pugi::xml_node& xmlNode, long savedRenRenId = 0)  ;

    private:
        bool upToGidProcess(long fromId, pugi::xml_node& node);
        bool downToUidProcess(long toId, pugi::xml_node& node);
        //需要转换的上行协议
        bool upCreateRoom(long fromId, pugi::xml_node& node);
        bool upSendInvitation(long fromId, pugi::xml_node& node);
        bool upKickOccupant(long fromId, pugi::xml_node& node);
        //需要转换的下行协议
        bool downCreateRoom2Invitee(long toId, pugi::xml_node& node);
        bool downInvitation(long toId, pugi::xml_node& node);
//        bool downInvitation2Existing(long toId, pugi::xml_node& node);
        bool downKickOccupant2Kickee(long toId, pugi::xml_node& node);
        bool downKickOccupant2Existing(long toId, pugi::xml_node& node);
        bool downLeaveRoom(long toId, pugi::xml_node& node);
        bool downQueryRoom(long toId, pugi::xml_node& node);
        bool downGetAllRoomsInfo(long toId, pugi::xml_node& node);

};


class ProtocolChanger{
    public:
        ProtocolChanger();
        ~ProtocolChanger();

		long getSixinIdByRenRenId(long renrenId){ 
				return  chatChanger_.getSixinIdByRenRenId(renrenId) ;
		}


		long getRenRenIdBySiXinId(long sixinId){
				return  chatChanger_.getRenRenIdBySiXinId(sixinId);
		}


		std::map<long, long> getRenRenIdSeqBySiXinIds(std::vector<long> sixinIds){
				return chatChanger_.getRenRenIdSeqBySiXinIds(sixinIds);
		}


		std::map<long, long> getSiXinIdSeqByRenRenIds(std::vector<long> renrenIds){
				return chatChanger_.getSiXinIdSeqByRenRenIds(renrenIds);
		}


		com::renren::sixin::account::BindAccountEnum   getUserAccountType(const mtalk::xmpp::JID& jid){ 
				return chatChanger_.getUserAccountType(jid);
		}

        long  changToSixin(std::string clientDomin, pugi::xml_node& xmlNode, long savedSixin = 0);
        long  changBack(std::string clientDomin, pugi::xml_node& xmlNode , long savedRenRenId = 0);
    private:

		void processPureSixinAccount(pugi::xml_node& node);
        ChatChanger  chatChanger_ ;
        GroupChatChanger  groupChatChanger_ ;


};

}
}


#endif  
















