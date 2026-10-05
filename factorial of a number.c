#include<stdio.h>
int main()
{
	int i,n,fact;
	printf("enter n value");
	scanf("%d",&n);
	for(i=1;i<=n;i=i+1)
	{
		fact=fact*i;
		}
		printf("fact=%d\n",fact);
	return 0;
}
