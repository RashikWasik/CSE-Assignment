#include <stdio.h>

int main()
{
    int T, i;

    scanf("%d", &T);

    for (i = 1; i <= T; i=i+1)
    {
        double r1, r2, B, result1, result2;

        scanf("%lf %lf %lf", &r1, &r2, &B);

        result1 = (r2 / (300 - B)) * 6;  // Current run rate

        result2 = ((r1 + 1 - r2) / B) * 6;  // Required run rate

        printf("%.2lf %.2lf\n\n", result1, result2);
    }

    return 0;
}
