#include <stdio.h>

int main()
{
    int T, i, a;

    scanf("%d", &T);

    for (i = 1; i <= T; i=i+1)
    {
        int j, a;
        scanf("%d", &a);

        for (j = a; j >= 0; j=j-1)
        {
            if(j >= 2)
            {
                printf("2^%d + ", j);
            }

            if(j == 1)
            {
                printf("2 + ");
            }

            if(j == 0)
            {
                printf("1");
            }
        }

        printf("\n");
    }

    return 0;
}
