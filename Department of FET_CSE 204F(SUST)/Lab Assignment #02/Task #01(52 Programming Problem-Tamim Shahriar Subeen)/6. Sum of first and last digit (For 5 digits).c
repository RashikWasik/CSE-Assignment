#include <stdio.h>

int main()
{
    int T, i;

    scanf("%d", &T);

    for (i = 1; i <= T; i = i+1)
    {
        int N, remainder, quotient, sum;

        scanf("%d", &N);

        remainder = N%10;
        quotient = N/10000;  //Because the number has 5 digits

        sum = remainder+quotient;

        printf("Sum = %d\n", sum);
    }

    return 0;
}
