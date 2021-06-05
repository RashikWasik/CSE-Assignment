#include <stdio.h>

int main()
{
    double n;

    printf("Enter a number: ");
    scanf("%lf", &n);

    if (n == 0.0)
        printf("\nYou entered 0.\n");

    else if (n <= 0.0)
        printf("\nYou entered a negative number.\n");

    else
        printf("\nYou entered a positive number.\n");

    return 0;
}
