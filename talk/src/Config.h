/**
* @file Config.h
* @brief	对服务中参数的统一设置
* @author you.zhou@renren-inc.com
* @version 1.0
* @date 2011-10-26
*/
#ifndef TALK_CONFIG_H_
#define TALK_CONFIG_H_

#define MSG_ACK_TIME_LOG

namespace mtalk{

	/**
	* @brief	zookeeper中创建的临时节点的超时时间
	*/
	#define ZK_SESSION_TIMEOUT 30000

	/**
	* @brief	zookeepr中endpoint服务的地址
	*/
	#define ZK_ENDPOINT_PATH 	"/3g/ice/talk/endpoint"

	/**
	* @brief	zookeeper中bosh服务的地址
	*/
	#define ZK_BOSH_PATH 		"/3g/ice/talk/bosh"

	/**
	* @brief	zookeeper中msgWait服务的地址
	*/
	#define ZK_MSGWAIT_PATH 		"/3g/ice/talk/msgWait"

	/**
	* @brief	zookeeper中离线服务的地址
	*/
	#define ZK_OFFLINE_MSG_PATH	"/3g/ice/talk/OfflineMsgIceService/.service_nodes"

	/**
	* @brief	zookeeper中短域名服务的地址
	*/
	#define ZK_SHORT_URL_PATH "/3g/ice/talk/ShortDomainIceService/.service_nodes"

	/**
	* @brief  zookeeper中push系统服务地址
	*/
	#define ZK_TALK_PUSH  	"/3g/ice/talk/PushIceService/.service_nodes"

	/**
	* @brief  zookeeper中群聊服务地址
	*/
	#define ZK_MUC_PATH  "/3g/ice/talk/muc"

	/**
	* @brief zookeeper中群聊DB服务地址
	*/
	#define ZK_ROOM_DB_PATH  "/3g/ice/talk/MucDBIceService/.service_nodes"

	/**
	* @brief zookeeper中查询用户私信安装情况服务地址
	*/
	#define ZK_SIXIN_USER_SERVICE_PATH  "/3g/ice/sixin/account/MiscService/.service_nodes"

	/**
	* @brief zookeeper中IM心跳在线状态适配器服务地址
	*/
	#define ZK_IM_ONLINE_ADAPTER_PATH  "/3g/ice/talk/imAdapter"

	/**

	 * @brief zookeeper中facebook节点	
	 **/
	#define ZK_FACE_BOOK_PATH   "/3g/ice/talk/router/faceBook"
	#define ZK_ROUTER_PATH   "/3g/ice/talk/router"

	/*帐号转换接口*/
	#define ZK_ACCOUNT_PATH "/3g/ice/sixin/account/BindThirdPartyService/.service_nodes"

	/*  黑名单接口    */
        #define ZK_RELATION_PATH "/3g/ice/sixin/account/RelationService/.service_nodes"

	/*历史消息存储接口*/	
	#define ZK_HISTORY_MESSAGE_PATH "/3g/ice/talk/CloudStoreIceService/.service_nodes"


	#define ZK_SESSION_TIMEOUT 30000

	#define ZK_BUFFER_SIZE 512

	#define WAP_PAGE_URL "http://10.3.20.14:8081/simplepage/showpage.do"
};
#endif //TALK_CONFIG_H_
