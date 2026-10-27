#include<stdio.h>
int main()
{
    int a[100],i,c,n,flag=0,s;
    printf("Enter no. of array values\n");
    scanf("%d",&n);
    printf("Enter numbers of array:\n");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    printf("enter element you want to search:\n");
    scanf("%d",&s);
    for(i=0;i<n;i++){
    if(s==a[i]){
        flag=1;
        printf("element found at %d position",i+1);
        break;
    }}
    if(flag==0)
    printf("element not found");
    return 0;
}