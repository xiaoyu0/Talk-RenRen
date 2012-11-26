//这个程序运行结果很奇怪，还没明白,当我不在最后sleep时，程序不会有任何等待就结束，
//这应该是因为main主线程要返回了，不会去待另一线程的wait,但是程序有时候会打印出 hello world，有时候不会，
//这种不确定性应该是io_service::run...的具体实现造成的
#include <iostream>
#include <boost/asio.hpp>
#include <boost/date_time/posix_time/posix_time.hpp>
#include <pthread.h>
#include <unistd.h>

void print(const boost::system::error_code& )
{
	std::cout << "Hello, world!\n";
}

boost::asio::io_service io;
void * thread_timer(void * arg)
{
//	boost::asio::io_service io;
	io.run();
}

//boost::asio::io_service io;
int main()
{
	pthread_t  ntid;
//	pthread_create(&ntid , 
//	boost::asio::io_service io;
	boost::asio::deadline_timer t(io, boost::posix_time::seconds(2));
//	io.run();
	t.async_wait(print);
	pthread_create(&ntid, NULL, thread_timer, NULL);
	std::cout << "before hello world !" << std::endl;
//	io.run();
	std::cout << "after hello world!" << std::endl;
//	t.async_wait(print);
	sleep(5);
	return 0;
}
