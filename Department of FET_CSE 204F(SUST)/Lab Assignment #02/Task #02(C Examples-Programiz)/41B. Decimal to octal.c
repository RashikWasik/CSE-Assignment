#include<stdio.h>

int n;
int deci_to_oct(n)
{
    if (n == 0)
        return 0;

    else
        return (n%8) + 10*deci_to_oct(n/8);
}


int main()
{
    int a;

    printf("Enter a decimal number: ");
    scanf("%d", &a);

    printf("Octal: %d", deci_to_oct(a));

    return 0;
}


