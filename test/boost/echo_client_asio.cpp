#include<boost/asio.hpp>
#include<iostream>
#include<unistd.h>
#include<string>

int main()
{
	std::string str;
	while(std::cin >> str) {
		boost::asio::io_service  io_service;
		boost::asio::ip::tcp::socket  sk(io_service);
		sk.open(boost::asio::ip::tcp::v4());
		sk.connect(boost::asio::ip::tcp::endpoint(boost::asio::ip::address::from_string("127.0.0.1"), 12345));
		//std::cin >> str;
		sk.send(boost::asio::buffer(str ,str.size()));
	}
		
}
