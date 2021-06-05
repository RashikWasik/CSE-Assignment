#include <stdio.h>

int main()
{
    int T, i;

    scanf("%d", &T);

    for (i = 1; i <= T; i = i+1)
    {
        int a, b, c;

        scanf("%d %d %d",&a,&b,&c);

        printf("Case %d: ", i);

        if (a>b && a>c)
        {
            if(b>c)
            {
                printf("%d %d %d\n", c, b, a);
            }

            else
            {
                printf("%d %d %d\n", b, c, a);
            }
        }


        else if (b>c && b>a)
        {
            if (c>a)
            {
                printf("%d %d %d\n", a, c, b);
            }

            else
            {
                printf("%d %d %d\n", c, a, b);
            }
        }


        else if (c>a && c>b)
        {
            if (b>a)
            {
                printf("%d %d %d\n", a, b, c);
            }

            else
            {
                printf("%d %d %d\n", b, a, c);
            }
        }
    }

    return 0;
}
