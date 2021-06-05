#include<stdio.h>

int n;
int factorial(n)
{
    if(n == 0)
        return 1;

    if(n == 1)
        return 1;

    else
        return n * factorial(n - 1);
}


int main()
{
    int a;

    printf("Enter a positive integer: ");
    scanf("%d", &a);

    printf("\nFactorial of %d = %d\n", a, factorial(a));

    return 0;
}
