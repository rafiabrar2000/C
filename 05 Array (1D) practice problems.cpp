#include<stdio.h>
#include<math.h>
#include<string.h>

int main()

{
	/*1 int n,array[10];
	printf("How many numbers do you want:");
	scanf("%d",&n);
	printf("Incert the numbers:");
	for(int i=0;i<n;i++)
	{
		scanf("%d",&array[i]);
	}
	printf("\n");
	for(int i=n-1;i>=0;i--)
	{
		printf("%d ",array[i]);
	}*/
	
	/*2 int n,sum=0,array[10];
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		scanf("%d",&array[i]);
	}
	for(int i=0;i<n;i++)
	{
		sum=sum+array[i];
	}
	printf("%d",sum);*/
	
	/*3 int array[10],sum=0,value,n,i;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&array[i]);
	}
	for(i=0;i<n;i++)
	{
		if(array[i]%2==0)
		{
			sum=sum+array[i];
		}
	}
	printf("%d",sum);*/
	
	/*4 int n,i;
	double array[10],sum=0,avg;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%lf",&array[i]);
	}
	for(i=0;i<n;i++)
	{
		sum=sum+array[i];
	}
	avg=sum/n;
    printf("%.2lf",avg);*/
    
    /*5 int n,array[15],sum=0;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
    	scanf("%d",&array[i]);
	}
	for(int i=0;i<n;i++)
	{
		if(i%2==0)
		{
			sum=sum+array[i];
		}
	}
	printf("%d",sum);*/
	
	/*6 int n;
	
	scanf("%d",&n);
	int array1[n],array2[n],array3[n];
	printf("Enter the first array : ");
	for(int i=0;i<n;i++)
	{
		scanf("%d",&array1[i]);
	}
	printf("Enter the second array : ");
	for(int j=0;j<n;j++)
	{
		scanf("%d",&array2[j]);
	}
	for(int k=0;k<n;k++)
	{
		
		array3[k] = array1[k]+array2[k];
		
	}
	for(int k=0;k<n;k++)
	{
		
		printf("%d ",array3[k]);
		
	}*/
	
	
	
	/*8 int array[10],n,max,min,maxIndex,minIndex;
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		scanf("%d",&array[i]);
	}
	max=min=array[0];
	maxIndex=minIndex=0;
	for(int i=1;i<n;i++)
	{
		if(max<array[i])
		{
			max=array[i];
			maxIndex=i;	
		}
		if(min>array[i])
		{
			min=array[i];
			minIndex=i;
		}
	}
	
	
	
	
	printf("Max:%d index:%d\n",max,maxIndex);
	printf("Min:%d index:%d",min,minIndex);*/
	
	/*9 char str[50];
	int i,n,len,v=0,c=0,w=0;  /v=vowels,c=consonents,w=words/
	printf("No of alphabets:");
	scanf("%d",&n);
	printf("Enter the strings:");
	scanf("%s",str);
	
	len=strlen(str);
	
	for(i=0;i<strlen(str);i++)
	{
		if(str[i]=='A'||str[i]=='E'||str[i]=='I'||str[i]=='O'||str[i]=='U'||str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u')
		{
			v++;
		}
		else if((str[i]>='A' && str[i]<='Z') || (str[i]>='a' && str[i]<='z'))
		{
			c++;
		}
		else if(str[i]==' ')
		{
			w++;
		}
	}
	printf("Count of vowels:%d",v);
	//printf("Count of consonents:%d",c);
	//printf("Count of words:%d",w);*/
	
	/*10 int n,i,value,array[10],index=-1;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&array[i]);
	}
	scanf("%d",&value);
	for(i=0;i<n;i++)
	{
		if(value==array[i])
		{
			index=i;
			break;
		}
		
	}
	if(index==-1)
	{
		printf(" NOT FOUND");
	}
	else
	{
		printf("FOUND at index position:%d %d",value,i);
	}*/
	
	/*11 int n,i,arrayA[10],arrayB[10];
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&arrayA[i]);
	}
	printf("arrayA is");
	for(int i=0;i<n;i++)
	{
		printf(" %d",arrayA[i]);
	}
	printf("\n");
	for(int i=n-1,j=0;i>=0 && j<n;i--,j++)
	{
		arrayB[j]=arrayA[i];
	}
	printf("arrayB is");
	for(int i=0;i<n;i++)
	{
		printf(" %d",arrayB[i]);
	}*/
	
    /*12 int i,n,pos,array[50],num;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
    	scanf("%d",&array[i]);
	}
	scanf("%d",&num);
	scanf("%d",&pos);
	for(i=n;i>pos;i--)
	{
		array[i]=array[i-1];
	}
	array[pos]=num;
	n++;
	for(i=0;i<n;i++)
	{
		printf("%d ",array[i]);
	}*/
	
	/*13 int i,n,pos,array[50];
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
    	scanf("%d",&array[i]);
	}
	scanf("%d",&pos);
	for(i=pos;i<n;i++)
	{
		array[i]=array[i+1];
	}
	n--;
	
	for(i=0;i<n;i++)
	{
		printf("%d ",array[i]);
	}*/
	
	/*14 int arrayA[10],arrayB[10],tempC[10],m,n,i;
	scanf("%d",&n);
	scanf("%d",&m);
	for(i=0;i<n;i++)
	{
		scanf("%d",&arrayA[i]);
	}
	for(i=0;i<m;i++)
	{
		scanf("%d",&arrayB[i]);
	}
	for(i=0;i<n;i++)
	{
		tempC[i]=arrayA[i];
	}
	for(i=0;i<m;i++)
	{
		arrayA[i]=arrayB[i];
	}
	for(i=0;i<n;i++)
	{
		arrayB[i]=tempC[i];
	}
	for(i=0;i<m;i++)
	{
		printf("%d ",arrayA[i]);
	}
	printf("\n");
	for(i=0;i<n;i++)
	{
		printf("%d ",arrayB[i]);
	}*/
	
	/*15 int i,n,array[10];
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&array[i]);
	}
	for(i=0;i<n;i++)
	{
		if(array[i]%3==0)
		{
			printf("-1 ");
		}
		else
		{
			printf("%d ",array[i]);
		}
		
	}*/
	
	/*16 int i,n,array[10];
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&array[i]);
	}
	for(i=0;i<n;i++)
	{
		if(i%2!=0)
		{
			printf(" 0 ");
		}
		else
		{
			printf("%d",array[i]);
		}
	}*/
	
	/*17 int i,n,array[10],temp;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&array[i]);
	}
	for(i=0;i<n;i++)
	{
		for(int j=i+1;j<n;j++)
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
	}*/
	
	/*18 int i,j,k,n,array[10];
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&array[i]);
	}
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(array[i]==array[j])
			{
				for(k=j+1;k<n;k++)
				{
					array[k-1]=array[k];
				}
				n--;
				j--;
			}
		}
	}
	for(i=0;i<n;i++)
	{
		printf("%d ",array[i]);
	}*/
	
	/*19 int n,m,arrayA[10],arrayB[10],i,j;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&arrayA[i]);
	}
	scanf("%d",&m);
	for(j=0;j<m;j++)
	{
		scanf("%d",&arrayB[j]);
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			if(arrayA[i]==arrayB[j])
			{
				printf("%d ",arrayA[i]);
			}
			
			
		}
	}
	printf("Empty set");*/
	
	/*20*/
	/*21*/
	
	//Write a program in C to copy the elements of one array into another array.
	
	/*int i,n,arrayA[5],arrayB[5];
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&arrayA[i]);
	}
	for(i=0;i<n;i++)
	{
		arrayB[i]=arrayA[i];
	}
	for(i=0;i<n;i++)
	{
		printf("%d",arrayB[i]);
	}*/
	
	//Write a program in C to count a total number of duplicate elements in an array
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	

	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
