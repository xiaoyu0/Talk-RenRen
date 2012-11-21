/*
 * =====================================================================================
 *
 *       Filename:  UserIdUtil.h
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  2012年09月17日 11时55分18秒
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  jun.liu (), jun.liu@renren-inc.com
 *        Company:  renren-inc
 *
 * =====================================================================================
 */

#ifndef  USERIDUTIL_H
#define  USERIDUTIL_H
#include  <map>
#include  <vector>
#include  <string>

using namespace std;

namespace mtalk {
namespace utils {

	/**
	 * @brief 用户id工具类
	 *
	 **/
	class UserIdUtil {
		public:
			/**
			 * @brief 将人人id转换为私信id
			 * 
			 * @param int userId 人人id
			 * @return long
			 **/
			static long convertRenRenId2Gid(const string& userId);	
			
			/**
			 * @brief 将人人id转换为私信id
			 * 
			 * @param vector userId 人人id
			 * @return long
			 **/
			static map<string, long> convertRenRenIdVec2Gid(vector<string> bundAccountIdVec);

			/**
			 * @brief 将私信id转换为人人id
			 * 
			 * @param long userId 私信id
			 * @return int
			 **/
			static string convertGid2RenRenId(const long& gid);
			
			/**
			 * @brief 将私信id转换为人人id
			 * 
			 * @param vector userId 私信id
			 * @return int
			 **/
			static map<long, string> convertGidVec2RenRenId(vector<long> sixinIdVec);

	
	};
};
};


#endif  /*USERIDUTIL_H*/
