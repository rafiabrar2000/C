 #include<stdio.h>

int main()

{
	/*1 int row,col,m,n;
	printf("Enter row : ");
	scanf("%d",&m);
	printf("Enter col : ");
	scanf("%d",&n);
	int array[m][n];
	
	printf("Enter the array :");
	for( row =0; row<m; row++)
	{
		for(col=0;col<n; col++)
		{
			scanf("%d",&array[row][col]);
		}
	}
	printf("the output array is :\n");
	for(row =0;row<m; row++)
	{
		for(col=0;col<n; col++)
		{
			printf("%d ",array[row][col]);
		}
	    printf("\n");
	}*/
	
	/*2 int row,col,m,n;
	scanf("%d",&m);
	scanf("%d",&n);
	int array[m][n];
	for(row=0;row<m;row++)
	{
		for(col=0;col<n;col++)
		{
			scanf("%d",&array[row][col]);
		}
	}
	printf("Row-wise:\n");
	for(row=0;row<m;row++)
	{
		for(col=0;col<n;col++)
		{
			printf("%d ",array[row][col]);
		}
	}
	prinf("\n");
	printf("Col-wise:\n");
	for(col=0;col<m;col++)
	{
		for(row=0;row<n;row++)
		{
			printf("%d",array[row][col]);
		}
	}*/
	
	
	
	/*3 int row,col,m,n;
	double determinant;
	scanf("%d",&m);
	scanf("%d",&n);
	int a[m][n];
	for(row=0;row<m;row++)
	{
		for(col=0;col<n;col++)
		{
			scanf("%d",&a[row][col]);
		}
	}
	
	determinant = (a[0][0] * ((a[1][1]*a[2][2]) - (a[2][1]*a[1][2])))-(a[0][1] * ((a[1][0]
   * a[2][2])- (a[2][0] * a[1][2]))) + (a[0][2] * ((a[1][0] * a[2][1])-(a[2][0] * a[1][1])));
 
    printf("\nDeterminant of 3X3 matrix: %ld", determinant);*/
    
    /*4 int row,col,m;
	scanf("%d",&m);
	
	int array[m][m];
	for(row=0;row<m;row++)
	{
		for(col=0;col<m;col++)
		{
			scanf("%d",&array[row][col]);
		}
	}
	printf("Major diagonal:");
	for(row=0;row<m;row++)
	{
		for(col=0;col<m;col++)
		{
			if(row==col)
			{
				printf("%d ",array[row][col]);
			}
		}
	}
	printf("\n");
	printf("Minor diagonal:");
	for(row=0;row<m;row++)
	{
		for(col=0;col<m;col++)
		{
			if(row+col==m-1)
			{
				printf("%d ",array[row][col]);
			}
		}
	}*/
	
	/*5 int row,col,m;
	scanf("%d",&m);
	
	int array[m][m];
	for(row=0;row<m;row++)
	{
		for(col=0;col<m;col++)
		{
			if(row==col)
			{
				printf("1 ");
			}
			else
			{
				printf("0 ");
			}
			
		}
		printf("\n");
	}*/
	
	/*6 int m,n,row,col;
	scanf("%d",&m);
	scanf("%d",&n);
	int A[m][n],B[m][n],C[m][n];
	for(row=0;row<m;row++)
	{
		for(col=0;col<n;col++)
		{
			scanf("%d",&A[row][col]);
		}
	}
	for(row=0;row<m;row++)
	{
		for(col=0;col<n;col++)
		{
			scanf("%d",&B[row][col]);
		}
	}
	for(row=0;row<m;row++)
	{
		for(col=0;col<n;col++)
		{
			C[row][col]=A[row][col]+B[row][col];
		}
	}
	for(row=0;row<m;row++)
	{
		for(col=0;col<n;col++)
		{
			printf("%d ",C[row][col]);
		}
		printf("\n");
	}*/
	
	/*7 int r1,r2,c1,c2,A[10][10],B[10][10],C[10][10],i,j,k,sum=0;
	scanf("%d %d",&r1,&c1);
	scanf("%d %d",&r2,&c2);
	while(c1!=r2)
	{
		printf("Error!\n");
		scanf("%d %d",&r1,&c1);
	    scanf("%d %d",&r2,&c2);
	}
	for(i=0;i<r1;i++)
	{
		for(j=0;j<c1;j++)
		{
			scanf("%d",&A[i][j]);
		}
	}
	for(i=0;i<r2;i++)
	{
		for(j=0;j<c2;j++)
		{
			scanf("%d",&B[i][j]);
		}
	}
	for(i=0;i<r1;i++)
	{
		for(j=0;j<c2;j++)
		{
			for(k=0;k<c1;k++)
			{
				sum=sum+(A[i][k]*B[k][j]);
			}
			C[i][j]=sum;
			sum=0;
		}
	}
	for(i=0;i<r1;i++)
	{
		for(j=0;j<c2;j++)
		{
			printf("%d ",C[i][j]);
		}
		printf("\n");
	}*/
	
	/*8 int max,min,A[10][10],row,col,m,n,maxrowIndex,maxcolIndex,minrowIndex,mincolIndex;
	scanf("%d",&m);
	scanf("%d",&n);
	for(row=0;row<m;row++)
	{
		for(col=0;col<n;col++)
		{
			scanf("%d",&A[row][col]);
		}
	}
	max=A[0][0];
	for(row=0;row<m;row++)
	{
		for(col=0;col<n;col++)
		{
			if(max<A[row][col])
			{
				max=A[row][col];
				maxrowIndex=row;
				maxcolIndex=col;
			}
			
		}
	}
	
	printf("Max: %d\nLocation:A[%d][%d]\n",max,maxrowIndex,maxcolIndex);
	printf("\n");
	
	
		
	min=A[0][0];
	for(row=0;row<m;row++)
	{
		for(col=0;col<n;col++)
		{
			if(min>A[row][col])
			{
				min=A[row][col];
				minrowIndex=row;
				mincolIndex=col;
			}
			
		}
	}
	printf("Min: %d\nLocation:A[%d][%d]\n",min,minrowIndex,mincolIndex);*/
	
	/*9 int n,row,col,A[10][10],sum=0;
	scanf("%d",&n);
	if(n%2!=0)
	{
		for(row=0;row<n;row++)
		{
			for(col=0;col<n;col++)
			{
				scanf("%d",&A[row][col]);
			}
		}
		for(row=0;row<n;row++)
		{
			for(col=0;col<n;col++)
			{
				if(row==0 || row==n-1)
				{
					sum=sum+A[row][col];
				}
				if((row!=0 && row!=n-1 && row==col))
				{
					sum=sum+A[row][col];
				}
				if((row!=0 && row!=n-1 && row!=col && row+col==n-1))
				{
					sum=sum+A[row][col];
				}
			}
		}
		printf("%d",sum);
		
	}
	else
	{
		printf("Input is even\n");
	}*/
	
	/*10 int row,col,n,a[10][10],m,sum=0;
	scanf("%d",&n);
	m=n/2;
	if(n%2!=0)
	{
		for(row=0;row<n;row++)
		{
			for(col=0;col<n;col++)
			{
				scanf("%d",&a[row][col]);
			}
		}
		for(row=0;row<n;row++)
		{
			for(col=0;col<n;col++)
			{
				if(row==0 && col<=m)
				{
					sum=sum+a[row][col];
				}
				else if(col==n-1 && row<m)
				{
					sum=sum+a[row][col];
				}
				else if(col==0 && row>m)
				{
					sum=sum+a[row][col];
				}
				else if(row==n-1 && col>=m)
				{
					sum=sum+a[row][col];
				}
				else if(row==m)
				{
					sum=sum+a[row][col];
				}
				else if(col==m && row!=0 && row!=n-1 && row!=col)
				{
					sum=sum+a[row][col];
				}
			}
		}
		printf("%d",sum);
	}
	else
	{
		printf("Invalid Input\n");
	}*/
	
	/*11 int row,col,n,a[10][10],m,sum=0;
	scanf("%d",&n);
	m=n/2;
	if(n%2!=0)
	{
		for(row=0;row<n;row++)
		{
			for(col=0;col<n;col++)
			{
				scanf("%d",&a[row][col]);
			}
		}
		for(row=0;row<n;row++)
		{
			for(col=0;col<n;col++)
			{
				if(row%2!=0)
				{
					sum=sum+a[row][col];
				}
				else if(col%2!=0 && row%2==0)
				{
					sum=sum+a[row][col];
				}
				
			}
		}
		printf("%d",sum);
	}
	else
	{
		printf("Invalid Input\n");
	}*/
	
	/*12 int a[10][10],row,col,m,n;
	scanf("%d %d",&m,&n);
	for(row=0;row<m;row++)
	{
		for(col=0;col<n;col++)
		{
			scanf("%d",&a[row][col]);
		}
	}
	for(row=0;row<m;row++)
	{
		for(col=n-1;col>=0;col--)
		{
			printf("%d ",a[row][col]);
		}
		printf("\n");
	}*/
	
	/*13 int main[10][10],temp[10][10],transposed[10][10],row,col,n,flag=0;
	scanf("%d",&n);
	for(row=0;row<n;row++)
	{
		for(col=0;col<n;col++)
		{
			scanf("%d",&main[row][col]);
		}
	}
	for(row=0;row<n;row++)
	{
		for(col=0;col<n;col++)
		{
			temp[row][col]=main[row][col];
		}
	}
	for(row=0;row<n;row++)
	{
		for(col=0;col<n;col++)
		{
			transposed[col][row]=temp[row][col];
		}
	}
	for(row=0;row<n;row++)
	{
		for(col=0;col<n;col++)
		{
			printf("%d ",transposed[row][col]);
		}
		printf("\n");
		
	}
	for(row=0;row<n;row++)
	{
		for(col=0;col<n;col++)
		{
			if(transposed[row][col]==main[row][col])
			{
				flag=1;
				break;
			}
			else
			{
				flag=-1;
				break;
			}
		}
	}
	if(flag==1)
	{
		printf("Yes");
	}
	else if(flag==-1)
	{
		printf("No");
	}*/
	
	/*15 int a[10][10],m,n,sum=0,row,col;
	scanf("%d %d",&m,&n);
	for(row=0;row<m;row++)
	{
		for(col=0;col<n;col++)
		{
			scanf("%d",&a[row][col]);
		}
	}
	for(row=0;row<m;row++)
	{
		for(col=0;col<n;col++)
		{
			sum=sum+a[row][col];
		}
	}
	printf("%d",sum);*/
	/*14 incomplete int i,j,n,m,k,l;
	scanf("%d %d",&n,&m);
	int a[n][m];
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
			scanf("%d",&a[i][j]);
		}
	}
	for(i=0;i<n;i++){
		for(j=0;j<(m-1);j++){
			for(k=0;k<n;k++)
			{
				for(l=1;l<m;l++)
				{
					if((a[i][j] == a[k][l]) && (a[i][j] != -1))
					{
						a[k][l]= -1;
					}
				}
			}
			
		}
	}
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
			printf("%d",a[i][j]);
		}
		printf("\n");
	}*/
	
	
	
	
		
	    
	
	
	 
	
	
	
	
	
	
	
	
	
	
	
	
	
    
    
    
    
    
  
  
	
	
	
	return 0;
}
