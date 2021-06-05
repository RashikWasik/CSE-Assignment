#include <stdio.h>

int main()
{
    int T, i;

    scanf("%d", &T);

    for (i = 1; i <= T; i = i+1)
    {
        int N, j;
        scanf("%d", &N);

        printf("Case %d: ", i);

        for (j = 1; j <= N; j = j+1)
        {
            if (N%j == 0)
            {
                printf("%d  ", j);
            }
        }

        printf("\n");
    }

    return 0;
}
