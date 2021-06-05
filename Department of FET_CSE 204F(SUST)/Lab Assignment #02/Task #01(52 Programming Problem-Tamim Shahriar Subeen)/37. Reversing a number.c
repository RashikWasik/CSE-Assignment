#include <stdio.h>

int main()
{
    int T, i;

    scanf("%d", &T);

    for (i = 1; i <= T; i=i+1)
    {
        int N, reverse = 0;

        scanf("%d", &N);

        while (N != 0)
        {
            reverse = reverse * 10;
            reverse = reverse + N%10;
            N = N/10;
        }

        printf("%d\n", reverse);
    }

    return 0;
}
