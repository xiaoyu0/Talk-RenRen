#ifndef TALK_MUC_JID_H_
#define TALK_MUC_JID_H_

#include <string>
#include "types.h"

namespace mtalk{
namespace muc{
	
	class JID{
	public :
		JID();

		/*
		 * 创建一个jid，解析一个标准的jid字符串得到三个参数：
		 * 标准jid字符串为：[ node "@" ] domain [ "/" resource ]
		 * node为userId
		 * domain为endpoint
		 * resource为sessionId
		 */
		JID(const std::string& str);

		JID(const std::string& node, const std::string& domain, const std::string& resource);

		JID(const long& roomId, const std::string& domain, const int& resourceId);

		bool parser(const std::string& str);

		/*
		 * 通过参数得到标准jid字符串
		 */
		std::string toString() const;

		void setNodeId(const long& nodeId){
			nodeId_ = nodeId;
		}
		
		long getNodeId(){
			return nodeId_;
		}

		void setNode(const std::string& node){
			node_ = node;
		}

		std::string getNode() const{
			return node_;
		}

		void setDomain(const std::string& domain){
			domain_ = domain;
		}

		std::string getDomain() const{
			return domain_;
		}

		
		void setResourceId(const Gid_t& resourceId){
			resourceId_ = resourceId;
		}
		
		Gid_t getResourceId() const{
			return resourceId_;
		}

	private :
		Gid_t userId_;
		long nodeId_;
		Gid_t resourceId_;
		std::string node_;
		std::string domain_;
		std::string resource_;
	};

};
};

#endif //TALK_MUC_JID_H_
