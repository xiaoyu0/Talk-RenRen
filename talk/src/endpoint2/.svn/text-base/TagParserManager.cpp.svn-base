#include "TagParserManager.h"
#include "utils/MyLogger.h"
#include "utils/Singleton.h"
#include "bosh/BoshServer.h"
#include "XMPPTagHandler.h"

using namespace mtalk::endpoint2;
using namespace std;
using namespace mtalk::utils;
using namespace mtalk::constant;
using namespace mtalk::tagparser;


namespace mtalk{
namespace endpoint2{

	bool TagPraserManager::add(const long connectionId , TagParserPtr tagParserPtr){
	
		size_t poolIndex=getTagPraserPoolsIndex(connectionId);		
		WriteLock lock(tagPoolsMutex_[poolIndex]);
		{
			SubPool& pool = tagPools_[poolIndex];
			if(pool.find(connectionId) == pool.end()){
			//TagPraserPtr tpp = boost::make_shared<TagPraser>(userId);
	//			boost::shared_ptr<tagparser::TagHandler> xmppTagHandlerPtr(new XMPPTagHandler);
    //      		boost::shared_ptr<tagparser::TagParser> tpp(new tagparser::TagParser(xmppTagHandlerPtr));
				pool[connectionId] = tagParserPtr;
			}else{
				return false;
				LOG_WARN("TagPraserManager::add => already exsit : connectionId = " << connectionId);
			}
			LOG_DEBUG("TagPraserManager::add => add new tagpraserptr : connectionId = " << connectionId);
			return true;	
		}	
	}

	void TagPraserManager::remove(const long connectionId){
		
		size_t poolIndex=getTagPraserPoolsIndex(connectionId);		
		WriteLock lock(tagPoolsMutex_[poolIndex]);
		{
			SubPool& pool = tagPools_[poolIndex];
			if(pool.find(connectionId) != pool.end()){ //TagPraserPtr tpp = boost::make_shared<TagPraser>(userId);
				pool.erase(connectionId);
				LOG_DEBUG("TagPraserManager::remove=> remove a tagpraserptr : connectionId = " << connectionId);
			
			}

		}
		return;
	}


	TagParserPtr TagPraserManager::getTagParser(const long connectionId){
		TagParserPtr  tagParserPtr;
		size_t poolIndex=getTagPraserPoolsIndex(connectionId);		
		ReadLock lock(tagPoolsMutex_[poolIndex]);
		{
			SubPool& pool = tagPools_[poolIndex];
			map<long , TagParserPtr>::iterator it;	
			it = pool.find(connectionId);

			if(it != pool.end()){
				tagParserPtr = it->second ;
				LOG_DEBUG("TagPraserManager::get => get tagpraserptr success  connectionId = " << connectionId);
			}else{

				LOG_DEBUG("TagPraserManager::get => get tagpraserptr failure  connectionId = " << connectionId);
			}

			return  tagParserPtr;
		}

	}


	void TagPraserManager::clear(){
		for(size_t i = 0; i < TAG_POOLS_SIZE; i++){
			WriteLock lock(tagPoolsMutex_[i]);
			tagPools_[i].clear();
		}
	}



};
};
