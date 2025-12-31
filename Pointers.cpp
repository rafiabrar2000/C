#include<stdio.h>

/*1 int main()
{
	int  a,b,sum;
	int *p1,*p2;
	scanf("%d %d",&a,&b);

	p1=&a;
	p2=&b;
	sum=*p1 + *p2;
	printf("%d",sum);
	return 0;
}*/

/*2 int main()
{
	int x,y;
	int *p1,*p2;
	scanf("%d %d",&x,&y);
	p1=&x;
	p2=&y;
	if(*p1>*p2)
	{
		printf("%d",*p1);
	}
	else
	{
		printf("%d",*p2);
	}
	return 0;
}*/

/*5 int main()
{
	int x,y,temp;
	int *p1,*p2;
	scanf("%d %d",&x,&y);
	p1=&x;
	p2=&y;
	temp=*p1;
	*p1=*p2;
	*p2=temp;
	printf("%d %d",*p1,*p2);
	return 0;
}*/

/*3 int main()
{
	int array[100],i,n;
	int *p;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&array[i]);
		
	}
    p=&array[0];
	for(i=0;i<n;i++)
	{
		printf("%d ",*p);  //printing the array elements //Not Recommended by Sadia maam 
		p++;
	}
	return 0;
}*/

/*int main()
{
	int array[100],i,n;
	int *p;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&array[i]);
		
	}
    p=&array[0];
	for(i=0;i<n;i++)
	{
		printf("%d ",*(p+i));  //printing the array elements //Mostly Recommended by Sadia maam 
		
	}
	return 0;
}*/

/*3 int main()
{
	int array[100],i,n;
	int *p;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&array[i]);
		
	}
    p=&array[0];
	for(i=0;i<n;i++)
	{
		printf("%p\n",p+i); //printing the array elements' address
	}
	return 0;
}*/


/*3 int main()
{
	int array[100],i,n;
	int *p;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&array[i]);
		
	}
    p=&array[0];
	for(i=0;i<n;i++)
	{
		printf("%p\n",p);  //printing the array elements' address
		p++;
	}
	return 0;
}*/


/*3 int main()
{
	int array[100],i,n;
	//int *p;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&array[i]);
		
	}
    //p=&array[0];
	for(i=0;i<n;i++)
	{
		printf("%x\n",array+i);  //printing the array elements' address
		
	}
	
	
	return 0;
}*/

/*3 int main()
{
	int array[100],i,n;
	
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&array[i]);
		
	}
    
	for(i=0;i<n;i++)
	{
		printf("%x\n",*(array+i));  //printing the array elements using array address
		
	}
	return 0;
}*/

/*3 int main()
{
	int array[100],i,n;
	
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&array[i]);
		
	}
    
	for(i=0;i<n;i++)
	{
		printf("%p\n",*(array+i));  //printing the array elements using array address
		
	}
	return 0;
}*/

/*7 int main()
{
	int array[100],i,n,sum=0;
	int *p;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&array[i]);
		
	}
    p=&array[0];
	for(i=0;i<n;i++)
	{
		sum = sum + *(p+i);
	}
	printf("%d",sum);
	return 0;
}*/


/*8 int main()
{
	int array[100],i,n;
	int *p;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&array[i]);
		
	}
    p=&array[n-1];
	for(i=n-1;i>=0;i--)
	{
		printf("%d ",*p);  //printing the array elements
		p--;
	}
	return 0;
}*/

/*4 int main()
{
	int len=0,i;
	char str[100];
	int *p;
	p=&len;
	gets(str);
	for(i=0;str[i]!='\0';i++)
	{
		*p=*p+1;
	}
	printf("%d",*p);
	return 0;
}*/

/*6 int main()
{
	int i,v=0,c=0,w=0;
	char str[100];
	char *p;
	p=&str[0];
	gets(str);
	for(i=0;*p!='\0';i++)
	{
		if(*p=='A' || *p=='E' || *p=='I' || *p=='O' || *p=='U' || *p=='a' || *p=='e' || *p=='i' || *p=='o' || *p=='u')
		{
			v=v+1;
		}
		else if(*p==' ')
		{
			w=w+1;
		}
		else 
		{
			c=c+1;
		}
		p++;
	}
	printf("vowels:%d\n",v);
	printf("consonants:%d",c);
	return 0;
}*/


