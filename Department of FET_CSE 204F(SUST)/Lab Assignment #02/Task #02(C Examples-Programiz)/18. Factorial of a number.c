#include <stdio.h>

int main()
{
    int i, n, f = 1;

    printf("Enter a number to calculate its factorial: ");
    scanf("%d", &n);

    if (n < 0)
    {
        printf("\nError! Factorial of a negative number doesn't exist.\n");
    }

    else
    {
        for (i = 1; i <= n; i = i+1)
            f = f * i;
        printf("\nFactorial of %d is %d\n", n, f);
    }

    return 0;
}
