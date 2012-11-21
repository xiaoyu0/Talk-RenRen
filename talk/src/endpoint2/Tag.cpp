#include "Tag.h"
#include <stdlib.h>
#include <algorithm>
#include <cstring>
#include <sstream>
#include <iostream>
#include    "utils/XmlUtils.h"
using namespace std;

using namespace pugi;
namespace mtalk {
namespace tagparser {


TagParser::TagParser(boost::shared_ptr<TagHandler> handler) :
	_handler(handler), _current( xml_node()), _root(xml_node()), _doc(new xml_document()),
			_state(Initial), _preamble( 0), _quote( false) {
}

TagParser::~TagParser() {
	//delete _root;
//	_doc.reset();
	_root = xml_node();
	_current = xml_node();
}

bool TagParser::feed(const boost::shared_ptr<mtalk::net::Connection> &SSPtr, const std::string& data) {
	std::string::const_iterator it = data.begin();
	for (; it != data.end(); ++it) {
		const unsigned char c = (*it);
		//       printf( "found char:   %c, ", c );

		if ( !isValid(c) ) {
			cleanup();
			return false;
		}

		switch (_state) {
		case Initial:
			_name = "";
			if (isWhitespace(c) )
				break;

			switch (c) {
			case '<':
				_state = TagOpening;
				break;
			case '>':
			default:
				//               cleanup();
				//               return false;
				break;
			}
			break;
		case TagOpening: // opening '<' has been found before
			if (isWhitespace(c) )
				break;

			switch (c) {
			case '<':
			case '>':
			case '!':
				cleanup();
				return false;
				break;
			case '/':
				_state = TagClosingSlash;
				break;
			case '?':
				_state = TagNameCollect;
				_preamble = 1;
				break;
			default:
				_name += c;
				_state = TagNameCollect;
				break;
			}
			break;
		case TagNameCollect: // we're collecting the tag's name, we have at least one octet already
			if (isWhitespace(c) ) {
				_state = TagNameComplete;
				break;
			}

			switch (c) {
			case '<':
			case '?':
			case '!':
				cleanup();
				return false;
				break;
			case '/':
				_state = TagOpeningSlash;
				break;
			case '>':
				addTag(SSPtr);
				_state = TagInside;
				break;
			default:
				_name += c;
				break;
			}
			break;
		case TagInside: // we're inside a tag, expecting a child tag or cdata
			_name = "";
			switch (c) {
			case '<':
				addCData();
				_state = TagOpening;
				break;
			default:
				_cdata += c;
				break;
			}
			break;
		case TagOpeningSlash: // a slash in an opening tag has been found, initing close of the tag
			if (isWhitespace(c) )
				break;

			if (c == '>') {
				addTag(SSPtr);
				if ( !closeTag(SSPtr) ) {
					cleanup();
					return false;
				}

				_state = Initial;
			} else {
				cleanup();
				return false;
			}
			break;
		case TagClosingSlash: // we have found the '/' of a closing tag
			if (isWhitespace(c) )
				break;

			switch (c) {
			case '>':
			case '<':
			case '/':
				cleanup();
				return false;
				break;
			default:
				_name += c;
				_state = TagClosing;
				break;
			}
			break;
		case TagClosing: // we're collecting the name of a closing tag
			switch (c) {
			case '<':
			case '/':
				cleanup();
				return false;
				break;
			case '>':
				if ( !closeTag(SSPtr) ) {
					cleanup();
					return false;
				}

				_state = Initial;
				break;
			default:
				_name += c;
				break;
			}
			break;
		case TagNameComplete: // a tag name is complete, expect tag close or attribs
			if (isWhitespace(c) )
				break;

			switch (c) {
			case '<':
				cleanup();
				return false;
				break;
			case '/':
				_state = TagOpeningSlash;
				break;
			case '>':
				if (_preamble == 1) {
					cleanup();
					return false;
				}
				_state = TagInside;
				addTag(SSPtr);
				break;
			case '?':
				if (_preamble == 1)
					_preamble = 2;
				else {
					cleanup();
					return false;
				}
				break;
			default:
				_attrib += c;
				_state = TagAttribute;
				break;
			}
			break;
		case TagAttribute: // we're collecting the name of an attribute, we have at least 1 octet
			if (isWhitespace(c) ) {
				_state = TagAttributeComplete;
				break;
			}

			switch (c) {
			case '<':
			case '/':
			case '>':
				cleanup();
				return false;
				break;
			case '=':
				_state = TagAttributeEqual;
				break;
			default:
				_attrib += c;
			}
			break;
		case TagAttributeComplete: // we're expecting an equals sign or ws or the attrib value
			if (isWhitespace(c) )
				break;

			switch (c) {
			case '=':
				_state = TagAttributeEqual;
				break;
			case '<':
			case '/':
			case '>':
			default:
				cleanup();
				return false;
				break;
			}
			break;
		case TagAttributeEqual: // we have found an equals sign
			if (isWhitespace(c) )
				break;

			switch (c) {
			case '"':
				_quote = true;
			case '\'':
				_state = TagValue;
				break;
			case '=':
			case '<':
			case '>':
			default:
				cleanup();
				return false;
				break;
			}
			break;
		case TagValue: // we're expecting value data
			switch (c) {
			case '<':
				cleanup();
				return false;
				break;
			case '\'':
				if (_quote) {
					_value += c;
					break;
				}
			case '"':
				addAttribute();
				_state = TagNameComplete;
				_quote = false;
				break;
			case '>':
			default:
				_value += c;
			}
			break;
		default:
			//           printf( "default action!?\n" );
			break;
		}
		//       printf( "parser state: %d\n", m_state );
	}

	return true;
}

void TagParser::addTag(const boost::shared_ptr<mtalk::net::Connection> &SSPtr) {
	if (_root.empty()) {
		//       printf( "created Tag named %s, ", m_tag.c_str() );
		//_root = new Tag( _name, "", true );
		_doc.reset( new xml_document());
		_root = _doc->append_child();
		_root.set_name(_name.c_str());

		_current = _root;
	} else {
		//       printf( "created Tag named %s, ", m_tag.c_str() );
		//_current = new Tag( _current, _name, "", true );
		_current = _current.append_child();
		_current.set_name(_name.c_str());

	}

	if (_attribs.size() ) {

		for (std::map<std::string,std::string>::iterator it = _attribs.begin(); it
				!= _attribs.end(); ++it) {
			_current.append_attribute(it->first.c_str()) = it->second.c_str();
		}

		//_current->setAttributes(_attribs);
		//       printf( "added %d attributes, ", m_attribs.size() );
		_attribs.clear();
	}

	if (_name == "stream:stream") {
		streamEvent(SSPtr, _doc);
		cleanup();
	}
	//     else
	//       printf( "%s, ", m_root->xml().c_str() );

	if (_name == "xml" && _preamble == 2)
		cleanup();
}

void TagParser::addAttribute() {
	//     printf( "adding attribute: %s='%s', ", m_attrib.c_str(), m_value.c_str() );
	//	_attribs.push_back(Tag::Attribute(Tag::relax(_attrib),
	//					Tag::relax(_value) ) );
	utils::XmlUtils::xmlDecode(_value);
	_attribs[_attrib] = _value;
	_attrib = "";
	_value = "";
	//     printf( "added, " );
}

void TagParser::addCData() {
	if (!_current.empty()) {
		//_current->setCData(_cdata);
		//       printf( "added cdata %s, ", m_cdata.c_str() );
		utils::XmlUtils::xmlDecode(_cdata);
		_current.append_child(node_pcdata).set_value(_cdata.c_str());
		_cdata = "";
	}
}

bool TagParser::closeTag(const boost::shared_ptr<mtalk::net::Connection> &SSPtr) {
	//     printf( "about to close, " );

	if (_name == "stream:stream"){
		_doc.reset( new xml_document());
		_root = _doc->append_child();
		_root.set_name("close");
		streamEvent(SSPtr, _doc);   //袁江
		cleanup();                  //添加
		return true;
	}

	if (_current.empty() || strcmp(_current.name(), _name.c_str())!= 0)
		return false;

	//       printf( "m_current: %s, ", m_current->name().c_str() );
	//       printf( "m_tag: %s, ", m_tag.c_str() );

	if (!_current.parent().parent().empty() )
		_current = _current.parent();
	else {
		//       printf( "pushing upstream, " );
		streamEvent(SSPtr, _doc);
		cleanup();
	}

	return true;
}

void TagParser::cleanup() {
	//delete _root;
	_doc.reset();
	_root = xml_node();
	_current = xml_node();
	_cdata = "";
	_name = "";
	_attrib = "";
	_value = "";
	//_attribs.clear();
	_state = Initial;
	_preamble = 0;
}

bool TagParser::isValid(unsigned char c) {
	return (c != 0xc0 || c != 0xc1 || c < 0xf5 );
}

bool TagParser::isWhitespace(unsigned char c) {
	return (c == 0x09 || c == 0x0a || c == 0x0d || c == 0x20 );
}

void TagParser::streamEvent(const boost::shared_ptr<mtalk::net::Connection> &SSPtr, xml_document_ptr& tag) {
	//_handler->handleTag(tag);
	_handler->messaged(SSPtr, tag);
}

}
}
