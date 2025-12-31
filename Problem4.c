#include<stdio.h>

struct student
{
	char name[10];
	char id[10];
	float array[3][4];
	float cgpa;
};

void printtotal(struct student st[10])
{
    int i,row,col,sum=0;
	FILE *file;
	file = fopen("output.txt","a");
	if(file==NULL)
	{
		printf("File does not exist");
	}
	else
	{
		printf("File is opened\n");
		for(i=0;i<n;i++)
        {
            fprintf(file,"Student %d:",i);
            for(row=0;row<3;row++)
            {
                for(col=0;col<4;col++)
                {
                    sum=sum+st[i].array[row][col];
                }
                fprintf(file,"Subject %d total: %d\n",row,sum);
                sum=0;
            }
        }
        fclose(file);

	}
}

int main()
{
	struct student st[10];
	printtotal(st);
	return 0;
}


