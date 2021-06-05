#include <stdio.h>
#include <math.h>

int main()
{
    double a[100], average, variance, std_deviation, sum1 = 0, sum2 = 0;
    int i, n;

    printf("Enter the value of N: ");
    scanf("%d", &n);

    printf("Enter %d real numbers(Use spacebar): ", n);

    for (i = 0; i < n; i = i+1)
    {
        scanf("%lf", &a[i]);
    }

    for (i = 0; i < n; i = i+1)
    {
        sum1 = sum1 + a[i];  // Calculates the sum of all elements
    }

    average = sum1 / (double)n;

    for (i = 0; i < n; i = i+1)
    {
        sum2 = sum2 + pow((a[i] - average), 2);
    }

    variance = sum2 / (double)n;

    std_deviation = sqrt(variance);

    printf("\nStandard deviation = %.2lf\n", std_deviation);
}
