#include<stdio.h>

int n;
int deci_to_bin(n)
{
    if (n == 0)
        return 0;

    else
        return (n%2) + 10*deci_to_bin(n/2);
}


int main()
{
    int a;

    printf("Enter a decimal number: ");
    scanf("%d", &a);

    printf("Binary: %d", deci_to_bin(a));

    return 0;
}


