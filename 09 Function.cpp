#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdbool.h>
/*1 void printingaline()
{
	printf("This is a function\n");
}
int main()
{
	printingaline();
	return 0;
}*/

/*2 void printingacharacter(char c) //we can use a or any other variable in place of c
{
	printf("Value received from main:%c",c);
}

int main()
{
	char ch,c;
	scanf(" %c",&ch);
	printingacharacter(ch);//function calling
	return 0;
}*/

/*3 void evenorodd(int a)
{
	if(a%2==0)
	{
		printf("Even\n");
	}
	else
	{
		printf("Odd\n");
	}

}


int main()
{
	int n;
	scanf("%d",&n);

    evenorodd(n);
	return 0;

}*/

/*4 void positiveornegative( int a)
{
	if(a>0)
	{
		printf("Positive\n");
	}
	else if(a<0)
	{
		printf("Negative\n");
	}
	else if(a==0)
	{
		printf("Zero\n");
	}
}


int main()
{
	int n;
	scanf("%d",&n);
	positiveornegative(n);
	return 0;
}*/

/*5 void compare(int x,int y)
{
	if(x>y)
	{
		printf("%d is greater than %d\n",x,y);
	}
	else if(x<y)
	{
		printf("%d is less than %d\n",x,y);
	}
	else if(x==y)
	{
		printf("%d is equals to %d\n",x,y);
	}
	;

}

int main()
{
	int a,b;
	scanf("%d %d",&a,&b);
	compare(a,b);
	return 0;
}*/

/*6 int add(int x,int y,int z)
{
	int sum=0;
	sum=sum+x+y+z;
	return sum;
}

int main()
{
	int a,b,c,sum=0,result;
	scanf("%d %d %d",&a,&b,&c);
	sum=sum+a+b+c;
	printf("Sum In Main:%d\n",sum);
	result=add(a,b,c);
	printf("Sum In Function:%d\n",result);
	return 0;
}*/

/*7 int add(int a[100],int n)
{
	int sum=0;
	for(int i=0;i<n;i++)
	{
		sum=sum+a[i];
	}
	return sum;
}

int main()
{
	int a[100],n,sum=0,result;
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(int i=0;i<n;i++)
	{
		sum=sum+a[i];
	}
	printf("Sum In Main:%d\n",sum);
	result=add(a,n);
	printf("Sum In Function:%d\n",result);
	return 0;
}*/

/*8 void reverse(int a[100],int n)
{
	for(int i=n-1;i>=0;i--)
	{
		printf("%d ",a[i]);
	}
}

int main()
{
	int a[100],n;
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	reverse(a,n);
	return 0;
}*/

/*9 void factorial(int a)
{
	int fact=1;
	for(int i=1;i<=a;i++)
	{
		fact=fact*i;
	}
	printf("%d",fact);
}


int main()
{
	int n,fact=1;
	scanf("%d",&n);
	factorial(n);
	return 0;
}*/

/*10 int power(int a,int b)
{
	a=pow(a,b);
	return a;
}


int main()
{
	int x,y,result;
	scanf("%d %d",&x,&y);
	result=power(x,y);
	printf("%d",result);
	return 0;
}*/

/*11 int stringlength(char str[1000])
{
	int i,len=0;
	for(i=0;str[i]!='\0';i++)
	{
		len++;
	}
	return len;
}

int main()
{
	char str[1000];
	int len;
	gets(str);
	len=stringlength(str);
	printf("%d",len);
	return 0;
}*/

/*12 void swapping(int x,int y)
{
	int temp;
	temp=x;
	x=y;
	y=temp;
	printf("Value in function:%d %d\n",x,y);
}

int main()
{
	int a,b;
	scanf("%d %d",&a,&b);
	printf("Value in main:%d %d\n",a,b);
	swapping(a,b);
	return 0;
}*/

/*13 void swapping(int *x,int *y)
{
	int temp;
	temp=*x;
	*x=*y;
	*y=temp;
	printf("Value in function:%d %d\n",*x,*y);
}

int main()
{
	int a,b;
	scanf("%d %d",&a,&b);
	swapping(&a,&b);
	printf("Value in main:%d %d\n",a,b);
	return 0;
}*/

/*14 void evennumbers(int a[100],int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		if(a[i]%2==0)
		{
			printf("%d ",a[i]);
		}
	}
}


int main()
{
	int a[100],n,i;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	evennumbers(a,n);
	return 0;
}*/

/*15 int minimum(int array[100],int n)
{
	int lowest,i;
	lowest=array[0];
	for(i=1;i<n;i++)
	{
		if(lowest>array[i])
		{
			lowest=array[i];
		}
	}
	return lowest;
}


int main()
{
	int a[100],n,i,min;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	min=minimum(a,n);
	printf("Minimum Value:%d",min);
	return 0;
}*/

