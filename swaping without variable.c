#include<stdio.h>
int main()
{
	int a,b;
	printf("enter 2 values");
	scanf("%d%d",&a,&b);
	a=a+b;
	b=a-b;
	a=a-b;
	printf("swaping of 2 numbers=%d & %d",a,b);
	return 0;
}
