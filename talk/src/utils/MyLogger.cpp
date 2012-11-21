#include "MyLogger.h"
#include <fstream>
#include "pugixml/pugixml.hpp"
#include <boost/lexical_cast.hpp>
#include <boost/algorithm/string/trim.hpp>
#include <boost/algorithm/string.hpp>
#include <sys/time.h>
using namespace std;

namespace mtalk{
    namespace utils{

        namespace wl{

            bool CompOp(const long& i, const long& j){ return (i<j); }

            // 保存白名单
            static std::vector<long> g_vecWhiteList;
            struct whitelist_conf{
                bool whitelist_flag;     // 忽略全量白名单，全量日志 (false:不打印全量， true:打印全量)
                bool locallog_flag;      // 打本地日志(false:不打， true:打印）
                bool remotelog_flag;     // 打远程日志(false:不打， true:打印)
            };
            static whitelist_conf wconf={false, false, false};

            // 读入白名单
            // 紧急增加配置项:
            //        #whitelist=0    '0,关闭；1,打开忽略白名单功能（全量日志）,日后修补
            //        #local_log=0    '0,关闭；1,打开本地白名单功能（全量日志）,日后修补
            //        #remote_log=0    '0,关闭；1,打开RLog白名单功能（全量日志）,日后修补
            void InitWhiteList(){
                std::ifstream fi("/opt/talk/conf/whiteList.txt");
                if(fi){
                    string temp;
                    while( fi>>temp ){
                        boost::trim(temp);
                        
                        // 处理配置项( 待优化）
                        //if (boost::iequals(temp, "whitelist=0"))    { wconf.whitelist_flag=false; continue; }
                        //if (boost::iequals(temp, "whitelist=1"))    { wconf.whitelist_flag=true;  return; }  // 打开全量， 不需要读入列表
                        if (boost::iequals(temp, "local_log=0"))    { wconf.locallog_flag=false; continue; }
                        if (boost::iequals(temp, "local_log=1"))    { wconf.locallog_flag=true; continue; }
                        if (boost::iequals(temp, "remote_log=0"))   { wconf.remotelog_flag=false; continue; }
                        if (boost::iequals(temp, "remote_log=1"))   { wconf.remotelog_flag=true; continue; }

                        long id = 0;
                        try{
                            id = boost::lexical_cast<long>(temp);
                        }catch(boost::bad_lexical_cast &){
                            // 读入的不是白名单， 忽略
                            continue;
                        }

                        if (id>0){
                            g_vecWhiteList.push_back(id);
                        } 
                    }
                    fi.close();

                }else {
                    LOG_ERROR("whitelist_user read error");
                }

                // 排序
                std::sort(g_vecWhiteList.begin(), g_vecWhiteList.end(), CompOp);
                g_vecWhiteList.erase(std::unique(g_vecWhiteList.begin(), g_vecWhiteList.end()), g_vecWhiteList.end());

                for (std::vector<long>::iterator it = g_vecWhiteList.begin(); it!=g_vecWhiteList.end(); it++ ){
                    LOG_WHITE("whitelist_user="<<*it);
                }

                LOG_WHITE(" ----------- read whitelist complete ("<<g_vecWhiteList.size()<<")--------------------  ");
                LOG_WHITE(" --whitelist="<<wconf.whitelist_flag<<
                        "--locallog="<<wconf.locallog_flag<<
                        "--remotelog="<<wconf.remotelog_flag<<"---");
            }

            void WhiteList::init(){
                if ( wconf.whitelist_flag || binary_search(g_vecWhiteList.begin(), g_vecWhiteList.end(), id_, CompOp)){
                    // in white list
                    if (wconf.locallog_flag)
                        LOG_WHITE("|"<<id_<<"|IN"<<"|"<<func_<<"|0|"<<msgType_<<"|["<<msg_<<"]");
                    if (wconf.remotelog_flag)
                        RLOG_WHITE("|"<<id_<<"|IN"<<"|"<<func_<<"|0|"<<msgType_<<"|["<<msg_<<"]");
                    bFlag_ = true;
                    gettimeofday(&start_, NULL);
                }
            }

            WhiteList::WhiteList(const std::string &func, int msgType, const std::string &msg)
                :bFlag_(false), msgType_(msgType),func_(func),msg_(msg)
            {
                // get from id
                pugi::xml_document xmlDoc ;
                pugi::xml_parse_result result = xmlDoc.load(msg.c_str());
                if(!result || !xmlDoc.first_child()){
                    return;
                }
                id_ = boost::lexical_cast<long>(xmlDoc.first_child().attribute("from").value());

                init();
            }


