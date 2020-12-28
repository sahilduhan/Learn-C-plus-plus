#include <stdio.h>

int main()
{
   int a = 95, b = 93, c = 91, sum = 0, average = 0;

   sum = a + b + c;

   printf("Sum : %d \n", sum);

   average = sum / 3;
   printf("average=%d", average);

   return (0);
}