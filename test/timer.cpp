#include <iostream>
#include <boost/asio.hpp>
#include <boost/date_time/posix_time/posix_time.hpp>

void print(const boost::system::error_code& )
{
//	while(1)
		std::cout << "Hello, world!\n";
}

int main()
{
	boost::asio::io_service io;
	boost::asio::deadline_timer t(io, boost::posix_time::seconds(2));
//	io.run();
	t.async_wait(print);
	std::cout << "before hello world !" << std::endl;
	io.run();
	std::cout << "after hello world!" << std::endl;
//	t.async_wait(print);
	return 0;
}
