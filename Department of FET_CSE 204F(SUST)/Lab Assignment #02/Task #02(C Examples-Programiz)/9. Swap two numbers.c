#include <stdio.h>

int main()
{
  int a, b, temp;

  printf("Enter first integer: ");
  scanf("%d", &a);

  printf("Enter second integer: ");
  scanf("%d", &b);

  printf("\nBefore swapping,\nFirst integer = %d\nSecond integer = %d\n", a, b);

  temp = a;
  a = b;
  b = temp;

  printf("\nAfter swapping,\nFirst integer = %d\nSecond integer = %d\n", a, b);

  return 0;
}
