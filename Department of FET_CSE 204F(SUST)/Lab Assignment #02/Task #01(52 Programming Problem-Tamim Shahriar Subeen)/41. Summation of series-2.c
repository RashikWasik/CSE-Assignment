#include <stdio.h>

int main()
{
    int T, i;

    scanf("%d", &T);

    for (i = 1; i <= T; i = i+1)
    {
        double a, j, f=1;
        double sum, total=0;

        scanf("%lf", &a);

        for (j = 1; j <= a; j = j+1)
        {
            f = f * j;
            total=total+(j/f);
        }

        printf("%0.4lf\n", total);
    }

    return 0;
}
