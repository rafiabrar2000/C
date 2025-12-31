#include<stdio.h>
#include<string.h>

int main()

{
	/*1*/
	//using strlen()
	/*char str[50];
	gets(str);
	int len=strlen(str);
	printf("%d",len);*/
	//without using strlen()
	/*char str[50];
	gets(str);
	int i=0,len=0; 
	for(i=0;str[i]!='\0';i++)
	{
		len++;
	}
	printf("%d",len);*/
	
	/*2*/
	//using strcat()
	/*char str1[100],str2[100];
	gets(str1);
	gets(str2);
	strcat(str1,str2);
	printf("%s",str1);*/
	//without using strcat()
	/*char str1[100],str2[100];
	gets(str1);
	gets(str2);
	int i,j,len=0;
	for(i=0;str1[i]!='\0';i++)
	{
		len++;
	}
	for(j=0;str2[j]!='\0';j++)
	{
		str1[len+j]=str2[j];
	}
	printf("%s",str1);*/
	
	/*3char str[100];
	gets(str);
	int v=0;
	for(int i=0;str[i]!='\0';i++)
	{
		if(str[i]=='A' || str[i]=='E' || str[i]=='I' || str[i]=='O' || str[i]=='U' || str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u')
		{
			v++;
		}
	}
	printf("%d",v);*/
	
	/*4 char str[100];
	gets(str);
	int i,w=0;
	for(i=0;str[i]!='\0';i++)
	{
		if(str[i]==' ')
		{
			w++;
		}
	}
	printf("%d",w+1);*/
	
	/*5*/
	//using strrev()
	/*char str[100];
	gets(str);
	strrev(str);
	printf("%s",str);*/
	//without using strrev()
	/*char str1[100],str2[100];
	gets(str1);
	int i,j,len=0;
	for(i=0;str1[i]!='\0';i++)
	{
		len++;
	}
	for(i=len-1,j=0;i>=0;i--,j++)
	{
		str2[j]=str1[i];
	}
	str2[j]='\0';
	printf("%s",str2);*/
	
	/*6 char str[100];
	gets(str);
	for(int i=0;str[i]!='\0';i++)
	{
		if(str[i]>='a' && str[i]<='z')
		{
			str[i]=str[i]-32;
		}
	}
	printf("%s",str);*/
	
	/*7 char str[100];
	gets(str);
	for(int i=0;str[i]!='\0';i++)
	{
		if(str[i]>='a' && str[i]<='z')
		{
			str[i]=str[i]-32;
		}
		else if(str[i]>='A' && str[i]<='Z')
		{
			str[i]=str[i]+32;
		}
	}
	printf("%s",str);*/
	
	/*8 char str[100],temp;
	gets(str);
	for(int i=0;str[i]!='\0';i++)
	{
		for(int j=i+1;str[j]!='\0';j++)
		{
			if(str[i]>str[j])
			{
				temp=str[i];
				str[i]=str[j];
				str[j]=temp;
			}
		}
	}
	printf("%s",str);*/
	
	/*9 char str[100],ch;
	gets(str);      wrong
	scanf(" %c",&ch);
	int i,k=0;
	for(i=0;str[i]!='\0';i++)
	{
		if((str[i]>='A' && str[i]<='Z') || (str[i]>='a' && str[i]<='z'))
		{
			if(str[i]==ch || str[i]+32==ch)
		    {
			   k++;
		    }
		}
	}
	printf("%d",k);*/
	
	/*10 char str1[100],str2[100];
	gets(str1);
	int i,j,len=0;
	for(i=0;str1[i]!='\0';i++)
	{
		len++;
	}
	for(i=len-1,j=0;i>=0;i--,j++)
	{
		str2[j]=str1[i];
	}
	str2[j]='\0';
	printf("%s\n",str2);
	
	int d=strcmp(str1,str2);
	
	if(d==0)
	{
		printf("Yes\n");
	}
	else
	{
		printf("No\n");
	}*/
	
	/*11 char str[100];
	gets(str);
	int i,sum=0;
	for(i=0;str[i]!='\0';i++)
	{
		if(str[i]>='0' && str[i]<='9')
		{
			sum=sum+(str[i]-'0');
		}
	}
	printf("%d",sum);*/
	
	/*12 char str[100],word[100];
	int i,j,len1,len2,count,count1=0;
	gets(str);
	gets(word);
	len1=strlen(str);
	len2=strlen(word);
	
	for(i=0;i<len1;)
	{
		j=0;
		count=0;
		while(str[i]==word[j])
		{
			count++;
			i++;
			j++;
		}
		if(count==len2)
		{
			count1++;
			count=0;
		}
		else
		{
			i++;
		}
	}
	printf("%d",count1);*/
	
	/*13 char str[100];
	int i,j,k;
	gets(str);
	for(i=0;str[i]!='\0';i++)
	{
		for(j=i+1;str[j]!='\0';j++)
		{
			if(str[i]==str[j])
			{
				for(k=j;str[k]!='\0';k++)
				{
					str[k]=str[k+1];
				}
			}
		}
	}
	printf("%s",str);*/
	
	/*14 char str[100],maxchar;
	int i,j,count=0,maxcount=0;
	gets(str);
	for(i=0;str[i]!='\0';i++)
	{
		for(j=0;str[j]!='\0';j++)
		{
			if(str[i]==str[j])
			{
				count++;
			}
		}
		if(maxcount<count)
		{
			maxcount=count;
			maxchar=str[i];
		}
	}
	printf("%c",maxchar);*/
	
	/*15 char str[100];
  	int i, j, len, startIndex, endIndex;
 
  	printf("\n Please Enter any String :  ");
  	gets(str);
  	
  	len = strlen(str);
  	endIndex = len - 1;
  	
  	printf("\n *****  Given String in Reverse Order  ***** \n"); 	   	
  	for(i = len - 1; i >= 0; i--)
	{
		if(str[i] == ' ' || i == 0)
		{
			if(i == 0)
			{
				startIndex = 0;
			}
			else
			{
				startIndex = i + 1;
			}
			for(j = startIndex; j <= endIndex; j++)
			{
				printf("%c", str[j]);
			}
			endIndex = i - 1;
			printf(" ");				
		} 
	}*/
	
	
	
	return 0;
}
