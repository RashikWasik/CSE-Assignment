#include <stdio.h>

int main()
{
    int n, num, reverse = 0;

    printf("Enter integer: ");
    scanf("%d", &n);

    num = n;

    while (num != 0)
    {
        reverse = reverse * 10;
        reverse = reverse + num%10;
        num = num/10;
    }

    if (n == reverse)
        printf("\n%d is a palindrome.\n", n);

    else
        printf("\n%d is not a palindrome.\n", n);

    return 0;
}
