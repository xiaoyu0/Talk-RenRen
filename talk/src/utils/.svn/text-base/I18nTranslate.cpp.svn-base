#include "I18nTranslate.h"
#include <boost/filesystem.hpp>
#include <boost/filesystem/operations.hpp>
#include <boost/filesystem/path.hpp>
#include <boost/algorithm/string/replace.hpp>
#include <boost/algorithm/string/trim.hpp>
#include <boost/algorithm/string.hpp>
#include <boost/format.hpp>
#include <boost/exception/info.hpp>
#include <boost/exception/get_error_info.hpp> 
#include <boost/exception/error_info.hpp>
#include <iostream>
#include <map>
#include <vector> 
#include <fstream> 
#include "pugixml/pugixml.hpp"
#include <utils/MyLogger.h>
#include <utils/XmlUtils.h>

using namespace std;
namespace  fs  =  boost::filesystem;
typedef boost::error_info<struct tag_err_str, string> err_str;

namespace mtalk{
    namespace utils{
        namespace i18n{

            // 保存国际化资源，
            // key => pair<lang, resid>
            // val => pattern string
            std::map<pair<string, string>, string> _i18nMap;

            // 保存消息模板资源
            // key => pattern id
            // val => pattern string
            std::map<string, string> _tempMap;

            static string   _tempPath,_i18nPath; 


            // 国际化资源串适配，
            // 为了适配现有的资源定义， 便于使用boost::format处理，
            // 将 {n} 转换为 %n+1% 类型(现有从0开始，format从1开始)
            // 最多支持20个参数， 只在载入时执行一次。
            string& normalize(string &pattern){
                std::map<string, string> _tmp;
                _tmp["{0}"]="%1%";
                _tmp["{1}"]="%2%";
                _tmp["{2}"]="%3%";
                _tmp["{3}"]="%4%";
                _tmp["{4}"]="%5%";
                _tmp["{5}"]="%6%";
                _tmp["{6}"]="%7%";
                _tmp["{7}"]="%8%";
                _tmp["{8}"]="%9%";
                _tmp["{9}"]="%10%";
                _tmp["{10}"]="%11%";
                _tmp["{11}"]="%12%";
                _tmp["{12}"]="%13%";
                _tmp["{13}"]="%14%";
                _tmp["{14}"]="%15%";
                _tmp["{15}"]="%16%";
                _tmp["{16}"]="%17%";
                _tmp["{17}"]="%18%";
                _tmp["{18}"]="%19%";
                _tmp["{19}"]="%20%";

                map<string, string>::iterator it = _tmp.begin();
                for (; it!=_tmp.end(); it++){
                    boost::algorithm::replace_all(pattern, it->first, it->second);
                }
                return pattern;
            }

            bool parse(std::string& line, std::string& id, std::string& pattern){

                boost::trim(line); 

                if (line.length()==0 || line[0]=='#' || line[0]=='\"' || line[0]=='\'' ){
                    return false;
                }

                string::size_type pos = line.find_first_of("=");
                if (pos==string::npos){
                    return false;
                }

                id = line.substr(0, pos);
                pattern = line.substr(pos+1, line.length()-pos-1); 

                boost::trim(id);
                boost::trim(pattern);

                if (id.length()<=0 || pattern.length()<=0){
                    return false;
                }

                return true;
            }

            void tempLoad(std::string templatePath){
                if(!fs::exists(templatePath)){
                    LOG_ERROR("i18n::18nLoad => template path not exist = [" << templatePath << "]");
                    return;
                }

                ifstream fi(templatePath.c_str());
                char line_buf[MAX_PATT_LEN];
                int    count=0;
                std::string id, pattern;

                while(!fi.eof()){
                    fi.getline(line_buf, MAX_PATT_LEN);
                    std::string line(line_buf);

                    if (parse(line, id, pattern)){
                        _tempMap[id] = normalize(pattern);
                        count++;
                    }
                }
            }


