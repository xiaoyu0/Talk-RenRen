#ifndef __TAG_H__
#define __TAG_H__

#include <string>
#include <list>
#include <utility>
#include <map>
#include "pugixml.hpp"
#include <boost/shared_ptr.hpp>

namespace mtalk {
namespace socket{
class SocketSession;
typedef boost::shared_ptr<socket::SocketSession>  SocketSessionPtr;
}
namespace tagParser {

//using namespace pugi;
//typedef IceUtil::Handle<IceUtil::Shared> SocketSessionPtr;
typedef boost::shared_ptr<pugi::xml_document> xml_document_ptr;
//---------------------------------------------------------------------------
class TagHandler {
public:
     TagHandler(){}
//	virtual void started(Ice::ObjectPtr channel) = 0;
//	virtual void stopped(Ice::ObjectPtr channel) = 0;
	virtual void messaged(socket::SocketSessionPtr SSPtr, xml_document_ptr& doc) = 0;
  virtual ~TagHandler(){}
};


class TagParser{
public:
	/**
	 * Constructs a new Parser object.
	 * @param ph The object to send incoming Tags to.
	 */
	//TagParser(TagHandlerPtr handler);
	TagParser(boost::shared_ptr<TagHandler> _handler);
	/**
	 * Virtual destructor.
	 */
	virtual ~TagParser();
	//virtual void handleTag(xml_document_ptr& doc) = 0;
	/**
	 * Use this function to feed the parser with more XML.
	 * @param data Raw xml to parse.
	 * @return Returns @b true if parsing was successful, @b false otherwise.
	 */
	bool feed(const socket::SocketSessionPtr& SSPtr, const std::string& data);

private:
	void addTag(const socket::SocketSessionPtr& SSPtr);
	void addAttribute();
	void addCData();
	bool closeTag(const socket::SocketSessionPtr& SSPtr);
	void cleanup();
	bool isWhitespace(unsigned char c);
	bool isValid(unsigned char c);
	//void streamEvent(Tag *tag);
	void streamEvent(const socket::SocketSessionPtr& SSPtr, xml_document_ptr& tag);

	enum ParserInternalState
	{
		Initial,
		TagOpening,
		TagOpeningSlash,
		TagOpeningLt,
		TagInside,
		TagNameCollect,
		TagNameComplete,
		TagAttribute,
		TagAttributeComplete,
		TagAttributeEqual,
		TagClosing,
		TagClosingSlash,
		TagValueApos,
		TagValue,
		TagPreamble
	};

    boost::shared_ptr<TagHandler> _handler;
	pugi::xml_node _current;
	pugi::xml_node _root;
	xml_document_ptr _doc;

	ParserInternalState _state;
	std::map<std::string,std::string> _attribs;

	std::string _name;
	std::string _cdata;
	std::string _attrib;
	std::string _value;
	int _preamble;
	bool _quote;

};
typedef boost::shared_ptr<TagParser> TagParserPtr;
}
}
#endif // TAG_H__
