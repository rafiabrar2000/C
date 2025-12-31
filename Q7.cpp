#include<stdio.h>

int main()

{

	char ch;
	int a;
	double b;
	
	scanf("%d",&a);
	printf("The integer value:%d\n",a);
	scanf("%lf",&b);
	printf("The float value:%.6lf\n",b);
	scanf(" %c", &ch);
	


	if((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))
	{
		printf("The character value: %c" ,ch);
	}
    else
    {
    	printf("Invalid Input");
	}
	return 0;

}
