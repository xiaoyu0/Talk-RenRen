#include "MucErrorMessage.h"
using namespace std;

namespace mtalk{
namespace muc{

// 错误消息表
const string MSG_0 		= "抱歉，您创建的群聊数量已达上限";	
const string MSG_10 	= "抱歉，您添加的成员数量已达上限";
const string MSG_20 	= "为您的群取个不为空的名字吧";
const string MSG_30 	= "抱歉，该成员已不存在，可能已被移除";
const string MSG_40 	= "该群已保存";
const string MSG_50 	= "抱歉，该群不在联系人列表中，可能已被移除";
const string MSG_60 	= "抱歉，您不是该群成员，无法邀请好友";
const string MSG_70 	= "抱歉，您不是群主，无法修改群名";
const string MSG_80 	= "抱歉，您不是群主，不能移除其他成员";
const string MSG_90 	= "抱歉，您已不在群聊中，可能已被群主移除";
const string MSG_100 	= "抱歉，该群已不存在，可能已被群主解散";
const string MSG_110 	= "创群必须邀请至少两个成员";
const string MSG_200 	= "抱歉，您不是群成员，无法发送消息";
const string MSG_404 	= "网络异常，请稍后再试";

// 服务器健壮性
const string MSG_600 	= "抱歉，您不是群主，不能解散房间";
const string MSG_610 	= "抱歉，您不是群成员，无法查看群详情";
const string MSG_620 	= "抱歉，您不是群成员，无法保存该群组";
const string MSG_630 	= "抱歉，您不是群成员，无法删除该群组";
const string MSG_660 	= "server error";

//later defined
//const string MSG_710  = "server error";





string getErrorMsg(int code){
	switch(code){
		case 0:
			return MSG_0;
		case 10:
			return MSG_10;
		case 20:
			return MSG_20;
		case 30:
			return MSG_30;
		case 40:
			return MSG_40;
		case 50:
			return MSG_50;
		case 60:
			return MSG_60;
		case 70:
			return MSG_70;
		case 80:
			return MSG_80;
		case 90:
			return MSG_90;
		case 100:
			return MSG_100;
		case 110:
			return MSG_110;
		case 200:
			return MSG_200;
		case 600:
			return MSG_600;
		case 610:
			return MSG_610;
		case 620:
			return MSG_620;
		case 630:
			return MSG_630;
		case 660:
			return MSG_660;
		default:
			return MSG_404;
	}
}

int getErrorCodeKey(int code){
	switch(code){
		case 0:
			return 25000;
		case 10:
			return 25001;
		case 20:
			return 25002;
		case 30:
			return 25003;
		case 40:
			return 25004;
		case 50:
			return 25005;
		case 60:
			return 25006;
		case 70:
			return 25007;
		case 80:
			return 25008;
		case 90:
			return 25009;
		case 100:
			return 25010;
		case 110:
			return 25011;
		case 200:
			return 25012;
		case 600:
			return 25014;
		case 610:
			return 25015;
		case 620:
			return 25016;
		case 630:
			return 25017;
		case 660:
			return 25018;
		case 710:
			return 25019;
		default:
			return 25013;
	}
}

};
};
