#include<stdio.h>
#include<math.h>

int main()

{
	/*1 int n;
	scanf("%d",&n);
	
	for(int i=1;i<=n;i++)
	{
		if(i==n)
		{
			printf("%d",i);
		}
		else
		{
			printf("%d,",i);
		}
	}*/
	
	/*2 int n,z=1;
	scanf("%d",&n);
	for(int i=1;i<=n;i++)
	{
		if(i<n)
		{
			printf("%d,",z);
		}
		else if(i==n)
		{
			printf("%d",z);
		}
		z=z+2;
	}*/
	
	/*3 int n;
	scanf("%d",&n);
	for(int i=1;i<=n;i++)
	{
		if(i==n && i%2!=0)
		{
			printf("1");
		}
		else if(i%2!=0)
		{
			printf("1,");
		}
		else if(i==n && i%2==0)
		{
			printf("0");
		}
		else if(i%2==0)
		{
			printf("0,");
		}
		
    }*/
    
    /*4 int n;
    double number,Avg,sum=0;
    printf("How many numbers do you want to take:\n");
    scanf("%d",&n);
    printf("Give the numbers one after another:\n");
    for(int i=1;i<=n;i++)
    {
    	scanf("%lf",&number);
    	sum=sum+number;
	}
	Avg=sum/n;
	printf("AVG of %d inputs: %.6lf",n,Avg);*/



    
    /*5 int X,Y;
    scanf("%d %d",&X,&Y);
    for(int i=1;i<=Y;i++)
    {
    	if(X<Y)
    	{
    		printf("%d,",X*X);
    		X++;
    	}
    	else if(X>Y)
    	{
    		printf("%d,",X*X);
    		X--;
		}
	}
	if(X==Y)
	{
		printf("Reached!");
	}*/
	
	/*6*/
	
    /*7 char ch;
    int i=0;
    while(scanf(" %c",&ch)==1)
	{
        
        if(ch=='A')
        {
            break;	
		}
		else
		{
			printf("Input %d: %c\n",i,ch);
		}
		i++;
		
    }*/ 
    
	
	
	/*8 int mainNumber,remainder,reverseNumber=0;
	scanf("%d",&mainNumber);
	while(mainNumber!=0)
	{
		remainder=mainNumber%10;
		reverseNumber=(reverseNumber*10)+remainder;
		mainNumber=mainNumber/10;
	}
	printf("%d",reverseNumber);*/
	
	/*18 int mainNumber,n,reverseNumber=0,remainder;
	scanf("%d",&mainNumber);
	n=mainNumber;
	
	while(n!=0)
	{
		remainder=n%10;
		reverseNumber=(reverseNumber*10)+remainder;
		n=n/10;
	}
	if(reverseNumber==mainNumber)
	{
		printf("Yes\n");
	}
	else
	{
		printf("No\n");
	}
	*/
	/*9
	float n, attend, assignment, ct, mid, finale, total=0;

    printf("Enter the number of students:\n");
    scanf("%f", &n);

    int i=1;
    while(i<=n)
    {
        printf("\nEnter the Attendance Mark:\n");
        scanf("%f", &attend);

        printf("Enter the Assignment Mark:\n");
        scanf("%f", &assignment);

        printf("Enter CT Mark:\n");
        scanf("%f", &ct);

        printf("Enter Mid Mark:\n");
        scanf("%f", &mid);

        printf("Enter Final Mark:\n");
        scanf("%f", &finale);

    mid=(30*mid)/50;
    finale=(40*finale)/100;

    total=attend+assignment+ct+mid+finale;

    if (total>100)
    {
        printf("\nMarks are coming above 100.\tKindly enter the marks properly!!!\n\n");
        i=i;
    }
    else if (total>=90 && total<=99)
    {
        printf("\nTotal Mark: %f, out of 100\n", total);
        printf("Student - %d: A\n", i);
        i++;
    }
    else if (total>=86 && total<=89)
    {
        printf("\nTotal Mark: %f, out of 100\n", total);
        printf("Student - %d: A-\n", i);
        i++;
    }
    else if (total>=82 && total<=85)
    {
        printf("\nTotal Mark: %f, out of 100\n", total);
        printf("Student - %d: B+\n", i);
        i++;
    }
    else if (total>=78 && total<=82)
    {
        printf("\nTotal Mark: %f, out of 100\n", total);
        printf("Student - %d: B\n", i);
        i++;
    }
    else if (total>=74 && total<=77)
    {
        printf("\nTotal Mark: %f, out of 100\n", total);
        printf("Student - %d: B-\n", i);
        i++;
    }
    else if (total>=70 && total<=73)
    {
        printf("\nTotal Mark: %f, out of 100\n", total);
        printf("Student - %d: C+\n", i);
        i++;
    }
    else if (total>=66 && total<=69)
    {
        printf("\nTotal Mark: %f, out of 100\n", total);
        printf("Student - %d: C\n", i);
        i++;
    }
    else if (total>=62 && total<=65)
    {
        printf("\nTotal Mark: %f, out of 100\n", total);
        printf("Student - %d: C-\n", i);
        i++;
    }
    else if (total>=58 && total<=61)
    {
        printf("\nTotal Mark: %f, out of 100\n", total);
        printf("Student - %d: D+\n", i);
        i++;
    }
    else if (total>=55 && total<=57)
    {
        printf("\nTotal Mark: %f, out of 100\n", total);
        printf("Student - %d: D\n", i);
        i++;
    }
    else if (total>=0 && total<=54)
    {
        printf("\nTotal Mark: %f, out of 100\n", total);
        printf("Student - %d: F\n", i);
        i++;
    }

    }*/

	
	

	
	/*10 int n,sum=0;
	scanf("%d",&n);
	for(int i=1;i<=n;i++)
	{
		if(i%2!=0)
		{
			sum=sum+i;
		}
		else if(i%2==0)
		{
			sum=sum-i;
		}
		
	}
	printf("Result:%d",sum);*/
	
	/*11 int n,sum=0;
	scanf("%d",&n);
	for(int i=1;i<=n;i++)
	{
		sum=sum+(i*i*(i+1));
	}
	printf("Result:%d",sum);*/
	
	/*12 int x=1,y=1,z,n;
	scanf("%d",&n);
	for(int i=1;i<=n;i++)
	{
		printf("%d,",x);
		z=x+y;
		x=y;
		y=z;
	}*/
	
	/*13 int n,fact=1;
	scanf("%d",&n);
	for(int i=1;i<=n;i++)
	{
		fact=fact*i;
	}
	printf("%d!=%d\n",n,fact);*/
	
	/*14 int n,r,fact1=1,fact2=1,fact3=1,nCr;
	
	scanf("%d %d",&n,&r);
	for(int i=1;i<=n;i++)
	{
		fact1=fact1*i;
	}
	for(int j=1;j<=(n-r);j++)
	{
		fact2=fact2*j;
	}
	for(int k=1;k<=r;k++)
	{
		fact3=fact3*k;
	}
	nCr=fact1/(fact2*fact3);
	printf("%d",nCr);*/
	
	/*15 int x,y;
	scanf("%d %d",&x,&y);
	
	x=pow(x,y);
	printf("%d",x);*/
	
	/*16 int num1,num2,n1,n2,LCM,GCD,remainder;
	scanf("%d %d",&num1,&num2);
	n1=num1;                                     LCM=(num1*num2)/GCD
	n2=num2;                                     n1%n2=remainder
	while(n2!=0)                                 n1=n2,n2=remainder
	{
		remainder=n1%n2;
		n1=n2;
		n2=remainder;
	}
	printf("GCD:%d\n",n1);
	LCM=(num1*num2)/n1;
	printf("LCM:%d",LCM);
	*/
	
	
	/*17 int prime=0,n;
	scanf("%d",&n);
	
	for(int i=2;i<=n;i++)
	{
		if(n%i==0)
		prime++;
    }
    if(prime==1)
    {
    	printf("Prime\n");
	}
	else
	{
		printf("Not Prime\n");
	}*/
	
	
	
	/*20 int sum=0,a=0,i,n;
	scanf("%d",&n);
	
	for(i=1;i<=n;i++)
	{
		a=(a*10)+i;
		sum=sum+a;
	}
	printf("%d",sum);*/
	
	//Write a program to take an alphabet character and print vowels upto that character.
	
	/*char ch;
	scanf(" %c",&ch);
	for(int i='A';i<ch;i++)
	{
		if(i=='A' || i=='E' || i=='I' || i=='O' || i=='U')
		{
			printf("Vowels: %c\n",i);
		}
	}*/
	
	
	
	
	
	
	
	
	return 0;
	
	
	
	
	
	
}
