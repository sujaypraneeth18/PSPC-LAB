#include<stdio.h>
#include<math.h>
int main()
{
	int x,n,sum=0,rem;
	printf("enter n value");
	scanf("%d",&n);
	x=n;
	while(n>0){
		rem=n%10;
		sum=sum+pow(rem,3);
		n=n/10;}
	if(sum==x){
		printf("Armstrong");
	}
	else {
	printf("not armstrong");
}
return 0;}
