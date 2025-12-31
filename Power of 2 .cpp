#include<stdio.h>
#include<math.h>

int main()

{
	int n;
	scanf("%d",&n);
	if(n&&(n&(n-1))==0)
	{
		printf("Yes\n");
	}
	else
	{
		printf("No\n");
	}
	return 0;
}
