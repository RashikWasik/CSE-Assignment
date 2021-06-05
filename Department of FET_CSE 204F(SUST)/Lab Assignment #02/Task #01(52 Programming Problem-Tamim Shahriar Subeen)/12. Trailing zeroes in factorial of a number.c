#include <stdio.h>

int main()
{
    int T, i;

    scanf("%d", &T);

    for (i = 1; i <= T; i=i+1)
    {
        int N, j;
        int result=0;

        scanf("%d", &N);

        if (N < 0)
        {
            printf("Error! Factorial of a negative number doesn't exist.\n");
        }

        else
        {
            for(j = 5; N/j >= 1; j = j*5)
            {
                result = result + N/j;
            }
            printf("%d\n", result);
        }
    }

    return 0;
}
