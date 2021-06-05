#include <stdio.h>

int main()
{
    int T, i;

    scanf("%d", &T);

    for (i = 1; i <= T; i=i+1)
    {
        int j, k, N, result = 0;

        scanf("%d", &N);

        for(k = 1; k <= N; k = k+1)
        {
            for(j = 1; j < k; j = j+1)
            {
                if(k%j == 0)
                {
                    result = result+j;
                }
            }

            if(result == k)
            {
                printf("%d\n", k);
            }

            result=0;
        }

        printf("\n");
    }

    return 0;
}
