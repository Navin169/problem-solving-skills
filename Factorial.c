#include <stdio.h>
{
   if (n == 0)
       return 1;
   return n * factorial(n - 1);
}
 
int main()
{
   int num;
   printf("Enter the num value");
   scanf("%d",&num);
   printf("Factorial of %d is %d", num, factorial(num));
   return 0;
}
 
