#ifndef TALK_TT_CLIENT_H_
#define TALK_TT_CLIENT_H_

#include <string>
#include <vector>
#include <utility>
#include <boost/shared_ptr.hpp>
#include <tcrdb.h>

using namespace std;

namespace mtalk{
namespace utils{

	class TTClient{
	public :
		TTClient(string serverList);
		void open();
		void close();
		void set(string key, string value);
		string get(string key);
		string get(int key);
		string get(long key);
		void test();
	private :
		void reOpen();
                string  reGetFromTT(const string& key); 
		vector< pair<string, short> > serverList_;
		TCRDB* tcrdbPtr_;
	};

};
};

#endif //TALK_TT_CLIENT_H_
