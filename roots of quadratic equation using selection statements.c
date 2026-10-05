#include<stdio.h>
#include<math.h>
int main()
{
	float a,b,c,d,x1,x2;
	printf("enter values of a,b,c");
	scanf("%f%f%f",&a,&b,&c);
	d=b*b-4*a*c;
	if(d>0){
		x1= (-b+sqrt(d))/(2*a);
		x2= (-b-sqrt(d))/(2*a);
		printf("%.1f and %.1f are roots",x1,x2);
	}
	else if(d==0){
		x1= -b/(2*a);
		printf("roots are equal:%.1f",x1);
	}
	else {
		printf("roots are imaginary");
	}
	return 0;
}
