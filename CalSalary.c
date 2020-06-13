#include<stdio.h>

int main(void)

{

	const float revenue_per_150 = 4.5f;//固化每150件收入的值

	short Jan_sold = 23500;	

	short Feb_sold = 19300;

	short Mar_sold = 21600;

	float RevenueQuarter = 0.0f;

	unsigned  QuarterSold = Jan_sold + Feb_sold + Mar_sold;

	printf("\ntotal sold is %u", QuarterSold);

	RevenueQuarter = (float)QuarterSold / 150 * revenue_per_150;//强制类型转换

	printf("\n total revenue is %.2f",RevenueQuarter);//原语句QuarterSold/150*revenue_per_150  

	//也可revenue_per_150*QuarterSold/150前者相除结果为129.333但是为整数类型，会舍去.333，故值错误

	//对混合数进行运算时，会自动把整数操作数转化为浮点数，结果为FLOAT类型，在此基础上/150，结果也为float类型

	getchar();

	return 0;

}