            // load i18n resource from dir, such as zh_CN.properties
            void i18nLoad(std::string dir){

                std::string id, pattern;
                fs::path    fullpath (dir, fs::native);

                if(!fs::exists(fullpath)){
                    LOG_ERROR("i18n::18nLoad => lang path not exist = [" << dir << "]");
                    return;
                }

                fs::recursive_directory_iterator iter(fullpath);
                fs::recursive_directory_iterator end_iter;
                for(;iter!=end_iter;iter++){
                    try{
                        if (fs::is_directory( *iter ) ){
                            continue;
                        }

                        string extension = fs::extension(*iter);
                        if (boost::iequals(extension, ".properties")){
                            LOG_INFO("i18n::18nLoad => load res file = [" << (*iter).string() << "]");
                            string lang = fs::basename(*iter);
							boost::to_upper(lang);

                            ifstream fi((*iter).string().c_str());

                            char line_buf[MAX_PATT_LEN];
                            int    count=0;

                            while(!fi.eof()){
                                fi.getline(line_buf, MAX_PATT_LEN);
                                std::string line(line_buf);
                                mtalk::utils::XmlUtils::xmlDecode(line);
                                mtalk::utils::XmlUtils::xmlEncode(line);
                                if (parse(line, id, pattern)){
                                    _i18nMap[make_pair(lang, id)] = normalize(pattern);
                                    count++;
                                }
                            }

                            LOG_DEBUG("i18n::18nLoad => load res file = [" << (*iter).string() << "], total load ["<< count<<"] res");
                        }
                    }catch ( const std::exception & ex ){
                        std::cerr << ex.what() << std::endl;
                        continue;
                    }
                }
            }


            // 格式化模板
            int format(std::string pattern, std::vector<string> &para, std::string &ret){
                try{
                    boost::format fmt(pattern);
                    fmt.exceptions( boost::io::all_error_bits ^ ( boost::io::too_many_args_bit) );
                    for(size_t i=0; i<para.size(); i++){
                        fmt % para[i];
                    }
                    ret = fmt.str();
                }catch (std::exception const &e){
                    LOG_WARN("i18n::format => pattern = ["<< pattern <<"] para.size=[" << para.size() << "] info:"<< e.what());
                    return -1;
                }
                return 0;
            }

            int translate(std::string lang, std::string id, std::vector<string> par, std::string& ret){

                pair<string, string> key = make_pair(lang, id);

                if (_i18nMap.find(key)==_i18nMap.end()){
                    // 排除传入lang错误
                    key = make_pair("ZH_CN", id);
                    if (_i18nMap.find(key)==_i18nMap.end()){
                        LOG_WARN("i18n::translate => i18n resource not found= [lang=" << lang << ", rid=" << id << "]");
                        return -1;
                    }

                }

                string pattern = _i18nMap[key];

                LOG_DEBUG("i18n::i18Trans => userLang = [" << lang << "], resId = ["<< id <<"], pattern = ["<< pattern <<"]");

                return format(pattern, par, ret);

            }

            // 载入1.i18n资源文件; 2.消息模板文件
            void init(std::string templatePath,std::string i18nDir){
                tempLoad(templatePath);
                i18nLoad(i18nDir);

                _tempPath = templatePath;
                _i18nPath = i18nDir;
            }

            // 用于运行时重新载入配置
            void reload(){
                if (_tempPath.empty() ||
                        _i18nPath.empty()){
                    return;
                }
                tempLoad(_tempPath);
                i18nLoad(_i18nPath);
                LOG_INFO("i18n::reload");
            }


