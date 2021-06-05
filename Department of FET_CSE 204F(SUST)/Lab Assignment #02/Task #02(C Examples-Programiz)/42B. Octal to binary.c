#include<stdio.h>

int n;

int oct_to_deci(n)  // Converts octal to decimal
{
    if (n == 0)
        return 0;

    else
        return (n%10) + 8*oct_to_deci(n/10);
}

int deci_to_bin(n)  // Converts decimal to binary
{
    if (n == 0)
        return 0;

    else
        return (n%2) + 10*deci_to_bin(n/2);
}


int main()
{
    int a;

    printf("Enter an octal number: ");
    scanf("%d", &a);

    printf("Binary: %d", deci_to_bin(oct_to_deci(a)));

    return 0;
}


