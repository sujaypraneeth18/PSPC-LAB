#include<stdio.h>
int main()
{
	int n,rev=0,rem,original;
	printf("enter a number");
	scanf("%d",&n);
	original=n;
	while(n>0){
	rem=n%10;
	rev=rev*10+rem;
	n=n/10;
	}
	if(original==rev){
	printf("it is a palindrome");}
	else{
	printf("not a palindrome");}
	return 0;
}
