#include <stdio.h>

int main()
{
    int n, i = 0 ;

    printf("Enter an integer: ");
    scanf("%d", &n);

    while (n != 0)
    {
        n = n/10;
        i = i+1;
    }

    printf("\nNumber of digits: %d\n", i);

    return 0;
}
