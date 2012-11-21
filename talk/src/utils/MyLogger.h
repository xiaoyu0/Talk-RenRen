#ifndef TALK_UTILS_MY_LOGGER_H_
#define TALK_UTILS_MY_LOGGER_H_

#include <string>
#include <Ice/Ice.h>
#include <log4cplus/logger.h>
#include "ice_src/remote_logger.h"
#include "Singleton.h"
#include <string>
#include <time.h>
#include <vector>
#include <fstream>
#include <iostream>
#include <algorithm>

namespace mtalk{
namespace utils{



#define LOG_TRACE(msg) LOG4CPLUS_TRACE(log4cplus::Logger::getRoot(), msg);

#define LOG_DEBUG(msg) LOG_GATEWAY(msg);

#define LOG_WHITE(msg) LOG4CPLUS_INFO(log4cplus::Logger::getInstance("whitelist"), msg);

#define LOG_INFO(msg) LOG4CPLUS_INFO(log4cplus::Logger::getRoot(), msg);

#define LOG_WARN(msg) LOG4CPLUS_WARN(log4cplus::Logger::getRoot(), msg);

#define LOG_ERROR(msg) LOG4CPLUS_ERROR(log4cplus::Logger::getRoot(), msg);

#define LOG_FATAL(msg) LOG4CPLUS_FATAL(log4cplus::Logger::getRoot(), msg);

#define LOG_TIME(msg) LOG4CPLUS_INFO(log4cplus::Logger::getInstance("time"), msg);

#define LOG_ACCESS(msg) LOG4CPLUS_INFO(log4cplus::Logger::getInstance("access"), msg);

#define LOG_ACTION(msg) LOG4CPLUS_INFO(log4cplus::Logger::getInstance("action"), msg);

#define LOG_HTTP_ACTION(msg) LOG4CPLUS_INFO(log4cplus::Logger::getInstance("http_action"), msg);

#define LOG_MUC_ACTION(msg) LOG4CPLUS_INFO(log4cplus::Logger::getInstance("mucaction"), msg);

#define LOG_CHECK(msg) LOG4CPLUS_INFO(log4cplus::Logger::getInstance("check"), msg);

#define LOG_IM_ACTION(msg) LOG4CPLUS_INFO(log4cplus::Logger::getInstance("im_action"), msg);

#define LOG_TALK_ACTION(msg) LOG4CPLUS_INFO(log4cplus::Logger::getInstance("talk_action"), msg);


#define LOG_TRACE_ACTION(msg) LOG4CPLUS_INFO(log4cplus::Logger::getInstance("trace_action"), msg);

#define LOG_TEMP(msg) LOG4CPLUS_INFO(log4cplus::Logger::getInstance("temp"), msg);

#define LOG_FEED(msg) LOG4CPLUS_INFO(log4cplus::Logger::getInstance("feed"), msg);

#define LOG_IMFOCUSFEED(msg) LOG4CPLUS_INFO(log4cplus::Logger::getInstance("imfocusfeed"), msg);

#define LOG_MUC(msg) LOG4CPLUS_INFO(log4cplus::Logger::getInstance("muc"), msg);

#define LOG_SCHEMA(msg) LOG4CPLUS_INFO(log4cplus::Logger::getInstance("schema"), msg);

#define LOG_GATEWAY(msg)                                                \
	do {                                                                \
        std::stringstream os;                                           \
		os<<msg;														\
		LOG4CPLUS_DEBUG(log4cplus::Logger::getRoot(), msg);				\
	} while (0)



 namespace wl{

	void InitWhiteList();

    class WhiteList{
        public:
            // 构造函数，输出一条日志
			WhiteList(long id, const std::string &func, int msgType, const std::string &msg);

            // 构造函数, 输出一条日志没有id， 需要从msg解析出from 字段
			WhiteList(const std::string &func, int msgType, const std::string &msg);

            // 析构函数，输出一条日志
			~WhiteList();

            // 附加日志，介于构造和析构之间打印一条日志
            void log(const std::string& );

    protected:
        void init();

    private:
            bool bFlag_;            // 进入白名单
            timeval start_,end_;    // 计时，微妙
			long id_;
			int  msgType_;
			std::string func_;
			std::string msg_;
	};
 };

// 打印白名单日志， 调用处打印一条日志，析构时打印一条日志
#define LOG_W(id, func, type, msg) \
    mtalk::utils::wl::WhiteList whitelist(id, func, type, msg)
 
// 打印白名单日志，补充打印其他日志消息,必须在LOG_W之后
#define LOG_W_IN(msg) whitelist.log(msg)

	class RemoteLogger{
	public :

		RemoteLogger();

		~RemoteLogger();

		void writeLog(const std::string& name, const std::string& msg);
		void writeLog_white(const std::string& name, const std::string& msg);

	private :
		com::xiaonei::wap::framework::log::RemoteLogger2Prx remoteLoggerPrx_;
		std::string iceArgs_;
		Ice::CommunicatorPtr communicator_;

		com::xiaonei::wap::framework::log::RemoteLogger2Prx remoteLoggerPrx_white_;
		std::string iceArgs_white_;
		Ice::CommunicatorPtr communicator_white_;
	};

// 白名单日志格式
// time（时间）| id(私信号）| flag(IN/OU/MI）| 
// elapse(耗时，微秒) | msgtype(消息类型) | msg(报文内容)
#define RLOG_WHITE(msg)						    \
	do {										\
		std::ostringstream os;					\
		os << msg;								\
		MY_INSTANCE(RemoteLogger)				\
			.writeLog_white("talk_error", os.str());	\
	} while (0)



#define RLOG_ACTION(msg)						\
	do {										\
		std::ostringstream os;					\
		os << msg;								\
		MY_INSTANCE(RemoteLogger)				\
			.writeLog("talk_action", os.str());	\
	} while (0)

#define RLOG_MUC_ACTION(msg)						\
	do {										\
		std::ostringstream os;					\
		os << msg;								\
		MY_INSTANCE(RemoteLogger)				\
			.writeLog("talk_group_chat", os.str());	\
	} while (0)

};
};    
#endif //TALK_UTILS_MY_LOGGER_H_

