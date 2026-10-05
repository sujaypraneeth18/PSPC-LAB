#include<stdio.h>
int main()
{
	int a,b;
	printf("enter 2 values to perform relational operators");
	scanf("%d%d",&a,&b);
	printf("%d>%d=%d\n",a,b,a>b);	
	printf("%d<%d=%d\n",a,b,a<b);
	printf("%d==%d=%d\n",a,b,a==b);
	printf("%d>=%d=%d\n",a,b,a>=b);
	printf("%d<=%d=%d\n",a,b,a<=b);
	printf("%d!=%d=%d\n",a,b,a!=b);
	printf("NOTE:The result of above is \'1\' of it is true and \'0\' if it is false");
	return 0;
}
