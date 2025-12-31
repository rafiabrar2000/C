#include<stdio.h>

int main()

{
    /*
    int n;

    scanf("%d",&n);

    for(int i = 1; i <= n; i++)
    {
        printf("%d, ",i);
    }
    */
    /*
    int n;
    int i = 1;
    scanf("%d",&n);

    while(i <= n)
    {
        printf("%d, ",i);
        i++;
    }
    */

    /*
    int n,z = 1;

    scanf("%d",&n);

    for(int i = 1; i <= n; i++)
    {
        printf("%d, ",z);
        z = z + 2;
    }
    */

    /*
    int n,z = 1;
    int i = 1;
    scanf("%d",&n);

    while(i <= n)
    {
        printf("%d",z);
        z = z + 2;
        i++;
    }
    */
    /*
    int n,z = 1,x;

    scanf("%d",&n);

    for(int i = 1; i <= n; i++)
    {


        x = z * z;


        printf("%d, ",x);
        z++;
    }
    */

    /*
    int n,i = 1,z = 1,x;
    scanf("%d",&n);

    while(i <= n)
    {
        x = z * z;
        printf("%d, ",x);
        z++;
        i++;

    }
    */

    /*
    int n;
    scanf("%d",&n);
    for(int i = 1;i <= n;i++)
    {
        if(i % 2 == 0)
        {
            printf("%d, ",-i);
        }
        else
        {
            printf("%d, ",i);
        }
    }
    */

    /*
    int i = 1,n;
    scanf("%d",&n);

    while(i <= n)
    {
        if(i % 2 == 0)
        {
            printf("%d, ",-i);
        }
        else
        {
           printf("%d, ",i);
        }
        i++;

    }
    */

    /*
    int n,i;

    scanf("%d, ",&n);

    for(i = 1; i <= n; i++)
    {
        if(i % 2 == 0)
        {
           printf("0, ");
        }
        else
        {
            printf("1, ");
        }
    }
    */

    /*
    int i = 1,n;

    scanf("%d",&n);

    while(i <= n)
    {
        if(i % 2 == 0)
        {
           printf("0, ");
        }
        else
        {
            printf("1, ");
        }

        i++;
    }
    */

    /*
    int i,n,x = 2,y = 4;
    scanf("%d",&n);

    for(i = 1; i <= n; i++)
    {
        printf("%d, ",x);
        x = x + y;
        y = y + 2;
    }
    */

    /*
    int i = 1,n,x = 2,y = 4;
    scanf("%d",&n);

    while(i <= n)
    {
        printf("%d, ",x);
        x = x + y;
        y = y + 2;

        i++;
    }
    */

    /*
    int i,n,z = 2;
    scanf("%d",&n);

    for(i = 1; i <= n; i++)
    {
        if(i % 2 == 0)
        {
            printf("%d, ",-z);
        }
        else
        {
           printf("%d, ",z);
        }
        z = z + 2;
    }
    */
    /*
    int i = 1,n,z = 2;
    scanf("%d",&n);
    while(i <= n)
    {
         if(i % 2 == 0)
        {
            printf("%d, ",-z);
        }
        else
        {
           printf("%d, ",z);
        }
        z = z + 2;
        i++;
    }
    */

    /*
    int i,n,sum = 0;
    scanf("%d",&n);

    for(i = 1; i <= n; i++)
    {
        sum = sum + i;

    }
    printf("Result: %d\n",sum);
    */
    /*
    int i = 1,n,sum = 0;
    scanf("%d",&n);

    while(i <= n)
    {
      sum = sum + i;
      i++;

    }
    printf("Result: %d\n",sum);
    */

    /*
    int i,n,sum = 0;
    scanf("%d",&n);

    for(i = 1; i <= n; i++)
    {
        if(i % 2 == 0)
        {
            sum = sum - i;
        }
        else
        {
            sum = sum + i;
        }
         printf("Result: %d\n",sum);

    }
    */

    /*
    int i = 1,n,sum = 0;
    scanf("%d",&n);

    while(i <= n)
    {
       if(i % 2 == 0)
        {
            sum = sum - i;
        }
        else
        {
            sum = sum + i;
        }

         i++;
    }
    printf("Result: %d\n",sum);
    */

    /*
    int i,n,sum = 0;
    scanf("%d",&n);

    for(i = 1; i <= n; i++)
    {


        sum = sum + (i * i);



    }
    printf("Result: %d\n",sum);
    */
    /*
    int i = 1,n,sum = 0;
    scanf("%d",&n);

    while(i <= n)
    {
      sum = sum + (i * i);
      i++;
    }
    printf("Result: %d\n",sum);
    */
    /*
    int i,n,z = 1,x = 0,y = 1;
    scanf("%d",&n);

    for(i = 1; i <= n; i++)
    {
        printf("%d, ",x);
        z = x + y;
        x = y;
        y = z;

    };
    */

    /*
    int i = 1,n,z = 1,x = 0,y = 1;
    scanf("%d",&n);

    while(i <= n)
    {
        printf("%d, ",x);
        z = x + y;
        x = y;
        y = z;
        i++;
    }
    */

    /*
    int i,n,fact = 1;
    scanf("%d",&n);

    for(i = 1; i <= n; i++)
    {
        fact = fact * i;

    }
    printf("%d",fact);
    */

    /*
    int i = 1,n,fact = 1;
    scanf("%d",&n);

    while(i <= n)
    {
         fact = fact * i;
         i++;
    }
    printf("%d",fact);
    */

    /*
    int n,r,fact1 = 1,fact2 = 1,fact3 = 1,Result;

    scanf("%d %d",&n,&r);

    if(n >= r)
    {
        for(int i = 1; i <= n; i++)
        {
            fact1 = fact1 * i;
        }
        for(int j = 1; j <= (n-r); j++)
        {
            fact2 = fact2 * j;
        }
        for(int k = 1; k <= r; k++)
        {
            fact3 = fact3 * k;
        }
        Result = fact1 / (fact2 * fact3);
        printf("%d",Result);

    }
    else
    {
        printf("Invalid");
    }
    */

    /*
    int n,r,i = 1,j = 1,k = 1,fact1 = 1,fact2 = 1,fact3 = 1,Result;

    scanf("%d %d",&n,&r);

     if(n >= r)
    {
        while(i <= n)
        {
            fact1 = fact1 * i;
            i++;
        }
        while(j <= (n-r))
        {
            fact2 = fact2 * j;
            j++;
        }
        while(k <= r)
        {
            fact3 = fact3 * k;
            k++;
        }
        Result = fact1 / (fact2 * fact3);
        printf("%d",Result);

    }
    else
    {
        printf("Invalid");
    }*/

    /*
    int x,y,power = 1;

    scanf("%d %d",&x,&y);

    for(int i = 1;i <= y;i++)
    {
        power = power * x;

    }
    printf("%d",power);
    */

    /*
    int i = 1,x,y,power = 1;

    scanf("%d %d",&x,&y);

    while(i <= y)
    {
        power = power * x;
        i++;

    }
    printf("%d",power);
    */

    /*
    int i,n,flag = 0;
    scanf("%d",&n);

    for(i = 2;i <= 9;i++)
    {
        if(n % i == 0)
        {
            flag++;
        }
    }
    if(flag == 0)
    {
        printf("Prime");
    }
    else
    {
        printf("Not Prime");
    }
    */

    /*
    int i = 2,n,flag = 0;
    scanf("%d",&n);

    while(i <= 9)
    {
        if(n % i == 0)
        {
            flag++;
        }
        i++;
    }
    if(flag == 0)
    {
        printf("Prime");
    }
    else
    {
        printf("Not Prime");
    }
    */

    /*
    int n, mainNumber, reminder, reverseNumber = 0;

    scanf("%d", &n);

    mainNumber = n;


    if(n == 0 || n == 1 || n == 2 || n == 3 || n == 4 || n == 5 || n == 6 || n == 7 || n == 8 || n == 9)
    {
        printf("Yes\n");
    }
    else if(n > 9)
    {
        while(n >= 0)
        {
            reminder = n % 10;
            reverseNumber = reverseNumber * 10 + reminder;

            n /= 10;
        }
        printf("%d  %d\n", mainNumber, reverseNumber);
    }
    else
    {
        printf("No")
    }
    */

    /*
    int n,sum = 0, flag = 0;

    scanf("%d", &n);

    if( n >= 0 && n < 10 )
    {
        printf("count: 1\n , Sum : %d\n",n);
    }
    else
    {
        while(n != 0)
        {
            sum = sum + n % 10;
            printf("%d\n",sum);
            n /= 10;
            flag++;
        }
        printf("count: %d\n,Sum : %d\n", flag,sum);
    }
    */














































    return 0;
}
