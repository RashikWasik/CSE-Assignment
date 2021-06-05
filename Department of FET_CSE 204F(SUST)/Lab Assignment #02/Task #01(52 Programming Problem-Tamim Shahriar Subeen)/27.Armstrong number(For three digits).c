#include <stdio.h>
#include <math.h>

int main()
{
    int T, i;

    scanf("%d", &T);

    for (i = 1; i <= T; i=i+1)
    {
        int a, number, remainder, total = 0;

        scanf("%d", &a);

        number = a;

        while (number != 0)
        {
            remainder = number%10;
            total = total + pow(remainder, 3);
            number = number/10;
        }

        if(total == a)
            printf("%d is an Armstrong number!\n", a);

        else
            printf("%d is not an Armstrong number!\n", a);
    }

    return 0;
}
