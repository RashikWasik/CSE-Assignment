#include <stdio.h>

int main()
{
    float a, b, multi;

    printf("Enter first floating point number: ");
    scanf("%f", &a);

    printf("Enter second floating point number: ");
    scanf("%f", &b);

    multi = a * b;

    printf("Multiplication = %f", multi);

    return 0;
}
