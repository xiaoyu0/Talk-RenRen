/**
* @file ResultCode.h
* @brief	定义endpoint server和bosh server之间交互的所以code
* @author you.zhou@renren-inc.com
* @version 1.0
* @date 2011-07-15
*/
#ifndef TALK_CONSTANT_RESULT_CODE_H_
#define TALK_CONSTANT_RESULT_CODE_H_

namespace mtalk{
namespace constant{
	class ResultCode{
	public :
		typedef enum{
			OK,                      //0

			PROXY_NOT_FOUND,         //1

			PARAM_ERROR,             //2

			SESSION_NOT_FOUND,       //3

			PENDING_MSG_FOUND,       //4

			OLD_MSG_FOUND,           //5

			OLD_MSG_NOT_FOUND,       //6

			RID_TOO_LARGE,           //7

			AUTH_CHECK,              //8

			AUTH_SUCCESS,            //9

			AUTH_FAILURE,            //10

			AUTH_FORBIDDEN,          //11

			SEND_SUCCESS,            //12

			SEND_MSG_NOT_FOUND,      //13

			FROM_NOT_FOUND,          //14

			SESSION_CREATE_SUCCESS,  //15

			XMPP_RESPONSE,           //16

			SAME_RID,                //17

			SESSION_CLOSE ,         //18
				
			ICE_TIME_OUT,             //19
		
			UNKNOW                   //20

		} Code;
	};
};
};
#endif //TALK_CONSTANT_RESULT_CODE_H_
