#include<stdio.h>
#include<math.h>
int main()
{
	float A,s,a,b,c;
	printf("enter 3 values");
	scanf("%f%f%f",&a,&b,&c);
	s=(a+b+c)/2;
	A=sqrt(s*(s-a)*(s-b)*(s-c));
	printf("area of triangle is %f",A);
	return 0;
}
