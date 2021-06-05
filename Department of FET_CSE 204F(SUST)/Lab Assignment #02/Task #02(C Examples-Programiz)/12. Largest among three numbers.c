#include<stdio.h>

int main()
{

    double a, b, c;

    printf("Enter first number: ");
    scanf("%lf",&a);

    printf("Enter second number: ");
    scanf("%lf",&b);

    printf("Enter third number: ");
    scanf("%lf",&c);

    if ( a >= b && a >= c )
        printf("%.2lf is largest.\n", a);

    else if ( b >= c && b >= a )
        printf("%.2lf is largest.\n", b);

    else
        printf("%.2lf is largest.\n", c);

    return 0;
}
