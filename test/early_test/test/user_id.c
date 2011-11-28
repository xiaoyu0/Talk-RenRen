// ./user_id  > 0   ,    sudo ./user_id == 0
#include<stdio.h>

int main()
{	
	int user_rid = 0;
		//getuid();
	int user_eid = 0;
	int user_sid = 0;
		//geteuid();
	getresuid (&user_rid, &user_eid, &user_sid);
	printf("user real id  is %d\n" , user_rid);
	printf("user effective id is %d\n", user_eid);
	printf("user saved id is %d\n" , user_sid);
	return;
}
