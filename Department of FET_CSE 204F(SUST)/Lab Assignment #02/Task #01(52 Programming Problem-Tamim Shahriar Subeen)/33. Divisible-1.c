#include <stdio.h>

int main()
{
    int T, i;

    scanf("%d", &T);

    for (i = 1; i <= T; i = i+1)
    {
        int A, B, C, i;

        scanf("%d %d %d", &A, &B, &C);

        for(i = A; i <= B; i = i+1)
        {
            if(i%C == 0)
            {
                printf("%d\n", i);
            }
        }
        printf("\n");
    }

    return 0;
}
