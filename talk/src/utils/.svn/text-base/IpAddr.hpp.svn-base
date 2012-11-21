#ifndef __util_cpp_IpAddr__
#define __util_cpp_IpAddr__

#include <sys/stat.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <netdb.h>
#include <netinet/in.h>
#include <unistd.h>
#include <arpa/inet.h>
#include <ifaddrs.h>
#include <errno.h>
#include <boost/tokenizer.hpp>
#include <boost/algorithm/string.hpp>
#include <iostream>

namespace MyUtil {
struct IpAddr {
	static uint32_t translate(const char* addr) {
		std::string tmp(addr);
		uint32_t result = 0;
		int pos = 0;
		boost::char_separator<char> slash(".");
		boost::tokenizer<boost::char_separator<char> > categories(tmp, slash);
		for (boost::tokenizer<boost::char_separator<char> >::iterator it =
				categories.begin(); it != categories.end(); ++it) {
			switch (pos) {
			case 0:
				result += atoi((*it).c_str()) * 256* 256* 256 ; break;
case				1:
				result += atoi((*it).c_str())*256*256;
				break;
				case 2:
				result += atoi((*it).c_str())*256;
				break;
				case 3:
				result += atoi((*it).c_str());
				break;
			}
			++pos;
		}
		return result;
	}
	static std::string inner() {
		static uint32_t ip10b = translate("10.0.0.0");
		static uint32_t ip10e = translate("10.255.255.255");
		static uint32_t ip172b = translate("172.16.0.0");
		static uint32_t ip172e = translate("172.16.31.255");
		static uint32_t ip192b = translate("192.168.0.0");
		static uint32_t ip192e = translate("192.168.255.255");
		static uint32_t ip255a = translate("255.255.255.255");

		struct ifaddrs *ifa= NULL, *ifp= NULL;
		std::string result;
		int masklevel=0;

		if (getifaddrs(&ifp) < 0) {
			std::cerr << "IpAddr::inner -> getifaddrs: " << strerror(errno) << std::endl;
			return result;
		}

		for (ifa = ifp; ifa; ifa = ifa->ifa_next) {
			char ip[200], mask[200];
			socklen_t salen;
			int level = 0;

			if (!ifa->ifa_addr)
			continue;
			/* if (strcmp(ifa->ifa_name,"ppp0") == 0) continue; */
			if (ifa->ifa_addr->sa_family == AF_INET)
				salen = sizeof(struct sockaddr_in);
			else if (ifa->ifa_addr->sa_family == AF_INET6)
				salen = sizeof(struct sockaddr_in6);
			else
			continue;

			if (getnameinfo(ifa->ifa_addr, salen, ip, sizeof (ip), NULL, 0,
							NI_NUMERICHOST) < 0) {
				std::cerr << "IpAddr::inner -> getnameinfo: " << strerror(errno) << std::endl;
				continue;
			}
			// 当有多个ip符合网段要求时, 通过mask进行优先级的判断, 选出最适合的ip -- by zhanghan 090724
			if (getnameinfo(ifa->ifa_netmask, salen, mask, sizeof (ip), NULL, 0,
							NI_NUMERICHOST) < 0) {
				std::cerr << "IpAddr::inner -> getmasknameinfo: " << strerror(errno) << std::endl;
				level = 1;				
			} else {
				uint32_t maskaddr = translate(mask);
				if ( maskaddr == ip255a ) {
					level = 2;
				} else {
					level = 3;
				}
			}

			uint32_t addr = translate(ip);
			if ((addr > ip10b && addr < ip10e) || (addr > ip172b && addr < ip172e) || (addr > ip192b && addr < ip192e)) {
				if ( level > masklevel ) {
					result = ip;
					masklevel = level;
				}
			}
		}
		freeifaddrs(ifp);

		return result;
	}
	static std::string hostname() {
		struct ifaddrs *ifa= NULL, *ifp= NULL;
		std::string result = "";

		if (getifaddrs(&ifp) < 0) {
			std::cerr << "IpAddr::hostname -> getifaddrs: " << strerror(errno) << std::endl;
			return result;
		}

		for (ifa = ifp; ifa; ifa = ifa->ifa_next) {
			char hostname[200];
			socklen_t salen;

			if (!ifa->ifa_addr)
			continue;

			if (ifa->ifa_addr->sa_family == AF_INET)
			salen = sizeof(struct sockaddr_in);
			else if (ifa->ifa_addr->sa_family == AF_INET6)
			salen = sizeof(struct sockaddr_in6);
			else
			continue;

			if (getnameinfo(ifa->ifa_addr, salen, hostname, sizeof (hostname), NULL, 0, NI_NUMERICSERV) < 0) {
				std::cerr << "IpAddr::inner -> getnameinfo: " << strerror(errno) << std::endl;
				continue;
			}

			result = hostname;
		}
		freeifaddrs(ifp);

		return result;
	}
	static std::string getHostName(const std::string& host) {
		std::string result = "";

		// 首先取得Registry的地址
		struct addrinfo* afr = NULL, * af = NULL;
		if ( getaddrinfo(host.c_str(), NULL, NULL, &afr) < 0 ) {
			std::cerr << "IpAddr::getHostName "<<host<<" -> getifaddrs: " << strerror(errno) << std::endl;
			return result;
		}
		for (af = afr; af; af = af->ai_next) {

			socklen_t salen;

			if (!afr)
			continue;

			if (af->ai_family == AF_INET)
			salen = sizeof(struct sockaddr_in);
			else if (af->ai_family == AF_INET6)
			salen = sizeof(struct sockaddr_in6);
			else
			continue;

			// 反解
			char hostname[200];
			if (getnameinfo(af->ai_addr, salen, hostname, sizeof (hostname), NULL, 0, NI_NUMERICSERV) < 0) {
				std::cerr << "IpAddr::registryHostName -> getnameinfo: " << strerror(errno) << std::endl;
				continue;
			}
			result = hostname;
			if ( result != "" ) {
				break;
			}
		}
		freeaddrinfo(afr);
		return result;
	}
	static std::string registryHostName() {
		return getHostName("XiaoNeiRegistry");
	}
	static bool isXiaonei() {
		std::string reghost = registryHostName();
		std::string xiaonei = getHostName("XiaoNeiRegistry.d.xiaonei.com");
		return reghost==xiaonei;
	}
	static bool isKaixin() {
		std::string reghost = registryHostName();
		std::string kaixin = getHostName("XiaoNeiRegistry.d.kaixin.com");
		return reghost==kaixin;
	}

};
};
#endif

