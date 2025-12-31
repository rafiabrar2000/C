#include<stdio.h>
#include<stdlib.h>


int main()

{
	int patients[100],i,patients_No=0,n=0;
	char choice;
	printf("======= BD Covid Case Tracking System =========\n");
	printf("• Enter ‘r’, to take number of COVID patients of all cities into the “patients” array of size N.\n");
	printf("• Enter ‘s’, to search number of COVID patients in a city. If found, display the index. If not found, display “Not found”.\n");
	printf("• Enter ‘t’, to display all the number of patients of different cities in reverse index order.\n");
	printf("• Enter ‘q’, to quit/exit the menu system.\n");
	printf("• For any other input, display “Invalid Input.”\n");
	
	printf("Enter your choice:\n");
	scanf(" %c",&choice);
	
	switch(choice)
	{
		case 'r':
			      scanf("%d",&n);
			      for(i=0;i<n;i++)
			      {
			      	scanf("%d",&patients[i]);
				  }
				  break;
				  
				  
				  
				  
		case 's':
		          scanf("%d",&patients_No);
				  for(i=0;i<n;i++)
			      {
			      	if(patients[i]==patients_No)
			      	{
			      		printf("Found:patients[%d]\n",i);
			      		break;
					}
				    else if(patients_No!=patients[i] && i==n-1)
				    {
				    	printf("Not Found\n");
				    	break;
					}
			  
			      	
				  }
				  if(n==0)
				  {
				  	printf("No patients information is found. Please populate patients information first.\n");
				  }
				  
				  
				  
			      
			      
			      	
				  
				  
		case 't':
		          if(n>0)
		          {
		          	for(i=n-1;i>=0;i--)
				    {
				  	  printf("%d ",patients[i]);
				    }
				  }
				  else
				  {
				  	printf("No patients information is found. Please populate patients information first.\n");
				  }
				  break;
				  
		case 'q':
		          exit(0);
		default:
				  printf("Invalid Input.\n");
				  		  		  
		
	}
	return 0;
	
	
}
