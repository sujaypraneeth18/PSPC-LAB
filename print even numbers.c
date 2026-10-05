#include<stdio.h>
int main()
{
	int i,n;
	printf("enter n value");
	scanf("%d",&n);
	i=0;
	while(i<=n)
	{
		i=i+2;
		printf("%d",i);
	}
	return 0;
}
