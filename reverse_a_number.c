#include<stdio.h>

int main()
{
   int n, reverse = 0, rem;

   printf("Enter an integer: ");
   scanf("%d",&n);

   while (n !=0)
   {
    rem = n%10;
    reverse = reverse*10 + rem;
    n = n/10;
   }

   printf("Result = %d\n",reverse);

   return 0;
   
}