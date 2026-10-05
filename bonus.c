#include<stdio.h>
int main()
{
	float t,s,b;
	printf("enter salary");
	scanf("%f",&s);
	b=0.1*s;
	t=s+b;
	printf("company bonus=%.2f\n total salary =%.2f",b,t);
	return 0;
}