/*16 void multiple(int array[100],int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		array[i]=array[i]*2;
	}
	for(i=0;i<n;i++)
	{
		printf("%d ",array[i]);
	};
}


int main()
{
	int a[100],n,i,min;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	multiple(a,n);

	return 0;
}*/

/*17 void ascendingorder(int array[100],int n)
{
	int temp,i,j;
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(array[i]>array[j])
			{
				temp=array[i];
				array[i]=array[j];
				array[j]=temp;
			}
		}
	}
	for(i=0;i<n;i++)
	{
		printf("%d ",array[i]);
	}
}


int main()
{
	int a[100],n,i;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	ascendingorder(a,n);
	return 0;
}*/

/*18 int IsPrime(int a)
{
	int flag=0,i;
	for(i=2;i<=a/2;i++)
	{
		if(a%i==0)//condition for not prime
		{
			flag=1;
		}

	}
	return flag;
}

int main()
{
	int n,flag;
	scanf("%d",&n);
	flag=IsPrime(n);
	if(flag==0)
	{
		printf("Prime\n");
	}
	else if(flag==1)
	{
		printf("Not Prime\n");
	}
	return 0;
}*/

/*19 void GeneratePrime(int flag,int i)
{
	 //If the number is prime then print
        if(flag==0)
        {
            printf("%d, ", i);
        }
}

void IsPrime(int end)
{
	int flag;
	for(int i=2; i<end; i++)
    {
         //Assume that the current number is Prime
        flag = 0;

        //Check if the current number i is prime or not
        for(int j=2; j<=i/2; j++)
        {

            //If i is divisible by any number other than 1 and self then it is not prime number
            if(i%j==0)
            {
                flag = 1;
                break;
            }
        }

        GeneratePrime(flag,i);
    }
}

int main()
{
	int n,flag;
	scanf("%d",&n);
	IsPrime(n);
	return 0;
}*/

/*20 void GenNthPrime(int end)
{
	int flag,count=0;
	for(int i=2; i>0; i++)
    {
         //Assume that the current number is Prime
        flag = 0;

        //Check if the current number i is prime or not
        for(int j=2; j<i; j++)
        {

            //If i is divisible by any number other than 1 and self then it is not prime number
            if(i%j==0)
            {
                flag = 1;
                break;
            }

        }
        if(flag==0)
        {
            count++;
        }
        if(count==end)
        {
            printf("%dth Prime:%d\n",end,i);
            break;
        }
    }
}

int main()
{
	int n,flag;
	scanf("%d",&n);
	GenNthPrime(n);
	return 0;
}*/

/*21*/


/*22 int main()
{
    char s1[100],s2[100];
    printf("Enter first string :");
    gets(s1);
    printf("Enter second string :");
    gets(s2);
    int n1 = strlen(s1);
    int n2 = strlen(s2);
    int flag =0;
    if(n1<=n2)
    {
        printf("first string have to be bigger");
    }
    else
    {
        for(int i=0; i<n1; i++)
        {
            for(int j=0; j<n2; j++)
            {
                if(s1[i] == s2[j])
                {
                    for(int k =i,l=0; l<n2; k++,l++)
                    {
                        if(s1[k] == s2[l])
                        {
                            flag =1;
                        }
                        else
                 ;       {
                            flag =0;
                            break;
                        }
                    }
                }
                if(flag == 1)
                {
                    break;
                }
            }
            if(flag == 1)
            {
                break;
            }
        }
    }
    printf("%d",flag);
    return 0;

}
*/

/*25,26 void ScalarMultiply(int array[100][100],int row,int col)
{
    int n;
    scanf("%d",&n);
    printf("Multiplied by 2:\n");
    for(row=0;row<3;row++)
    {
        for(col=0;col<5;col++)
        {
            printf("%d ",array[row][col]*n);
        }
        printf("\n");
    }
}

void ShowMatrix(int array[100][100],int row,int col)
{
    for(row=0;row<3;row++)
    {
        for(col=0;col<5;col++)
        {
            printf("%d ",array[row][col]);
        }
        printf("\n");
    }
    ScalarMultiply(array,row,col);
}

void InputMatrix()
{
    int array[100][100],row,col;
    scanf("%d %d",&row,&col);
    for(row=0;row<3;row++)
    {
        for(col=0;col<5;col++)
        {
            scanf("%d ",&array[row][col]);
        }

    }
    ShowMatrix(array,row,col);
}


int main()
{

    InputMatrix();
    return 0;
}*/





