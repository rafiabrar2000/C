#include<stdio.h>

struct student
{
    int marks[50];
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


            //fflush(stdin);
            scanf("%d",&s[i].marks[j]);

        }

    }
    for(i=0;i<n;i++)
    {
        for(int j=0;j<2;j++)
        {


            fflush(stdout);
            printf("%d ",s[i].marks[j]);


        }
        printf("\n");
    }

    return 0;
}

