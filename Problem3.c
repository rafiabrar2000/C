#include<stdio.h>

struct student
{
	char name[10];
	char id[10];
	float array[3][4];
	float cgpa;
};

void print(struct student st[10])
{
    int i,row,col;
	FILE *file;
	file = fopen("output.txt","w");
	if(file==NULL)
	{
		printf("File does not exist");
	}
	else
	{
		printf("File is opened\n");
		for(i=0;i<n;i++)
        {
            fprintf(file,"Student %d:\n",i);
            fprintf(file,"Name %s:\n",st[i].name);
            fprintf(file,"ID %s:\n",st[i].id);
            for(row=0;row<3;row++)
            {
                for(col=0;col<4;col++)
                {
                    fprintf(file,"Subject %d marks: %d\n",row,st[i].array[row][col]);
                }
            }
            fprintf(file,"CGPA:%.1f\n",st[i].cgpa);
        }
        fclose(file);

	}
}

int main()
{
	struct student st[10];
	print(st);
	return 0;
}


