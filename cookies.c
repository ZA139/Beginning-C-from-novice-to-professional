
/*cookiessssssssssssss!*/

#include<stdio.h>//输入输出预处理指令

int main(void)

{

	int cookies = 45;

	int kids = 7;

	int cookies_per_kid=0;//initialize variable	

	int cookies_left=0;//initialize variable 初始化变量

	cookies_per_kid = cookies / kids;

	cookies_left = cookies % kids;// optimize sentence by mod //original sentence "cookies_left = cookies-cookies_per_kid * kids;"

	printf("\nhere are %d cookies.\n\nAnd %d kids\n\nEvery kids got %d cookies\n\n Here are %d cookies left.\n", cookies, kids, cookies_per_kid, cookies_left);

	getchar();

	return 0;

}
