#include <stdio.h>

int main()
{
   int number, reverse = 0, rem;

   printf("Enter an integer: ");
   scanf("%d", &number);

   while (number != 0)
   {
      rem = number % 10;
      reverse = reverse * 10 + rem;
      number = number / 10;
   }

   printf("Result = %d\n", reverse);

   return 0;
}