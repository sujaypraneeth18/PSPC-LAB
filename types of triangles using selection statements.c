#include<stdio.h>
int main()
{
	int a,b,c;
	printf("enter sides values");
	scanf("%d%d%d",&a,&b,&c);
	if(a==b&&b==c){
		printf("given triangle is equilateral");
	}
	else if(a==b||b==c||c==a){
		printf("given triangle is isosceles");
	}
	else {
		printf("given triangle is scalene");
		return 0;
	}
}
