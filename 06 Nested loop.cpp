#include<stdio.h>

int main()

{
	/*1 int row,col,n;
	scanf("%d",&n);
	for(row=1;row<=n;row++)
	{
		for(col=1;col<=n;col++)
		{
			printf("%d",col);
		}
		printf("\n");
	}*/
	
	/*2 int row,col,n,k=0;
	scanf("%d",&n);
	for(row=1;row<=n;row++)
	{
		for(col=1;col<=n;col++)
		{
			printf("%d",k+col);
			
		}
		k++;
		printf("\n");
	}*/
	

 
    /*3 {
        int n,row,col,k=0;
        
        scanf("%d",&n);
        for(row=1;row<=n;row++)
        {
            for(col=1;col<=row;col++)
            {
            	printf("%d ",k+col);
			}
            
            k++;
            printf("\n");
        }
  
    }*/
    
    /*4 int n,row,col;
    scanf("%d",&n);
    for(row=1;row<=n;row++)
    {
    	//printing space
		for(col=1;col<=n-row;col++)
		{
			printf(" ");
		}
		for(col=1;col<=row;col++)
		{
			printf("%d",row);
		}
		printf("\n");
	}*/
	
	/*5 {
		int n,row,col;
		scanf("%d",&n);
		for(row=n;row>=1;row--)
		{
			for(col=n;col>=row;col--)
			{
				printf("%d",col);
			}
			printf("\n");
		}
	}*/
	
	/*6 int n,row,col;
	scanf("%d",&n);
	for(row=1;row<=n;row++)
	{
		for(col=1;col<=row;col++)
		{
			printf("%d",col);
		}
		printf("\n");
	}*/
	
	/*7 int n,row,col;
	scanf("%d",&n);
	for(row=1;row<=n;row++)
	{
		for(col=1;col<=n;col++)
		{
			printf("*");
		}
		printf("\n");
	}*/
	
	/*8 int n,row,col;
	scanf("%d",&n);
	for(row=n;row>=1;row--)
	{
		for(col=1;col<=row;col++)
		{
			printf("*");
		}
		printf("\n");
	}*/
	
	/*9 int n,row,col;
	scanf("%d",&n);
	for(row=1;row<=n;row++)
	{
		for(col=1;col<=n;col++)
		{
			if(row%2!=0 && col%2!=0)
			{
				printf("1");
			}
			else if(row%2!=0 && col%2==0)
			{
				printf("0");
			}
			else if(row%2==0 && col%2!=0)
			{
				printf("0");
			}
			else if(row%2==0 && col%2==0)
			{
				printf("1");
			}
		}
		printf("\n");
	}*/
	
	/*10 int row,col,n;
	scanf("%d",&n);
	for(row=1;row<=n;row++)
	{
		for(col=1;col<=n-row;col++)
		{
			printf(" ");
		}
		for(col=1;col<=row;col++)
		{
			printf("*");
		}
		printf("\n");
	}*/
	
	/*11 int n,row,col;
	scanf("%d",&n);
	for(row=1;row<=n;row++)
	{
		for(col=1;col<=n-row;col++)
		{
			printf(" ");
		}
		for(col=1;col<=2*row-1;col++)
		{
			printf("*");
		}
		printf("\n");
	}*/
	
	/*12 int n,row,col,a;
	scanf("%d",&n);
	if(n%2!=0)
	{
		a=((n-1)/2)+1;
		for(row=1;row<=a;row++)
	    {
		    for(col=1;col<=n-row;col++)
		    {
		    	printf(" ");
			}
			for(col=1;col<=2*row-1;col++)
			{
				printf("*");
			}
			printf("\n");
	    }
	    for(row=a-1;row>=1;row--)
	    {
		    for(col=1;col<=n-row;col++)
		    {
		    	printf(" ");
			}
			for(col=1;col<=2*row-1;col++)
			{
				printf("*");
			}
			printf("\n");
	    }
	    
	    
	    
	}
	else
	{
		printf("Invalid Input");
	}*/
	
	/*13 int n,row,col;
	scanf("%d",&n);
	for(row=1;row<=n;row++)
	{
		for(col=1;col<=n;col++)
		{
			if(col<=row)
			{
				printf("%d",col);
			}
			else
			{
				printf(" ");
			}
		}
		for(col=n-1;col>=1;col--)
		{
			if(col<=row)
			{
				printf("%d",col);
			}
			else
			{
				printf(" ");
			}
			
		}
		printf("\n");
		
    }*/
    
    /*14 int row,col,n;
    scanf("%d",&n);
    for(row=1;row<=n;row++)
    {
    	for(col=1;col<=n;col++)
    	{
    		if((row%2!=0) || (col==1) || (col==n) )
    		{
    			printf("*");
			}
			else
			{
				printf(" ");
			}
		}
		printf("\n");
	}*/
	
	/*15 int row,col,n;
	scanf("%d",&n);
	for(row=1;row<=n;row++)
	{
		for(col=1;col<=n;col++)
		{
			if((row==1) || (row+col==n+1) || (row==n))
			{
				printf("Z");
				
			}
			else
			{
				printf(" ");
			}
		}
		printf("\n");
	}*/
	
	/*16 int row,col,n;
	scanf("%d",&n);
	for(row=1;row<=n;row++)
	{
		for(col=1;col<=n;col++)
		{
			if((row==col) || (row+col==n+1))
			{
				printf("*");
			}
			else
			{
				printf(" ");
			}
		}
		printf("\n");
	}*/
	
	/*17 int row,col,n;
	scanf("%d",&n);
	for(row=1;row<=n;row++)
	{
		for(col=1;col<=n;col++)
		{
			if((col+row==(n+3)/2) || (col==row+((n-1)/2)) || row==col+((n-1)/2) || (row+col==(n-1)+((n+3)/2)) || (row==((n-1)/2)+1) || (col==((n-1)/2)+1))
			{
				printf("$");
			}
			else
			{
				printf(" ");
			}
		}
		printf("\n");
	}*/
	
	
	/*18 int n,col,row;
	scanf("%d",&n);
	if(n%2!=0)
	{
		for(row=1;row<=n;row++)
		{
			for(col=1;col<=n;col++)
			{
				if((row==((n-1)/2)+1) || (col==1) || (col==n))
				{
					printf("H");
				}
				else
				{
					printf(" ");
				}
			}
			printf("\n");
		}
	}
	else
	{
		printf("Invalid Input");
	}*/
	
	
	

	
	


	
	return 0;
}
