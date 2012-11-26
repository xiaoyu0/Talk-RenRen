#include <iostream>
using namespace std;

namespace wy {
	class Wy{
	public:
		Wy () {cout << "this is class Wy in namespace wy " << endl;}
	};
	namespace in_wy {
		class In_wy{
		public:
			In_wy () { cout << "In_wy in wy::in_wy" << endl;}
		};
	}  // ; is not essential
}

namespace {
	class Wy_test {
	public:
		Wy_test () {cout << "Wy_test in global namespace" <<endl;}
	};
};

int main ()
{
	wy::Wy me;
	Wy_test me_test;
	wy::in_wy::In_wy me_test2;
	return 0;
}
