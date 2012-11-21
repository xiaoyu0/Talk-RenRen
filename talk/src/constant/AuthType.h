/**
* @file AuthType.h
* @brief 建立连接认证方式	
* @author jun.liu@renren-inc.com
* @version 1.0
* @date 2012-08-10
*/
#ifndef TALK_CONSTANT_AUTH_TYPE_H_
#define TALK_CONSTANT_AUTH_TYPE_H_
 
namespace mtalk{
namespace constant{
	class AuthType{
	public :
		typedef enum{
			
			/**
			* @brief 私信2.0认证
			*/
			SECRET_KEY = 0,
			/**
			* @brief 私信3.0认证
			*/
			MAS_SECRET_KEY = 1,
		} Type;
	};
};
};
#endif //TALK_CONSTANT_MESSAGE_TYPE_H_
