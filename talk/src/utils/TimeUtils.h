#ifndef TALK_UTILS_TIME_UTILS_H_
#define TALK_UTILS_TIME_UTILS_H_

namespace mtalk{
namespace utils{

void MicroSleep(long microseconds); 

void MilliSleep(long milliseconds); 

/**
* @brief getCurrentTimeMSec 获取当前时间毫秒值
*
* @return 
*/
long getCurrentTimeMSec();


class MilliTimer {
public :
	MilliTimer();
	void restart();
	long elapsed() const;
private :
	long startTime_;
};

};
};
#endif //TALK_UTILS_TIME_UTILS_H_
