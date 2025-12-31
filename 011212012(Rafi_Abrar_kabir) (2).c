#include<stdio.h>

struct Employee
{
    char name[100];
    int ID;
    float RecentWorkPoint;
    float LastWorkPoint[3];
    float BasicSalary;
    float RecentSalary;
};

int main()
{
    struct Employee employee[100];
    int i,n;
    printf("Number of Employee:\n");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("Employee Name:\n");
        fflush(stdin);
        gets(employee[i].name);
        printf("Employee ID:\n");
        fflush(stdin);
        scanf("%d",&employee[i].ID);
        printf("Work point:\n");
        fflush(stdin);
        scanf("%f",&employee[i].RecentWorkPoint);
        fflush(stdin);
        printf("Last 3 months point:\n");
        fflush(stdin);
        scanf("%f",&employee[i].LastWorkPoint);
        printf("Basic Salary:\n");
        fflush(stdin);
        scanf("%f",&employee[i].BasicSalary);
    }
    for(i=0;i<n;i++)
    {
        employee[i].RecentSalary=0;
        if((employee[i].LastWorkPoint>5) && (employee[i].RecentWorkPoint>3))
        {
           printf("Employee Name:\n");
           fflush(stdout);
           puts(employee[i].name);
           printf("Salary to be paid:\n");
           fflush(stdout);
           employee[i].RecentSalary=employee[i].BasicSalary+((20/100)*employee[i].BasicSalary);
           printf("%.0f\n",employee[i].RecentSalary);
        }
        else if((employee[i].LastWorkPoint>3) && (employee[i].RecentWorkPoint>2))
        {
           printf("Employee Name:\n");
           puts(employee[i].name);
           printf("Salary to be paid:\n");
           fflush(stdout);
           employee[i].RecentSalary=employee[i].BasicSalary+((10/100)*employee[i].BasicSalary);
           printf("%.0f\n",employee[i].RecentSalary);
        }
        else if(employee[i].LastWorkPoint!=0)
        {
           printf("Employee Name:\n");
           puts(employee[i].name);
           printf("Salary to be paid:\n");
           fflush(stdout);
           employee[i].RecentSalary=employee[i].BasicSalary+((5/100)*employee[i].BasicSalary);
           printf("%.0f\n",employee[i].RecentSalary);
        }
        else
        {
           printf("Employee Name:\n");
           puts(employee[i].name);
           printf("Salary to be paid:\n");
           fflush(stdout);
           employee[i].RecentSalary=employee[i].BasicSalary;
           printf("%.0f\n",employee[i].RecentSalary);
        }

    }
    return 0;

}
