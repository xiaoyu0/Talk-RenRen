#include <sstream>
#include <boost/lexical_cast.hpp>
#include "JID.h"

using namespace std;

namespace mtalk{
namespace muc{

	JID::JID(){
	}

	JID::JID(const string& str){
		parser(str);
	}

	JID::JID(const string& node, const string& domain, const string& resource):
		node_(node), domain_(domain), resource_(resource){
	}

	JID::JID(const long& nodeId, const string& domain, const int& resourceId){
		if(nodeId > 0)
			nodeId_ = nodeId;

		domain_ = domain;
		resourceId_ = resourceId;

	}

	bool JID::parser(const string& str){
		if(str.empty()){
			return false;
		}
		
		node_ = "";
		nodeId_ = 0;
		domain_ = "";
		resource_ = "";
		resourceId_ = 0;

		size_t sp1 = str.find('@');
		if(sp1 != string::npos){
			try{
				node_ = str.substr(0, sp1);
				nodeId_ = boost::lexical_cast<long>(node_);
			} catch (boost::bad_lexical_cast &){
			
			}
		} else {
			try{
				node_ = str;
				nodeId_ = boost::lexical_cast<long>(node_);
			} catch (boost::bad_lexical_cast &){
			
			}
		
			return false;
		}
	
		size_t sp2 = str.find('/');
		if(sp2 != string::npos){
			resource_ = str.substr(sp2+1);
			resourceId_ = boost::lexical_cast<long>(resource_);
		} else {
			sp2 = str.size();
		}

		domain_ = str.substr(sp1+1, sp2);
		return true;
	}

	string JID::toString() const{
		ostringstream os;
		os << node_ << "@";
		os << domain_;
		if(!resource_.empty()){
			os << "/" << resource_;
		}

		return os.str();
	}

};  //namespace mtalk
};  //namespace muc
