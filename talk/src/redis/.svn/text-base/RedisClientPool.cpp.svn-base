#include "RedisClientPool.h"
#include "utils/MyLogger.h"

using namespace std;
using namespace mtalk::utils;

namespace mtalk{
namespace redis{

	RedisClientPool::RedisClientPool(int size) :
		size_(size),
		split_(true),
		block_(true){
	}

	RedisClientPool::RedisClientPool(int size, const std::string& addrs) :
		size_(size),
		addrs_(addrs),
		split_(true),
		block_(true){
	}

	bool RedisClientPool::init(){
		ScopedLock lock(mutex_);

		idleClientList_.clear();
		clientSet_.clear();

		for(int i = 0; i < size_; ++i){
			boost::shared_ptr<RedisClient> redisClientPtr = createOneClient(i);

			if(!redisClientPtr){
				return false;
			}

			idleClientList_.push_back(redisClientPtr);
			clientSet_.insert(redisClientPtr);
		}
		LOG_INFO("RedisClientPool::init => redis client pool init success : size = " << clientSet_.size());
		return true;
	}

	bool RedisClientPool::init(const std::string& addrs){
		addrs_ = addrs;
		return init();
	}

	void RedisClientPool::setRWSplit(bool split){
		split_ = split;
	}

	bool RedisClientPool::isRWSplit() const{
		return split_;
	}

	void RedisClientPool::setBlock(bool block){
		block_ = block;
	}

	bool RedisClientPool::isBlock() const{
		return split_;
	}

	boost::shared_ptr<RedisClient> RedisClientPool::getClient(){

		boost::shared_ptr<RedisClient> client;

		ScopedLock lock(mutex_);

		if(!block_ && idleClientList_.size() == 0){
			return client;
		}

		while(idleClientList_.size() <= 0){
			cond_.wait(lock);
		}
		
		client = idleClientList_.front();
		idleClientList_.pop_front();
		LOG_DEBUG("RedisClientPool::getClient => return client " << client->getIndex());

		return client;
	}

	void RedisClientPool::retClient(boost::shared_ptr<RedisClient> clientPtr){
		
		if(!clientPtr){
			return;
		}
		ScopedLock lock(mutex_);

		set<boost::shared_ptr<RedisClient> >::iterator it = clientSet_.find(clientPtr);

		if(it == clientSet_.end()){
			return;
		}
		
		idleClientList_.push_front(clientPtr);

		if(idleClientList_.size() == 1 && block_){
			cond_.notify_all();
		}
		return;
	}

	boost::shared_ptr<RedisClient> RedisClientPool::createOneClient(int index){
		boost::shared_ptr<RedisClient> redisClientPtr(new RedisClient(addrs_));
		redisClientPtr->setRWSplit(split_);
		redisClientPtr->setIndex(index);
		redisClientPtr->connect();
		return redisClientPtr;
	}

};
};

