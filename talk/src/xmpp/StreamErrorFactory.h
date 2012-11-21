#ifndef TALK_XMPP_STREAM_ERROR_FACTORY_H_
#define TALK_XMPP_STREAM_ERROR_FACTORY_H_

#include <string>
#include "ProcessResult.h"

namespace mtalk{
namespace xmpp{

	class StreamErrorFactory{
	public :
		static ProcessResult createErrorResult(const std::string& condition, const std::string& text = "");

		static ProcessResult hostUnknown(const std::string& text = ""){
			return createErrorResult("host-unknown", "unknown host : " + text);
		}
		static ProcessResult badFormat(const std::string& text = ""){
			return createErrorResult("bad-format", text);
		}
		static ProcessResult improperAddressing(const std::string& text = ""){
			return createErrorResult("improper-addressing", text);
		}
		static ProcessResult internalServerError(const std::string& text = ""){
			return createErrorResult("internal-server-error", text);
		}
		static ProcessResult invalidFrom(const std::string& text = ""){
			return createErrorResult("invalid-from", text);
		}
		static ProcessResult invalidXml(const std::string& text = ""){
			return createErrorResult("invalid-xml", text);
		}
		static ProcessResult notWellFormed(const std::string& text = ""){
			return createErrorResult("not-well-formed", text);
		}

	};
};
};
#endif //TALK_XMPP_STREAM_ERROR_FACTORY_H_
