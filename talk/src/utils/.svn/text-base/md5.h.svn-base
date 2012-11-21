#ifndef TALK_UTILS_MD5_H_
#define TALK_UTILS_MD5_H_
#include <string>
#include <string.h>
#include <stdint.h>

namespace mtalk{
namespace utils{

struct MD5_DATA
{
	uint32_t data[4];
	const MD5_DATA & operator=(uint32_t * p){
		memcpy(data,p,16);
		return *this;
	}
	bool operator < (const MD5_DATA& p) const
	{
		return memcmp(data,p.data,4*sizeof(int))<0;
	}		
	bool operator == (const MD5_DATA& p) const
	{
		return memcmp(data,p.data,4*sizeof(int))==0;
	}		
	bool operator <= (const MD5_DATA& p) const
	{
		return memcmp(data,p.data,4*sizeof(int))<=0;
	}		
};

class CMD5
{
	private:
		struct md5_context
		{
			uint32_t total[2];
			uint32_t state[4];
			uint8_t buffer[64];
		};

		void md5_starts( struct md5_context *ctx );
		void md5_process( struct md5_context *ctx, uint8_t data[64] );
		void md5_update( struct md5_context *ctx, uint8_t *input, size_t length );
		void md5_finish( struct md5_context *ctx, uint8_t digest[16] );


	public:
		bool operator < (const CMD5& p) const
		{
			return memcmp(m_data,p.m_data,4*sizeof(int))>0;
		}
		//! construct a CMD5 from any buffer
		void GenerateMD5(unsigned char* buffer,size_t bufferlen);

		//! construct a CMD5
		CMD5();

		//! construct a md5src from char *
		CMD5(const char * md5src);

		//! construct a CMD5 from a 16 bytes md5
		CMD5(unsigned long* md5src);

		//! add a other md5
		CMD5 operator +(CMD5 adder);

		//! just if equal
		bool operator ==(CMD5 cmper);

		//! give the value from equer
		// void operator =(CMD5 equer);

		//! to a string
		std::string ToString();

		uint32_t m_data[4];
};

};
};
#endif /* md5.h */

