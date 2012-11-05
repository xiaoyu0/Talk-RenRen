#include<boost/asio.hpp>
#include<iostream>
#include<string>
#include<cstring>
using namespace boost::asio;
int main()
{
//	std::string str_recv;   str_recv.reserve(100); 
	char  str[100] ;
	boost::asio::io_service io_service;
	boost::asio::ip::tcp::socket  sk(io_service);
	ip::tcp::endpoint endpoint(ip::address::from_string("127.0.0.1"), 12344);
	ip::tcp::acceptor  acceptor(io_service ,endpoint);
	sk.open(boost::asio::ip::tcp::v4());
	sk.bind(endpoint);
	acceptor.listen();
	acceptor.accept(sk);
	while (sizeof(str)!=0)
	{
//		boost::asio::io_service io_service;
	//	boost::asio::ip::tcp::socket  sk(io_service);
//		sk.open(boost::asio::ip::tcp::v4());
//		sk.bind(boost::asio::ip::tcp::endpoint (boost::asio::ip::tcp::v4(), 12345));
		
		sk.receive(boost::asio::buffer(str ,100));
		std::cout << str << std::endl;
	}
	return 0;
}
