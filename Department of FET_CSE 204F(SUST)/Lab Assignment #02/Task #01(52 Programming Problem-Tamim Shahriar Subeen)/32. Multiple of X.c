#include <stdio.h>

int main()
{
    int T, i;

    scanf("%d", &T);

    for (i = 1; i <= T; i=i+1)
    {
        int j, N, X;

        scanf("%d %d", &X, &N);

        if(X > N)
            printf("Invalid!");

        else
        {
            for(j = 1; X*j <= N; j = j+1)
            {
                printf("%d\n", X*j);
            }

            printf("\n");
        }

    }

    return 0;
}
