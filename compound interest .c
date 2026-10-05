#include<stdio.h>
#include<math.h>
int main()
{
	float c,p,r,n,t;
	printf("enter values");
	scanf("%f%f%f%f",&p,&r,&n,&t);
	c=pow(p*(1+r/n),n*t);
	printf("compound interest is %f",c);
	return 0;
}
