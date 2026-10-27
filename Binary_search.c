#include<stdio.h>
int main()
{
    int a[100],i,n,c,s,h,l,flag=0,mid;
    printf("Enter no. of array values\n");
    scanf("%d",&n);
    printf("Enter numbers\n");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    printf("enter element you want to search:\n");
    scanf("%d",&s);
    l=0;
    h=n-1;
    while(l<=h){
        mid=(l+h)/2;
        if(s==a[mid])
        {
            printf("element is found at %d position",mid+1);
            flag=1;
            break;
        }
        else if(s>a[mid])
            l=mid+1;
        else
            h=mid-1;
    }
    if(flag==0)
    printf("element not found");
    return 0;
}