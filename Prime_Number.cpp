#include<stdio.h>

int main()

{
	int i=2,n,flag=0;
	scanf("%d",&n);
	while(i<=n/2)
	{
		if(n % i == 0)//Condition for not prime
		{
			flag=1;
		}
		i++;
	}
	if(flag == 0)
	{
		printf("It is a Prime Number\n");
	}
	else if(flag==1)
	{
		printf("It is not a Prime Number\n");
	}
	return 0;
}