            WhiteList::WhiteList(long id, const std::string &func, int msgType, const std::string &msg)
                :bFlag_(false), id_(id),msgType_(msgType),func_(func),msg_(msg)
            {
                init();
            }

            void WhiteList::log(const std::string &str){
                if ( bFlag_){
                    if (wconf.locallog_flag)
                        LOG_WHITE("|"<<id_<<"|MI|"<<"|"<<func_<<"|0|"<<msgType_<<"|["<<str<<"]");
                    if (wconf.remotelog_flag)
                        RLOG_WHITE("|"<<id_<<"|MI|"<<"|"<<func_<<"|0|"<<msgType_<<"|["<<str<<"]");
                }
            }
            WhiteList::~WhiteList(){
                if ( bFlag_){
                    gettimeofday(&end_, NULL);
                    long timeuse=1000000*(end_.tv_sec-start_.tv_sec)+end_.tv_usec-start_.tv_usec;
                    if (wconf.locallog_flag)
                        LOG_WHITE("|"<<id_<<"|OU|"<<"|"<<func_<<"|"<<timeuse<<"|"<<msgType_<<"||");
                    if (wconf.remotelog_flag)
                        RLOG_WHITE("|"<<id_<<"|OU|"<<"|"<<func_<<"|"<<timeuse<<"|"<<msgType_<<"||");
                }
            }
        }


        RemoteLogger::RemoteLogger():
            iceArgs_("WapRemoteLogger2:tcp -h 10.3.24.30 -p 10000"),
            iceArgs_white_("WapRemoteLogger2:tcp -h 10.3.16.182 -p 9999"){
#ifndef INTERNATIONAL 
                {
                    {
                        Ice::PropertiesPtr properties = Ice::createProperties();
                        Ice::InitializationData id;
                        id.properties = properties;
                        communicator_ = Ice::initialize(id);

                        Ice::ObjectPrx base = communicator_->stringToProxy(iceArgs_);
                        remoteLoggerPrx_ = com::xiaonei::wap::framework::log::RemoteLogger2Prx::checkedCast(base);

                        if(!remoteLoggerPrx_){
                            LOG_ERROR("RemoteLogger::RemoteLogger => can not get remote logger proxy : iceArgs = " << iceArgs_);
                            return;
                        }

                        remoteLoggerPrx_ = remoteLoggerPrx_->ice_timeout(250)->ice_oneway();
                    }

                    // 增加一个白名单打印到另外一个rlog server，用于调试
                    {
                        Ice::PropertiesPtr properties_white = Ice::createProperties();
                        Ice::InitializationData id_white;
                        id_white.properties = properties_white;
                        communicator_white_ = Ice::initialize(id_white);

                        Ice::ObjectPrx base_white = communicator_white_->stringToProxy(iceArgs_white_);
                        remoteLoggerPrx_white_ = com::xiaonei::wap::framework::log::RemoteLogger2Prx::checkedCast(base_white);

                        if(!remoteLoggerPrx_white_){
                            LOG_ERROR("RemoteLogger::RemoteLogger => can not get remote logger proxy : iceArgs_white_ = " << iceArgs_white_);
                            return;
                        }

                        remoteLoggerPrx_white_ = remoteLoggerPrx_white_->ice_timeout(250)->ice_oneway();
                    }
                }

#endif
            }

        RemoteLogger::~RemoteLogger(){
            if(communicator_){
                communicator_->destroy();
            }
            if(communicator_white_){
                communicator_white_->destroy();
            }
        }

        void RemoteLogger::writeLog(const string& name, const string& msg){
#ifndef INTERNATIONAL  
            char buffer[64];
            time_t tl = time(NULL);
            struct tm *tptr;
            tptr = localtime(&tl);
            strftime(buffer,256,"%Y-%m-%d %H:%M:%S", tptr);
            string tmsg(buffer);
            tmsg.append("|");
            tmsg.append(msg);
            tmsg.append("\n");
            remoteLoggerPrx_->writeLog(name, tmsg);
#endif
        }

        void RemoteLogger::writeLog_white(const string& name, const string& msg){
#ifndef INTERNATIONAL  
            char buffer[64];
            time_t tl = time(NULL);
            struct tm *tptr;
            tptr = localtime(&tl);
            strftime(buffer,256,"%Y-%m-%d %H:%M:%S", tptr);
            string tmsg(buffer);
            tmsg.append(msg);
            tmsg.append("\n");
            remoteLoggerPrx_white_->writeLog(name, tmsg);
#endif
        }
    };
};
