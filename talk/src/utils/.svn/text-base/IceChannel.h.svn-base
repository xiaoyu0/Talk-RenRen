/**
* @file IceChannel.h
* @brief	对Ice Communicator的统一包装
*			设置默认的超时时间，线程池大小等参数
* @author you.zhou@renren-inc.com
* @version 1.0
* @date 2011-09-27
*/
#ifndef TALK_UTILS_ICE_CHANNEL_H_
#define TALK_UTILS_ICE_CHANNEL_H_

#include <string>
#include <boost/shared_ptr.hpp>
#include <Ice/Ice.h>

namespace mtalk{
namespace utils{

	class IceChannel{
	public :

		IceChannel();

		virtual ~IceChannel();

		void destroy();

		typedef enum {
			ONE_WAY,
			TWO_WAY
		} InvokeType;

		virtual void init(int timeout = 260);
	
		/**
		* @brief	获取一个two way的proxy
		* 			需要注意，name需要包含完整的链接字符串，
		* 			"Service:tcp host -p port"
		*
		* @tparam Prx
		* @param	name
		*
		* @return	
		*/
		template<class Prx>
		Prx stringToProxyTwoway(const std::string& name){
			return Prx::uncheckedCast(stringToProxy(name, TWO_WAY));
		}

		/**
		* @brief	获取一个one way的proxy
		* 			需要注意，name需要包含完整的链接字符串，
		* 			"Service:tcp host -p port"
		*
		* @tparam Prx
		* @param	name
		*
		* @return	
		*/
		template<class Prx>
		Prx stringToProxyOneway(const std::string& name){
			return Prx::uncheckedCast(stringToProxy(name, ONE_WAY));
		}

		/**
		* @brief	创建一个默认的Ice::ObjectAdapterPtr
		*			使用使用默认端口
		*			name = generateUUID()
		*
		* @return	
		*/
		Ice::ObjectAdapterPtr createObjectAdapterWithEndpoints();
		
		/**
		* @brief	创建一个指定端口的Ice::ObjectAdapterPtr
		*			name = generateUUID()
		*
		* @param	port
		*
		* @return	
		*/
		Ice::ObjectAdapterPtr createObjectAdapterWithEndpoints(const short port);
		
		/**
		* @brief	创建一个指定端口，指定名字的Ice::ObjectAdapterPtr
		*
		* @param	adapterName
		* @param	port
		*
		* @return	
		*/
		Ice::ObjectAdapterPtr createObjectAdapterWithEndpoints(const std::string& adapterName, const short port);

		/**
		* @brief	获取CommunicatorPtr
		*
		* @return	
		*/
		Ice::CommunicatorPtr getCommunicator();

	protected :
		int iceTimeout_;
		Ice::ObjectPrx stringToProxy(const std::string& name, InvokeType type);
		Ice::CommunicatorPtr communicator_;
	};

};
};
#endif //TALK_UTILS_ICE_CHANNEL_H_
