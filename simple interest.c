#include <stdio.h>
int main()
{
	float s,p,t,r;
	printf("enter values of p,t,r");
	scanf("%f%f%f",&p,&t,&r);
	s=p*t*r/100;
	printf("simple interest is %f",s);
	return 0;
}
