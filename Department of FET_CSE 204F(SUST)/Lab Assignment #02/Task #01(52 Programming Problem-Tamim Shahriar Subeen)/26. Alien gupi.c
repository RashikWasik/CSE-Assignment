#include <stdio.h>

int main()
{
    int T, i;

    scanf("%d", &T);

    for (i = 1; i <= T; i = i+1)
    {
        double a, j;
        int count=0;

        scanf("%lf", &a);

        for (j = a; j >= 1; j = j/2)
        {
            count=count+1;
        }

        printf("%d\n", count);
    }

    return 0;
}
