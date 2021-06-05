#include<stdio.h>

int n;
int bin_to_deci(n)
{
    if (n == 0)
        return 0;

    else
        return (n%10) + 2*bin_to_deci(n/10);
}


int main()
{
    int a;

    printf("Enter a binary number: ");
    scanf("%d", &a);

    printf("Decimal: %d", bin_to_deci(a));

    return 0;
}


