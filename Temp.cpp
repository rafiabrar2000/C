#include<stdio.h>

int main()

{

	char ch;
	scanf("%c", &ch);


	if(ch >= 'a' || ch <= 'z')
	{
		printf("The character value:%c " ,ch);
	}
    else if (ch >= 'A' || ch <= 'Z')
    {
        printf("The character value:%c " ,ch);
    }
    else
    {
    	 printf("Invalid Input");
	}
   
	return 0;

}
