#include <stdio.h>

int main()
{
    int T, i;

    scanf("%d", &T);

    for (i = 1; i <= T; i=i+1)
    {
        int base, j, n;
        int power, result=0;

        scanf("%d %d", &base, &n);

        for(j = 0; j <= n; j = j+1)
        {
            power = pow(base, j);
            result = result+power;
        }

        printf("Result = %d\n", result);

    }

    return 0;
}
