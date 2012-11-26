#include<boost/asio.hpp>
#include<iostream>

using namespace boost::asio ;
int main()
{	
	io_service  my_io_service ;
	ip::tcp::resolver resolver(my_io_service);
	ip::tcp::resolver::query query("localhost", "http");
	ip::tcp::resolver::iterator iter = resolver.resolve(query);
	ip::tcp::resolver::iterator end; // End marker.
	while (iter != end)
	{
		  ip::tcp::endpoint endpoint = *iter++;
		  std::cout << endpoint << std::endl;
	}
	return 0;
}
