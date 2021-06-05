#include <stdio.h>

int main()

{
    int T, i;

    scanf("%d", &T);

    for (i = 1; i <= T; i = i+1)
    {
        int N, j, columns;
        scanf("%d", &N);

        for(j = 1; j <= N; j = j+1)
        {

            for(columns = 1; columns <= N; columns = columns+1)
                printf("*");

            printf("\n");
        }
    }

    return 0;
}
