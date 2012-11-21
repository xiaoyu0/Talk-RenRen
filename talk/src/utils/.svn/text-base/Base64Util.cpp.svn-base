// Base64Util.cpp: implementation of the CBase64Util class.
//
//////////////////////////////////////////////////////////////////////
#include "Base64Util.h"

//////////////////////////////////////////////////////////////////////
// Construction/Destruction
//////////////////////////////////////////////////////////////////////
namespace HZP{



string CBase64Util::RemoveAppendData(const string &inData)
{

	string::size_type pos=inData.find("=",0);
	string rel(inData);
	if(pos!=string::npos)
	{
		rel=inData.substr(0,pos);
	}
	return rel;
	
}
int CBase64Util::CharToData(char c)
{
	const string table="ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/";
	return table.find(c,0);
}

int  CBase64Util::Encode(const char * inData,const int inLen,char * outData)
{
	if(NULL==outData)
	{
		return (inLen+inLen/3+8);
	}

	const string table="ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/";
	string outString("");
	unsigned char sour_char_3[3];//转换前的字符
	unsigned char sour_char_4[4];//转换后的字符
	const char *data=inData;


	int padd=inLen%3;
	int oklen=inLen-padd;

	//先处理3的倍数
	//int j=0;
	int i=0;
	for(i=0;i<oklen;)
	{
		
		memset(sour_char_3 ,0x00,sizeof(sour_char_3));
		memset(sour_char_4 ,0x00,sizeof(sour_char_4));

		
		sour_char_3[0]=data[i++];
		sour_char_3[1]=data[i++];
		sour_char_3[2]=data[i++];
		//将字任为3*8=4*6的转换
		sour_char_4[0]=(sour_char_3[0]  & 0xfc)>>2;/*将最低两位设置为0再移出*/
		sour_char_4[1]=((sour_char_3[0] & 0x03)<<4 /*取出第一个字符的最低两位,后再左移派*/)+((sour_char_3[1] & 0xf0) >>4);
		sour_char_4[2]=((sour_char_3[1] & 0x0f)<<2)+((sour_char_3[2] & 0xc0)>>6);
		sour_char_4[3]=sour_char_3[2]  & 0x3f;
		
		outString+=table[sour_char_4[0]];
		outString+=table[sour_char_4[1]];
		outString+=table[sour_char_4[2]];
		outString+=table[sour_char_4[3]];
	}

	//处理余数

	memset(sour_char_3 ,0x00,sizeof(sour_char_3));
	memset(sour_char_4 ,0x00,sizeof(sour_char_4));
	switch(padd) 
	{
	case 1:
		sour_char_3[0]=data[i++];
		sour_char_4[0]=(sour_char_3[0]  & 0xfc)>>2;/*将最低两位设置为0再移出*/
		sour_char_4[1]=(sour_char_3[0] & 0x03)<<4 /*取出第一个字符的最低两位,后再左移派*/;
		
		outString+=table[sour_char_4[0]];
		outString+=table[sour_char_4[1]];
		outString+='=';
		outString+='=';
		break;
	case 2:
		sour_char_3[0]=data[i++];
		sour_char_3[1]=data[i++];
		//将字任为3*8=4*6的转换
		sour_char_4[0]=(sour_char_3[0]  & 0xfc)>>2;/*将最低两位设置为0再移出*/
		sour_char_4[1]=((sour_char_3[0] & 0x03)<<4 /*取出第一个字符的最低两位,后再左移派*/)+((sour_char_3[1] & 0xf0) >>4);
		sour_char_4[2]=(sour_char_3[1] & 0x0f)<<2;

		outString+=table[sour_char_4[0]];
		outString+=table[sour_char_4[1]];
		outString+=table[sour_char_4[2]];
		outString+='=';
		break;
	}
	
	strcpy(outData,outString.c_str());

	return outString.size();

}

int  CBase64Util::Decode(const string & inData,char *outData)
{

	if(NULL==outData)
	{
		return inData.size();
	}

	char *pout=outData;// new char[inData.size()];

	unsigned char sour_char_4[4];//转换前的字符
	unsigned char sour_char_3[3];//转换后的字符

	

	//先去除编码时填充的'='
	string data=RemoveAppendData(inData);

    
	int padd=data.size()%4;
	int oklen=data.size()-padd;

	
	//先解码4的整数倍数据
	int j=0;
	int i=0;
	for (i=0;i<oklen;)
	{
		memset(sour_char_3 ,0x00,sizeof(sour_char_3));
		memset(sour_char_4 ,0x00,sizeof(sour_char_4));
		
		sour_char_4[0]=CharToData(data[i++]);
		sour_char_4[1]=CharToData(data[i++]);
		sour_char_4[2]=CharToData(data[i++]);
		sour_char_4[3]=CharToData(data[i++]);

		//4*6 => 3*8
		sour_char_3[0] = (sour_char_4[0] << 2) + ((sour_char_4[1] & 0x30) >> 4);
		sour_char_3[1] = ((sour_char_4[1] & 0xf) << 4) + ((sour_char_4[2] & 0x3c) >> 2);
		sour_char_3[2] = ((sour_char_4[2] & 0x3) << 6) + sour_char_4[3];
		
		pout[j++]=sour_char_3[0];
		pout[j++]=sour_char_3[1];
		pout[j++]=sour_char_3[2];
		
	}

	//解码剩余数据
	memset(sour_char_3 ,0x00,sizeof(sour_char_3));
	memset(sour_char_4 ,0x00,sizeof(sour_char_4));

	switch(padd)
	{
	case 1:
		sour_char_3[0]=CharToData(data[i++]);
		pout[j++]=sour_char_3[0];
		break;
	case 2:
		sour_char_4[0]=CharToData(data[i++]);
		sour_char_4[1]=CharToData(data[i++]);

		sour_char_3[0] = (sour_char_4[0] << 2) + ((sour_char_4[1] & 0x30) >> 4);
		sour_char_3[1] = (sour_char_4[1] & 0xf) << 4 ;
		
		pout[j++]=sour_char_3[0];
		pout[j++]=sour_char_3[1];
		
		break;
	case 3:
		sour_char_4[0]=CharToData(data[i++]);
		sour_char_4[1]=CharToData(data[i++]);
		sour_char_4[2]=CharToData(data[i++]);
		
		sour_char_3[0] = (sour_char_4[0] << 2) + ((sour_char_4[1] & 0x30) >> 4);
		sour_char_3[1] = ((sour_char_4[1] & 0xf) << 4) + ((sour_char_4[2] & 0x3c) >> 2);
		sour_char_3[2] = (sour_char_4[2] & 0x3) << 6;
		
		pout[j++]=sour_char_3[0];
		pout[j++]=sour_char_3[1];
		pout[j++]=sour_char_3[2];
		break;
	}
	return j;
	
}


CBase64Util::CBase64Util()
{

}

CBase64Util::~CBase64Util()
{

}

}
