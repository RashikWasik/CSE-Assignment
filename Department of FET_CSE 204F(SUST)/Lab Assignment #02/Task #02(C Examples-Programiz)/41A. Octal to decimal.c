#include<stdio.h>

int n;
int oct_to_deci(n)
{
    if (n == 0)
        return 0;

    else
        return (n%10) + 8*oct_to_deci(n/10);
}


int main()
{
    int a;

    printf("Enter an octal number: ");
    scanf("%d", &a);

    printf("Decimal: %d", oct_to_deci(a));

    return 0;
}


