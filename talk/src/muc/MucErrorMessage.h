#ifndef MUC_ERROR_CODE_H
#define MUC_ERROR_CODE_H

#include <string>

namespace mtalk{
namespace muc{
	// 错误消息函数
	std::string getErrorMsg(int code);
	
	int getErrorCodeKey(int code);

	class MucErrorType{
	public :
		typedef enum ErrorType{
				
				//slice defined type	
				Success //操作正常完成  0
				, Destory //销毁成功  1
				, NoPermission //没有操作权限  2
				, RoomNotExist //房间不存在  3
				, AlreadyInRooom //已经在房间内  4
				, CreatedRoomIsFull //创建房间数已满  5
				, RoomIsFull //房间人数已满  6
				, NotInRoom //被操作人不存在于该房间  7
				, AlreadyInContact //房间已保存至通讯录  8
				, SubjectIsEmpty //房间主题为空  9
				, NotInContact //房间不在通讯录里  10
				, IllegalArgument //非法参数  11
				, Unknown //未知  12
				
				// muc defined type
				,RoomCreationNoInvitee
			    
                ,sendMsgNotInRoom 

                // temparary    
                ,IllegalId
			    


                ,ServerError
		};
	};
}
}

#endif
