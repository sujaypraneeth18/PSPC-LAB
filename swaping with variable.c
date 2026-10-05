#include<stdio.h>
int main()
{
	int temp,a,b;
	printf("enter a & b");
	scanf("%d%d",&a,&b);
	temp=a;
	a=b;
	b=temp;
	printf("swaping of 2 numbers =%d & %d",a,b);
	return 0;
}
