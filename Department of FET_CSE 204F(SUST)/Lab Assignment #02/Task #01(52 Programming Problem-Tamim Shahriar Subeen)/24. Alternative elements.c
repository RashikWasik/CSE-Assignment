#include <stdio.h>

int main()
{
    int T, i;

    scanf("%d", &T);

    for (i = 1; i <= T; i=i+1)
    {
        int a[1000], n, j, k;

        scanf("%d", &n);

        for(j = 1; j <= n; j = j+1)
        {
            scanf("%d", &a[j]);
        }

        for(k = 1; k <= n; k = k+2)
        {
            printf("%d ", a[k]);
        }
        printf("\n");
    }

    return 0;
}
