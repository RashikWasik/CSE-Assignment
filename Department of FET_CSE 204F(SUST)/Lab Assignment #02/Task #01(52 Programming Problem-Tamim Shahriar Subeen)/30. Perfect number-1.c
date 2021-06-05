#include <stdio.h>

int main()
{
    int T, i;

    scanf("%d", &T);

    for (i = 1; i <= T; i=i+1)
    {
        int j, N, result = 0;

        scanf("%d", &N);

        for(j = 1; j < N; j = j+1)
        {
            if(N%j == 0)
            {
                result = result+j;
            }
        }
        if(result == N)
        {
            printf("Yes, %d is a perfect number!\n", N);
        }
        else
        {
            printf("No, %d is not a perfect number!", N);
        }

    }

    return 0;
}
