#include<stdio.h>
int main()
{
    int a[100];
    int i,n;
    printf("enter number of elements");
    scanf("%d",&n);
    printf("enter array elements\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);}
        printf("Elements at odd positions:\n");
        for(i=0;i<n;i++)
        {
        if(i%2==0)
        {
            printf("%d\t",a[i]);
        }}
        printf("\n Elements at even positions:\n");
        for(i=0;i<n;i++)
        {
            if(i%2!=0){
                printf("%d",a[i]);
        }
    }
    return 0;
}
