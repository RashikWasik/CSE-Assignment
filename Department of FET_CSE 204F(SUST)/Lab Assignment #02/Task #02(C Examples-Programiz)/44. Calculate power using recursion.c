#include<stdio.h>

int base, expo;
int power(base, expo)
{
    if (expo == 0)
        return 1;

    if (expo == 1)
        return base;

    else
        return base * power(base, expo-1);
}


int main()
{
    int a, b;

    printf("Enter base: ");
    scanf("%d", &a);

    printf("Enter exponent: ");
    scanf("%d", &b);

    printf("%d^%d = %d", a, b, power(a, b));

    return 0;
}
