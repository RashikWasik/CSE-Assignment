#include <stdio.h>

int main()
{
    int T, i;

    scanf("%d", &T);

    for (i = 1; i <= T; i=i+1)
    {
        int N, j;
        long long int f = 1;

        scanf("%d", &N);

        for (j = 1; j <= N; j = j+1)
            f = f * j;

        printf("%lld\n", f);
    }

    return 0;
}
