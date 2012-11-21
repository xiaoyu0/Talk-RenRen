#include <unistd.h>
#include "BoshServiceI.h"
#include "BoshServer.h"
#include  <iostream>
#include    "utils/MyLogger.h"
#include    "utils/TimeUtils.h"

using namespace mtalk::utils;

namespace mtalk{
namespace bosh{
		com::xiaonei::wap::talk::Result BoshServiceI::createSession(Ice::Long connectionId, const std::string& msg, const Ice::Current& current){
			MilliTimer tStart;			
			try{
				return MY_INSTANCE(BoshServer).createSession(connectionId, msg);
			}catch(std::exception &e){

				LOG_DEBUG("updateSession catch exception = "<<e.what());
			}catch(...){
				LOG_DEBUG("bosh createSession catch exception!!!");
			}
			com::xiaonei::wap::talk::Result result;
	//		LOG_TIME("BoshServiceI::createSession|" << tStart.elapsed() );				
			return result;
		}

		com::xiaonei::wap::talk::Result BoshServiceI::updateSession(Ice::Long connectionId, const std::string& msg, const Ice::Current& current){
			MilliTimer tStart;			
			try{
				return MY_INSTANCE(BoshServer).updateSession(connectionId, msg);
			}catch(std::exception &e){

				LOG_DEBUG("updateSession catch exception = "<<e.what());
		}catch(...){
				LOG_DEBUG("updateSession catch exception!!!");
			}
			
	//		LOG_TIME("BoshServiceI::updateSession|" << tStart.elapsed() );				
			com::xiaonei::wap::talk::Result result;
			return result;
		}

		com::xiaonei::wap::talk::Result BoshServiceI::sendMessage(Ice::Long connectionId, const std::string& msg, const Ice::Current& current){
			MilliTimer tStart;			
			try{
				return MY_INSTANCE(BoshServer).sendMessage(connectionId, msg);
			}catch(std::exception& e){
				LOG_DEBUG("catch exception = "<<e.what());
			} catch(...){
				LOG_DEBUG("sendMessage catch exception!!!");
			}
			
	//		LOG_TIME("BoshServiceI::sendMessage|" << tStart.elapsed() );				
			com::xiaonei::wap::talk::Result result;
			return result;
		}

		std::string BoshServiceI::getVersionAndHost(const Ice::Current& current){
			MilliTimer tStart;			
			char hostName[128];
			gethostname(hostName, 128);

			string serverVersion = "####svn##version####";
			
			serverVersion.append("@").append(hostName);

	//		LOG_TIME("BoshServiceI::sendMessage|" << tStart.elapsed() );				
			return serverVersion;
		}
};
};
