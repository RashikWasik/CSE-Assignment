#include <stdio.h>

int main()
{
    int a, b, c=1, i;

    printf("Enter two positive integers(Use spacebar): ");
    scanf("%d %d", &a, &b);

    while(1)
    {
        if(a%c == 0 && b%c == 0)
        {
            i = c;
        }

        c = c+1;

        if (c == a)
        {
            break;
        }

    }

    printf("GCD = %d", i);

    return 0;
}
