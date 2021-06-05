//Task #9A: Write a program to find whether an integer number is ODD or EVEN.

#include<stdio.h>
int main()
{

    int a;

    printf("Enter an integer: ");
    scanf("%d", &a);

    if (a%2 != 0)
        printf("\n%d is odd.\n", a);

    else if (a == 0)
        printf("\nThe integer is Zero! and it's even.\n");

    else
        printf("\n%d is even.\n", a);

    return 0;
}
