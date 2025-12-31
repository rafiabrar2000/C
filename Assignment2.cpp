#include<stdio.h>
#include<stdlib.h>

struct City
{
	char name[100];
	int population;
	float area;
	int numOfCOVIDPatients;
};

struct City takeCitiesInfoFromKeyboard(struct City array[100],int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		printf("Enter name of the city:\n");
		fflush(stdin);
	    gets(array[i].name);
	    printf("Enter population of the city\n");
	    scanf("%d",&array[i].population);
	    printf("Enter area of the city\n");
	    scanf("%f",&array[i].area);
	    printf("Enter numOfCOVIDPatients of the city\n");
	    scanf("%d",&array[i].numOfCOVIDPatients);
	}
}

struct City searchACity(struct City array[100],int patients_No,int n)
{
	for(int i=0;i<n;i++)
	{
		if(array[i].numOfCOVIDPatients==patients_No)
		{
			printf("Printing name of the city:\n");
	        puts(array[i].name);
	        printf("Printing population of the city\n");
	        printf("%d\n",array[i].population);
	        printf("Printing area of the city\n");
	        printf("%f\n",array[i].area);
	        printf("Printing numOfCOVIDPatients of the city\n");
	        printf("%d\n",array[i].numOfCOVIDPatients);
			break;
		}
		else if(patients_No!=array[i].numOfCOVIDPatients && i==n-1)
		{
			printf("Not Found\n");
			break;
		}
    }
    if(n==0)
	{
		printf("Not Found\n");
	}
}

struct City displayAllCitiesInfoReverse(struct City array[100],int n)
{
	int row,col,i;
	for(i=n-1;i>=0;i--)
	{
		for(row=0;row<n;row++)
		{
			for(col=0;col<4;col++)
			{
				if(row==0 && col==0)
				{
					fflush(stdout);
					printf("City Name-");
				}
				else if(row==0 && col==1)
				{
					fflush(stdout);
					printf("City Population-");
				}
				else if(row==0 && col==2)
				{
					fflush(stdout);
					printf("City Area-");
				}
				else if(row==0 && col==3)
				{
					fflush(stdout);
					printf("Num of City COVID Patients-");
				}
				else if(row>0 && col==0)
				{
					fflush(stdout);
					printf("%s ",array[i].name);
					
				}
				else if(row>0 && col==1)
				{
					
					fflush(stdout);
	                printf("%d ",array[i].population);
	                
				}
				else if(row>0 && col==2)
				{
					
	                fflush(stdout);
	                printf("%f ",array[i].area);
	                
				}
				else if(row>0 && col==3)
				{
					
	                fflush(stdout);
	                printf("%d ",array[i].numOfCOVIDPatients);
				}
				
				
			}
			printf("\n");
		}
	}
	
} 

int main()
{
	int n,patients_No;
	struct City array[100];
	char choice;
	printf("======= BD Covid Case Tracking System =========\n");
	printf("• Enter ‘r’, to take information of all the cities into the City structure array of size N.\n");
	printf("• Enter ‘s’, to search a City by number of COVID patients. If found, display the info of City. If not, display “Not Found”.\n");
	printf("• Enter ‘t’, to display the information of all the Cities in reverse index order in a tabular format.\n");
	printf("• Enter ‘q’, to quit/exit the menu system.\n");
	printf("• For any other input, display “Invalid Input.”\n");
	
	
	printf("Enter Number of Cities:\n");
	scanf("%d",&n);
	
	printf("Enter the number of patients in a city:\n");
	scanf("%d",&patients_No);
	
	printf("Enter your choice:\n");
	scanf(" %c",&choice);
	
	switch(choice)
	{
		case 'r':
			      takeCitiesInfoFromKeyboard(array,n);
			      break;
		case 's':
		          searchACity(array,patients_No,n);
		          break;
		case 't':
		          displayAllCitiesInfoReverse(array,n);
		          break;
				  	      
				  
				  
				  
				  
		case 'q':
		          exit(0);
		default:
				  printf("Invalid Input.\n");
				  		  		  
		
	}
	return 0;
	
	
}
