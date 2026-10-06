#include<stdio.h>
int main()
{
    int i,n,sum=0;
    int a[100];
    printf("enter no of elements in array");
    scanf("%d",&n);
    printf("enter %d elements",n);
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    for(i=0;i<n;i++)
    sum =sum+a[i];
    printf("sum=%d",sum);
}