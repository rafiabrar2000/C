#include<stdio.h>

struct student
{
	char name[10];
	char id[10];
	float array[3][4];
	float cgpa;
};

int minCGPA(struct student st[10])
{
    int i;
    float min;
	min=st[0].cgpa;
    for(i=0;i<n;i++)
    {
        if(min>st[i].cgpa)
        {
            min=st[i].cgpa;
        }
    }
    return min;
}

int maxCGPA(struct student st[10])
{
    int i;
    float max;
	max=st[0].cgpa;
    for(i=0;i<n;i++)
    {
        if(max<st[i].cgpa)
        {
            max=st[i].cgpa;
        }
    }
    return max;
}

int main()
{
	struct student st[10];
	float max,min;
	int i;
	FILE *file;
	file = fopen("output.txt","a");
	if(file==NULL)
	{
		printf("File does not exist");
	}
	else
	{
		printf("File is opened\n");
		max=maxCGPA(st);
	    min=minCGPA(st);
	    fprintf(file,"Maximum CGPA:%f\n",max);
	    fprintf(file,"Minimum CGPA:%f\n",min);
        fclose(file);

	}

	return 0;
}



