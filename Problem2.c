#include<stdio.h>

struct student
{
	char name[10];
	char id[10];
	float array[3][4];
	float cgpa;
};

int main()
{
	struct student st[10];
	int i;
	FILE *file;
	file = fopen("input.txt","r");
	if(file==NULL)
	{
		printf("File does not exist");
	}
	else
	{
		printf("File is opened\n");
		for(int i=0;i<10;i++)
        {


            fscanf(file,"%s",&st[i].name);
            fscanf(file,"%s",&st[i].id);
            for(int l=0;l<3;l++)
            {
                for(int m=0;m<4;m++)
                {
                    fscanf(file,"%f ",&st[i].array[l][m]);
                }

            }

            fscanf(file,"%.1f",&st[i].cgpa);

        }
        for(int i=0;i<10;i++)
        {
            printf("%s\n",st[i].name);
            printf("%s\n",st[i].id);
            for(int l=0;l<3;l++)
            {
                for(int m=0;m<4;m++)
                {
                    fflush(stdout);
                    printf("%.0f ",st[i].array[l][m]);
                }
                printf("\n");
            }
            printf("%.1f\n",st[i].cgpa);

        }

	}

	return 0;
}

