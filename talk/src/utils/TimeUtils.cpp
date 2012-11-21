#include "TimeUtils.h"
#include <sys/select.h>
#include <sys/time.h>
#include <unistd.h>

namespace mtalk{
namespace utils{

void MicroSleep(long microseconds) {
	struct timeval val;
	val.tv_sec = 0;
	val.tv_usec = microseconds;
	select(0, 0, 0, 0, &val);	
} 

void MilliSleep(long milliseconds) {
	MicroSleep(milliseconds * 1000);
}

long getCurrentTimeMSec(){
	struct timeval tv;
	gettimeofday(&tv, NULL);
	long m_sec = (tv.tv_sec * 1000) + (tv.tv_usec / 1000);
	return m_sec;
}

MilliTimer::MilliTimer(){
	struct timeval tv;
	gettimeofday(&tv, NULL);
	startTime_ = tv.tv_sec*1000 + tv.tv_usec/1000;
}

void MilliTimer::restart(){
	struct timeval tv;
	gettimeofday(&tv, NULL);
	startTime_ = tv.tv_sec*1000 + tv.tv_usec/1000;
}

long MilliTimer::elapsed() const{
	struct timeval tv;
	gettimeofday(&tv, NULL);
	return tv.tv_sec*1000 + tv.tv_usec/1000 - startTime_;
}

};
};
