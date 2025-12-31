#include<stdio.h>

int main()

{
	/*int a,b,c;
	scanf("%d %d %d",&a,&b,&c);
	if((a+b)<=80)
	{
		printf("a) 1");
	}
	else
	{
		printf("a) 0");
	}

	if(!(a+b))
	{
		printf("b) 1");
	}
	else
	{
		printf("b) 0");
	}

	if(c!=0)
	{
		printf("c) 1");
	}
	else
	{
		printf("c) 0");
	}*/
	int i,number,n,position,array[11];
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&array[i]);
	}
	printf("Number:");
	scanf("%d\n",&number);
	printf("Position:");
	scanf("%d",&position);

	for(i=n-1;i>=position;i--)
	{
	    array[i+1]=array[i];
	}



	array[position]=number;

	for(i=0;i<n;i++)
	{
		printf("%d ",array[i]);
	}
	return 0;

}
