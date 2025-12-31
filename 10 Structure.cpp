#include<stdio.h>
#include<string.h>

/*1 struct student
{
	char name[100];
	char id[100];
	float CGPA;
};*/

/*2 struct student
{
	char name[100]="Rafi";
	char id[100]="011212012";
	float CGPA=4.00;
};


int main()
{
	struct student student1;
	puts(student1.name);
	puts(student1.id);
	printf("%.2f",student1.CGPA);
}*/

/*3 struct student
{
	char name[100];
	char id[100];
	float CGPA;
};

int main()
{
	struct student student1;
	return 0;
}*/

/*4,5 struct student
{
	char name[100];
	char id[100];
	float CGPA;
};

int main()
{
	struct student student1={"Rafi","011212012",4.00};
	puts(student1.name);
	puts(student1.id);
	printf("%.2f",student1.CGPA);
	return 0;
}*/

/*6 struct student
{
	char name[100];
	char id[100];
	float CGPA;
};

int main()
{
	struct student student1;
	gets(student1.name);
	gets(student1.id);
	scanf("%f",&student1.CGPA);
	puts(student1.name);
	puts(student1.id);
	printf("%.2f",student1.CGPA);
	return 0;
}*/

/*7 struct student
{
	char name[100];
	char id[100];
	float CGPA;
};

int main()
{
	struct student student1,student2;
	fflush(stdin);
	gets(student1.name);
	fflush(stdin);
	gets(student1.id);
	fflush(stdin);
	scanf("%f",&student1.CGPA);
	fflush(stdin);
	gets(student2.name);
	fflush(stdin);
	gets(student2.id);
	fflush(stdin);
	scanf("%f",&student2.CGPA);
	fflush(stdout);
	puts(student1.name);
	fflush(stdout);
	puts(student1.id);
	fflush(stdout);
	printf("%.2f\n",student1.CGPA);
	fflush(stdout);
	puts(student2.name);
	fflush(stdout);
	puts(student2.id);
	fflush(stdout);
	printf("%.2f",student2.CGPA);
	return 0;
}*/


/*8 struct student
{
	char name[100];
	char id[100];
	float CGPA;
};

int main()
{
	struct student student1,student2;
	fflush(stdin);
	gets(student1.name);
	fflush(stdin);
	gets(student1.id);
	fflush(stdin);
	scanf("%f",&student1.CGPA);
	fflush(stdin);
	gets(student2.name);
	fflush(stdin);
	gets(student2.id);
	fflush(stdin);
	scanf("%f",&student2.CGPA);
	if(student1.CGPA>student2.CGPA)
	{
		puts(student1.name);
		puts(student1.id);
		printf("%.2f",student1.CGPA);
	}
	else
	{
		puts(student2.name);
		puts(student2.id);
		printf("%.2f",student2.CGPA);
	}
	return 0;
}*/


/*9 struct student
{
	char name[100];
	char id[100];
	float CGPA;
};

struct student betterCGPA(struct student s1,struct student s2)
{
	if(s1.CGPA>s2.CGPA)
	{
		puts(s1.name);
		puts(s1.id);
		printf("%.2f",s1.CGPA);
	}
	else
	{
		puts(s2.name);
		puts(s2.id);
		printf("%.2f",s2.CGPA);
	}
}


int main()
{
	struct student student1,student2;
	fflush(stdin);
	gets(student1.name);
	fflush(stdin);
	gets(student1.id);
	fflush(stdin);
	scanf("%f",&student1.CGPA);
	fflush(stdin);
	gets(student2.name);
	fflush(stdin);
	gets(student2.id);
	fflush(stdin);
	scanf("%f",&student2.CGPA);
	betterCGPA(student1,student2);
	return 0;
}*/

/*10 struct Triangle
{
	int triangle_id;
	int base;
	int height;
};

int main()
{
	struct Triangle triangle1,triangle2,triangle3;
	scanf("%d",&triangle1.triangle_id);
	scanf("%d",&triangle1.base);
	scanf("%d",&triangle1.height);
	scanf("%d",&triangle2.triangle_id);
	scanf("%d",&triangle2.base);
	scanf("%d",&triangle2.height);
	scanf("%d",&triangle3.triangle_id);
	scanf("%d",&triangle3.base);
	scanf("%d",&triangle3.height);
	int area1,area2,area3;
	area1=(triangle1.base*triangle1.height)/2;
	area2=(triangle2.base*triangle2.height)/2;
	area3=(triangle3.base*triangle3.height)/2;
	printf("Area of 1 = %d\n",area1);
	printf("Area of 2 = %d\n",area2);
	printf("Area of 3 = %d\n",area3);
	return 0;
}*/

