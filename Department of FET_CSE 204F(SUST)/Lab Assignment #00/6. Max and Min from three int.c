//Task #6: Write a program to find the maximum and the minimum from three integer numbers.

#include<stdio.h>
int main()
{

    int a, b, c;

    printf("Enter first integer: ");
    scanf("%d",&a);

    printf("Enter second integer: ");
    scanf("%d",&b);

    printf("Enter third integer: ");
    scanf("%d",&c);

    if ( a >= b && a >= c )
        printf("%d is maximum.\n", a);

    else if ( b >= c && b >= a )
        printf("%d is maximum.\n", b);

    else
        printf("%d is maximum.\n", c);

    return 0;
}
