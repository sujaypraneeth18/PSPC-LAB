#include<stdio.h>
int main()
{
	int a,b,c;
	printf("enter 3 values to perform logical operators");
	scanf("%d%d%d",&a,&b,&c);
	printf("(%d>%d)&&(%d>%d)=%d\n",a,b,a,c,(a>b)&&(a>c));
    printf("(%d>%d)||(%d>%d)=%d\n",a,b,a,c,(a>b)||(a>c));
	printf("!(%d>%d)=%d\n",a,b,!(a>b));
	return 0;
	}
