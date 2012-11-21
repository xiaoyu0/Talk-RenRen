/**
 * @file I18nTranslate
 * @brief    国际化
 * @
 * @author wan.zou@renren-inc.com
 * @version 1.0
 * @date 2012-08-09
 *
 * attension: 定制参数最多支持20个， 模板串最长20k字节
 */
#ifndef TALK_UTILS_I18N_TRANSLATE_H_
#define TALK_UTILS_I18N_TRANSLATE_H_

#include <string>
#include <vector>
#include <map>

// 国际化消息最长不超过 204800
#define MAX_PATT_LEN  204800
#define I18N_NODE_TEMP "template"
#define I18N_NODE_PARA "para"

namespace mtalk{
    namespace utils{
        namespace i18n{

            /**
             * @brief    初始化国际化资源和模板资源
             *             1. 遍历传入目录中所有带有properties后缀的资源文件，保存到内存(map)
             *             1. 遍历传入消息模板资源文件，保存到内存(map)
             *
             * @param    i18nDir       传入的国际化资源目录
             * @param    templatePath  传入的消息模板文件，用于消息拼装
             *
             * @return    void
             */
            void init(std::string i18nDir, std::string templatePath);

            /**
             *  @brief   重新载入资源
             *
             */
            void reload();

            /**
             * @brief    返回国际化后的消息体
             *
             * @param    userLang  用户语言设置， 如 zh_CN, zh_TW, en_US等， 不区分大小写
             * @param    msg       消息体，需解析模板ID, 资源ID和参数，拼出国际化内容并返回
             *                    example: 
             *                      from: 
             *                              <template id=1>
             *                                  <para>from      </para>
             *                                  <para>to        </para>
             *                                  <para>version   </para>
             *                                  <para>resouce id</para>
             *                                  <para>para1     </para>
             *                                  <para>para2     </para>
             *                              </template>
             *                      to:
             *                              <message from='%1%' to='%2%' type='info'>
             *                                  <body type='text' version='%3%'>
             *                                      <text>%4%</text>
             *                                  </body>
             *                              </message>
             *
             * @return     0 成功返回 
             *          -1 错误，错误信息输出到日志
             *
             *
             * @attention  pack 速度稍慢，
             *                  采用XML解析替换,经测试,解析,每秒处理8万
             * @attention  packEx   
             *                 速度快，采用字符串替换，不解析xml，
             *                 使用时需保证msg内变量都经过转义(XMLUtils::xmlEncode)
             *                 平均每次请求时间为5.9us,每秒处理17万
             */
            int pack(std::string lang, std::string& msg);



            // 保存国际化资源，
            // key => pair<lang, resid>
            // val => pattern string
            extern "C" std::map<std::pair<std::string, std::string>, std::string> _i18nMap;

            // 保存消息模板资源
            // key => pattern id
            // val => pattern string
            extern "C" std::map<std::string, std::string> _tempMap;

        };
    };
};

#endif //TALK_UTILS_I18N_TRANSLATE_H_
