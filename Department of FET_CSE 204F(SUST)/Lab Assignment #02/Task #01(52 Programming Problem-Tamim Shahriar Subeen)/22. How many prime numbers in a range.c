#include <stdio.h>

int main()
{
    int T, i;

    scanf("%d", &T);

    for (i = 1; i <= T; i = i+1)
    {
        int a, b, j;
        int count=0;

        scanf("%d %d", &a, &b);

        for (j = a; j <= b; j = j+1)
        {
            int flag=0, k;

            if(j < 2)
                flag = 1;

            for(k = 2; k < j; k = k+1)
            {
                if(j%k == 0)
                    flag = 1;
            }


            if(flag != 1)
                count = count+1;
        }

        printf("%d\n", count);
    }

    return 0;
}