            // 消息打包,基于XML解析
            //
            // 定义：
            //   template id 标志一个模板资源，定义于 conf/template.cfg
            //   resource id 标志一个语言资源，定义于 conf/lang/xx.properties
            //
            // 输入: 
            //  <message from=\"contacts.m.renren.com\" to=\"gid@m.renren.com\">  
            //    <x xmlns=\"http://contacts.m.renren.com\">  
            //         <person> 
            //             <gid></gid> 
            //             <!-- 新增联系人私信ID --> 
            //             <domain></domain> 
            //             <name></name> 
            //            <picture_profile_url></picture_profile_url> 
            //             <type></type> 
            //             <!-- 0联系人提醒，1联系人推荐，2邀请 --> 
            //         </person> 
            //         <template id='10001'> 
            //           <para id='20002'> 
            //             <par>张三</par>
            //             <par>、李四</par> 
            //           </para> 
            //         </template> 
            //     </x> 
            //  </message>
            //
            //
            //
            // 模板: 10001=<body><text>{0}</text></body> 
            // 输出: 
            // <message from=\"contacts.m.renren.com\" to=\"gid@m.renren.com\">  
            //    <x xmlns=\"http://contacts.m.renren.com\">  
            //         <person> 
            //             <gid></gid> 
            //             <!-- 新增联系人私信ID --> 
            //             <domain></domain> 
            //             <name></name> 
            //            <picture_profile_url></picture_profile_url> 
            //             <type></type> 
            //             <!-- 0联系人提醒，1联系人推荐，2邀请 --> 
            //         </person> 
            //         <body><text>张三创建了群聊，邀请了你、李四</body></text> 
            //    </x> 
            //  </message>
            //  
            int packNode(std::string lang, pugi::xml_node root){

                std::vector<pugi::xml_node> remove_nodes;

                for (pugi::xml_node node=root.first_child();node; node=node.next_sibling()){

                    // 递归遍历所有节点，如果某个子节点处理异常，
                    // 返回-1传递到最上层，导致停止继续解析
                    if (packNode(lang, node)){
                        LOG_ERROR("i18n:packNode traverse error : msg=[]");
                        return -1;
                    }

                    if (!boost::iequals(node.name(), I18N_NODE_TEMP)) continue;

                    // 从模板节点的属性，得到模板ID(tid) 和 资源ID(rid)
                    string tid = node.attribute("id").value();

                    // 模板必须包含tid( 出现过不传id的情况，防止出错 )
                    if (tid.empty()){
                        LOG_ERROR("i18n:packNode error : template id is empty");
                    }

                    // 保存模板参数
                    std::vector<string> para;
					std::vector<pugi::xml_node> rest; 
                    for (pugi::xml_node para_node=node.first_child(); para_node; para_node=para_node.next_sibling()){


                        if (!boost::iequals(para_node.name(), I18N_NODE_PARA)){
                            rest.push_back(para_node);
                            continue;
                        }
                        std::string value;

                        // 有属性id的节点需要国际化
                        string rid = para_node.attribute("id").value();
                        if (!rid.empty()){
                            std::vector<string> par;   
                            for (pugi::xml_node sub_para_node=para_node.first_child(); sub_para_node; sub_para_node=sub_para_node.next_sibling()){
                                string val = sub_para_node.first_child().value();
                                if (val.empty()) val="";
                                par.push_back(val);   
                            }
                            // 国际化后的内容作为消息模板的一个参数
                            if (0!=translate(lang, rid, par, value)){
                                std::stringstream os;
                                node.print(os, " ", pugi::format_raw);
                                LOG_ERROR("i18n:packNode translate error : msg=[" <<os.str().c_str()<<"]");
                                return -1;
                            }
                        }else{
                            value = para_node.first_child().value();
                        }
                        para.push_back(value); 
                    }

                    string ret;

                    // 消息模板替换

					if (_tempMap.find(tid)==_tempMap.end()){
                        LOG_ERROR("i18n:packNode template resource not found : tid=[" <<tid<<"]");
						return -1;
					}else{
						if (0!=format(_tempMap[tid], para, ret)){
							std::stringstream os;
							node.print(os, " ", pugi::format_raw);
							LOG_ERROR("i18n:packNode format error : msg=[" <<os.str().c_str()<<"]");
							return -1;
						}
					}

                    // 增加转换后节点
                    pugi::xml_document  subDoc;
                    pugi::xml_parse_result result = subDoc.load(ret.c_str());

                    if(!result || !subDoc.first_child()){
                        LOG_ERROR("i18n:packNode subDoc load error : " << result.description()<<" msg=["<<ret.c_str()<<"]");
                        return -1;
                    }

                    // 拷贝其他属性(第一个属性是模板ID)
                    for (pugi::xml_attribute a = node.first_attribute().next_attribute(); a; a = a.next_attribute()){
                        subDoc.first_child().append_copy(a);
                    }

                    // 拷贝其他节点
                    for (size_t k=0; k<rest.size(); k++){
                        subDoc.first_child().append_copy(rest[k]);
                    }

                    node.parent().append_copy(subDoc.first_child());
                    remove_nodes.push_back(node);
                }
                //批量删除模板节点
                for (size_t i=0; i<remove_nodes.size(); i++){
                    remove_nodes[i].parent().remove_child(remove_nodes[i]);
                }

                return 0;
            }

            int pack(std::string lang, std::string& msg){

                LOG_DEBUG("i18n:pack in msg="<<msg.c_str());

                if (lang.empty())
                    lang = "zh_CN";


				boost::to_upper(lang);

                pugi::xml_document xmlDoc ;
                pugi::xml_parse_result result = xmlDoc.load(msg.c_str());
                if(!result || !xmlDoc.first_child()){
                    LOG_ERROR("i18n:pack error : " << result.description());
                    return -1;
                }

                packNode(lang, xmlDoc.root());

                std::stringstream os;
                xmlDoc.root().print(os, "\t", pugi::format_raw);
                msg = os.str();

                LOG_DEBUG("i18n:pack out msg="<<msg.c_str());

                return 0;

            }
        }
    }
}
