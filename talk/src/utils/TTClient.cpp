#include <boost/lexical_cast.hpp>
#include <boost/algorithm/string.hpp>
#include <tcrdb.h>
#include "TTClient.h"
#include "utils/MyLogger.h"

using namespace boost::algorithm;
using namespace mtalk::utils;

namespace mtalk{
    namespace utils{

	TTClient::TTClient(string serverList){
	    tcrdbPtr_ = tcrdbnew();
	    vector<string> servers;
	    split(servers, serverList, is_any_of(","), token_compress_on);
	    for(size_t i = 0; i < servers.size(); i++){
		string server = servers[i];
		size_t p = server.find(":");
		if(p != string::npos){
		    string ip = server.substr(0, p);
		    string portStr = server.substr(p+1);
		    short port = boost::lexical_cast<short>(portStr);
		    serverList_.push_back(make_pair(ip, port));
		}
	    }
	    LOG_INFO("TTClient::TTClient => Created : serverList = " << serverList);
	}

	void TTClient::open(){
	    for(size_t i = 0; i < serverList_.size(); i++){
		if(tcrdbopen(tcrdbPtr_, serverList_[i].first.c_str(), serverList_[i].second)){
		    LOG_INFO("TTClient::open => success : server = " << serverList_[i].first << ":" << serverList_[i].second);
		    break;
		} else {
		    int code = tcrdbecode(tcrdbPtr_);
		    LOG_ERROR("TTClient::open => failure : " 
			    << serverList_[i].first << ":" << serverList_[i].second 
			    << " code = " << code << " msg = " << tcrdberrmsg(code));
		}
	    }
	}

	void TTClient::close(){
	    if(tcrdbPtr_)
		tcrdbdel(tcrdbPtr_);
	}

	void TTClient::reOpen(){
	    close();
	    tcrdbPtr_ = tcrdbnew();
	    open();
	    LOG_INFO("TTClient::reOpen => finish");
	}

	void TTClient::set(string key, string value){
	    if(!tcrdbput2(tcrdbPtr_, key.c_str(), value.c_str())){

	    }
	}

	//从TT重新获取一次secketkey
	string  TTClient::reGetFromTT(const string& key)
	{
	    string strTT;
	    char* value = tcrdbget2(tcrdbPtr_, key.c_str());
	    if(value){
		strTT = value;
		delete value;
		LOG_DEBUG("TTClient::reGetFromTT ==> key: "<<key<<" return code : ["<<strTT<<"]");
	    }	
	    else {
		int code = tcrdbecode(tcrdbPtr_);  //获取code码
		if(code != TTESUCCESS){  
		    LOG_ERROR("TTClient::reGetFromTT => recv error  code : "<<code);	
		}
		else //返回成功,不做任何处理
		{
		    LOG_DEBUG("TTClient::reGetFromTT ==> key: "<<key<<" return code == "<<code);
		}
	    }
	    return strTT;
	}

	string TTClient::get(string key){

	    LOG_DEBUG("TTClient::get => key=: "<<key);
	    char* value = NULL;
	    string ret;

	    value = tcrdbget2(tcrdbPtr_, key.c_str());

	    if(value){
		LOG_DEBUG("TTClient::tcrdbget2 ==> key: "<<key<<" return value : ["<<value<<"]");
		ret = value;
		delete value;
	    } else {
		LOG_DEBUG("TTClient::tcrdbget2 ==> key: "<<key<<" return null value ");
		int code = tcrdbecode(tcrdbPtr_);
		if(code != TTESUCCESS){
		    //网络异常，重试
		    LOG_ERROR("TTClient::tcrdbecode => key: "<<key<<" failure : recv error code: "<<code);
		    reOpen();
		    ret = reGetFromTT(key); //重新获取
		}
		else   //从TT返回成功，不做任何处理
		{
		    LOG_DEBUG("TTClient::tcrdbecode ==> key: "<<key<<"return code == "<<code);
		}			

           }

	    return ret;
	}

	string TTClient::get(long key){
	    string strKey = boost::lexical_cast<string>(key);
	    return get(strKey);
	}

	string TTClient::get(int key){
	    string strKey = boost::lexical_cast<string>(key);
	    return get(strKey);
	}

	void TTClient::test(){

	    //		set("test", "test");
	    cout <<"sleep" << endl;
	    sleep(20);
	    cout <<"sleep finish" << endl;
	    get("test");
	}
    };
};
