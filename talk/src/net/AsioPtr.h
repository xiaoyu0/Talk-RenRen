#ifndef TALK_HTTP_SERVER_ASIO_PTR_H_
#define TALK_HTTP_SERVER_ASIO_PTR_H_

#include <boost/asio.hpp>

namespace mtalk{
namespace net{

typedef boost::shared_ptr<boost::asio::io_service> IoServicePtr;
typedef boost::shared_ptr<boost::asio::io_service::work> WorkPtr;
typedef boost::shared_ptr<boost::asio::ip::tcp::acceptor> AcceptorPtr;

};
};
#endif // TALK_HTTP_SERVER_ASIO_PTR_H_
