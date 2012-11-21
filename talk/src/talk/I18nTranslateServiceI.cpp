#include <map>
#include <string>
#include "utils/TimeUtils.h"
#include "I18nTranslateServiceI.h"
#include "utils/I18nTranslate.h"
#include <utils/MyLogger.h>

using namespace std;
using namespace mtalk::utils;
using namespace mtalk::utils::i18n;
using namespace mtalk::talk;


namespace mtalk{
    namespace talk{

        
        void I18nTranslateServiceI::translate(const ::std::string& lang, ::std::string& msg, const ::Ice::Current& current ){

    MilliTimer  tStart;

            // 国际化
            if (mtalk::utils::i18n::pack(lang, msg) != 0){
                LOG_ERROR("I18nTranslate error msg = [" << msg.c_str() << "] lang=[" << lang << "]");
            }

            LOG_DEBUG("I18nTranslateServiceI::pack ==> end. use:"<<tStart.elapsed());

        }

    };


};
