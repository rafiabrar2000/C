#include<stdio.h>

int main()

{
    /*int n,m,i=0;
    int sum = 0;
    scanf("%d",&n);
	while(1)
	{
		scanf("%d",&m);
		if(m>=0){
			sum += m;
			i++;
		}
		if(i == n){
			break;
		}
	}
	printf("%d",sum);*/
	/*int i,j;
	for( i=2; i>=1; i--){
 	for ( j=1; j<=i; j++){
 	printf("%d %d\n", i, j);
 	}
 		printf("%d %d\n", i, j);
	}
	printf("%d %d", i, j);*/
	
	/*int a[100],n,i,min,index;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	min=a[0];
	for(i=1;i<n;i++)
	{
		if(min>a[i])
		{
			min=a[i];
		}
	}
	printf("%d ",min);
	for(i=0; i<n;i++)
	{
		if(min == a[i])
		{
			
			printf("%d ",i);	
		}
	}*/
	
	/*int F[6]={0};
	int i;
	F[0]=1;
	F[1]=1;
	for(i=2; i<=5; i++){
 		F[i]=F[i-1]+F[i-2];
 		printf("%d %d %d\n", F[i-2], F[i-1], F[i]);
	}
	printf("%d %d %d", F[i-2], F[i-1], F[i-1]+F[i-2]);*/
	
	/*int a[10],n,i,sum=0;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		if(a[i]%2==0)
		{
			printf("%d ",a[i]);
		}
	}
	for(i=0;i<n;i++)
	{
		sum=sum+a[i];
	}
	printf("%d",sum);*/
	
	return 0;
}
