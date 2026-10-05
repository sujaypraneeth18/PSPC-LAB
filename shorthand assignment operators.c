#include<stdio.h>
int main()
{
	int a,b;
	printf("enter 2 values");
	scanf("%d%d",&a,&b);
	printf("%d+=%d=%d\n",a,b,a+=b);
	printf("%d-=%d=%d\n",a,b,a-=b);5
	printf("%d*=%d=%d\n",a,b,a*=b);
	printf("%d/=%d=%d\n",a,b,a/=b);
	printf("%d %% %d=%d\n",a,b,a%=b);
	return 0;
}
