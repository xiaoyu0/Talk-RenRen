#include <unistd.h>
#include <string>
#include <sstream>
#include "VersionRequestHandler.h"
#include "proxy/ProxyRegister.h"

using namespace std;
using namespace mtalk::proxy;

namespace mtalk{
namespace endpoint{
	VersionRequestHandler::VersionRequestHandler(){
		boshServiceProxyPtr_ = MY_INSTANCE(ProxyRegister).getProxy<BoshServiceProxy>("boshProxy");
	}

	void VersionRequestHandler::handler(HttpRequest& request, HttpResponse& response){
		char hostName[128];
		gethostname(hostName, 128);

		string serverVersion = "####svn##version####";
		ostringstream os;
		os << "<html><head><title>server version</title></head><body>";
		os << "<h3>Endpoint Service : " << serverVersion << "@" << hostName << "</h3>";

		vector<string> boshs = boshServiceProxyPtr_->getVersionAndHost();
		
		for(size_t i = 0; i < boshs.size(); ++i){
			os << "<h3>Talk Service " << i << " : " << boshs[i] << "</h3>";
		}

		os << "</body></html>";

		response.response(os.str(), HttpResponse::OK, true, "text/html;charset=UTF-8");
		return;
	}
};
};
