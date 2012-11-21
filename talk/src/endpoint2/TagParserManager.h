
#ifndef TAG_PRASER_MANAGER_H_
#define TAG_PRASER_MANAGER_H_

#include <string>
#include <map>
#include <boost/asio.hpp>
#include <boost/shared_ptr.hpp>
#include <boost/enable_shared_from_this.hpp>
#include <boost/utility.hpp>
#include "StreamHandler.h"
#include "utils/MyLock.h"
#include "utils/MyLogger.h"
#include "pugixml/pugixml.hpp"
#include "utils/Singleton.h"
#include "utils/ZKUtils.h"
#include "proxy/SocketServiceProxy.h"
#include "net/Connection.h"
#include "Tag.h"

namespace mtalk{
namespace endpoint2{

	//	boost::shared_ptr<tagParser::TagHandler> xmppTagHandlerPtr(new XMPPTagHandler);

	//	boost::shared_ptr<tagParser::TagParser> xxx(new tagParser::TagParser(xmppTagHandlerPtr));
//	typedef boost::shared_ptr<TagParser> TagParserPtr;
	typedef std::map<long, tagparser::TagParserPtr> SubPool;
	const static size_t TAG_POOLS_SIZE = 100;
	class TagPraserManager : public boost::enable_shared_from_this<TagPraserManager>, private boost::noncopyable {
		public :

			~TagPraserManager(){};



			/**
			* @brief   add TagPraser for a new connection by 	connectionId
			*
			* @param 
			*
			* @return	
			*/
			bool add(const long connectionId , tagparser::TagParserPtr tagPraserPtr);

			/**
			* @brief	清除一个用户的一个sessionId
			*
			* @param	sessionPtr
			*/
			void remove(const long connectionId);


			/**
			  @brief get TagParser by connectionId
			 */
			tagparser::TagParserPtr getTagParser(const long connectionId);


			/**
			* @brief	清除所有TagParser
			*/
			void clear();

		private :
			size_t getTagPraserPoolsIndex(long  connectionId){
				return (size_t)(connectionId % TAG_POOLS_SIZE);
			}


			SubPool tagPools_[TAG_POOLS_SIZE];

			boost::shared_mutex tagPoolsMutex_[TAG_POOLS_SIZE];
	};


};
};

#endif // TAG_PRASER_MANAGER_H_
