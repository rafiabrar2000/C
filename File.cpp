#include<stdio.h>

/*17 int main()
{
	char name[100];
	int i;
	FILE *file;
	file = fopen("sample.txt","a");
	if(file==NULL)
	{
		printf("File does not exist");
	}
	else
	{
		printf("File is opened\n");
		for(i=1;i<=3;i++)
		{
			printf("Enter name\n");
			fflush(stdin);
			gets(name);
			fprintf(file,"\n%d %s",i,name);
		}
		fclose(file);
	}
	return 0;
}*/

/*18,19 int main()
{
	char name[100];
	int i;
	FILE *file;
	file = fopen("sample.txt","r");
	if(file==NULL)
	{
		printf("File does not exist");
	}
	else
	{
		printf("File is opened\n");
		for(i=1;i<=3;i++)
		{
			fscanf(file,"%d %s",&i,&name);
			printf("\n%d %s",i,name);
		}
		fclose(file);
	}
	return 0;
}*/

/*21 int main()
{
	char name[100];
	int i;
	FILE *file;
	file = fopen("sample.txt","a");
	if(file==NULL)
	{
		printf("File does not exist");
	}
	else
	{
		printf("File is opened\n");
		for(i=1;i<=3;i++)
		{
			printf("Enter name\n");
			fflush(stdin);
			gets(name);
			fprintf(file,"\n%d %s",i,name);
		}
		fclose(file);
	}
	return 0;
}*/

/*20int main()
{
	char name[100];
	int i,count=0;
	FILE *file;
	file = fopen("sample.txt","r");
	if(file==NULL)
	{
		printf("File does not exist");
	}
	else
	{
		printf("File is opened\n");
		for(i=1;i<=3;i++)
		{
			fscanf(file,"\n%d %s",i,name);
			count=count+1;
		}
		
		fclose(file);
		
	}
	
	return 0;
}*/                            Problem




