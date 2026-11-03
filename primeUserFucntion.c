#include<stdio.h>

void prime(int n)
{
    int i,c=0;
    for(i=1;i<=n;i++)
    {
        if(n%i==0)
        c++;
    }
    if(c==2)
        printf("%d is a prime number\n",n);
    else
        printf("%d is not a prime\n",n);
}

int main()
{
    int x;
    printf("enter value to check\n");
    scanf("%d",&x);
    prime(x);
  return 0;
}