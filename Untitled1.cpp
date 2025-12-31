#include<stdio.h>

int main()

{
	char str1[100],str2[100];
	int i=0,j=0;
	gets(str1);
	for(i=0;str1[i]!='\0';i++)
	{
		if(str1[i]!=' ')
		{
			str2[j]=str1[i];
		    j++;
		}
	}
	puts(str2);
	
	return 0;
}
