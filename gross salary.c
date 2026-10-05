#include<stdio.h>
int main()
{
	float r,s;
	printf("enter basic salary");
	scanf("%f",&s);
	r=s+0.1*s+0.25*s;
	printf("gross salary is %f",r);
	return 0;
}
