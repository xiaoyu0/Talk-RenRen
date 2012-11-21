/*
 * =====================================================================================
 *
 *       Filename:  UserIdUtil.cpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  2012年09月17日 12时06分14秒
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  jun.liu (), jun.liu@renren-inc.com
 *        Company:  renren-inc
 *
 * =====================================================================================
 */

#include    "UserIdUtil.h"
#include  <iostream>
#include  <boost/lexical_cast.hpp>
#include  <cmath>

using namespace std;
using namespace boost;

namespace mtalk {
namespace utils {

	long UserIdUtil::convertRenRenId2Gid(const string& userId) {
//		long gid = userId;
//		int temp = userId;
//		int i = 0;
//		for(; temp != 0 ; i++) {
//			temp = temp / 10;	
//		}
//		gid = gid + (long)pow(10, i);
		string idstr = "1" + userId;
		long gid = 0;
		try {
			gid = boost::lexical_cast<long>(idstr);
		}
		catch(...){}
		return gid;
	}

	string UserIdUtil::convertGid2RenRenId(const long& gid) {
//		int renrenId = 0;
//		long temp = gid;
//		int i = 0;
//		for(; temp != 0 ; i++) {
//			temp = temp / 10;	
//		}
//		int first = gid / (int)pow(10.0,( i - 1));
//		if(first != 1) {
//			return "1";
//		}
//
//		renrenId = (int)(gid - (long)pow(10.0, i - 1));
//		
//		renrenId = renrenId > 0 ? renrenId : 1;
//		string idstr;
//		try {
//			idstr = lexical_cast<string>(renrenId);
//		}
//		catch(...){}
		string  a("1");
		string gidstr;
		try {
			gidstr = lexical_cast<string>(gid);
		}
		catch(...){ return "";}
		if(gidstr.empty() || (gidstr[0] != a[0])){
			return "478849448";		
		}
		string idstr;
		idstr=gidstr.substr(1,gidstr.size()-1);
		return idstr;
	}

	map<long, string> UserIdUtil::convertGidVec2RenRenId(vector<long> sixinIdVec) {
		map<long, string> uidMap;
		vector<long>::iterator it;

		for(it = sixinIdVec.begin(); it < sixinIdVec.end(); it++) {
			uidMap.insert(pair<long, string>(*it, convertGid2RenRenId(*it)));
		}
		return uidMap;
	}

	map<string, long> UserIdUtil::convertRenRenIdVec2Gid(vector<string> bundAccountIdVec) {
		map<string, long> uidMap;
		vector<string>::iterator it;

		for(it = bundAccountIdVec.begin(); it < bundAccountIdVec.end(); it++) {
			uidMap.insert(pair<string, long>(*it, convertRenRenId2Gid(*it)));
		}
		return uidMap;
	}

};

};
