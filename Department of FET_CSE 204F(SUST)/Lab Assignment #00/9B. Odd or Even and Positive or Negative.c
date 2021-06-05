/*Task #9B: Write a program to find whether an integer number is Positive or Negative and also ODD or EVEN. */

#include<stdio.h>
int main()

{
    int a;

    printf("Enter an integer: ");
    scanf("%d", &a);

    if (a%2 == 0 && a > 0)
        printf("\n%d is even and positive.\n", a);

    else if (a%2 != 0 && a > 0)
        printf("\n%d is odd and positive.\n",a);

    else if (a%2 == 0 && a < 0)
        printf("\n%d is even and negative.\n",a);

    else if (a == 0)
        printf("\nThe integer is Zero!\n");

    else
        printf("\n%d is odd and negative.\n",a);

    return 0;
}
