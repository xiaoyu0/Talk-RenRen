#ifndef TALK_HTTP_SERVER_IO_SERVICE_POOL_H_
#define TALK_HTTP_SERVER_IO_SERVICE_POOL_H_

#include <string>
#include <vector>
#include <boost/shared_ptr.hpp>
#include <boost/asio.hpp>

#include "AsioPtr.h"

namespace mtalk{
namespace net{

class IoServicePool {
public :
	IoServicePool(size_t poolSize);

	void start();

	void stop();

	IoServicePtr getIoService();
	IoServicePtr getAcceptIoService();
private :
	std::vector<IoServicePtr> servicePool_;
	std::vector<WorkPtr> workPool_;

	size_t nextIndex_;
	size_t size_;
};

typedef boost::shared_ptr<IoServicePool> IoServicePoolPtr;

};
};
#endif // TALK_HTTP_SERVER_IO_SERVICE_POOL_H_
