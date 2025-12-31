//#include<stdio.h>
//#include<string.h>
//#include<stdlib.h>
//
//struct student
//{
//    char name[10];
//    char id[10];
//    float marks;
//};
//
//
//void main()
//{
//   struct student s[2];
//   int i,max=0,min=0;
//   for(i=0;i<2;i++)
//   {
//       fgets(s[i].name, 10, stdin);
//       fgets(s[i].id, 10, stdin);
//       scanf("%f",&s[i].marks);
//   }
//    max=min=s[0].marks;
//   for(i=0;i<2;i++)
//   {
//       if(max<s[i].marks)
//       {
//           max=s[i].marks;
//       }
//       if(min>s[i].marks)
//       {
//           min=s[i].marks;
//       }
//   }
//
//
//
//    for(i=0;i<2;i++)
//   {
//       if(max==s[i].marks)
//       {
//          printf("Maximum Marks holder student:");
//
//          puts(s[i].name);fflush(stdout);
//
//          puts(s[i].id);fflush(stdout);
//    }}
//
//
//
//}
//#include<stdio.h>
//int main()
//{
//    FILE *file;
//    float a,b;
//    file=fopen("input.txt","r");
//    fscanf(file,"%f",&a);
//    fscanf(file,"%f",&b);
//    fclose(file);
//    float sum=a+b;
//    file=fopen("output.txt","w");
//    fprintf(file,"%f",sum);
//    fclose(file);
//
//
//    return 0;
//}
#include<stdio.h>

int idValues[4]={10,13,16,19};



int elementProd(int idValues[100],int n)
{
    int i,fact=1;
    for(i=0;i<n;i++);
    for(i=0;i<n;i++)
    {
        fact=fact*idValues[i];
    }
    return fact;
}

int main()
{

     int res,n=4;

     res=elementProd(idValues,n);
     printf("%d",res);
     return 0;

}
