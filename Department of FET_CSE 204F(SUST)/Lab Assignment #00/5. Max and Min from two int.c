//Task #5: Write a program to find the maximum and the minimum from two integer numbers.

#include<stdio.h>
int main()
{

   int a, b;

   printf("Enter an integer: ");
   scanf("%d",&a);
   printf("Enter another integer: ");
   scanf("%d",&b);

   if ( a > b )
      printf("%d is maximum and %d is minimum.", a,b);

   else
      printf("%d is maximum and %d is minimum.", b,a);

   return 0;
}
