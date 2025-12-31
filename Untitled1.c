#include<stdio.h>

struct student
{
    int marks[50][50];
};


int main()
{
    struct student s[50];
    int n;
    fflush(stdin);
    scanf("%d",&n);
    int i;
    for(i=0;i<n;i++)
    {
        for(int j=0;j<2;j++)
        {
            for(int k=0;k<2;k++)
            {
                printf("\ni = %d, j= %d ,k = %d \n",i,j,k);
                //fflush(stdin);
                scanf("%d",&s[i].marks[j][k]);
            }
        }

    }
    for(i=0;i<n;i++)
    {
        for(int j=0;j<2;j++)
        {
            for(int k=0;k<2;k++)
            {
                fflush(stdout);
                printf("%d ",s[i].marks[j][k]);
            }
            printf("\n");
        }
    }

    return 0;
}
