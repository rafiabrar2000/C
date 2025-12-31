#include<stdio.h>

int main()

{
	int i,j,k,n,x=1,y=0;
	scanf("%d",&n);
	for(i=0;i<=n;i++)
	{
		if(i==n)
		{
			printf("%d",i);
		}
		else
		{
			printf("%d+",i);
		}
	}
	printf("\n");
	for(j=0;j<=n;j++)
	{
		if((j%2!=0) && (j==n))  //odd input
		{
			printf("%d",j);
		}
		else if((j%2!=0) && (j==n-1))  // even input
		{
			printf("%d",j);
		}
		else if(j%2!=0)
		{
			printf("%d+",j);
		}
	}
	printf("\n");
	for(k=0;k<=n;k++)
	{
		if((k%2==0) && (k==n))
		{
			printf("%d",k);
		}
		else if((k%2==0) && (k==n-1))
		{
			printf("%d",k);
		}
		else if(k%2==0)
		{
			printf("%d+",k);
		}
	
	}
	
	return 0;
}
