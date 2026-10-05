#include<stdio.h>
#include<math.h>
int main()
{
	float A,B,C,a,b,c;
	printf("enter sides values");
	scanf("%f%f%f",&a,&b,&c);
	A=acos((-pow(a,2)+pow(b,2)+pow(c,2))/(2*b*c));
	B=acos((pow(a,2)-pow(b,2)+pow(c,2))/(2*a*c));
	C=acos((pow(a,2)+pow(b,2)-pow(c,2))/(2*a*b));
	A=(A*180)/3.14;
	B=(B*180)/3.14;
	C=(C*180)/3.14;
	printf("angles of triangle=%f,%f,%f\n",A,B,C);
	return 0;
}
