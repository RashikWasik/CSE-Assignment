#include <stdio.h>

int main()
{
    int n, i, a, first, second;

    printf("Enter the number of terms: ");
    scanf("%d", &n);

    first = 0;
    second = 1;

    printf("Fibonacci Series: ");

    for(i = 1; i <= n; i = i+1)
    {
        printf("%d  ", first);
        a = first;
        first = second;
        second = a + second;
    }

    return 0;
}
