#include <stdio.h>

int main()
{
    int T, i;

    scanf("%d", &T);

    for (i = 1; i <= T; i=i+1)
    {
        int j, k, N, a[100000], count=0;

        scanf("%d", &N);

        for(j = 1; j < N; j = j+1)
        {
            scanf("%d", &a[j]);
        }

        for(k = 1; k <= N; k = k+1)
        {
            for(j = 1; j < N; j = j+1)
            {
                if(k == a[j])
                    count = count+1;
            }

            if(count == 0)
                printf("%d\n",k);

            count = 0;
        }
    }

    return 0;
}
