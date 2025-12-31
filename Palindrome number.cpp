#include<stdio.h>

int main()

{
	int n,mainNumber,remainder,reverseNumber=0;
	
	scanf("%d",&mainNumber);
	n=mainNumber;
	
	
	while(n != 0)
	{
		remainder = n % 10;
		reverseNumber = reverseNumber*10 + remainder;
		n = n / 10;
	}
	
	if(reverseNumber==mainNumber)
	{
		printf("It is a Palindrome Number\n");
	}
	else
	{
		printf("It is not a Palindrome Number\n");
	}
	return 0;
}
