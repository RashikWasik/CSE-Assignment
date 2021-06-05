#include <stdio.h>

int main()
{
    int T, i;

    scanf("%d", &T);

    for (i = 1; i <= T; i=i+1)
    {
        int n, m, i, columns;

        scanf("%d %d", &n, &m);

        printf("\n");

        for(i = 1; i <= n; i = i+1)
        {
            for(columns = 1; columns <= i; columns = columns+1)
                printf("%d ", m);

            printf("\n");
        }

        for(i = n-1; i >=1 ; i = i-1)
        {
            for(columns = i; columns >= 1; columns = columns-1)
                printf("%d ", m);

            printf("\n");
        }

        printf("\n");
    }

    return 0;
}