/*11 struct Triangle
{
	int triangle_id;
	int base;
	int height;
};

struct Triangle Area(struct Triangle t1,struct Triangle t2,struct Triangle t3)
{
	int area1,area2,area3;
	area1=(t1.base*t1.height)/2;
	area2=(t2.base*t2.height)/2;
	area3=(t3.base*t3.height)/2;
	if(area1>area2 && area1>area3)
	{
		printf("Area of 1 = %d\n",area1);
	}
	else if(area2>area1 && area2>area3)
	{
		printf("Area of 2 = %d\n",area2);
	}
	else if(area3>area1 && area3>area2)
	{
		printf("Area of 3 = %d\n",area3);
	}

}

int main()
{
	struct Triangle triangle1,triangle2,triangle3;
	scanf("%d",&triangle1.triangle_id);
	scanf("%d",&triangle1.base);
	scanf("%d",&triangle1.height);
	scanf("%d",&triangle2.triangle_id);
	scanf("%d",&triangle2.base);
	scanf("%d",&triangle2.height);
	scanf("%d",&triangle3.triangle_id);
	scanf("%d",&triangle3.base);
	scanf("%d",&triangle3.height);
	Area(triangle1,triangle2,triangle3);
	return 0;
}*/

/*struct Player
{
	 char name[100];
	 char country[100];
	 int runs[3];
	 int wickets[3];
	 int point[3];
	 int sum;
};

int main()
{
	struct Player player1,player2;
	int i;

	fflush(stdin);
	gets(player1.name);
	fflush(stdin);
	gets(player1.country);
	for(i=1;i<4;i++)
	{
		fflush(stdin);
	    scanf("%d",&player1.runs[i]);
	    fflush(stdin);
	    scanf("%d",&player1.wickets[i]);
	}

	fflush(stdin);
	gets(player2.name);
	fflush(stdin);
	gets(player2.country);
	for(i=1;i<4;i++)
	{
		fflush(stdin);
	    scanf("%d",&player2.runs[i]);
	    fflush(stdin);
	    scanf("%d",&player2.wickets[i]);
	}




	for(i=1;i<4;i++)
	{


	    if(player1.wickets[i]>0)
	    {
		    player1.point[i]=12;

	    }

	    if(player1.runs[i]<=25)
	    {
		    player1.point[i]=5;

	    }
	    else if(player1.runs[i]>25 && player1.runs[i]<=50)
	    {
		    player1.point[i]=10;

	    }
	    else if(player1.runs[i]>50 && player1.runs[i]<=75)
	    {
		    player1.point[i]=15;

	    }
	    else if(player1.runs[i]>75)
	    {
		    player1.point[i]=20;

	    }

    }
    for(i=1;i<4;i++)
	{

	    player1.sum=0;
	    if(player1.wickets[i]>0)
	    {
		    player1.sum=player1.sum+player1.point[i];

	    }

	    if(player1.runs[i]<=25)
	    {
		    player1.sum=player1.sum+player1.point[i];

	    }
	    else if(player1.runs[i]>25 && player1.runs[i]<=50)
	    {
		    player1.sum=player1.sum+player1.point[i];

	    }
	    else if(player1.runs[i]>50 && player1.runs[i]<=75)
	    {
		    player1.sum=player1.sum+player1.point[i];

	    }
	    else if(player1.runs[i]>75)
	    {
		    player1.sum=player1.sum+player1.point[i];

	    }

    }


	for(i=1;i<4;i++)
	{


	    if(player2.wickets[i]>0)
	    {
		    player2.point[i]=12;

	    }
	    if(player2.runs[i]<=25)
	    {
		    player2.point[i]=5;

	    }
	    else if(player2.runs[i]>25 && player2.runs[i]<=50)
	    {
		    player2.point[i]=10;

	    }
	    else if(player2.runs[i]>50 && player2.runs[i]<=75)
	    {
		    player2.point[i]=15;

	    }
	    else if(player2.runs[i]>75)
	    {
		    player2.point[i]=20;

	    }

    }

    for(i=1;i<4;i++)
	{

	    player2.sum=0;
	    if(player2.wickets[i]>0)
	    {
		    player2.sum=player2.sum=0+player2.point[i];

	    }
	    if(player2.runs[i]<=25)
	    {
		    player2.sum=player2.sum=0+player2.point[i];

	    }
	    else if(player2.runs[i]>25 && player2.runs[i]<=50)
	    {
		    player2.sum=player2.sum=0+player2.point[i];

	    }
	    else if(player2.runs[i]>50 && player2.runs[i]<=75)
	    {
		    player2.sum=player2.sum=0+player2.point[i];

	    }
	    else if(player2.runs[i]>75)
	    {
		    player2.sum=player2.sum=0+player2.point[i];

	    }

    }

    for(i=1;i<4;i++)
    {
    	printf("Match%d\n",i);
    	printf("\n");
    	printf("%s points: %d\n",player1.name,player1.sum);
    	printf("\n");
    	printf("%s points: %d\n",player2.name,player2.sum);
	}


	return 0;
}*/

/*struct student
{
    char name[100];
};

int main()
{
   struct student s[100];
   int i;
   for(i=1;i<=2;i++)
   {
       gets(s[i].name);   100percent correct
   }
   for(i=1;i<=2;i++)
   {
       puts(s[i].name);
   }
   return 0;
}*/
