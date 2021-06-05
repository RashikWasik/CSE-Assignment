#include<stdio.h>

int n;

int bin_to_deci(n)  // Converts binary to decimal
{
    if (n == 0)
        return 0;

    else
        return (n%10) + 2*bin_to_deci(n/10);
}

int deci_to_oct(n)  // Converts decimal to octal
{
    if (n == 0)
        return 0;

    else
        return (n%8) + 10*deci_to_oct(n/8);
}


int main()
{
    int a;

    printf("Enter a binary number: ");
    scanf("%d", &a);

    printf("Octal: %d", deci_to_oct(bin_to_deci(a)));

    return 0;
}


