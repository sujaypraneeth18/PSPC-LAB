#include<stdio.h>
int main()
{
    int a[100],i,j,n,temp,min;
    printf("Enter no. of array values\n");
    scanf("%d",&n);
    printf("Enter numbers\n");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
     for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            min=i;
            if(a[min]>a[j])
            min=j;
            if(min!=i){
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
printf("The selected sort array:\n");
for(i=0;i<n;i++)
{
    printf("%d\t",a[i]);
}
return 0;
}