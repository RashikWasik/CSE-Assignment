#include <stdio.h>
#include <math.h>

int main()
{
    int T, i;

    scanf("%d", &T);

    for (i = 1; i <= T; i = i+1)
    {
        double p, q, c, power;
        int result;

        scanf("%lf %lf %lf", &p, &q, &c);

        power = pow(p, q);

        result = fmod(power, c); // fmod()-used for double

        printf("Result = %d\n\n", result);
    }

    return 0;
}
