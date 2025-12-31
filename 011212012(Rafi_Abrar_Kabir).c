#include<stdio.h>

void PrintFunc(int max,int min)
{
    printf("Max is %d\n",max);
    printf("Min is %d\n",min);
}


void MaxMin(int array[100],int n)
{
    int max,min,i;
    max=min=array[0];
    for(i=0;i<n;i++)
    {
        if(max<array[i])
        {
            max=array[i];
        }
    }
    for(i=0;i<n;i++)
    {
        if(min>array[i])
        {
            min=array[i];
        }
    }
    PrintFunc(max,min);
}

int main()
{
    int array[100];
    int i,n;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&array[i]);
    }
    MaxMin(array,n);

    return 0;

}
