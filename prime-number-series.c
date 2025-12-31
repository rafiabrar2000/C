#include <stdio.h>
void main()
{
  int n, i=1, a=1;
  printf("Enter a positive integer: ");
  scanf("%d", &n);

  while(i<=n)
  {
     if (a==1) //1 is not a prime number, so it will skip it.
     {
         ++a;
         ++i;
     }
     else if(a==2 || a==3 || a==5 || a==7)  // 2, 3, 5, 7 are the only prime number among all digit (0-9).
      {
         printf("%d\t", a);
         ++a;
         ++i;
      }
     else if (a%2==0 || a%3==0 || a%4==0 || a%5==0 || a%6==0 || a%7==0 || a%8==0 || a%9==0)  //Multiple of any digits (0-9) is not a prime number
     {
         ++a;
         ++i;
     }
     else  //Numbers excluding the multiple of digits (0-9) are prime number
     {
         printf("%d\t", a);
         ++a;
         ++i;
     }
  }
}
