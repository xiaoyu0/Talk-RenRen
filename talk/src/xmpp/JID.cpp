#include <sstream>
#include <iostream>
#include <boost/lexical_cast.hpp>
#include "JID.h"

using namespace std;

namespace mtalk{
namespace xmpp{

	JID::JID():
		userId_(0),
		endpoint_(""),
		sessionId_(""){
	}

	JID::JID(const string& str){
		parser(str);
	}

	JID::JID(const long& userId, const string& endpoint, const string& sessionId){
		if(userId > 0)
			userId_ = userId;
		
		endpoint_ = endpoint;

		if(!sessionId.empty()){
			sessionId_ = sessionId;
		}
	}

	bool JID::parser(const string& str){
		if(str.empty())
			return false;
		userId_ = 0;
		sessionId_ = "";
		endpoint_ = "";
		router_ = " ";
		size_t sp1 = str.find('@');
		if(sp1 != string::npos){
			try{
				userId_ = boost::lexical_cast<long>(str.substr(0, sp1));
			} catch (boost::bad_lexical_cast &){
				userId_ = 0;
			}
		}

		size_t sp2 = str.find('/');
		if(sp2 != string::npos){
			sessionId_ = str.substr(sp2 + 1);
		} else {
			sp2 = str.size();
		}

		
		if(sp1 != string::npos){
		    endpoint_ = str.substr(sp1+1, sp2-sp1-1);
		}
		else {
		    endpoint_ = str.substr(0, sp2);
		}

		if(sp1 == string::npos && sp2 == str.size()){
			try{
				userId_ = boost::lexical_cast<long>(str);
				endpoint_ = "";
			}catch(...){
				userId_ = 0 ;
			}
		}
		
		std::string domain = endpoint_;
		size_t sp3 = domain.find('.');
		if(sp3 != string::npos){
			router_ = domain.substr(0,sp3);
		}

		return true;
	}

	string JID::toString() const{
		ostringstream os;
		if(userId_ > 0){
			os << userId_ ;
			if(!endpoint_.empty()){
				os << "@";
			}
		}
		os << endpoint_;
		if(!sessionId_.empty()){
			os << "/" << sessionId_;
		}

		return os.str();
	}
};
};
