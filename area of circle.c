#include<stdio.h>
#include<math.h>
#define pi 3.14
int main()
{
	float r,a;
	printf("enter radius value\n");
	scanf("%f",&r);
	a=pi*pow(r,2);
	printf("area of circle=%f",a);
	return 0;
}
