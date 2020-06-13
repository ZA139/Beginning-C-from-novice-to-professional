#include<stdio.h>



int main(void)

{

	float radius = 0.0f;

	float diameter = 0.0f;

	float circumference = 0.0f;

	float pi = 3.1415926f;

	float area = 0.0f;

	

	printf("Input the diameter please");

	scanf_s("%f", &diameter);

	getchar();

	radius = diameter / 2;

	circumference = pi * diameter;

	area = pi * radius*radius;



	printf("\nThe circumference is %-5.2f", circumference);

	printf("\nThe area is %-5.2f", area);

	getchar();

	return 0;

}
