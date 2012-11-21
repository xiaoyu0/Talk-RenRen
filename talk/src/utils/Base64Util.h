// Base64Util.h: interface for the CBase64Util class.
//
//////////////////////////////////////////////////////////////////////

#if !defined(AFX_BASE64UTIL_H__DA02957C_D1D3_4198_947E_66F36ABF03BD__INCLUDED_)
#define AFX_BASE64UTIL_H__DA02957C_D1D3_4198_947E_66F36ABF03BD__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
#include <string>

//#include "UtilLib.h"
using namespace std;


namespace HZP
{

class /*HZP_LIB_API*/ CBase64Util  
{
	
	static int CharToData(char c);
	static string RemoveAppendData(const string &inData);
public:
	
	/************************************************************************
	* 功能:
			进行Base64编码

		参数:
			const char * inData, 要编码的数据
			const int inLen   数据长度
			,char * outData  编码后的长度

		返回值:
			如果outData为NULL,返回返回字符串需要的空间,
			如果outData不为NULL,返回编码后字任串长度

	*
	************************************************************************/
	static int  Encode(const char * inData,const int inLen,char * outData);

	/************************************************************************
	* 功能:
			进行Base64解码

		参数:
			const string & inData  要解码的数据
			int *outData  解码后的数据

		返回值:
			如果outData为NULL,返回返回字符串需要的空间,
			如果outData不为NULL,返回解码后字任串长度
	*
	************************************************************************/
	static int Decode(const string & inData,char *outData);
	
	CBase64Util();
	virtual ~CBase64Util();

};

}
#endif // !defined(AFX_BASE64UTIL_H__DA02957C_D1D3_4198_947E_66F36ABF03BD__INCLUDED_)
