#include <boost/asio.h>
#include <iostream>
#include <boost/bind.hpp>
#include <boost/date_time/posix_time/posix_time.hpp>
#include <pthread.h>

class Printer
{
public:
	Printer (boost::asio::io_service io , int count=5)
		:timer_(io , boost::posix_time::seconds(1)) , count_(count)
	{
		timer_.async_wait(boost::bind(&Printer::print , this));	
		pthread_create(&ntid, NULL, thread_timer, NULL);
	}

	~Printer ()
	{
		std::cout << "the final count is :" 
	}
	static void * thread_timer (void * arg) //static和普通函数的同异,这里用static 作线程函数
	{
		io.run();
	}
	void print ()
private:
	static boost::asio::io_service io;
	pthread_t ntid;
	
}
