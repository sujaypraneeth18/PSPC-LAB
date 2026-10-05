#include<stdio.h>
int main()
{
int n,y,w,d;
printf("enter no of days");
scanf("%d",&n);
y=n/365;
w=(n%365)/7;
d=(n%365)%7;
printf("%d years %d weeks %d days\n",y,w,d);
return 0;	
}
