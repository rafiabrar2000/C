#include <stdio.h>
#include <math.h>

void main()
{
  int n, i;
  printf("Enter a positive integer: ");
  scanf("%d", &n);

  if(n==1)
  {
     printf("Its not a prime number");
  }

  else if(n==2 || n==3 || n==5 || n==7)
  {
      printf("Its a prime number");
  }
  else if (n%2==0 || n%3==0 || n%4==0|| n%5==0|| n%6==0|| n%7==0|| n%8==0|| n%9==0)
  {
      printf("Its not a prime number");
  }
  else
  {
      printf("Its a prime number");
  }
}
