#include"utils/EmojiFilter.h"
#include <iostream>
#include<netinet/in.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <sstream>
#include <bitset>
#include <string>
#include <fstream>
#include <map>
#include <boost/lexical_cast.hpp>
#include "utils/MyLogger.h"

using namespace std;

namespace mtalk{
namespace utils{

	EmojiFilter::EmojiFilter(){
	}

	EmojiFilter::EmojiFilter(const std::string& dataFile){
		initDataMap(dataFile);
	}

	bool EmojiFilter::filter(std::string& toBeTransform){
		string::iterator iter = toBeTransform.begin();
		int count=0;
		for(;iter!=toBeTransform.end();iter++){
			if(((*iter)&0xf0) == 0xf0){
		  		count++;
				if(toBeTransform.end()-iter < 4)
					break;
				string temp(iter, iter + 4);
				string des;
				map<string, string>::iterator map_iter=utf8Map.find(temp);
				if(map_iter != utf8Map.end()){
					des=map_iter->second;
					toBeTransform.replace(iter, iter+4,des);
				}else{
					LOG_WARN("EmojiFilter::filter => can not find mapping char : char = [" << temp << "]");
				}
			}
		}
		LOG_DEBUG("EmojiFilter::filter => filter transform " << count << " char(s)");
		return true;
	}

				
			
	bool EmojiFilter::filter(std::string inputFileName, std::string outputFileName){
		string src;                                                 
		ifstream fi(inputFileName.c_str());                                  
		if(fi)                                                      
		{                                                           
			while(1)                                                  
			{                                                         
				char buf[1000000];
				memset(buf,0,1000000);
				char* temp=buf;                                            
				fi.getline(temp,1000000);                                               
				if(fi.eof()) break;                                     
				src.append(temp); 
				src.append("\n");
			}                                                         
			fi.close();                                               
		}
		filter(src);
		outputFileName.append(".transformed");
		ofstream foo(outputFileName.c_str());                                         
		foo<<src;                                                    
		return true;
	}
	bool EmojiFilter::initDataMap(const std::string& dataFile)
	{
		ifstream fi(dataFile.c_str());
		if(fi){
			string temp1;
			string temp2;
			while(1){
				fi>>temp1;
				fi>>temp2;
				if(fi.eof()) break;

				int unicodeFor_iphone=strtol(temp1.c_str(),NULL,16);
				int unicodeFor_softbank=strtol(temp2.c_str(),NULL,16);

				char* utf8For_iphone;
				char* utf8For_softbank;
				if(!unicodeToUtf8For4Byte(unicodeFor_iphone,&utf8For_iphone))
					return 0;
				if(!unicodeToUtf8For3Byte(unicodeFor_softbank,&utf8For_softbank))
					return 0;
				utf8Map[utf8For_iphone]=utf8For_softbank;
				delete []utf8For_iphone;
				delete []utf8For_softbank;
			}
			fi.close();
			return 1;
		}else {
			LOG_ERROR("EmojiFilter::initDataMap => can not open data file : file = [" << dataFile << "]");
			return 0;
		}

	}
	bool EmojiFilter:: unicodeToUtf8For3Byte(int unicode, char** utf8)
	{
		if(unicode<0 || unicode>0xffff){
			return 0;
		}
		char* utf8_buf=new char[4];
		memset(utf8_buf,0,4);
		utf8_buf[0] = 0xE0|(unicode>>12);
		utf8_buf[1] = 0x80|((unicode>>6)&0x3F);
		utf8_buf[2] = 0x80|(unicode&0x3F);
		utf8_buf[3] = '\0';
		*utf8=utf8_buf;
		return 1;

	}      
	bool  EmojiFilter::unicodeToUtf8For4Byte(int unicode, char** utf8)
	{
		if(unicode<0x10000 || unicode>0x1fffff){
			return 0;
		}
		char* utf8_buf=new char[5];
		memset(utf8_buf,0,5);
		utf8_buf[0] = 0xf0|(unicode>>18);
		utf8_buf[1] = 0x80|((unicode>>12)&0x3f);
		utf8_buf[2] = 0x80|((unicode>>6)&0x3f);
		utf8_buf[3] = 0x80|(unicode&0x3f);
		utf8_buf[4] ='\0';
		*utf8=utf8_buf;
		return 1;
	}     

};
};
