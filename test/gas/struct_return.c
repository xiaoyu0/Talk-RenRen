struct WY{
	int w;
	int * pw;
	long y;
	char c;
	int d;
	long long ll;
	struct WY * next;
};
struct WY func(int x, long y){
	struct WY wy;
	wy.w = x;
//	wy.pw = &wy.w;
	wy.y = y;
//	wy.next = &wy;
	return wy;
}
int main(){
	struct WY wy = func(5, 6);
//	wy.y = 7;
	return wy.d;
}
