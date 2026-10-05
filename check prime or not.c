#include<stdio.h>
int main()
{
	int i,n,c=0;
	printf("enter n value");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		if(n%i==0){
		
		c+=1;
		
		}
	}
	if (c==2){	
	
		printf("%d is a prime\n",n);
	}

	else 
	{ 
		printf("%d is a composite number\n",n);
		}
	return 0;
}
