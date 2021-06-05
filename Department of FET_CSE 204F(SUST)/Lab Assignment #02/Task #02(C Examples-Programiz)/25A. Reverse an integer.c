#include<stdio.h>

int main()
{
    int n, reverse = 0;

    printf("Enter integer: ");
    scanf("%d", &n);

    while (n != 0)
    {
        reverse = reverse * 10;
        reverse = reverse + n%10;
        n = n/10;
    }

    printf("Reverse of the number is = %d\n", reverse);

    return 0;
}
