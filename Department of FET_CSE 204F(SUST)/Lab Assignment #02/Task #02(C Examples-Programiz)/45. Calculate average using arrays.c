#include <stdio.h>

int main()
{
    int i, j, n;
    double a[1000], total = 0;

    printf("How many numbers you want to enter: ");
    scanf("%d", &n);

    for(i = 0; i < n; i = i+1)
    {
        printf("%d. Enter number: ", i + 1);
        scanf("%lf", &a[i]);
    }

    for(j = 0; j < n; j = j+1)
    {
        total = total + a[j];
    }

    printf("\nAverage: %.3lf", total/n);
    return 0;
}
