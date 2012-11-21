/**
 * @file  I18nTranslateServiceI.h
 * @brief 提供国际化模板转换服务
 * @author wan.zou@renren-inc.com
 * @version 1.0
 * @date 2012-08-29
 */
#ifndef TALK_I18N_TRANS_SERVICE_I_H_
#define TALK_I18N_TRANS_SERVICE_I_H_

#include <string>
#include <Ice/Ice.h>
#include <boost/shared_ptr.hpp>
#include "ice_src/I18nTranslate.h"


namespace mtalk{
    namespace talk{

        class I18nTranslateServiceI : public com::xiaonei::wap::talk::i18n::I18nTranslateService{

            public :

                /**
                 * @brief    模板转换
                 *
                 * @param    string
                 * @param    current
                 */

                virtual void translate(const ::std::string& lang, ::std::string& msg, const ::Ice::Current& = ::Ice::Current());


        };


    };


};

#endif



