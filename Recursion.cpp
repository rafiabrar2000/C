#include<stdio.h>

/*9 void displayNumbers(int n)
{
	if(n==10)
	{
		printf("10");
	}
	else
	{
		printf("%d ",n);
		displayNumbers(n+1);
	}
}

int main()
{
	int n=1;
	displayNumbers(n);
	return 0;
}*/

/*10 int sum(int n)
{
	if(n==1)
	{
		return 1;
	}
	else
	{
		return n + sum(n-1);
	}


}

int main()
{
	int n,result;
	scanf("%d",&n);
	result=sum(n);
	printf("%d",result);
	return 0;
}*/


/*11 void fibo(int x,int y,int n)
{
	int z;
	if(n>0)
	{
		printf("%d ",x);
		z=x+y;
		x=y;
		y=z;
		n--;
		fibo(x,y,n);
	}
}

int main()
{
	int a=0,b=1,n;
	scanf("%d",&n);
	fibo(a,b,n);
	return 0;
}*/

/*12 void printArray(int a[100],int n)
{
	static int b=0;
	if(n>0)
	{
		printf("%d ",a[b]);
		b++;
		n--;
		printArray(a,n);
	}
}

int main()
{
	int array[100],n;
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		scanf("%d",&array[i]);
	}
	printArray(array,n);
	return 0;
}*/

/*13 int countDigits(int n)
{
	static int count=0;
	if(n>0)
	{
		count=count+1;
		countDigits(n/10);
	}
	return count;
}

int main()
{
	int n,res;
	scanf("%d",&n);
	res=countDigits(n);
	printf("%d",res);
	return 0;
}*/

/*14 int maxElement(int a[100],int n)
{
	static int max,b=0;
	if(max<a[b])
	{
		max=a[b];
		b=b+1;
		n=n-1;
		maxElement(a,n);
	}
	return max;
	
}

int main()
{
	int array[100],n,res;
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		scanf("%d",&array[i]);
	}
	
	res=maxElement(array,n);
	printf("%d",res);
	return 0;
}*/

/*15 void evenOdd(int n,int z)
{
	if(n>0)
	{
		printf("%d ",z);
		z=z+2;
		n--;
		evenOdd(n,z);
	}
}

int main()
{
	int n,z;
	scanf("%d %d",&n,&z);
	evenOdd(n,z);
	return 0;
}*/


void palindrome(char str,int s,int e)
{
	if(str[s++] == str[e--])
    {
        printf("Yes\n");
        palindrome(str,s,e);
    }
    else
    {
        printf("No\n");
	}
	
}


int main()
{
	char str[100];
	int s,e;
	s=0;
	gets(str);
	e=strlen(str) - 1;
	palindrome(str,s,e);
	return 0;
	
}
