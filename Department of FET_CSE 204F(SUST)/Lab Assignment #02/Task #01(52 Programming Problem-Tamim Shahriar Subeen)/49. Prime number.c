#include <stdio.h>

int main()
{
    int T, i;

    scanf("%d", &T);

    for (i = 1; i <= T; i=i+1)
    {
        int j, N, flag=0;

        scanf("%d", &N);

        if(N < 2)
            flag = 1;

        for(j = 2; j < N; j = j+1)
        {
            if(N%j == 0)
                flag = 1;
        }

        if(flag == 1)
            printf("%d is not a prime.\n", N);

        else
            printf("%d is a prime.\n", N);
    }

    return 0;
}
